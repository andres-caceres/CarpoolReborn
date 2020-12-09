#include "GestorSeguridad.h"
#include "GlobalSettings.h"


using namespace CarpoolController;
using namespace CarpoolModel;
using namespace System::IO;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace System;

GestorSeguridad::GestorSeguridad() {
	this->listaSeguridad = gcnew List<Seguridad^>();
	this->objConexion = gcnew SqlConnection();
}

void GestorSeguridad::AbrirConexionBD() {
	this->objConexion->ConnectionString = "Server=" + ENDPOINT + ";Database=" + DATABASE +
		";User ID=" + USERNAME + ";Password=" + PASSWORD + ";";
	this->objConexion->Open();
}

void GestorSeguridad::CerrarConexionBD() {
	this->objConexion->Close();
}

List<Seguridad^>^ GestorSeguridad::BuscarAllSeguridadBD() {
	List<Seguridad^>^ listaAllSeguridad = gcnew List<Seguridad^>;
	AbrirConexionBD();
	SqlDataReader^ objData;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Seguridad;";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		String^ DniSeguro= safe_cast<String^>(objData[0]);
		String^ EmisionDni = safe_cast<String^>(objData[1]);
		String^ Pregunta = safe_cast<String^>(objData[2]);
		String^ Respuesta = safe_cast<String^>(objData[3]);

		Seguridad^ objSeguridad = gcnew Seguridad(DniSeguro,EmisionDni, Pregunta, Respuesta);
		listaAllSeguridad->Add(objSeguridad);
	}
	objData->Close();
	CerrarConexionBD();
	return listaAllSeguridad;
}

void GestorSeguridad::InsertarSeguridad(Seguridad^ objSeguridad) {
	AbrirConexionBD();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "insert into Seguridad values(@p1,@p2,@p3,@p4);";
	SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::VarChar,50);
	p1->Value = objSeguridad->DniSeguro;
	SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::VarChar, 50);
	p2->Value = objSeguridad->EmisionDni;
	SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::VarChar, 50);
	p3->Value = objSeguridad->Pregunta;
	SqlParameter^ p4 = gcnew SqlParameter("@p4", System::Data::SqlDbType::VarChar, 50);
	p4->Value = objSeguridad->Respuesta;
	objQuery->Parameters->Add(p1);
	objQuery->Parameters->Add(p2);
	objQuery->Parameters->Add(p3);
	objQuery->Parameters->Add(p4);
	objQuery->ExecuteNonQuery();
	CerrarConexionBD();
}

int GestorSeguridad::validarSeguridad(String^ DniSeguro, String^ EmisionDNI, String^ Respuesta) {
	List<Seguridad^>^ listaSeguridad = BuscarAllSeguridadBD();
	int es_valido = 0;
	for (int i = 0; i <listaSeguridad->Count; i++) {
		if ((listaSeguridad[i]->DniSeguro == DniSeguro) && (listaSeguridad[i]->EmisionDni == EmisionDNI) && (listaSeguridad[i]->Respuesta == Respuesta)) {
			es_valido = 1;
			break;
		}
	}
	return es_valido;
}

void GestorSeguridad::EliminarSeguridad(String^ dni) {
	AbrirConexionBD();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "delete from Seguridad where DniSeguro ='" + dni+ "' ;";
	objQuery->ExecuteNonQuery();
	CerrarConexionBD();
}

String^ GestorSeguridad::ObtenerPregunta(String^ DniSeguro) {
	List<Seguridad^>^ listaSeguridad = BuscarAllSeguridadBD();
	String^ PreguntaObtenida;
	for (int i = 0; i < listaSeguridad->Count; i++) {
		if (listaSeguridad[i]->DniSeguro == DniSeguro) {
			PreguntaObtenida = listaSeguridad[i]->Pregunta;
			break;
		}
	}
	return PreguntaObtenida;
}


void GestorSeguridad::LeerSeguridadDesdeArchivo() {
	this->listaSeguridad->Clear();
	array<String^>^ lineas = File::ReadAllLines("Seguridad.txt");

	String^ separadores = ";";
	for each (String ^ lineaSeguridad in lineas)
	{
		array<String^>^ palabras = lineaSeguridad->Split(separadores->ToCharArray());
		String^ DniSeguro = palabras[0];
		String^ EmisionDni = palabras[1];
		String^ Pregunta = palabras[2];
		String^ Respuesta = palabras[3];

		Seguridad^ objSeguridad = gcnew Seguridad(DniSeguro, EmisionDni, Pregunta, Respuesta);
		this->listaSeguridad->Add(objSeguridad);
	}
}

void GestorSeguridad::AgregarSeguridad(Seguridad^ objSeguridad) {
	this->listaSeguridad->Add(objSeguridad);
}

void GestorSeguridad::EscribirArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaSeguridad->Count);
	for (int i = 0; i < this->listaSeguridad->Count; i++) {
		Seguridad^ objSeguridad = this->listaSeguridad[i];
		lineasArchivo[i] = objSeguridad->DniSeguro + ";" + objSeguridad->EmisionDni + ";" + objSeguridad->Pregunta + ";" + objSeguridad->Respuesta;
	}
	File::WriteAllLines("Seguridad.txt", lineasArchivo);
}