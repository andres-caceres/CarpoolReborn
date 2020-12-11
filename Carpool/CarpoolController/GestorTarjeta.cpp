#include "GestorTarjeta.h"
#include "GlobalSettings.h"

using namespace CarpoolController;
using namespace CarpoolModel;
using namespace System::IO;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace System;

GestorTarjeta::GestorTarjeta() {
	this->listaTarjetas = gcnew List<Tarjeta^>();
	this->objConexion = gcnew SqlConnection();
}

void GestorTarjeta::AbrirConexionBD() {
	this->objConexion->ConnectionString = "Server=" + ENDPOINT + ";Database=" + DATABASE +
		";User ID=" + USERNAME + ";Password=" + PASSWORD + ";";
	this->objConexion->Open();
}

void GestorTarjeta::CerrarConexionBD() {
	this->objConexion->Close();
}

List<Tarjeta^>^ GestorTarjeta::BuscarTarjetasXcodigoBD(int CodigoPropietario) {
	List<Tarjeta^>^ listaTarjetasBuscadas= gcnew List<Tarjeta^>;
	AbrirConexionBD();
	SqlDataReader^ objData;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Tarjeta where CodigoPropietario="+ CodigoPropietario +";";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		int CodigoPropietario = safe_cast<int>(objData[0]);
		String^ NroTarjeta = safe_cast<String^>(objData[1]);
		String^ CVV = safe_cast<String^>(objData[2]);
		String ^ FechaExp = safe_cast<String^>(objData[3]);
		String^ TipoTarjeta = safe_cast<String^>(objData[4]);
		Tarjeta^ objTarjeta = gcnew Tarjeta(CodigoPropietario, NroTarjeta, CVV, FechaExp, TipoTarjeta);
		listaTarjetasBuscadas->Add(objTarjeta);
	}
	objData->Close();
	CerrarConexionBD();
	return listaTarjetasBuscadas;
}

List<Tarjeta^>^ GestorTarjeta::BuscarTarjetasXtipoBD(int CodigoPropietario, String^ tipo) {
	List<Tarjeta^>^ listaTarjetasBuscadas = gcnew List<Tarjeta^>;
	AbrirConexionBD();
	SqlDataReader^ objData;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Tarjeta where CodigoPropietario=" + CodigoPropietario + "and TipoTarjeta='" + tipo + "';";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		int CodigoPropietario = safe_cast<int>(objData[0]);
		String^ NroTarjeta = safe_cast<String^>(objData[1]);
		String^ CVV = safe_cast<String^>(objData[2]);
		String^ FechaExp = safe_cast<String^>(objData[3]);
		String^ TipoTarjeta = safe_cast<String^>(objData[4]);
		Tarjeta^ objTarjeta = gcnew Tarjeta(CodigoPropietario, NroTarjeta, CVV, FechaExp, TipoTarjeta);
		listaTarjetasBuscadas->Add(objTarjeta);
	}
	objData->Close();
	CerrarConexionBD();
	return listaTarjetasBuscadas;
}

void GestorTarjeta::InsertarTarjeta(Tarjeta^ objTarjeta) {
	AbrirConexionBD();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "insert into Tarjeta values(@p1,@p2,@p3,@p4,@p5);";
	SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::Int);
	p1->Value = objTarjeta->CodigoPropietario;
	SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::VarChar, 16);
	p2->Value = objTarjeta->NroTarjeta;
	SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::VarChar, 3);
	p3->Value = objTarjeta->CVV;
	SqlParameter^ p4 = gcnew SqlParameter("@p4", System::Data::SqlDbType::VarChar,7);
	p4->Value = objTarjeta->FechaExp;
	SqlParameter^ p5 = gcnew SqlParameter("@p5", System::Data::SqlDbType::VarChar,16);
	p5->Value = objTarjeta->TipoTarjeta;
	objQuery->Parameters->Add(p1);
	objQuery->Parameters->Add(p2);
	objQuery->Parameters->Add(p3);
	objQuery->Parameters->Add(p4);
	objQuery->Parameters->Add(p5);
	objQuery->ExecuteNonQuery();
	CerrarConexionBD();
}

void GestorTarjeta::BorrarTarjeta(String^ NroTarjeta, int CodigoPropietario) {
	AbrirConexionBD();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "delete from Tarjeta where CodigoPropietario ="+CodigoPropietario+ "and NroTarjeta = '"+ NroTarjeta+"';";
	objQuery->ExecuteNonQuery();
	CerrarConexionBD();	
}

int GestorTarjeta::MismaTarjeta(String^ NroTarjeta, int codigoPropietario, String^ TipoTarjeta) {
	List<Tarjeta^>^ listaTarjetas = BuscarTarjetasXcodigoBD(codigoPropietario);
	int misma_tarjeta = 0;
	for (int i = 0; i < listaTarjetas->Count; i++) {
		if (listaTarjetas[i]->CodigoPropietario == codigoPropietario && listaTarjetas[i]->NroTarjeta == NroTarjeta && listaTarjetas[i]->TipoTarjeta) {
			misma_tarjeta = 1;
			break;
		}
	}
	return misma_tarjeta;
}



void GestorTarjeta::LeerTarjetasDesdeArchivo() {
	this->listaTarjetas->Clear();
	array<String^>^ lineas = File::ReadAllLines("Tarjetas.txt");

	String^ separadores = ";";
	for each (String ^ lineaTarjeta in lineas)
	{
		array<String^>^ palabras = lineaTarjeta->Split(separadores->ToCharArray());
		int CodigoPropietario = Convert::ToInt32(palabras[0]);
		String^ NroTarjeta = palabras[1];
		String^ CVV = palabras[2];
		String^ FechaExp = palabras[3];
		String^ TipoTarjeta = palabras[4];

		Tarjeta^ objTarjeta= gcnew Tarjeta(CodigoPropietario, NroTarjeta, CVV, FechaExp, TipoTarjeta);
		this->listaTarjetas->Add(objTarjeta);
	}
}

void GestorTarjeta::EscribirArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaTarjetas->Count);
	for (int i = 0; i < this->listaTarjetas->Count; i++) {
		Tarjeta^ objTarjeta = this->listaTarjetas[i];
		lineasArchivo[i] = objTarjeta->CodigoPropietario + ";" + objTarjeta->NroTarjeta + ";" + objTarjeta->CVV + ";" + objTarjeta->FechaExp + ";" + objTarjeta->TipoTarjeta;
	}
	File::WriteAllLines("Tarjetas.txt", lineasArchivo);
}

void GestorTarjeta::AgregarTarjeta(Tarjeta^ objTarjeta) {
	this->listaTarjetas->Add(objTarjeta);
}

void GestorTarjeta::EliminarTarjeta(String^ NroTarjeta) {
	for (int i = 0; i < this->listaTarjetas->Count; i++) {
		if (this->listaTarjetas[i]->NroTarjeta == NroTarjeta) {
			/*Encontre al que debo eliminar*/
			this->listaTarjetas->RemoveAt(i);
			break;
		}
	}
}

int GestorTarjeta::ObtenerCantidadTarjetasSegunCodigoDePropietario(int codigoPropietario) {
	int j = 0;
	for (int i = 0; i < this->listaTarjetas->Count; i++)
	{
		if (this->listaTarjetas[i]->CodigoPropietario == codigoPropietario) {
			j++;

		}
	}
	return j;

}

Tarjeta^ GestorTarjeta::ObtenerTarjetaLista(int indice) {
	return this->listaTarjetas[indice];
}

int ValidarCreacionTarjeta(String^ NroTarjeta, String^ CVV, String^ FechaExp, String^ TipoTarjeta){
	int esta_completo = 1;
	if (NroTarjeta == "" || CVV == "" || FechaExp == "" || TipoTarjeta == "") {
		esta_completo = 0;
	}
	return esta_completo;
}

int GestorTarjeta::ObtenerCantidadTarjetas() {
	return this->listaTarjetas->Count;
}

void GestorTarjeta::EliminarTarjetaXcodigo(String^ NroTarjeta, int codigoPropietario) {
	for (int i = 0; i < this->listaTarjetas->Count; i++) {
		if (this->listaTarjetas[i]->CodigoPropietario == codigoPropietario && this->listaTarjetas[i]->NroTarjeta == NroTarjeta) {
			this->listaTarjetas->RemoveAt(i);
			break;
		}
	}
}