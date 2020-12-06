#include "Paypal.h"

using namespace CarpoolModel;
Paypal::Paypal() {

}

Paypal::Paypal(int codigoPropietario, String^ correo, String^ contrasenha) {
	this->codigoPropietario = codigoPropietario;
	this->correo = correo;
	this->contrasenha = contrasenha;
}