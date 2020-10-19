#pragma once
#include "MetodoPago.h"
#include "Contactos.h"
#include "Chat.h"
#include "Horario.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class Pasajero {

		/*Definición de atributos*/
	private:
		String^ Posicion;
		int Calificacion;
		int CodigoDeUsuario;

		/*Métodos*/
	public:
		/*Método Constructor*/
		Pasajero();
	};
}