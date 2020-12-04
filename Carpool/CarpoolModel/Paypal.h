#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class Paypal {

		/*Definición de atributos*/
	public:
		int codigoPropietario;
		String^ correo;
		String^ contrasenha;


		/*Métodos*/
	public:
		/*Método Constructor*/
		Paypal();
		Paypal(int codigoPropietario, String^ correo, String^ contrasenha);
	};
}
