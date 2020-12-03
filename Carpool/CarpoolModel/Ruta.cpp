#include "Ruta.h"
//#include "ListaCoordenadas.h"

using namespace System;

using namespace CarpoolModel;

Ruta::Ruta(int CodigoRuta, String^ Origen, String^ Destino, String^ Favoritos, ListaCoordenadas^ objListaCoordenadas) {
		//this->ListaRuta = gcnew List<Ruta^>();
		this->CodigoViaje = CodigoRuta;
		this->Origen = Origen;
		this->Destino = Destino;
		this->Favoritos = Favoritos;
		//this->objListaCoordenadas = gcnew ListaCoordenadas();
		this->objListaCoordenadas = objListaCoordenadas;

}

Ruta::Ruta(int CodigoRuta, String^ Origen, String^ Destino,String^ Favoritos) {
		//this->ListaRuta = gcnew List<Ruta^>();
		this->CodigoViaje = CodigoRuta;
		this->Origen = Origen;
		this->Destino = Destino;
		this->Favoritos = Favoritos;
		this->objListaCoordenadas = gcnew ListaCoordenadas();

}

Ruta::Ruta() {
	this->objListaCoordenadas = gcnew ListaCoordenadas();
}
