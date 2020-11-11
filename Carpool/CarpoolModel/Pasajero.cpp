#include "Pasajero.h"

using namespace CarpoolModel;
Pasajero::Pasajero() {

}
Pasajero::Pasajero(int UserID, int Calificacion, String^ Posicion) {
	this->CodigoDeUsuario = UserID;
	this->Calificacion = Calificacion;
	this->Posicion = Posicion;
}
