#pragma once

using namespace CarpoolModel;
using namespace System::Collections::Generic;

namespace CarpoolController {

	public ref class GestorReporteViajesxMes {
	private:
		//Lista para el Reporte
		List<ViajesxMes^>^ lista;

	public:
		GestorReporteViajesxMes();
		void GenerarReporte();
		int CantidadDetalle();
		ViajesxMes^ ObtenerDetalleReporte(int i);
	};
}
