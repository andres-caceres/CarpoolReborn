#include "Vehiculo.h"

using namespace CarpoolModel;

Vehiculo::Vehiculo(String^ Marca, String^ Placa, String^ Modelo, String^ Color, String^ Tipo, String^ NumeroAsientos, String^ Propietario, String^ SOAT, String^ RevTec) {

	this->Marca = Marca;
	this->Modelo = Modelo;
	this->Placa = Placa;
	this->Color = Color;
	this->Tipo = Tipo;
	this->NumeroAsientos = NumeroAsientos;
	this->Propietario = Propietario;
	this->SOAT = SOAT;
	this->RevTec = RevTec;

}

Vehiculo::Vehiculo(String^ Marca, String^ Placa, String^ Modelo, String^ Color, String^ Tipo, String^ NumeroAsientos, String^ Propietario, String^ SOAT, String^ RevTec, String^ IDConductor) {

	this->Marca = Marca;
	this->Modelo = Modelo;
	this->Placa = Placa;
	this->Color = Color;
	this->Tipo = Tipo;
	this->NumeroAsientos = NumeroAsientos;
	this->Propietario = Propietario;
	this->SOAT = SOAT;
	this->RevTec = RevTec;
	this->IDConductor = IDConductor;
}

Vehiculo::Vehiculo() {

}