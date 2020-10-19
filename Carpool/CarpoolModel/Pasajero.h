#pragma once
#include "MetodoPago.h"
#include "Contactos.h"
#include "Chat.h"
#include "Horario.h"

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {
	public ref class Pasajero {

		/*Definici�n de atributos*/
	private:
		String^ Posicion;
		int Calificacion;
		int CodigoDeUsuario;

		/*M�todos*/
	public:
		/*M�todo Constructor*/
		Pasajero();
	};
}