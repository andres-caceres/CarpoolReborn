#pragma once

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/


namespace CarpoolModel {

	public ref class Contactos {

		/*Definici�n de atributos*/
	public:
		int codigo; //comentario
		String^ apodo;
		String^ dni;

		/*M�todos*/
	public:
		Contactos(int codigo, String^ apodo,String^ dni);
	};
}