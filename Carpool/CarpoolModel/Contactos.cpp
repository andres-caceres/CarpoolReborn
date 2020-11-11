#include "Contactos.h"

using namespace CarpoolModel;

Contactos::Contactos(int codigo, String^ apodo, String^ dni) {
	this->codigo = codigo;
	this->apodo = apodo;
	this->dni = dni;
}