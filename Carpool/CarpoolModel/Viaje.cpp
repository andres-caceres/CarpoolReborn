#include "Viaje.h"

using namespace CarpoolModel;


Viaje::Viaje(int codigoViaje, String^ HoraSalida, String^ HoraLlegada, String^ Fecha, String^ Estado, int NumeroPasajeros,
	int AsientosDisponibles, String^ Tarifa, Ruta^ objRuta, Conductor^ objConductor) {

	this->codigoViaje = codigoViaje;
	this->HoraSalida = HoraSalida;
	this->HoraLlegada = HoraLlegada;
	this->Fecha = Fecha;
	this->Estado = Estado;
	this->NumeroPasajeros = NumeroPasajeros;
	this->AsientosDisponibles = AsientosDisponibles;
	this->Tarifa = Tarifa;
	this->objRuta = objRuta;
	this->objConductor = objConductor;
	this->listaPasajeros = gcnew List<Pasajero^>();
}