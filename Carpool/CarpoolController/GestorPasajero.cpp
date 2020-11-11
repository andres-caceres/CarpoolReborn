#include "GestorPasajero.h"

using namespace CarpoolController;
using namespace System;
using namespace System::IO; /*Aqui esta la clase FILE, que es la que maneja la información de archivos de texto*/

GestorPasajero::GestorPasajero() {
	listaPasajeros = gcnew List<Pasajero^>();
}