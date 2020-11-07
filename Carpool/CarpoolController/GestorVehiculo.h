#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System;

namespace CarpoolController {

	public ref class GestorVehiculo {

	private:
		List<Vehiculo^>^ listaVehiculos;
		//List<Vehiculo^>^ listaVehiculosDeConductor;

	public:
		GestorVehiculo();
		void LeerVehiculosDesdeArchivo();
		Vehiculo^ ObtenerVehiculoDeLista(int indice);
		Vehiculo^ ObtenerVehiculoPorPlaca(String^ Placa);
		//List<Vehiculo^>^ ObtenerVehiculosPorConductor(Conductor^ objConductor);
		int ObtenerCantidadVehiculos();
		void AgregarVehiculo(Vehiculo^ objVehiculo);
		void EliminarVehiculo(String^ Placa);
		void EscribirArchivo();
	};
}