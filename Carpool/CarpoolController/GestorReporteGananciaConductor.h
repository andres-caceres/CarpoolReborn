#pragma once

using namespace CarpoolModel;
using namespace System::Collections::Generic;

namespace CarpoolController {

	public ref class GestorReporteGananciaConductor {
	private:
		//Lista para el Reporte
		List<GananciaConductor^>^ lista;

	public:
		GestorReporteGananciaConductor();
		void GenerarReporte(Conductor^ objConductor);
		int CantidadDetalle();
		GananciaConductor^ ObtenerDetalleReporte(int i);
	};
}