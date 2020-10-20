#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;

namespace CarpoolController {

	public ref class GestorConductor {

	private:
		List<Conductor^>^ listaConductores;

	public:
		GestorConductor();
		void LeerConductoresDesdeArchivo();
		Conductor^ BuscarConductorxUserID(int UserID);
		int ObtenerCantidadConductores();
		//void EscribirConductorAlArchivo();
	

	};
}

