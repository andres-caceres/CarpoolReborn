#include "Contactos.h"

using namespace CarpoolModel;

Contactos::Contactos(int codigoDelAņador, int codigoDelAņadido, String^ userNameDelAņadido, String^ Apodo, String^ Nombre) {
	this->codigoDelAņador = codigoDelAņador;
	this->codigoDelAņadido = codigoDelAņadido;
	this->userNameDelAņadido = userNameDelAņadido;
	this->Apodo = Apodo;
	this->Nombre = Nombre;
}