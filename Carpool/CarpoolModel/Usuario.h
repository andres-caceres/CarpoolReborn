#pragma once
#include "Pasajero.h"
#include "Administrador.h"
#include "Conductor.h"
#include "Contactos.h"
#include "Seguridad.h"

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {
	public ref class Usuario {

		/*Definici�n de atributos*/
	public:
		//String^ Contrase�a;
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

		int CodigoDeUsuario;

		/*M�todos*/
	public:
		/*M�todo Constructor*/
		Usuario(String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno, String^ DNI, String^ Correo, String^ userName, String^ password, int tipoUsuario);
		Usuario();
	};
}