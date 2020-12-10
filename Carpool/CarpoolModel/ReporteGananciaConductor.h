#pragma once
namespace CarpoolModel {

	using namespace System;

	public ref class ReporteGananciaConductor {
	public:
		String^ fecha;
		int dineroh;

	public:
		ReporteGananciaConductor(String^ fecha, int dineroh);
	};
}