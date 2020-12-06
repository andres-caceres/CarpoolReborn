#pragma once
#include "Coordenadas.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class ListaCoordenadas {

		/*Definición de atributos*/
	public:
		int CodigoViaje;
		List<Coordenadas^>^ objListaCoordenadas;

		/*Métodos*/
	public:
		/*Método Constructor*/
		ListaCoordenadas(int CodigoViaje, List<Coordenadas^>^ objListaCoordenadas);
		ListaCoordenadas();
	};
}
