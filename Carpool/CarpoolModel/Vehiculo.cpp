#include "Vehiculo.h"

using namespace CarpoolModel;

Vehiculo::Vehiculo(String^ Marca, String^ Modelo, String^ Placa, String^ Color, String^ Tipo, String^ NumeroAsientos, String^ Propietario, String^ SOAT, String^ RevTec, int valido) {

	this->Marca = Marca;
	this->Modelo = Modelo;
	this->Placa = Placa;
	this->Color = Color;
	this->Tipo = Tipo;
	this->NumeroAsientos = NumeroAsientos;
	this->Propietario = Propietario;
	this->SOAT = SOAT;
	this->RevTec = RevTec;
	this->valido = valido;

}

Vehiculo::Vehiculo(String^ Marca, String^ Modelo, String^ Placa, String^ Color, String^ Tipo, String^ NumeroAsientos, String^ Propietario, String^ SOAT, String^ RevTec, int IDConductor,int valido) {

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
	this->valido = valido;
}

Vehiculo::Vehiculo() {

}