#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/
using namespace System::Collections::Generic; /*Contiene la definición e implementación del List*/

namespace CarpoolModel {
	public ref class Administrador {

			/*Definición de atributos*/
		private:
			String^ Acceso;
			String^ TipoAdmin;
			int CodigoDeAdmin;

			/*Métodos*/
		public:
			/*Método Constructor*/
			Administrador();
	};
}