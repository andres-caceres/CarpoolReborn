#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/


namespace CarpoolModel {
	public ref class Coordenadas {

		/*Definición de atributos*/
	public:
		int posicionX;
		int posicionY;

		/*Métodos*/
	public:
		Coordenadas();
		Coordenadas(int posicionX, int posicionY);

	};
}