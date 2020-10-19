#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/


namespace CarpoolModel {

	public ref class Contactos {

		/*Definición de atributos*/
	private:
		int codigo;
		String^ apodo;
		String^ favoritos;

		/*Métodos*/
	public:

		Contactos();
	};
}