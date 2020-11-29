#include "GestorTarjeta.h"

using namespace CarpoolController;
using namespace CarpoolModel;
using namespace System::IO;
using namespace System::Text;

GestorTarjeta::GestorTarjeta() {
	this->listaTarjetas = gcnew List<Tarjeta^>();
}

void GestorTarjeta::LeerTarjetasDesdeArchivo() {
	this->listaTarjetas->Clear();
	array<String^>^ lineas = File::ReadAllLines("Tarjetas.txt");

	String^ separadores = ";";
	for each (String ^ lineaTarjeta in lineas)
	{
		array<String^>^ palabras = lineaTarjeta->Split(separadores->ToCharArray());
		int CodigoPropietario = Convert::ToInt32(palabras[0]);
		String^ NroTarjeta = palabras[1];
		String^ CVV = palabras[2];
		String^ FechaExp = palabras[3];
		String^ TipoTarjeta = palabras[4];

		Tarjeta^ objTarjeta= gcnew Tarjeta(CodigoPropietario, NroTarjeta, CVV, FechaExp, TipoTarjeta);
		this->listaTarjetas->Add(objTarjeta);
	}
}

void GestorTarjeta::EscribirArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaTarjetas->Count);
	for (int i = 0; i < this->listaTarjetas->Count; i++) {
		Tarjeta^ objTarjeta = this->listaTarjetas[i];
		lineasArchivo[i] = objTarjeta->CodigoPropietario + ";" + objTarjeta->NroTarjeta + ";" + objTarjeta->CVV + ";" + objTarjeta->FechaExp + ";" + objTarjeta->TipoTarjeta;
	}
	File::WriteAllLines("Tarjetas.txt", lineasArchivo);
}

void GestorTarjeta::AgregarTarjeta(Tarjeta^ objTarjeta) {
	this->listaTarjetas->Add(objTarjeta);
}

void GestorTarjeta::EliminarTarjeta(String^ NroTarjeta) {
	for (int i = 0; i < this->listaTarjetas->Count; i++) {
		if (this->listaTarjetas[i]->NroTarjeta == NroTarjeta) {
			/*Encontre al que debo eliminar*/
			this->listaTarjetas->RemoveAt(i);
			break;
		}
	}
}

int GestorTarjeta::ObtenerCantidadTarjetasSegunCodigoDePropietario(int codigoPropietario) {
	int j = 0;
	for (int i = 0; i < this->listaTarjetas->Count; i++)
	{
		if (this->listaTarjetas[i]->CodigoPropietario == codigoPropietario) {
			j++;

		}
	}
	return j;

}

Tarjeta^ GestorTarjeta::ObtenerTarjetaLista(int indice) {
	return this->listaTarjetas[indice];
}

int ValidarCreacionTarjeta(String^ NroTarjeta, String^ CVV, String^ FechaExp, String^ TipoTarjeta){
	int esta_completo = 1;
	if (NroTarjeta == "" || CVV == "" || FechaExp == "" || TipoTarjeta == "") {
		esta_completo = 0;
	}
	return esta_completo;
}

int GestorTarjeta::ObtenerCantidadTarjetas() {
	return this->listaTarjetas->Count;
}

void GestorTarjeta::EliminarTarjetaXcodigo(String^ NroTarjeta, int codigoPropietario) {
	for (int i = 0; i < this->listaTarjetas->Count; i++) {
		if (this->listaTarjetas[i]->CodigoPropietario == codigoPropietario&& this->listaTarjetas[i]->NroTarjeta == NroTarjeta) {
			this->listaTarjetas->RemoveAt(i);
			break;
		}
	}
}