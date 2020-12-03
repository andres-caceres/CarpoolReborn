#pragma once
#include "ListaCoordenadas.h"

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {
	public ref class Ruta {

		/*Definici�n de atributos*/
	public:
		int CodigoViaje;
		String^ Origen;
		String^ Destino;
		String^ Favoritos;
		//List<Ruta^> ^ListaRuta;
		ListaCoordenadas^ objListaCoordenadas;

		/*M�todos*/
	public:
		/*M�todo Constructor*/
		Ruta(int CodigoViaje, String^ Origen, String^ Destino, String^ Favoritos, ListaCoordenadas^ objListaCoordenadas);
		Ruta(int CodigoViaje, String^ Origen, String^ Destino, String^ Favoritos);
		Ruta();
	};
}