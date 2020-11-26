#include "Conductor.h"
#include "Vehiculo.h"

using namespace CarpoolModel;

Conductor::Conductor(int CodigoDeUsuario, String^ Nombre, String^ Licencia, String^ Disponibilidad, int Calificacion, String^ Posicion, String^ AsientosDisponibles, Vehiculo^ objVehiculo, int valido) {

	this->CodigoDeUsuario = CodigoDeUsuario;
	this->Nombre = Nombre;
	this->NumeroDeLicencia = Licencia;
	this->Disponibilidad = Disponibilidad;
	this->CalificacionConductor = Calificacion;
	this->Posicion = Posicion;
	this->AsientosDisponibles = AsientosDisponibles;
	this->objVehiculo = objVehiculo;
	this->valido = valido;
	this->objChat = gcnew Chat();
	
	//this->objMetodoPago = gcnew MetodoPago();
}

Conductor::Conductor(int CodigoDeUsuario) {
	this->CodigoDeUsuario = CodigoDeUsuario;
	this->objVehiculo = gcnew Vehiculo();
	this->valido = 2;
	this->objChat = gcnew Chat();
	//this->objMetodoPago = gcnew MetodoPago();
}

Conductor::Conductor() {
	this->objVehiculo = gcnew Vehiculo();
	this->valido = 2;
	this->objChat = gcnew Chat();
	//this->objMetodoPago = gcnew MetodoPago();
}