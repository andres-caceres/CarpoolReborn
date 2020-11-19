#pragma once
#include "MetodoTransferencia.h"
#include "Contactos.h"
#include "Chat.h"
#include "Horarios.h"

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {
	public ref class Pasajero {

		/*Definici�n de atributos*/
	public:
		int CodigoDeUsuario;		
		int Calificacion;
		String^ Posicion;
		

		/*M�todos*/
	public:
		/*M�todo Constructor*/
		Pasajero();
		Pasajero(int UserID, int Calificacion, String^ Posicion);
	};
}