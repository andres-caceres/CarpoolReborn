#include "Seguridad.h"

using namespace CarpoolModel;

Seguridad::Seguridad(String^ DniSeguro, String^ EmisionDni, String^ Pregunta, String^ Respuesta) {
	this->DniSeguro = DniSeguro;
	this->EmisionDni = EmisionDni;
	this->Pregunta = Pregunta;
	this->Respuesta = Respuesta;

}

Seguridad::Seguridad() {

}