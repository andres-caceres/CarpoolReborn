#pragma once
#include "Horario.h"
#include "Ruta.h"
#include "Pasajero.h"
#include "Conductor.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class Viaje {

		/*Definición de atributos*/
	private:
		int NumeroPasajeros;
		String^ Historial;
		List<Pasajero^>^ ListaPasajero;
		Conductor^ objConductor;
		Horario^ objHorarios;
		/*Métodos*/
	public:
		/*Método Constructor*/
		Viaje();
	};
}
