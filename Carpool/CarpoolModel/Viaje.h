#pragma once
#include "Conductor.h"
#include "Pasajero.h"
//#include "Ruta.h"
#include "ListaCoordenadas.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class Viaje {

		/*Definición de atributos*/
	public:
		int codigoViaje;
		String^ HoraSalida;
		String^ HoraLlegada;
		String^ Fecha;
		String^ Estado; //Estados: "No Iniciado", "Iniciado", "Finalizado"
		int NumeroPasajeros;
		int AsientosDisponibles;
		int Tarifa;
		//Ruta^ objRuta;
		ListaCoordenadas^ objListaCoordenadas;
		Conductor^ objConductor;
		List<Pasajero^>^ listaPasajeros;

	public:
		Viaje(int codigoViaje, String^ HoraSalida, String^ HoraLlegada, String^ Fecha, String^ Estado, int NumeroPasajeros,
		int AsientosDisponibles, int Tarifa, ListaCoordenadas^ objListaCoordenadas, Conductor^ objConductor);
		Viaje();

	};
}
