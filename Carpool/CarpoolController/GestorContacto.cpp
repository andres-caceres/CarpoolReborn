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
		int codigo = Convert::ToInt32(palabras[0]);
		String^ apodo = palabras[1];
		String^ dni = palabras[2];
		Contactos^ objContactos = gcnew Contactos(codigo, apodo, dni);
		this->listaContactos->Add(objContactos);
	}
}

int GestorContacto::ObtenerCantidadContactos() {
	return this->listaContactos->Count;
}

Contactos^ GestorContacto::ObtenerContactoLista(int indice) {
	return this->listaContactos[indice];
}

Contactos^ GestorContacto::ObtenerContactoxDni(String^ dni) {
	Contactos^ objContactoBuscado = nullptr;
	for (int i = 0; i < this->listaContactos->Count; i++) {
		if (this->listaContactos[i]->dni == dni) {
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

void GestorContacto::EliminarContacto(int codigoEliminar) {
	for (int i = 0; i < this->listaContactos->Count; i++) {
		if (this->listaContactos[i]->codigo == codigoEliminar) {
			this->listaContactos->RemoveAt(i);
			break;
		}

	}
}

void GestorContacto::GrabarEnArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaContactos->Count);
	for (int i = 0; i < this->listaContactos->Count; i++) {
		Contactos^ objContacto = this->listaContactos[i];
		lineasArchivo[i] = objContacto->codigo + ";" + objContacto->apodo + ";" + objContacto->dni;
	}
	File::WriteAllLines("Contactos.txt", lineasArchivo);
}

Contactos^ GestorContacto::ObtenerContactoxCodigo(int codigo) {
	Contactos^ objContactoBuscado = nullptr;
	for (int i = 0; i < this->listaContactos->Count; i++) {
		if (this->listaContactos[i]->codigo == codigo) {
			objContactoBuscado = this->listaContactos[i];
			break;
		}
	}
	return objContactoBuscado;
}


int GestorContacto::verificaNuevoUsuario(String^ dni) {
	int yaExiste = 0;
	for (int i = 0; i < this->listaContactos->Count; i++) {
		if (this->listaContactos[i]->dni == dni) {
			yaExiste = 1;
			break;
		}
	}
	return yaExiste;
}
