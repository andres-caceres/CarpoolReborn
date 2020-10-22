#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class Vehiculo {

		/*Definición de atributos*/
	public:
		String^ Marca;
		String^ Modelo;
		String^ Placa;
		String^ Color;
		String^ Tipo;
		String^ NumeroAsientos;
		String^ Propietario;
		String^ NumeroTarjetaPropiedad;

		/*Métodos*/
	public:
		/*Método Constructor*/
		Vehiculo(String^ Marca, String^ Modelo, String^ Placa, String^ Color, String^ Tipo, String^ NumeroAsientos, String^ Propietario, String^ NumeroTarjetaPropiedad);
		Vehiculo();
	};
}