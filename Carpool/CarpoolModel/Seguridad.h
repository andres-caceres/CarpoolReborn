#pragma once

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {
	public ref class Seguridad {

		/*Definici�n de atributos*/
	public:
		String^ DniSeguro;
		String^ EmisionDni;
		String^ Pregunta;
		String^ Respuesta;

		/*M�todos*/
	public:
		/*M�todo Constructor*/
		Seguridad(String^ DniSeguro, String^ EmisionDni, String^ Pregunta, String^ Respuesta);
		Seguridad();
	};
}