#pragma once


using namespace System;
using namespace System::Collections::Generic;

namespace CarpoolModel {

	public ref class GananciaConductor {

	public:
		String^ mes;
		int dinero;

	public:
		GananciaConductor(String^ mes, int dinero);
	};

}