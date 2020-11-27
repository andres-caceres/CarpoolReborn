#pragma once


using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System;

namespace CarpoolController {
	public ref class GestorRuta {

	private:
		List<Ruta^>^ listaRutas;

	public:
		GestorRuta();
		void LeerRutasDesdeArchivo();
		int ObtenerCantidadRutas();
		Ruta^ ObtenerRutasLista(int indice);
		Ruta^ ObtenerRutaxCodigo(int codigo);
		void AgregarRuta(Ruta^ objRuta);
		
	};
}

////comentario