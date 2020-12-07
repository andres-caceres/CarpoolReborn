#include "Conductor.h"
#include "Vehiculo.h"

using namespace CarpoolModel;

Conductor::Conductor(int CodigoDeUsuario, String^ Nombre, String^ Licencia, int Calificacion, int AsientosDisponibles, Vehiculo^ objVehiculo,String^ CuentaBancaria, int valido) {

	this->CodigoDeUsuario = CodigoDeUsuario;
	this->Nombre = Nombre;
	this->NumeroDeLicencia = Licencia;
	this->CalificacionConductor = Calificacion;
	this->AsientosDisponibles = AsientosDisponibles;
	this->objVehiculo = objVehiculo;
	this->valido = valido;
	this->CuentaBancaria = CuentaBancaria;
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