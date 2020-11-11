#pragma once
#include "Conductor.h"
#include "Pasajero.h"

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {
	public ref class Viaje {

		/*Definici�n de atributos*/
	public:
		int codigoViaje;
		int NumeroPasajeros;
		String^ Origen;
		String^ Destino;
		String^ HoraSalida;
		String^ HoraLlegada;
		//Conductor^ objConductor;
		String^ objConductor;
		String^ Tarifa;

		/*M�todos*/
	public:
		/*M�todo Constructor*/
		//Viaje(int codigoViaje, int NumeroPasajeros, String^ Origen, String^ Destino, String^ HoraSalida, String^ HoraLlegada, String^ Tarifa, Conductor^ objConductor);
		Viaje(int codigoViaje, int NumeroPasajeros, String^ Origen, String^ Destino, String^ HoraSalida, String^ HoraLlegada, String^ Tarifa, String^ objConductor);
	};
}
