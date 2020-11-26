#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/


namespace CarpoolModel {

	public ref class Contactos {

		/*Definición de atributos*/
	public:
		int codigoDelAñador;
		int codigoDelAñadido;
		String^ userNameDelAñadido;
		String^ Apodo;
		String^ Nombre;		

		/*Métodos*/
	public:
		Contactos(int codigoDelAñador, int codigoDelAñadido, String^ userNameDelAñadido, String^ Apodo, String^ Nombre);
	};
}