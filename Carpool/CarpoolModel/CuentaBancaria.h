#pragma once

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {
	public ref class CuentaBancaria {

		/*Definici�n de atributos*/
	private:
		String^ Banco;
		String^ NumCuenta;
		String^ CCI;

		/*M�todos*/
	public:
		/*M�todo Constructor*/
		CuentaBancaria();
	};
}