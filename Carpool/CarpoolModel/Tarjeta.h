#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class Tarjeta {

		/*Definición de atributos*/
	public:
		int CodigoPropietario;
		String^ NroTarjeta;
		String^ CVV;
		String^ FechaExp;
		String^ TipoTarjeta;
		

		/*Métodos*/
	public:
		/*Método Constructor*/
		Tarjeta();
		Tarjeta(int CodigoPropietario, String^ NroTarjeta, String^ CVV, String^ FechaExp, String^ TipoTarjeta);
	};
}
