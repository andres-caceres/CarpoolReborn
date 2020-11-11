#pragma once
#include "MetodoTransferencia.h"
#include "Contactos.h"
#include "Chat.h"
#include "Horarios.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class Pasajero {

		/*Definición de atributos*/
	public:
		int CodigoDeUsuario;		
		int Calificacion;
		String^ Posicion;
		

		/*Métodos*/
	public:
		/*Método Constructor*/
		Pasajero();
		Pasajero(int UserID, int Calificacion, String^ Posicion);
	};
}