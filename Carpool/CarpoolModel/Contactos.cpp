#include "Contactos.h"

using namespace CarpoolModel;

Contactos::Contactos(int codigoDelAñador, int codigoDelAñadido, String^ userNameDelAñadido, String^ Apodo, String^ Nombre) {
	this->codigoDelAñador = codigoDelAñador;
	this->codigoDelAñadido = codigoDelAñadido;
	this->userNameDelAñadido = userNameDelAñadido;
	this->Apodo = Apodo;
	this->Nombre = Nombre;
}