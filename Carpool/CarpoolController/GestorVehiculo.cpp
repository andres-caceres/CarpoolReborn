#include "GestorVehiculo.h"

using namespace CarpoolController;
using namespace System;
using namespace System::IO;

GestorVehiculo::GestorVehiculo() {
	listaVehiculos = gcnew List<Vehiculo^>();
}

void GestorVehiculo::LeerVehiculosDesdeArchivo() {
	this->listaVehiculos->Clear();
	array<String^>^ lineas = File::ReadAllLines("Vehiculos.txt");

	String^ separadores = ";";
	for each (String ^ lineaVehiculo in lineas) {

		array<String^>^ campos = lineaVehiculo->Split(separadores->ToCharArray());
		String^ Marca		= campos[0];
		String^ Modelo		= campos[1];
		String^ Placa		= campos[2];
		String^ Color		= campos[3];
		String^ Tipo		= campos[4];
		String^ NumAsientos = campos[5];
		String^ Propietairo	= campos[6];
		String^ TrjPropiedad= campos[7];

		Vehiculo^ objVehiculo= gcnew Vehiculo(Marca, Modelo, Placa, Color, Tipo, NumAsientos, Propietairo, TrjPropiedad);
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
		lineasArchivo[i] = objVehiculo->Marca + ";" + objVehiculo->Modelo + ";" + objVehiculo->Placa + ";" + objVehiculo->Color + ";" + objVehiculo->Tipo + ";" + objVehiculo->NumeroAsientos + ";" + objVehiculo->NumeroTarjetaPropiedad;
	}
	File::WriteAllLines("Vehiculos.txt", lineasArchivo);
}

//OTROS METODOS