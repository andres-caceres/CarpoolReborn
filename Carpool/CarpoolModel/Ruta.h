#pragma once
#include "ListaCoordenadas.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class Ruta {

		/*Definición de atributos*/
	public:
		int CodigoViaje;
		String^ Origen;
		String^ Destino;
		String^ Favoritos;
		//List<Ruta^> ^ListaRuta;
		ListaCoordenadas^ objListaCoordenadas;

		/*Métodos*/
	public:
		/*Método Constructor*/
		Ruta(int CodigoViaje, String^ Origen, String^ Destino, String^ Favoritos, ListaCoordenadas^ objListaCoordenadas);
		Ruta(int CodigoViaje, String^ Origen, String^ Destino, String^ Favoritos);
		Ruta();
	};
}