#include "GestorFigura.h"

using namespace CarpoolController;

GestorFigura::GestorFigura() {
	this->listaFiguras = gcnew List<figura^>();
}


void GestorFigura::AgregarFigura(figura^ objFigura) {
	this->listaFiguras->Add(objFigura);

}

int GestorFigura::obtenerCantidadFiguras() {
	return this->listaFiguras->Count;

}

figura^ GestorFigura::obtenerFiguraxIndice(int indice) {

	return this->listaFiguras[indice];

}

