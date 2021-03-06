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
		int codigoDelAņador = Convert::ToInt32(palabras[0]);
		int codigoDelAņadido = Convert::ToInt32(palabras[1]);
		String^ userNameDelAņadido = palabras[2];
		String^ Apodo = palabras[3];
		String^ Nombre = palabras[4];
		Contactos^ objContactos = gcnew Contactos(codigoDelAņador, codigoDelAņadido, userNameDelAņadido,Apodo,Nombre);
		this->listaContactos->Add(objContactos);
	}
}

int GestorContacto::ObtenerCantidadContactos() {
	return this->listaContactos->Count;
}

Contactos^ GestorContacto::ObtenerContactoLista(int indice) {
	return this->listaContactos[indice];
}

Contactos^ GestorContacto::ObtenerContactoxApodo(String^ Apodo,int CodigoAņador) {
	Contactos^ objContactoBuscado = nullptr;
	for (int i = 0; i < this->listaContactos->Count; i++) {
		if (this->listaContactos[i]->Apodo == Apodo && this->listaContactos[i]->codigoDelAņador == CodigoAņador ) {
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

void GestorContacto::EliminarContactoXuserName(String^ userName, int codigoAņador) {
	for (int i = 0; i < this->listaContactos->Count; i++) {
		if (this->listaContactos[i]->userNameDelAņadido == userName && this->listaContactos[i]->codigoDelAņador == codigoAņador) {
			this->listaContactos->RemoveAt(i);
			break;
		}

	}
}

void GestorContacto::GrabarEnArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaContactos->Count);
	for (int i = 0; i < this->listaContactos->Count; i++) {
		Contactos^ objContacto = this->listaContactos[i];
		lineasArchivo[i] = objContacto->codigoDelAņador + ";" + objContacto->codigoDelAņadido + ";" + objContacto->userNameDelAņadido + ";" + objContacto->Apodo + ";" + objContacto->Nombre;
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

int GestorContacto::ValidarRegistro(String^ userNameDelAņadido, String^ Apodo) {
	int esta_completo = 1;
	if (userNameDelAņadido == "" || Apodo == "") {
		esta_completo = 0;
	}
	return esta_completo;
}

int GestorContacto::ObtenerCantidadContactosSegunCodigoDeAņadidor(int codigoAņadidor) {
	int j = 0;
	for (int i = 0; i < this->listaContactos->Count; i++)
	{
		if (this->listaContactos[i]->codigoDelAņador == codigoAņadidor) {
			j++;

		}
	}
	return j;
	
}

Contactos^ GestorContacto::ObtenerContactoxUserName(String^ UserName, int CodigoAņador) {
	List<Contactos^>^ listaContactos = BuscarAllBD(CodigoAņador);
	Contactos^ objContactoBuscado = nullptr;
	for (int i = 0; i < listaContactos->Count; i++) {
		if (listaContactos[i]-> userNameDelAņadido== UserName && listaContactos[i]->codigoDelAņador == CodigoAņador) {
			objContactoBuscado = listaContactos[i];
			break;
		}
	}
	return objContactoBuscado;
}

int GestorContacto::MismoContacto(String^ UserName, int codigoAņador) {
	int mismo_contacto=0;
	for (int i = 0; i < this->listaContactos->Count; i++) {
		if (this->listaContactos[i]->userNameDelAņadido == UserName && this->listaContactos[i]->codigoDelAņador == codigoAņador) {
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

List<Contactos^>^ GestorContacto::BuscarAllBD(int codigoAņador) {
	List<Contactos^>^ listaBuscados = gcnew List<Contactos^>;
	AbrirConexionBD();
	SqlDataReader^ objData; /*Este objeto va a tener los registros del resultado del query*/
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Contacto where codigoDelAņador="+codigoAņador+";";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		int codigoAņador = safe_cast<int>(objData[0]);
		int codigoAņadido = safe_cast<int>(objData[1]);
		String^ username = safe_cast<String^>(objData[2]);
		String^ Apodo = safe_cast<String^>(objData[3]);
		String^ Nombre = safe_cast<String^>(objData[4]);
		Contactos^ objContacto = gcnew Contactos(codigoAņador, codigoAņadido, username, Apodo, Nombre);
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
	p1->Value = objContacto->codigoDelAņador;
	SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::Int);
	p2->Value = objContacto->codigoDelAņadido;
	SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::VarChar, 20);
	p3->Value = objContacto->userNameDelAņadido;
	SqlParameter^ p4 = gcnew SqlParameter("@p4", System::Data::SqlDbType::VarChar, 20);
	p4->Value = objContacto->Apodo;
	SqlParameter^ p5 = gcnew SqlParameter("@p5", System::Data::SqlDbType::VarChar, 20);
	p5->Value = objContacto->Nombre;
	objQuery->Parameters->Add(p1);
	objQuery->Parameters->Add(p2);
	objQuery->Parameters->Add(p3);
	objQuery->Parameters->Add(p4);
	objQuery->Parameters->Add(p5);
	objQuery->ExecuteNonQuery();
	CerrarConexionBD();
}

void GestorContacto::BorrarContactoBD(Contactos^ objContacto) {
	AbrirConexionBD();	

	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "delete from Contacto where codigoDelAņador = " + Convert::ToString(objContacto->codigoDelAņador) + " and codigoDelAņadido = " + Convert::ToString(objContacto->codigoDelAņadido) + ";";
	objQuery->ExecuteNonQuery();
	CerrarConexionBD();
}

void GestorContacto::GrabarEnBD() { /*TODO: es muy lento e ineficiente, no se usa - AC */

	for (int i = 0; i < this->listaContactos->Count; i++) {
		GuardarContactoBD(listaContactos[i]);
	}

}

void GestorContacto::ActualizarApodoBD(String^ apodo, int CodigoDelAņador,int CodigoDelAņadido) {
	AbrirConexionBD();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "UPDATE Contacto SET apodo ='" + apodo + "' where codigoDelAņador = " + CodigoDelAņador + " and codigoDelAņadido=" + CodigoDelAņadido+ ";";
	objQuery->ExecuteNonQuery();
	CerrarConexionBD();
}

void GestorContacto::EliminarContactoBD(String^ userNameEliminar, int CodigoAņador) {
	AbrirConexionBD();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "delete from Contacto where userNameDelAņadido='" + userNameEliminar +"' and codigoDelAņador="+ CodigoAņador+";";
	objQuery->ExecuteNonQuery();
	CerrarConexionBD();
}

List<Contactos^>^ GestorContacto::BuscarFiltroBD(int codigoAņador,String^ apodo) {
	List<Contactos^>^ listaBuscados = gcnew List<Contactos^>;
	AbrirConexionBD();
	SqlDataReader^ objData; /*Este objeto va a tener los registros del resultado del query*/
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Contacto where codigoDelAņador =" + codigoAņador + " and Apodo like '"+ apodo +"%' ;";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		int codigoAņador = safe_cast<int>(objData[0]);
		int codigoAņadido = safe_cast<int>(objData[1]);
		String^ username = safe_cast<String^>(objData[2]);
		String^ Apodo = safe_cast<String^>(objData[3]);
		String^ Nombre = safe_cast<String^>(objData[4]);
		Contactos^ objContacto = gcnew Contactos(codigoAņador, codigoAņadido, username, Apodo, Nombre);
		listaBuscados->Add(objContacto);
	}
	objData->Close();
	CerrarConexionBD();
	return listaBuscados;
}