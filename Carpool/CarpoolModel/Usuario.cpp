#include "Usuario.h"

using namespace CarpoolModel;

Usuario::Usuario(String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno, String^ DNI, String^ Correo, String^ userName, String^ password, int tipoUsuario) {
	this->Nombre = Nombre;
	this->ApellidoPaterno = ApellidoPaterno;
	this->ApellidoMaterno = ApellidoMaterno;
	this->DNI = DNI;
	this->Correo = Correo;
	this->userName = userName;
	this->password = password;
	this->tipoUsuario = tipoUsuario;
}

Usuario::Usuario() {

}