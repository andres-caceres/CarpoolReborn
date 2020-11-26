#pragma once

using namespace CarpoolModel;
using namespace System::Collections::Generic;


namespace CarpoolController {

	public ref class GestorReporteUsuarios {
	private:
		//Lista para el Reporte
		List<ReporteUsuarios^>^ lista;

	public:
		GestorReporteUsuarios();
		void GenerarReporte();
		int CantidadDetalle();
		ReporteUsuarios^ ObtenerDetalleReporte(int i);
	};
}
