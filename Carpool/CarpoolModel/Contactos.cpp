#include "Contactos.h"

using namespace CarpoolModel;

Contactos::Contactos(int codigoDelA�ador, int codigoDelA�adido, String^ userNameDelA�adido, String^ Apodo, String^ Nombre) {
	this->codigoDelA�ador = codigoDelA�ador;
	this->codigoDelA�adido = codigoDelA�adido;
	this->userNameDelA�adido = userNameDelA�adido;
	this->Apodo = Apodo;
	this->Nombre = Nombre;
}