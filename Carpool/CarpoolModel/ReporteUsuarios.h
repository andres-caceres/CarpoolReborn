#pragma once

namespace CarpoolModel {

	using namespace System;

	public ref class ReporteUsuarios {
	public:
		int TipoDeUsuario;
		int cantidadUsuarios;

	public:
		ReporteUsuarios(int TipoDeUsuario, int cantidadUsuarios);
	};
}
