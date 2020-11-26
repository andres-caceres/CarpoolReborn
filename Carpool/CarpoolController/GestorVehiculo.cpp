#include "GestorVehiculo.h"

using namespace CarpoolController;
using namespace System;
using namespace System::IO;

GestorVehiculo::GestorVehiculo() {
	listaVehiculos = gcnew List<Vehiculo^>();
	//listaVehiculosDeConductor = gcnew List<Vehiculo^>();
}

void GestorVehiculo::LeerVehiculosDesdeArchivo() {
	this->listaVehiculos->Clear();
	array<String^>^ lineas = File::ReadAllLines("Vehiculos.txt");

	String^ separadores = ";";
	for each (String ^ lineaVehiculo in lineas) {

		array<String^>^ campos = lineaVehiculo->Split(separadores->ToCharArray());
		String^ Marca = campos[0];
		String^ Modelo = campos[1];
		String^ Placa = campos[2];
		String^ Color = campos[3];
		String^ Tipo = campos[4];
		String^ NumAsientos = campos[5];
		String^ Propietairo = campos[6];
		String^ SOAT = campos[7];
		String^ RevTec = campos[8];
		int IDConductor	= Convert::ToInt16(campos[9]);
		int valido = Convert::ToInt16(campos[10]);

		//Vehiculo^ objVehiculo= gcnew Vehiculo(Marca, Modelo, Placa, Color, Tipo, NumAsientos, Propietairo, TrjPropiedad, IDConductor);
		Vehiculo^ objVehiculo = gcnew Vehiculo(Marca, Modelo, Placa, Color, Tipo, NumAsientos, Propietairo, SOAT, RevTec,IDConductor,valido);
		this->listaVehiculos->Add(objVehiculo);
	}
}

Vehiculo^ GestorVehiculo::ObtenerVehiculoPorPlaca(String^ Placa) {

	Vehiculo^ objVehiculo = nullptr;
	for (int i = 0; i < this->listaVehiculos->Count; i++)
	{
		if (this->listaVehiculos[i]->Placa == Placa) {
			objVehiculo = this->listaVehiculos[i];
			break;
		}
	}
	return objVehiculo;
}

Vehiculo^ GestorVehiculo::ObtenerVehiculoDeLista(int indice) {
	return this->listaVehiculos[indice];
}

int GestorVehiculo::ObtenerCantidadVehiculos() {
	return this->listaVehiculos->Count;
}


void GestorVehiculo::AgregarVehiculo(Vehiculo^ objVehiculo) {
	this->listaVehiculos->Add(objVehiculo);
}

void GestorVehiculo::EliminarVehiculo(String^ Placa) {
	for (int i = 0; i < this->listaVehiculos->Count; i++) {
		if (this->listaVehiculos[i]->Placa == Placa) {
			/*Encontre al que debo eliminar*/
			this->listaVehiculos->RemoveAt(i);
			break;
		}
	}
}

void GestorVehiculo::EscribirArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaVehiculos->Count);
	for (int i = 0; i < this->listaVehiculos->Count; i++) {
		Vehiculo^ objVehiculo = this->listaVehiculos[i];
		lineasArchivo[i] = objVehiculo->Marca + ";" + objVehiculo->Modelo + ";" + objVehiculo->Placa + ";" + objVehiculo->Color + ";" + objVehiculo->Tipo + ";" + objVehiculo->NumeroAsientos + ";" + objVehiculo->Propietario + ";" + objVehiculo->SOAT + ";" + objVehiculo->RevTec + ";" + objVehiculo->IDConductor + ";" + objVehiculo->valido;
	}
	File::WriteAllLines("Vehiculos.txt", lineasArchivo);
}
/*
List<Vehiculo^>^ ObtenerVehiculosPorConductor(Conductor^ objConductor)
{
	Vehiculo^ objVehiculo = nullptr;
	for (int i = 0; i < this->listaVehiculos->Count; i++)
	{
		if (this->listaVehiculos[i]->IDConductor == objConductor->CodigoDeUsuario) {
			objVehiculo = this->listaVehiculos[i];
			this->listaVehiculosDeConductor->Add(objVehiculo);
		}
	}
	return listaVehiculosDeConductor;

}
*/
//OTROS METODOS
int GestorVehiculo::ObtenerCantidadVehiculosSegunSuValidez(int valido) {
	int j = 1;
	for (int i = 0; i < this->listaVehiculos->Count; i++)
	{
		if (this->listaVehiculos[i]->valido == valido) {
			j++;

		}
	}
	return j;
}