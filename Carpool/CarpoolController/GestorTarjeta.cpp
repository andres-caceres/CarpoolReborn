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