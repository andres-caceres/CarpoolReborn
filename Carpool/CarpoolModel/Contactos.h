#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/


namespace CarpoolModel {

	public ref class Contactos {

		/*Definición de atributos*/
	public:
		int codigo; //comentario
		String^ apodo;
		String^ dni;

		/*Métodos*/
	public:
		Contactos(int codigo, String^ apodo,String^ dni);
	};
}