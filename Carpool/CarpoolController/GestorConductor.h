#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System::IO;
using namespace System;


namespace CarpoolController {

	public ref class GestorConductor {

	private:
		List<Conductor^>^ listaConductores;

	public:
		GestorConductor();
		void LeerConductoresDesdeArchivo();
		Conductor^ BuscarConductorxUserID(int UserID);
		int ObtenerCantidadConductores();
		void AgregarALista(Conductor^ objConductor);
		void EscribirArchivo();//Comentario: no deberías eliminar el GestorConductor:: ?? @Andres
		Conductor^ ObtenerConductorLista(int indice);
		int ObtenerCantidadConductoresSegunSuValidez(int valido);
		Conductor^ ObtenerConductorxCodigo(int codigo);
		void EliminarConductorxCodigo(int codigoEliminar);
		int DatosLlenos(String^ Licencia);
	};
}


