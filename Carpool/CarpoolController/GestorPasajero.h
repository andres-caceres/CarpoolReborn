#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System;

namespace CarpoolController {

	public ref class GestorPasajero {

	private:
		List<Pasajero^>^ listaPasajeros;

	public:
		GestorPasajero();
		//void GestorPasajero::LeerDatosDesdeArchivo();
		//void EscribirArchivo();
		//int ObtenerCantidadContactos();
		//Contacto^ ObtenerContactoLista(int indice);
		//Contacto^ ObtenerContactoxDni(String^ dni);
		//Contacto^ ObtenerContactoxCodigo(int codigo);
		//void AgregarContacto(Usuario^ objContacto);
		//void EliminarContacto(int codigoEliminar);
	};
}