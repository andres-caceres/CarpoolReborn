#pragma once
#include "Ruta.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {

	public ref class DatosMapa {

		/*Definición de atributos*/
	private:
		String^ UbicacionActual;
		String^ UbicacionConductores;
		Ruta^ objRuta;

		/*Métodos*/
	public:
		/*Método Constructor*/
		DatosMapa();
	};
}