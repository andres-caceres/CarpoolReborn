#pragma once
#include "Vehiculo.h"
#include "MetodoPago.h"
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
			String^ Disponibilidad;
			int CalificacionConductor;
			String^ Posicion; //TODO: posicion default?
			String^ AsientosDisponibles;
			Vehiculo^ objVehiculo;
			Chat^ objChat;
			//MetodoPago^ objMetodoPago;

			/*Métodos*/
		public:
			Conductor();
			Conductor(int CodigoDeUsuario, String^ Nombre, String^ NumeroDeLicencia, String^ Disponibilidad, int CalificacionConductor, String^ Posicion, String^ AsientosDisponibles, Vehiculo^ objVehiculo);
			
	};
}