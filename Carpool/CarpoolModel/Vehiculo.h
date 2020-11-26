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
		String^ SOAT;
		String^ RevTec;
		int IDConductor;
		int valido;	// 0: invalido , 1:valido , 2: en proceso

		/*Métodos*/
	public:
		/*Método Constructor*/
		Vehiculo(String^ Marca, String^ Modelo, String^ Placa, String^ Color, String^ Tipo, String^ NumeroAsientos, String^ Propietario, String^ SOAT, String^ RevTec,int valido);
		Vehiculo(String^ Marca, String^ Modelo, String^ Placa, String^ Color, String^ Tipo, String^ NumeroAsientos, String^ Propietario, String^ SOAT, String^ RevTec, int IDConductor,int valido);
		Vehiculo();
	};
}