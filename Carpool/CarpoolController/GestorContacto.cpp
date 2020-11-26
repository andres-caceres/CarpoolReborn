#include "GestorContacto.h"

using namespace CarpoolController;
using namespace System::IO;
using namespace System;

GestorContacto::GestorContacto() {
	listaContactos = gcnew List<Contactos^>();

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
