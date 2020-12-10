#pragma once
#include "Conductor.h"

using namespace System;
using namespace System::Collections::Generic;

namespace CarpoolModel {

	public ref class ViajesxMes {

	public:
		String^ mes;
		int cantidad;
		int codigo;

	public:
		ViajesxMes();
		ViajesxMes(String^ mes, int cantidad, int codigo);
	};

}