#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System;

namespace CarpoolController {

	public ref class GestorPasajero {

	public:
		List<Pasajero^>^ listaPasajeros;

	public:
		GestorPasajero();
		void LeerPasajerosDesdeArchivo();
		Pasajero^ BuscarxUserID(int UserID);
		void EscribirArchivo();	
		void AgregarPasajero(Pasajero^ objPasajero);
		void ActualizarCalificacionPasajeros(List<Pasajero^>^ listaPorActualizar);
		//void EscribirArchivo();
		//int ObtenerCantidadContactos();
		//Contacto^ ObtenerContactoLista(int indice);
		//Contacto^ ObtenerContactoxDni(String^ dni);
		//Contacto^ ObtenerContactoxCodigo(int codigo);
	
		//void EliminarContacto(int codigoEliminar);
	};
}