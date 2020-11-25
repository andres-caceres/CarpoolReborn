#pragma once
#include "Pasajero.h"
#include "Administrador.h"
#include "Conductor.h"
#include "Contactos.h"
#include "Seguridad.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class Usuario {

		/*Definición de atributos*/
	public:
		int CodigoDeUsuario;
		String^ Nombre;
		String^ ApellidoPaterno;
		String^ ApellidoMaterno;
		String^ DNI;
		String^ Edad;
		String^ Correo;
		String^ Idioma;
		String^ userName;
		String^ password;
		int tipoUsuario;
				

		/*Métodos*/
	public:
		/*Método Constructor*/
		Usuario(int CodigoDeUsuario, String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno, String^ DNI, String^ Correo, String^ userName, String^ password, int tipoUsuario);
		Usuario();
	};
}