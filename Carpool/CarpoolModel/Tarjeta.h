#pragma once

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {
	public ref class Tarjeta {

		/*Definici�n de atributos*/
	private:
		String^ NroTarjeta;
		String^ CVV;
		String^ DiaExp;
		String^ TipoTarjeta;

		/*M�todos*/
	public:
		/*M�todo Constructor*/
		Tarjeta();
	};
}
