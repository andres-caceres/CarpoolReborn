#pragma once

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {

	public ref class Horario {

		/*Definici�n de atributos*/
	private:
		String^ Favorito;
		String^ HoraSalida;
		String^ HoraLlegada;

		/*M�todos*/
	public:
		/*M�todo Constructor*/
		Horario();
	};
}
