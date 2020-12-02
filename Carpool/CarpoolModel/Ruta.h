#pragma once
#include "Conductor.h"
#include "Coordenadas.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class Ruta {

		/*Definición de atributos*/
	public:
		int CodigoRuta;
		String^ Origen;
		String^ Destino;
		String^ Favoritos;
		//List<Ruta^> ^ListaRuta;
		List<Coordenadas^>^ objListaCoordenadas;

		/*Métodos*/
	public:
		/*Método Constructor*/
		Ruta(int CodigoRuta, String^ Origen, String^ Destino, String^ Favoritos, List<Coordenadas^>^ objListaCoordenadas);
		Ruta(int CodigoRuta, String^ Origen, String^ Destino, String^ Favoritos);
		Ruta();
	};
}