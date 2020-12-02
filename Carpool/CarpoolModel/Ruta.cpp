#include "Ruta.h"

using namespace System;

namespace CarpoolModel {

	Ruta::Ruta(int CodigoRuta, String^ Origen, String^ Destino, String^ Favoritos, List<Coordenadas^>^ objListaCoordenadas) {
		//this->ListaRuta = gcnew List<Ruta^>();
		this->CodigoRuta = CodigoRuta;
		this->Origen = Origen;
		this->Destino = Destino;
		this->Favoritos = Favoritos;
		this->objListaCoordenadas = objListaCoordenadas;

	}

	Ruta::Ruta(int CodigoRuta, String^ Origen, String^ Destino,String^ Favoritos) {
		//this->ListaRuta = gcnew List<Ruta^>();
		this->CodigoRuta = CodigoRuta;
		this->Origen = Origen;
		this->Destino = Destino;
		this->Favoritos = Favoritos;

	}

	Ruta::Ruta() {

	}
}