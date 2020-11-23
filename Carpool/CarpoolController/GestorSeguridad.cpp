#include "GestorSeguridad.h"

using namespace CarpoolController;
using namespace CarpoolModel;
using namespace System::IO;
using namespace System::Text;

GestorSeguridad::GestorSeguridad() {
	this->listaSeguridad = gcnew List<Seguridad^>();
}

void GestorSeguridad::LeerSeguridadDesdeArchivo() {
	this->listaSeguridad->Clear();
	array<String^>^ lineas = File::ReadAllLines("Seguridad.txt");

	String^ separadores = ";";
	for each (String ^ lineaSeguridad in lineas)
	{
		array<String^>^ palabras = lineaSeguridad->Split(separadores->ToCharArray());
		String^ DniSeguro = palabras[0];
		String^ EmisionDni = palabras[1];
		String^ Pregunta = palabras[2];
		String^ Respuesta = palabras[3];

		Seguridad^ objSeguridad = gcnew Seguridad(DniSeguro, EmisionDni, Pregunta, Respuesta);
		this->listaSeguridad->Add(objSeguridad);
	}
}

int GestorSeguridad::SeguridadLlena(String^ EmisionDNI, String^ Pregunta, String^ Respuesta) {
	int esta_completo = 1;
	if ((EmisionDNI == "") || (Pregunta == "") || (Respuesta == "")) {
		esta_completo = 0;
	}
	return esta_completo;
}

int GestorSeguridad::validarSeguridad(String^ DniSeguro, String^ EmisionDNI, String^ Respuesta) {
	int es_valido = 0;
	for (int i = 0; i < this->listaSeguridad->Count; i++) {
		if ((this->listaSeguridad[i]->DniSeguro == DniSeguro) && (this->listaSeguridad[i]->EmisionDni == EmisionDNI) && (this->listaSeguridad[i]->Respuesta == Respuesta)) {
			es_valido = 1;
			break;
		}
	}
	return es_valido;
}

void GestorSeguridad::AgregarSeguridad(Seguridad^ objSeguridad) {
	this->listaSeguridad->Add(objSeguridad);
}

String^ GestorSeguridad::ObtenerPregunta(String^ DniSeguro) {
	String^ PreguntaObtenida;
	for (int i = 0; i < this->listaSeguridad->Count; i++) {
		if ((this->listaSeguridad[i]->DniSeguro == DniSeguro)) {
			PreguntaObtenida = listaSeguridad[i]->Pregunta;
			break;
		}
	}
	return PreguntaObtenida;
}

void GestorSeguridad::EscribirArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaSeguridad->Count);
	for (int i = 0; i < this->listaSeguridad->Count; i++) {
		Seguridad^ objSeguridad = this->listaSeguridad[i];
		lineasArchivo[i] = objSeguridad->DniSeguro + ";" + objSeguridad->EmisionDni + ";" + objSeguridad->Pregunta + ";" + objSeguridad->Respuesta;
	}
	File::WriteAllLines("Seguridad.txt", lineasArchivo);
}
