#include "Viaje.h"

using namespace CarpoolModel;

/*
Viaje::Viaje(int codigoViaje, int NumeroPasajeros, String^ Origen, String^ Destino, String^ HoraSalida, String^ HoraLlegada, String^ Tarifa , Conductor^ objConductor){
	this->codigoViaje = codigoViaje;
	this->NumeroPasajeros = NumeroPasajeros;
	this->Origen = Origen;
	this->Destino = Destino;
	this->HoraSalida = HoraSalida;
	this->HoraLlegada = HoraLlegada;
	this->Tarifa = Tarifa;
	this->objConductor = objConductor;
}

*/

Viaje::Viaje(int codigoViaje, int NumeroPasajeros, String^ Origen, String^ Destino, String^ HoraSalida, String^ HoraLlegada, String^ Tarifa, String^ objConductor) {
	this->codigoViaje = codigoViaje;
	this->NumeroPasajeros = NumeroPasajeros;
	this->Origen = Origen;
	this->Destino = Destino;
	this->HoraSalida = HoraSalida;
	this->HoraLlegada = HoraLlegada;
	this->Tarifa = Tarifa;
	this->objConductor = objConductor;
}