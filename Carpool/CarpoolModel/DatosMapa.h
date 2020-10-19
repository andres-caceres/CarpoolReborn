#pragma once
#include "Ruta.h"

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {

	public ref class DatosMapa {

		/*Definici�n de atributos*/
	private:
		String^ UbicacionActual;
		String^ UbicacionConductores;
		Ruta^ objRuta;

		/*M�todos*/
	public:
		/*M�todo Constructor*/
		DatosMapa();
	};
}