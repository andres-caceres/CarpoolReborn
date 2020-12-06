#include "ListaCoordenadas.h"

using namespace System;

namespace CarpoolModel {

	ListaCoordenadas::ListaCoordenadas(int Codigoviaje, List<Coordenadas^>^ objListaCoordenadas) {
		//this->ListaRuta = gcnew List<Ruta^>();
		this->CodigoViaje = Codigoviaje;
		this->objListaCoordenadas = objListaCoordenadas;

	}

	ListaCoordenadas::ListaCoordenadas() {
		this->objListaCoordenadas = gcnew List < Coordenadas^> ();
	}

}
