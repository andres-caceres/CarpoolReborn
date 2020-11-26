#include "GestorRuta.h"

using namespace CarpoolController;
using namespace CarpoolModel;
using namespace System::IO;

GestorRuta::GestorRuta() {
	listaRutas = gcnew List<Ruta^>();
}

void GestorRuta::LeerRutasDesdeArchivo() {
	this->listaRutas->Clear();
	array <String^>^ lineas = File::ReadAllLines("Rutas.txt");

	String^ separadores = ";";

	for each (String ^ lineaRuta in lineas) {

		array<String^>^ palabras = lineaRuta->Split(separadores->ToCharArray());

		int codigoRuta = Convert::ToInt32(palabras[0]);
		String^ Origen = palabras[1];
		String^ Destino = palabras[2];
		String^ Favorito = palabras[3];

		Ruta^ objRuta = gcnew Ruta(codigoRuta, Origen, Destino, Favorito);

		this->listaRutas->Add(objRuta);
	}

}

int GestorRuta::ObtenerCantidadRutas() {
	return this->listaRutas->Count;
}

Ruta^ GestorRuta::ObtenerRutasLista(int indice) {
	return this->listaRutas[indice];
}



Ruta^ GestorRuta::ObtenerRutaxCodigo(int codigo) {
	Ruta^ objRutaBuscada = nullptr;
	for (int i = 0; i < this->listaRutas->Count; i++) {
		if (this->listaRutas[i]->CodigoRuta == codigo) {
			objRutaBuscada = this->listaRutas[i];
			break;
		}
	}
	return objRutaBuscada;
}