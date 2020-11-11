#include "GestorPasajero.h"

using namespace CarpoolController;
using namespace System;
using namespace System::IO; /*Aqui esta la clase FILE, que es la que maneja la información de archivos de texto*/

GestorPasajero::GestorPasajero() {
	listaPasajeros = gcnew List<Pasajero^>();
}

void GestorPasajero::LeerPasajerosDesdeArchivo()
{
	this->listaPasajeros->Clear();
	array<String^>^ lineas = File::ReadAllLines("Pasajeros.txt");
	String^ separadores = ";";
	for each (String ^ lineaContacto in lineas)
	{

		array<String^>^ palabras = lineaContacto->Split(separadores->ToCharArray());
		int UserID = Convert::ToInt32(palabras[0]);
		//String^ Nombre = palabras[1]; //TODO: buscar nombre y otros datos usando GestorUsuario
		int Calificacion = Convert::ToInt32(palabras[2]);
		String^ Posicion = palabras[3];

		Pasajero^ objPasajero = gcnew Pasajero(UserID, Calificacion, Posicion);
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