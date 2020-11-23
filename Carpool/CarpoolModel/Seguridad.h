#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class Seguridad {

		/*Definición de atributos*/
	public:
		String^ DniSeguro;
		String^ EmisionDni;
		String^ Pregunta;
		String^ Respuesta;

		/*Métodos*/
	public:
		/*Método Constructor*/
		Seguridad(String^ DniSeguro, String^ EmisionDni, String^ Pregunta, String^ Respuesta);
		Seguridad();
	};
}