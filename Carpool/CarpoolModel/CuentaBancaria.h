#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class CuentaBancaria {

		/*Definición de atributos*/
	private:
		String^ Banco;
		String^ NumCuenta;
		String^ CCI;

		/*Métodos*/
	public:
		/*Método Constructor*/
		CuentaBancaria();
	};
}