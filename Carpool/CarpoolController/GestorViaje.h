#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System;

namespace CarpoolController {

	public ref class GestorViaje {

	private:
		List<Viaje^>^ listaViajes;

	public:
		GestorViaje();
		//void LeerViajesDesdeArchivo();
		void LeerViajesDesdeArchivo(); //The real G
		void LeerViajesDelConductorDesdeArchivo(Conductor^ objConductor); //The real G MDFK
		Viaje^ ObtenerViajeoxCodigo(int codigo);
		void AgregarViaje(Viaje^ objViaje);
		void EliminarViaje(int codigoEliminar);
		void EscribirArchivo();
		int ObtenerCantidadViajes();
		Viaje^ ObtenerViajeLista(int indice);
		void CargarPasajerosViajes(Viaje^ objViaje);
		//Contactos^ ObtenerViajexCodigo(int codigo);
		List<Viaje^>^ DevolverAllViajes();
		void EscribirPasajerosViajeArchivo();
		int obtenerCodigoViaje();
		int ObtenerCantidadViajesDelConductor(int codigoConductor);
		List<Viaje^>^ BuscarViajesxFecha(String^ fecha);
		void RechazarPasajero(int codigoEliminar, Viaje^ objViaje);
		void AgregarPasajeroAlViaje(int codigoViaje, int CodigoPasajero);
		void EscribirPasajerosViajeArchivoDiseñadoParaEliminarViaje(int codigoEliminar);
		String^ ObtenerFechaXcodigoViaje(int codigoViaje);


	};
}