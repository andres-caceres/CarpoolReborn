#pragma once

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/


namespace CarpoolModel {
	public ref class Coordenadas {

		/*Definici�n de atributos*/
	public:
		int posicionX;
		int posicionY;

		/*M�todos*/
	public:
		Coordenadas();
		Coordenadas(int posicionX, int posicionY);

	};
}