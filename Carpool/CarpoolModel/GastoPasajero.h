#pragma once



using namespace System;
using namespace System::Collections::Generic;

namespace CarpoolModel {

	public ref class GastoPasajero {

	public:
		String^ mes;
		int dinero;

	public:
		GastoPasajero(String^ mes, int dinero);
	};

}