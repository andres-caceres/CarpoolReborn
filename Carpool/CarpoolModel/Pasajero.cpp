#include "Pasajero.h"

using namespace CarpoolModel;
Pasajero::Pasajero() {

}
Pasajero::Pasajero(int UserID, int Calificacion) {
	this->CodigoDeUsuario = UserID;
	this->Calificacion = Calificacion;
}
