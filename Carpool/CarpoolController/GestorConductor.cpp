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
		String^ Nombre					= palabras[1]; //TODO: buscar nombre usando en GestorUsuario (cambiar en Conductor.h)
		String^ Licencia				= palabras[2];
		String^ Disponibilidad			= palabras[3];
		int Calificacion = Convert::ToInt32(palabras[4]);
		String^ Posicion				= palabras[5];
		String^ AsientosDisponibles		= palabras[6];
		String^ PlacaDefault			= palabras[7]; //TODO: puede ser int?

		//cargar vehiculo de la lista
		GestorVehiculo^ objBuscadorVehiculo = gcnew GestorVehiculo();
		objBuscadorVehiculo->LeerVehiculosDesdeArchivo();
		Vehiculo^ ObjVehiculoDefault = objBuscadorVehiculo->ObtenerVehiculoPorPlaca(PlacaDefault);

		Conductor^ objConductor = gcnew Conductor(UserID, Nombre, Licencia, Disponibilidad, Calificacion, Posicion, AsientosDisponibles, ObjVehiculoDefault);
		this->listaConductores->Add(objConductor);

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