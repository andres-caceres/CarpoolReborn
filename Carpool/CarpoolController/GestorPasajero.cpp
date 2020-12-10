#include "GestorPasajero.h"

using namespace CarpoolController;
using namespace System;
using namespace System::IO; /*Aqui esta la clase FILE, que es la que maneja la información de archivos de texto*/

GestorPasajero::GestorPasajero() {
	listaPasajeros = gcnew List<Pasajero^>();
}

void GestorPasajero::LeerPasajerosDesdeArchivo() {
	this->listaPasajeros->Clear();
	array<String^>^ lineas = File::ReadAllLines("Pasajeros.txt");
	String^ separadores = ";";
	for each (String ^ lineaPasajero in lineas) {
		array<String^>^ palabras = lineaPasajero->Split(separadores->ToCharArray());

		int codigousuario = Convert::ToInt32(palabras[0]);
		int calficacion = Convert::ToInt32(palabras[1]);

		Pasajero^ objPasajero = gcnew Pasajero(codigousuario, calficacion);
		this->listaPasajeros->Add(objPasajero);
	}
}

Pasajero^ GestorPasajero::BuscarxUserID(int UserID)
{
	Pasajero^ objBuscado = nullptr;
	for (int i = 0; i < this->listaPasajeros->Count; i++)
	{
		if (this->listaPasajeros[i]->CodigoDeUsuario == UserID) {
			objBuscado = this->listaPasajeros[i];
			break;
		}
	}
	return objBuscado;
}

void GestorPasajero::EscribirArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaPasajeros->Count);
	for (int i = 0; i < this->listaPasajeros->Count; i++) {
		Pasajero^ objPasajero = this->listaPasajeros[i];
		lineasArchivo[i] = objPasajero->CodigoDeUsuario + ";" + objPasajero->Calificacion ;
	}
	File::WriteAllLines("Pasajeros.txt", lineasArchivo);
}

void GestorPasajero::AgregarPasajero(Pasajero^ objPasajero) {
	this->listaPasajeros->Add(objPasajero);
}