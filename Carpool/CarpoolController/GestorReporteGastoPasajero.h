#pragma once

using namespace CarpoolModel;
using namespace System::Collections::Generic;

namespace CarpoolController {

	public ref class GestorReporteGastoPasajero {
	private:
		//Lista para el Reporte
		List<GastoPasajero^>^ lista;

	public:
		GestorReporteGastoPasajero();
		void GenerarReporte(Usuario^ objUsuario);
		int CantidadDetalle();
		GastoPasajero^ ObtenerDetalleReporte(int i);
	};
}