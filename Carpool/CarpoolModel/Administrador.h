#pragma once

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definici�n e implementaci�n del List*/

namespace CarpoolModel {
	public ref class Administrador {

			/*Definici�n de atributos*/
		private:
			String^ Acceso;
			String^ TipoAdmin;
			int CodigoDeAdmin;

			/*M�todos*/
		public:
			/*M�todo Constructor*/
			Administrador();
	};
}