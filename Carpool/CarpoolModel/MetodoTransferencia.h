#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class MetodoTransferencia {

		/*Definición de atributos*/
	private:
		String^ NroTarjeta;
		String^ CVV;
		String^ DiaExp;
		String^ TipoTarjeta;
		String^ CuponPromocion;

		/*Métodos*/
	public:
		/*Método Constructor*/
		MetodoTransferencia();
	};
}