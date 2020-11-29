#include "Tarjeta.h"

using namespace CarpoolModel;

Tarjeta::Tarjeta() {

}

Tarjeta::Tarjeta(int CodigoPropietario,String^ NroTarjeta, String^ CVV, String^ FechaExp, String^ TipoTarjeta) {
	this->CodigoPropietario = CodigoPropietario;
	this->NroTarjeta = NroTarjeta;
	this->CVV = CVV;
	this->FechaExp = FechaExp;
	this->TipoTarjeta = TipoTarjeta;
	
}