#pragma once
#include "Vehiculo.h"
#include "MetodoTransferencia.h"
#include "Chat.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/


namespace CarpoolModel {
	public ref class Conductor {

		/*Definición de atributos*/
	public:
		int CodigoDeUsuario; //TODO: cambiar a UserID
		String^ Nombre;		//TODO: buscar desde GestorUsuario
		String^ NumeroDeLicencia;
		//String^ Disponibilidad;
		int CalificacionConductor;
		//String^ Posicion; //TODO: posicion default? Victor: Ya no va creo
		int AsientosDisponibles;
		Vehiculo^ objVehiculo;
		int valido; 	// 0: invalido , 1:valido , 2: en proceso
		String^ CuentaBancaria;
		Chat^ objChat;
		//String^ PlacaVehiculoActual;
		//MetodoPago^ objMetodoPago;

		/*Métodos*/
	public:

		Conductor();
		Conductor(int CodigoDeUsuario);
		Conductor(int CodigoDeUsuario, String^ Nombre, String^ Licencia, int Calificacion, int AsientosDisponibles, Vehiculo^ objVehiculo, String^ CuentaBancaria, int valido);

	};
}