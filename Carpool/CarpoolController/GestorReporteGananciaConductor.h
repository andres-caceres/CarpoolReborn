#pragma once

using namespace CarpoolModel;
using namespace System::Collections::Generic;

namespace CarpoolController {

	public ref class GestorReporteGananciaConductor {
	private:
		//Lista para el Reporte
		List<ReporteGananciaConductor^>^ lista;

	public:
		GestorReporteGananciaConductor();
		void GenerarReporte();
		int CantidadDetalle();
		String^DevuelveMes(array<String^>^ palabras);
		//ViajesxMes^ ObtenerDetalleReporte(int i);
	};
}
