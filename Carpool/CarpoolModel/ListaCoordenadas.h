#pragma once
#include "Coordenadas.h"

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {
	public ref class ListaCoordenadas {

		/*Definici�n de atributos*/
	public:
		int CodigoViaje;
		List<Coordenadas^>^ objListaCoordenadas;

		/*M�todos*/
	public:
		/*M�todo Constructor*/
		ListaCoordenadas(int CodigoViaje, List<Coordenadas^>^ objListaCoordenadas);
		ListaCoordenadas();
	};
}
