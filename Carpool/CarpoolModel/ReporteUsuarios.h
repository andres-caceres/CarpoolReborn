#pragma once

namespace CarpoolModel {

	using namespace System;

	public ref class ReporteUsuarios {
	public:
		String^ TipoDeUsuario;
		int cantidadUsuarios;

	public:
		ReporteUsuarios(String^ TipoDeUsuario, int cantidadUsuarios);
	};
}