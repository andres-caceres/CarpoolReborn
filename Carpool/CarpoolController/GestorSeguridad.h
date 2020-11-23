#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System;

namespace CarpoolController {

	public ref class GestorSeguridad {

	private:
		List<Seguridad^>^ listaSeguridad;

	public:
		GestorSeguridad();
		void LeerSeguridadDesdeArchivo();
		int SeguridadLlena(String^ EmisionDNI, String^ Pregunta, String^ Respuesta);
		int validarSeguridad(String^ DniSeguro, String^ EmisionDNI, String^ Respuesta);
		void AgregarSeguridad(Seguridad^ objSeguridad);
		String^ ObtenerPregunta(String^ DniSeguro);
		void EscribirArchivo();
	};
}


