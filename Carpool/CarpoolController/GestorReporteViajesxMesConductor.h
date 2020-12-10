#pragma once

using namespace CarpoolModel;
using namespace System::Collections::Generic;

namespace CarpoolController {

	public ref class GestorReporteViajesxMesConductor {
	private:
		//Lista para el Reporte
		List<ViajesxMes^>^ lista;

	public:
		GestorReporteViajesxMesConductor();
		void GenerarReporte(int CodigoUsuario);
		int CantidadDetalle();
		ViajesxMes^ ObtenerDetalleReporte(int i);
	};
}

