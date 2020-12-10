#pragma once

using namespace CarpoolModel;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient; /*Esto es para BD*/
using namespace System;


namespace CarpoolController {

	public ref class GestorReporteUsuarios {
	private:
		//Lista para el Reporte
		List<ReporteUsuarios^>^ lista;
		SqlConnection^ objConexion;

	public:
		void AbrirConexionBD();
		void CerrarConexionBD();
		int ObtenerNumeroDeUsuariosPorTipo(int tipoUsuario);
		GestorReporteUsuarios();
		void GenerarReporte();
		int CantidadDetalle();
		ReporteUsuarios^ ObtenerDetalleReporte(int i);
	};
}
