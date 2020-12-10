#include "ViajesxMes.h"

using namespace CarpoolModel;

ViajesxMes::ViajesxMes() {

}

ViajesxMes::ViajesxMes(String^ mes, int cantidad, int codigo) {

	this->cantidad = cantidad;
	this->codigo = codigo;
	this->mes = mes;
}


