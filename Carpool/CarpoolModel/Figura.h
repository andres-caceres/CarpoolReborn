#pragma once
//#include "Coordenadas.h"


using namespace System;
using namespace System::Drawing;


namespace CarpoolModel {

	public ref class figura {
	public:
		int inicioX;
		int inicioY;
		int finX;
		int finY;
		int tipo;
		//List<Coordenadas^>^ objListaCoordenadas;
		

		Color objColor;

	public:
		figura(int inicioX, int inicioY, int finX, int finY, int tipo, Color objColor);



	};
}