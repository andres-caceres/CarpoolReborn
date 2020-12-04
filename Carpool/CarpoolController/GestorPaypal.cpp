#include "GestorPaypal.h"

using namespace CarpoolController;
using namespace CarpoolModel;
using namespace System::IO;
using namespace System::Text;

GestorPaypal::GestorPaypal() {
	this->listaPaypal = gcnew List<Paypal^>();
}

void GestorPaypal::LeerPaypalDesdeArchivo() {
	this->listaPaypal->Clear();
	array<String^>^ lineas = File::ReadAllLines("Paypal.txt");

	String^ separadores = ";";
	for each (String ^ lineaPaypal in lineas)
	{
		array<String^>^ palabras = lineaPaypal->Split(separadores->ToCharArray());
		int CodigoPropietario = Convert::ToInt32(palabras[0]);
		String^ correo = palabras[1];
		String^ contrasenha = palabras[2];

		Paypal^ objPaypal = gcnew Paypal(CodigoPropietario, correo, contrasenha);
		this->listaPaypal->Add(objPaypal);
	}
}

void GestorPaypal::EscribirArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaPaypal->Count);
	for (int i = 0; i < this->listaPaypal->Count; i++) {
		Paypal^ objPaypal = this->listaPaypal[i];
		lineasArchivo[i] = objPaypal->codigoPropietario + ";" + objPaypal->correo + ";" + objPaypal->contrasenha;
	}
	File::WriteAllLines("Paypal.txt", lineasArchivo);
}

void GestorPaypal::AgregarPaypal(Paypal^ objPaypal) {
	this->listaPaypal->Add(objPaypal);
}

Paypal^ GestorPaypal::ObtenerPaypalLista(int indice) {
	return this->listaPaypal[indice];
}

int GestorPaypal::ObtenerCantidadPaypal() {
	return this->listaPaypal->Count;
}

void GestorPaypal::EliminarPaypalXcodigo(String^ correo, int codigoPropietario) {
	for (int i = 0; i < this->listaPaypal->Count; i++) {
		if (this->listaPaypal[i]->codigoPropietario == codigoPropietario && this->listaPaypal[i]->correo == correo) {
			this->listaPaypal->RemoveAt(i);
			break;
		}
	}
}