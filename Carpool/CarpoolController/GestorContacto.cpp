#include "GestorContacto.h"
#include "GlobalSettings.h"

using namespace CarpoolController;
using namespace System::IO;
using namespace System;

GestorContacto::GestorContacto() {
	listaContactos = gcnew List<Contactos^>();
	this->objConexion = gcnew SqlConnection();
}

void GestorContacto::LeerContactosDesdeArchivo() {
	this->listaContactos->Clear();
	array<String^>^ lineas = File::ReadAllLines("Contactos.txt");
	String^ separadores = ";";
	for each (String ^ lineaContacto in lineas) {
		array<String^>^ palabras = lineaContacto->Split(separadores->ToCharArray());
		int codigoDelAñador = Convert::ToInt32(palabras[0]);
		int codigoDelAñadido = Convert::ToInt32(palabras[1]);
		String^ userNameDelAñadido = palabras[2];
		String^ Apodo = palabras[3];
		String^ Nombre = palabras[4];
		Contactos^ objContactos = gcnew Contactos(codigoDelAñador, codigoDelAñadido, userNameDelAñadido,Apodo,Nombre);
		this->listaContactos->Add(objContactos);
	}
}

int GestorContacto::ObtenerCantidadContactos() {
	return this->listaContactos->Count;
}

Contactos^ GestorContacto::ObtenerContactoLista(int indice) {
	return this->listaContactos[indice];
}

Contactos^ GestorContacto::ObtenerContactoxApodo(String^ Apodo,int CodigoAñador) {
	Contactos^ objContactoBuscado = nullptr;
	for (int i = 0; i < this->listaContactos->Count; i++) {
		if (this->listaContactos[i]->Apodo == Apodo && this->listaContactos[i]->codigoDelAñador == CodigoAñador ) {
			objContactoBuscado = this->listaContactos[i];
			break;
		}
	}
	return objContactoBuscado;
}

void GestorContacto::AgregarContacto(Contactos^ objContacto) {

	this->listaContactos->Add(objContacto);
	//implementar que contactos no se repitan
	/*for(int i = 0; i<this->istaContactos->Count; i++){
		if (this->listaContactos[i]->codigo == codigoEliminar) {
			this->listaContactos->RemoveAt(i);
			break;
		}
	*/
}

void GestorContacto::EliminarContactoXuserName(String^ userName, int codigoAñador) {
	for (int i = 0; i < this->listaContactos->Count; i++) {
		if (this->listaContactos[i]->userNameDelAñadido == userName && this->listaContactos[i]->codigoDelAñador == codigoAñador) {
			this->listaContactos->RemoveAt(i);
			break;
		}

	}
}

void GestorContacto::GrabarEnArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaContactos->Count);
	for (int i = 0; i < this->listaContactos->Count; i++) {
		Contactos^ objContacto = this->listaContactos[i];
		lineasArchivo[i] = objContacto->codigoDelAñador + ";" + objContacto->codigoDelAñadido + ";" + objContacto->userNameDelAñadido + ";" + objContacto->Apodo + ";" + objContacto->Nombre;
	}
	File::WriteAllLines("Contactos.txt", lineasArchivo);
}

//Contactos^ GestorContacto::ObtenerContactoxCodigo(int codigo) {
//	Contactos^ objContactoBuscado = nullptr;
//	for (int i = 0; i < this->listaContactos->Count; i++) {
//		if (this->listaContactos[i]->codigo == codigo) {
//			objContactoBuscado = this->listaContactos[i];
//			break;
//		}
//	}
//	return objContactoBuscado;
//}


//int GestorContacto::verificaNuevoUsuario(String^ dni) {
//	int yaExiste = 0;
//	for (int i = 0; i < this->listaContactos->Count; i++) {
//		if (this->listaContactos[i]->dni == dni) {
//			yaExiste = 1;
//			break;
//		}
//	}
//	return yaExiste;
//}

int GestorContacto::ValidarRegistro(String^ userNameDelAñadido, String^ Apodo) {
	int esta_completo = 1;
	if (userNameDelAñadido == "" || Apodo == "") {
		esta_completo = 0;
	}
	return esta_completo;
}

int GestorContacto::ObtenerCantidadContactosSegunCodigoDeAñadidor(int codigoAñadidor) {
	int j = 0;
	for (int i = 0; i < this->listaContactos->Count; i++)
	{
		if (this->listaContactos[i]->codigoDelAñador == codigoAñadidor) {
			j++;

		}
	}
	return j;
	
}

Contactos^ GestorContacto::ObtenerContactoxUserName(String^ UserName, int CodigoAñador) {
	Contactos^ objContactoBuscado = nullptr;
	for (int i = 0; i < this->listaContactos->Count; i++) {
		if (this->listaContactos[i]-> userNameDelAñadido== UserName && this->listaContactos[i]->codigoDelAñador == CodigoAñador) {
			objContactoBuscado = this->listaContactos[i];
			break;
		}
	}
	return objContactoBuscado;
}

int GestorContacto::MismoContacto(String^ UserName, int codigoAñador) {
	int mismo_contacto=0;
	for (int i = 0; i < this->listaContactos->Count; i++) {
		if (this->listaContactos[i]->userNameDelAñadido == UserName && this->listaContactos[i]->codigoDelAñador == codigoAñador) {
			mismo_contacto = 1;
			break;
		}
	}
	return mismo_contacto;
}

void GestorContacto::AbrirConexionBD() {
	this->objConexion->ConnectionString = "Server=" + ENDPOINT + ";Database=" + DATABASE +
		";User ID=" + USERNAME + ";Password=" + PASSWORD + ";";
	this->objConexion->Open();
}
void GestorContacto::CerrarConexionBD() {
	this->objConexion->Close();
}

List<Contactos^>^ GestorContacto::BuscarAllBD() {
	List<Contactos^>^ listaBuscados = gcnew List<Contactos^>;
	AbrirConexionBD();
	SqlDataReader^ objData; /*Este objeto va a tener los registros del resultado del query*/
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Contacto;";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		int codigoAñador = safe_cast<int>(objData[0]);
		int codigoAñadido = safe_cast<int>(objData[1]);
		String^ username = safe_cast<String^>(objData[2]);
		String^ Apodo = safe_cast<String^>(objData[3]);
		String^ Nombre = safe_cast<String^>(objData[4]);
		Contactos^ objContacto = gcnew Contactos(codigoAñador, codigoAñadido, username, Apodo, Nombre);
		listaBuscados->Add(objContacto);
	}
	objData->Close();
	CerrarConexionBD();
	return listaBuscados;
}
void GestorContacto::GuardarContactoBD(Contactos^ objContacto) {
	AbrirConexionBD();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "insert into Contacto values(@p1,@p2,@p3,@p4,@p5);";
	SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::Int);
	p1->Value = objContacto->codigoDelAñador;
	SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::Int);
	p2->Value = objContacto->codigoDelAñadido;
	SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::VarChar, 3);
	p3->Value = objContacto->userNameDelAñadido;
	SqlParameter^ p4 = gcnew SqlParameter("@p4", System::Data::SqlDbType::VarChar, 7);
	p4->Value = objContacto->Apodo;
	SqlParameter^ p5 = gcnew SqlParameter("@p5", System::Data::SqlDbType::VarChar, 16);
	p5->Value = objContacto->Nombre;
	objQuery->Parameters->Add(p1);
	objQuery->Parameters->Add(p2);
	objQuery->Parameters->Add(p3);
	objQuery->Parameters->Add(p4);
	objQuery->Parameters->Add(p5);
	objQuery->ExecuteNonQuery();
	CerrarConexionBD();
}

void GestorContacto::GrabarEnBD() { /*TODO: es muy lento e ineficiente - AC */

	for (int i = 0; i < this->listaContactos->Count; i++) {
		GuardarContactoBD(listaContactos[i]);
	}

}