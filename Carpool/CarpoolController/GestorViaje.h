#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System;

namespace CarpoolController {

	public ref class GestorViaje {

	private:
		List<Viaje^>^ listaViajes;

	public:
		GestorViaje();
		void LeerViajesDesdeArchivo();

		void AgregarViaje(Viaje^ objViaje);
		void EliminarViaje(int codigoEliminar);
		void EscribirArchivo();
		int ObtenerCantidadViajes();
		Viaje^ ObtenerViajeLista(int indice);
		void CargarPasajerosViajes(Viaje^ objViaje);
		//Contactos^ ObtenerViajexCodigo(int codigo);
		List<Viaje^>^ DevolverAllViajes();

	};
}