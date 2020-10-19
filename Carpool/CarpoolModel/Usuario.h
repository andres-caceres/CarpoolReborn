#pragma once
#include "Usuario.h"
#include "Administrador.h"
#include "Conductor.h"
#include "Pasajero.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class Usuario {

		/*Definición de atributos*/
		private:

			int		UserID;
			String^ Username;
			String^ Password;

			String^ Nombre;
			String^ ApellidoPaterno;
			String^ ApellidoMaterno;
			String^ DNI;
			String^ Edad;
			String^ Correo;
			//Foto de perfil
			String^ Idioma;
			bool flagAdmin; //puede ser admin? No.

			Administrador^ objAdministrador;
			Conductor^ objConductor;
			Pasajero^ objPasajero;
		
		/*Métodos*/
	public:
		/*Método Constructor*/
		Usuario();
	};
}