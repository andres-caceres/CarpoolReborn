#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System;

namespace CarpoolController {

	public ref class GestorTarjeta {

	private:
		List<Tarjeta^>^ listaTarjetas;

	public:
		GestorTarjeta();
		void LeerTarjetasDesdeArchivo();
		void EscribirArchivo();
		void AgregarTarjeta(Tarjeta^ objTarjeta);
		void EliminarTarjeta(String^ NroTarjeta);
	};
}