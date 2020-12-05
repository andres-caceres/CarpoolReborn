#include "GestorViaje.h"
#include "GestorConductor.h"
#include "GestorRuta.h"
#include "GestorPasajero.h"



using namespace System::IO;
using namespace CarpoolController;
using namespace System::Collections::Generic;


GestorViaje::GestorViaje() {
	this->listaViajes = gcnew List<Viaje^>();
}

void GestorViaje::LeerViajesDesdeArchivo() {
	this->listaViajes->Clear();
	array<String^>^ lineas = File::ReadAllLines("Viajes.txt");
	String^ separadores = ";";
	for each (String ^ lineaViaje in lineas) {
		array<String^>^ palabras = lineaViaje->Split(separadores->ToCharArray());
		int codigoViaje = Convert::ToInt32(palabras[0]);
		String^ HoraSalida = palabras[1];
		String^ HoraLlegada = palabras[2];
		String^ Fecha = palabras[3];
		String^ Estado = palabras[4];
		int nroPasajeros = Convert::ToInt32(palabras[5]);
		int AsientosDisponibles = Convert::ToInt32(palabras[6]);
		String^ Tarifa = palabras[7];
		int codigoRuta = Convert::ToInt32(palabras[8]);
		int codigoConductor = Convert::ToInt32(palabras[9]);

		GestorConductor^ objGestorConductor = gcnew GestorConductor();
		objGestorConductor->LeerConductoresDesdeArchivo();
		Conductor^ objConductor = objGestorConductor->BuscarConductorxUserID(codigoConductor); //Aqui estabas buscando un conductor en una lista que acababas de crear, o sea una lista vacia xd

		GestorRuta^ objGestorRuta = gcnew GestorRuta();
		objGestorRuta->LeerRutasDesdeArchivo();
		Ruta^ objRuta = objGestorRuta->ObtenerRutaxCodigo(codigoRuta);

		Viaje^ objViaje = gcnew Viaje(codigoViaje, HoraSalida, HoraLlegada, Fecha, Estado, nroPasajeros,
			AsientosDisponibles, Tarifa, objRuta, objConductor);

		//pasajeros asociados a los viajes 
		CargarPasajerosViajes(objViaje);
		this->listaViajes->Add(objViaje);

	}
}


void GestorViaje::LeerViajesDesdeArchivo(Conductor^ objConductor) {
	this->listaViajes->Clear();
	array<String^>^ lineas = File::ReadAllLines("Viajes.txt");
	String^ separadores = ";";
	for each (String ^ lineaViaje in lineas) {
		array<String^>^ palabras = lineaViaje->Split(separadores->ToCharArray());
		int codigoViaje = Convert::ToInt32(palabras[0]);
		String^ HoraSalida = palabras[1];
		String^ HoraLlegada = palabras[2];
		String^ Fecha = palabras[3];
		String^ Estado = palabras[4];
		int nroPasajeros = Convert::ToInt32(palabras[5]);
		int AsientosDisponibles = Convert::ToInt32(palabras[6]);
		String^ Tarifa = palabras[7];
		int codigoRuta = Convert::ToInt32(palabras[8]);
		int codigoConductor = Convert::ToInt32(palabras[9]);

		//^ objConductor = objConductor; 

		GestorRuta^ objGestorRuta = gcnew GestorRuta();
		objGestorRuta->LeerRutasDesdeArchivo();
		Ruta^ objRuta = objGestorRuta->ObtenerRutaxCodigo(codigoRuta);

		Viaje^ objViaje = gcnew Viaje(codigoViaje, HoraSalida, HoraLlegada, Fecha, Estado, nroPasajeros,
			AsientosDisponibles, Tarifa, objRuta, objConductor);

		//pasajeros asociados a los viajes 
		CargarPasajerosViajes(objViaje);
		this->listaViajes->Add(objViaje);

	}
}


void GestorViaje::CargarPasajerosViajes(Viaje^ objViaje) {
	objViaje->listaPasajeros->Clear();
	array<String^>^ lineasArchivo = File::ReadAllLines("pasajerosXviajes.txt");
	String^ separador = ";";
	for each (String ^ linea in lineasArchivo) {
		array<String^>^ palabras = linea->Split(separador->ToCharArray());
		int codigoV = Convert::ToInt32(palabras[0]);
		int codigoP = Convert::ToInt32(palabras[1]);
		//int codigoV = Convert::ToInt32(palabras[1]);
		//int codigoP = Convert::ToInt32(palabras[0]);

		if (objViaje->codigoViaje == codigoV) {
			GestorPasajero^ objGestorPasajero = gcnew GestorPasajero();
			objGestorPasajero->LeerPasajerosDesdeArchivo();
			Pasajero^ objPasajero = objGestorPasajero->BuscarxUserID(codigoP);
			objViaje->listaPasajeros->Add(objPasajero);
		}
	}
}



int GestorViaje::ObtenerCantidadViajes() {
	return this->listaViajes->Count;
}

Viaje^ GestorViaje::ObtenerViajeLista(int indice) {
	return this->listaViajes[indice];

}

void GestorViaje::AgregarViaje(Viaje^ objViaje) {
	this->listaViajes->Add(objViaje);
}

void GestorViaje::EliminarViaje(int codigoEliminar) {
	for (int i = 0; i < this->listaViajes->Count; i++) {
		if (this->listaViajes[i]->codigoViaje == codigoEliminar) {
			this->listaViajes->RemoveAt(i);
			break;
		}
	}
}

void GestorViaje::EscribirArchivo() {

	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaViajes->Count);
	for (int i = 0; i < this->listaViajes->Count; i++) {
		Viaje^ objViaje = this->listaViajes[i];
		lineasArchivo[i] = objViaje->codigoViaje + ";" + objViaje->HoraSalida + ";" + objViaje->HoraLlegada + ";" + objViaje->Fecha + ";" + objViaje->Estado + ";" + objViaje->NumeroPasajeros + ";" + objViaje->AsientosDisponibles + ";" + objViaje->Tarifa + ";" + objViaje->objRuta->CodigoViaje + ";" + objViaje->objConductor->CodigoDeUsuario;
	}
	File::WriteAllLines("Viajes.txt", lineasArchivo);
	EscribirPasajerosViajeArchivo();

}

	void GestorViaje::EscribirPasajerosViajeArchivo()
	{
		int cantPasajerosViaje = 0;
		for (int i = 0; i < this->listaViajes->Count; i++)
		{
			cantPasajerosViaje = cantPasajerosViaje + this->listaViajes[i]->listaPasajeros->Count;
		}
		array<String^>^ lineas = gcnew array<String^>(cantPasajerosViaje);
		int k = 0;
		for (int i = 0; i < this->listaViajes->Count; i++)
		{
			Viaje^ objViaje = this->listaViajes[i];
			for (int j = 0; j < objViaje->listaPasajeros->Count; j++) {
				lineas[k] = objViaje->codigoViaje + "," + objViaje->listaPasajeros[j]->CodigoDeUsuario;
				k++;
			}
		}
		File::WriteAllLines("pasajerosXviaje.txt", lineas);
	}



List<Viaje^>^ GestorViaje::DevolverAllViajes() {
	return this->listaViajes;
}

Viaje^ GestorViaje::ObtenerViajeoxCodigo(int codigo) {

	Viaje^ objViajeBuscado = nullptr;
	for (int i = 0; i < this->listaViajes->Count; i++)
	{
		if (this->listaViajes[i]->codigoViaje == codigo) {
			objViajeBuscado = this->listaViajes[i];
			break;
		}
	}
	return objViajeBuscado;
}
