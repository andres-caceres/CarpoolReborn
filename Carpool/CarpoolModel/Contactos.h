#pragma once

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/


namespace CarpoolModel {

	public ref class Contactos {

		/*Definici�n de atributos*/
	private:
		int codigo;
		String^ apodo;
		String^ favoritos;

		/*M�todos*/
	public:

		Contactos();
	};
}