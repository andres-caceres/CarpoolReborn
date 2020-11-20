#pragma once

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {
	public ref class Vehiculo {

		/*Definici�n de atributos*/
	public:
		String^ Marca;	
		String^ Modelo;
		String^ Placa;
		String^ Color;
		String^ Tipo;
		String^ NumeroAsientos;
		String^ Propietario;
		String^ SOAT;
		String^ RevTec;
		String^ IDConductor;

		/*M�todos*/
	public:
		/*M�todo Constructor*/
		Vehiculo(String^ Marca, String^ Modelo, String^ Placa, String^ Color, String^ Tipo, String^ NumeroAsientos, String^ Propietario, String^ SOAT, String^ RevTec);
		Vehiculo(String^ Marca, String^ Modelo, String^ Placa, String^ Color, String^ Tipo, String^ NumeroAsientos, String^ Propietario, String^ SOAT, String^ RevTec, String^ IDConductor);
		Vehiculo();
	};
}