#pragma once

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {
	public ref class Paypal {

		/*Definici�n de atributos*/
	public:
		int codigoPropietario;
		String^ correo;
		String^ contrasenha;


		/*M�todos*/
	public:
		/*M�todo Constructor*/
		Paypal();
		Paypal(int codigoPropietario, String^ correo, String^ contrasenha);
	};
}
