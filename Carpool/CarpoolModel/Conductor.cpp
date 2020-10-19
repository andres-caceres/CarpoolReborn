#include "Conductor.h"

using namespace CarpoolModel;

Conductor::Conductor() {
	this->objVehiculo = gcnew Vehiculo();
	this->objChat = gcnew Chat();
	this->objMetodoPago = gcnew MetodoPago();
}