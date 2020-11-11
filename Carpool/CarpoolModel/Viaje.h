#pragma once
#include "Conductor.h"
#include "Pasajero.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class Viaje {

		/*Definición de atributos*/
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

		/*Métodos*/
	public:
		/*Método Constructor*/
		//Viaje(int codigoViaje, int NumeroPasajeros, String^ Origen, String^ Destino, String^ HoraSalida, String^ HoraLlegada, String^ Tarifa, Conductor^ objConductor);
		Viaje(int codigoViaje, int NumeroPasajeros, String^ Origen, String^ Destino, String^ HoraSalida, String^ HoraLlegada, String^ Tarifa, String^ objConductor);
	};
}
