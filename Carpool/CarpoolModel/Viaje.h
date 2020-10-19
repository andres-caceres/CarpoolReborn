#pragma once
#include "Horario.h"
#include "Ruta.h"
#include "Pasajero.h"
#include "Conductor.h"

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {
	public ref class Viaje {

		/*Definici�n de atributos*/
	private:
		int NumeroPasajeros;
		String^ Historial;
		List<Pasajero^>^ ListaPasajero;
		Conductor^ objConductor;
		Horario^ objHorarios;
		/*M�todos*/
	public:
		/*M�todo Constructor*/
		Viaje();
	};
}
