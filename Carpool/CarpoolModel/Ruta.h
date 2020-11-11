#pragma once
#include "Conductor.h"

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {
	public ref class Ruta {

		/*Definici�n de atributos*/
	public:
		int CodigoRuta;
		String^ Origen;
		String^ Destino;
		String^ Favoritos;
		//List<Ruta^> ^ListaRuta;

		/*M�todos*/
	public:
		/*M�todo Constructor*/
		Ruta(int CodigoRuta, String^ Origen, String^ Destino, String^ Favoritos);
		Ruta();
	};
}