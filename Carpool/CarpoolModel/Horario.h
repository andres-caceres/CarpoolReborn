#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {

	public ref class Horario {

		/*Definición de atributos*/
	private:
		String^ Favorito;
		String^ HoraSalida;
		String^ HoraLlegada;

		/*Métodos*/
	public:
		/*Método Constructor*/
		Horario();
	};
}
