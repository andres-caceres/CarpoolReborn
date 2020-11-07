#include "Vehiculo.h"

using namespace CarpoolModel;

Vehiculo::Vehiculo(String^ Marca, String^ Placa, String^ Modelo, String^ Color, String^ Tipo, String^ NumeroAsientos, String^ Propietario, String^ NumeroTarjetaPropiedad) {

	this->Marca = Marca;
	this->Modelo = Modelo;
	this->Placa = Placa;
	this->Color = Color;
	this->Tipo = Tipo;
	this->NumeroAsientos = NumeroAsientos;
	this->Propietario = Propietario;
	this->NumeroTarjetaPropiedad = NumeroTarjetaPropiedad;

}

Vehiculo::Vehiculo(String^ Marca, String^ Placa, String^ Modelo, String^ Color, String^ Tipo, String^ NumeroAsientos, String^ Propietario, String^ NumeroTarjetaPropiedad,String^ IDConductor) {

	this->Marca = Marca;
	this->Modelo = Modelo;
	this->Placa = Placa;
	this->Color = Color;
	this->Tipo = Tipo;
	this->NumeroAsientos = NumeroAsientos;
	this->Propietario = Propietario;
	this->NumeroTarjetaPropiedad = NumeroTarjetaPropiedad;
	this->IDConductor = IDConductor;
}

Vehiculo::Vehiculo() {

}