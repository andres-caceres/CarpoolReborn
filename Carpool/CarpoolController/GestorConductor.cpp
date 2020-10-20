#include "GestorConductor.h"
#include "GestorVehiculo.h"

using namespace CarpoolController;
//using namespace CarpoolModel;
using namespace System;
using namespace System::IO;

GestorConductor::GestorConductor() {

	listaConductores = gcnew List<Conductor^>(); //crea la lista de conductores para usar en el programa

}

void GestorConductor::LeerConductoresDesdeArchivo() {
	this->listaConductores->Clear();
	array<String^>^ lineas = File::ReadAllLines("Conductores.txt"); 
	String^ separadores = ";";
	for each (String ^ lineaContacto in lineas)
	{
		array<String^>^ palabras = lineaContacto->Split(separadores->ToCharArray());
		int UserID = Convert::ToInt32(palabras[0]);
		String^ Nombre = palabras[1];
		String^ Licencia = palabras[2];
		String^ Calificacion = palabras[3];
		String^ AsientosDisponibles = palabras[4];
		String^ PlacaDefault =palabras[5]; //TODO: puede ser int?
		//Conductor^ objConductor = gcnew Conductor(UserID, Licencia, Calificacion, AsientosDisponibles);
		//this->listaConductores->Add(objConductor);
	}
}
int GestorConductor::ObtenerCantidadConductores() {
	return this->listaConductores->Count;
}

Conductor^ GestorConductor::BuscarConductorxUserID(int UserID) {

	Conductor^ objConductorBuscado = nullptr;
	for (int i = 0; i < this->listaConductores->Count; i++)
	{
		if (this->listaConductores[i]->CodigoDeUsuario == UserID) {
			objConductorBuscado = this->listaConductores[i];
			break;
		}
	}
	return objConductorBuscado;

}