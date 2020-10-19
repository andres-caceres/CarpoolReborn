#pragma once

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {
	public ref class Vehiculo {

		/*Definici�n de atributos*/
	private:
		String^ Marca;
		String^ Placa;
		String^ Modelo;
		String^ Color;
		String^ Tipo;
		String^ NumeroAsientos;
		String^ Propietario;
		String^ NumeroTarjetaPropiedad;

		/*M�todos*/
	public:
		/*M�todo Constructor*/
		Vehiculo();
	};
}