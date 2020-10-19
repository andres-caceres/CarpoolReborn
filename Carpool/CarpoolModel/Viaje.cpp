#include "Viaje.h"

using namespace CarpoolModel;
Viaje::Viaje() {
	this->ListaPasajero = gcnew List<Pasajero^>();
	this->objHorarios = gcnew Horario();
	this->objConductor = gcnew Conductor();
}