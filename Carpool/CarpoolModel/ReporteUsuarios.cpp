#include "ReporteUsuarios.h"

using namespace CarpoolModel;

ReporteUsuarios::ReporteUsuarios(String^ TipoDeUsuario, int cantidadUsuarios) {
	this->TipoDeUsuario = TipoDeUsuario;
	this->cantidadUsuarios = cantidadUsuarios;
}