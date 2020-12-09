#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System::Data::SqlClient; /*Esto es para BD*/
using namespace System;

namespace CarpoolController {

	public ref class GestorSeguridad {

	private:
		List<Seguridad^>^ listaSeguridad;
		SqlConnection^ objConexion;
	public:
		GestorSeguridad();
		void AbrirConexionBD();
		void CerrarConexionBD();
		List<Seguridad^>^ BuscarAllSeguridadBD();
		void InsertarSeguridad(Seguridad^ objSeguridad);



		void LeerSeguridadDesdeArchivo();
		int validarSeguridad(String^ DniSeguro, String^ EmisionDNI, String^ Respuesta);
		void AgregarSeguridad(Seguridad^ objSeguridad);
		String^ ObtenerPregunta(String^ DniSeguro);
		void EscribirArchivo();
		void EliminarSeguridad(String^ dni);
	};
}


