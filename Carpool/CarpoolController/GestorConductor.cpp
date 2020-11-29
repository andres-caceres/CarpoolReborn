#include "GestorConductor.h"
#include "GestorVehiculo.h"

using namespace CarpoolController;
using namespace CarpoolModel;
using namespace System;
using namespace System::Text;

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
		String^ Nombre = palabras[1]; //TODO: buscar nombre usando en GestorUsuario (cambiar en Conductor.h)
		String^ Licencia = palabras[2];
		String^ Disponibilidad = palabras[3];
		int Calificacion = Convert::ToInt32(palabras[4]);
		String^ Posicion = palabras[5];
		String^ AsientosDisponibles = palabras[6];
		String^ PlacaDefault = palabras[7]; //TODO: puede ser int? //Victor dice: Naaa, dejalo así, el profe dijo si no le sumas o cositas asi no vale la pena.
		int valido = Convert::ToInt32(palabras[8]);

		//cargar vehiculo de la lista
		GestorVehiculo^ objBuscadorVehiculo = gcnew GestorVehiculo();
		objBuscadorVehiculo->LeerVehiculosDesdeArchivo();
		Vehiculo^ ObjVehiculoDefault = objBuscadorVehiculo->ObtenerVehiculoPorPlaca(PlacaDefault);

		Conductor^ objConductor = gcnew Conductor(UserID, Nombre, Licencia, Disponibilidad, Calificacion, Posicion, AsientosDisponibles, ObjVehiculoDefault, valido);
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

void GestorConductor::AgregarALista(Conductor^ objConductor) {
	this->listaConductores->Add(objConductor);
}

void GestorConductor::EscribirArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaConductores->Count);
	for (int i = 0; i < this->listaConductores->Count; i++) {
		Conductor^ objConductor = this->listaConductores[i];
		lineasArchivo[i] = (objConductor->CodigoDeUsuario + ";" + objConductor->Nombre + ";" + objConductor->NumeroDeLicencia + ";" + objConductor->Disponibilidad + ";" + objConductor->CalificacionConductor + ";" + objConductor->Posicion + ";" + objConductor->AsientosDisponibles + ";" + objConductor->objVehiculo->Placa + ";" + objConductor->valido);
	}
	File::WriteAllLines("Conductores.txt", lineasArchivo); //ARREGLADO
}

Conductor^ GestorConductor::ObtenerConductorLista(int indice) {
	return this->listaConductores[indice];
}

int GestorConductor::ObtenerCantidadConductoresSegunSuValidez(int valido) {
	int j = 1;
	for (int i = 0; i < this->listaConductores->Count; i++)
	{
		if (this->listaConductores[i]->valido == valido) {
			j++;		
		}
	}
	return j;
}

Conductor^ GestorConductor::ObtenerConductorxCodigo(int codigo) {
	Conductor^ objConductorBuscado = nullptr;
	for (int i = 0; i < this->listaConductores->Count; i++) {
		if (this->listaConductores[i]->CodigoDeUsuario == codigo) {
			objConductorBuscado = this->listaConductores[i];
			break;
		}
	}
	return objConductorBuscado;
}

void GestorConductor::EliminarConductorxCodigo(int codigoEliminar) {
	for (int i = 0; i < this->listaConductores->Count; i++) {
		if (this->listaConductores[i]->CodigoDeUsuario == codigoEliminar) {
			/*Encontre al que debo eliminar*/
			this->listaConductores->RemoveAt(i);
			break;
		}
	}
}

int GestorConductor::DatosLlenos(String^ Licencia) {
	int datos_llenos = 1;
	if (Licencia == "") {
		datos_llenos = 0;
	}
	return datos_llenos;
}