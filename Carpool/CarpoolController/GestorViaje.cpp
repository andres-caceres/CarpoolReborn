#include "GestorViaje.h"
#include "GestorCoordenadas.h"
#include "GestorConductor.h"
//#include "GestorRuta.h"
#include "GestorPasajero.h"


using namespace System::IO;
using namespace CarpoolController;
using namespace System::Collections::Generic;


GestorViaje::GestorViaje() {
	this->listaViajes = gcnew List<Viaje^>();
}

//
//void GestorViaje::LeerViajesDesdeArchivo() {
//	this->listaViajes->Clear();
//	array<String^>^ lineas = File::ReadAllLines("Viajes.txt");
//	String^ separadores = ";";
//	for each (String ^ lineaViaje in lineas) {
//		array<String^>^ palabras = lineaViaje->Split(separadores->ToCharArray());
//		int codigoViaje = Convert::ToInt32(palabras[0]);
//		String^ HoraSalida = palabras[1];
//		String^ HoraLlegada = palabras[2];
//		String^ Fecha = palabras[3];
//		String^ Estado = palabras[4];
//		int nroPasajeros = Convert::ToInt32(palabras[5]);
//		int AsientosDisponibles = Convert::ToInt32(palabras[6]);
//		String^ Tarifa = palabras[7];
//		int codigoRuta = Convert::ToInt32(palabras[8]);
//		int codigoConductor = Convert::ToInt32(palabras[9]);
//
//		GestorConductor^ objGestorConductor = gcnew GestorConductor();
//		objGestorConductor->LeerConductoresDesdeArchivo();
//		Conductor^ objConductor = objGestorConductor->BuscarConductorxUserID(codigoConductor); //Aqui estabas buscando un conductor en una lista que acababas de crear, o sea una lista vacia xd
//
//		GestorRuta^ objGestorRuta = gcnew GestorRuta();
//		objGestorRuta->LeerRutasDesdeArchivo();
//		Ruta^ objRuta = objGestorRuta->ObtenerRutaxCodigo(codigoRuta);
//
//		Viaje^ objViaje = gcnew Viaje(codigoViaje, HoraSalida, HoraLlegada, Fecha, Estado, nroPasajeros,
//			AsientosDisponibles, Tarifa, objRuta, objConductor);
//
//		//pasajeros asociados a los viajes 
//		CargarPasajerosViajes(objViaje);
//		this->listaViajes->Add(objViaje);
//
//	}
//}


void GestorViaje::LeerViajesDesdeArchivo() { //Le estaba dando todos los viajes al mismo conductor xd
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
		//int codigoViajeParaRuta = Convert::ToInt32(palabras[8]);
		int codigoConductor = Convert::ToInt32(palabras[8]);

		GestorConductor^ objGestorConductor = gcnew GestorConductor();
		objGestorConductor->LeerConductoresDesdeArchivo();
		Conductor^ objConductor = gcnew Conductor();
		objConductor = objGestorConductor->BuscarConductorxUserID(codigoConductor);

		GestorCoordenadas^ objGestorCoordenadas = gcnew GestorCoordenadas();
		objGestorCoordenadas->leerListaDeListasDeCoordenadasFromTxt();
		ListaCoordenadas^ objListaCoordenadas = gcnew ListaCoordenadas();
		objListaCoordenadas = objGestorCoordenadas->obtenerListaCoordenadasConCodigo(codigoViaje);


		//^ objConductor = objConductor; 

		//GestorRuta^ objGestorRuta = gcnew GestorRuta();
		//objGestorRuta->LeerRutasDesdeArchivo();
		//Ruta^ objRuta = objGestorRuta->ObtenerRutaxCodigo(codigoRuta);			OK, EL ERROR ERA NO HACER GCNEW DE RUTA XD

		Viaje^ objViaje = gcnew Viaje(codigoViaje, HoraSalida, HoraLlegada, Fecha, Estado, nroPasajeros,
			AsientosDisponibles, Tarifa, objListaCoordenadas, objConductor);

		//pasajeros asociados a los viajes 
		CargarPasajerosViajes(objViaje);
		this->listaViajes->Add(objViaje);
	}
}

void GestorViaje::LeerViajesDelConductorDesdeArchivo(Conductor^ objConductor) {
	this->listaViajes->Clear();
	array<String^>^ lineas = File::ReadAllLines("Viajes.txt");
	String^ separadores = ";";
	for each (String ^ lineaViaje in lineas) {
		array<String^>^ palabras = lineaViaje->Split(separadores->ToCharArray());
		int codigoViaje = Convert::ToInt32(palabras[0]);
		String^ HoraSalida = palabras[1];
		String^ HoraLlegada = palabras[2];
		String^ Fecha = palabras[3];
		String^ Estado = palabras[4];					//descarto estado? :/
		int nroPasajeros = Convert::ToInt32(palabras[5]);
		int AsientosDisponibles = Convert::ToInt32(palabras[6]);
		String^ Tarifa = palabras[7];
		//int codigoViajeParaRuta = Convert::ToInt32(palabras[8]);
		int codigoConductor = Convert::ToInt32(palabras[8]);

		GestorCoordenadas^ objGestorCoordenadas = gcnew GestorCoordenadas();
		objGestorCoordenadas->leerListaDeListasDeCoordenadasFromTxt();
		ListaCoordenadas^ objListaCoordenadas = gcnew ListaCoordenadas();
		objListaCoordenadas = objGestorCoordenadas->obtenerListaCoordenadasConCodigo(codigoViaje);
		//^ objConductor = objConductor; 

		if (codigoConductor == objConductor->CodigoDeUsuario) {


			Viaje^ objViaje = gcnew Viaje(codigoViaje, HoraSalida, HoraLlegada, Fecha, Estado, nroPasajeros,
				AsientosDisponibles, Tarifa, objListaCoordenadas, objConductor);

			//pasajeros asociados a los viajes 
			CargarPasajerosViajes(objViaje);
			this->listaViajes->Add(objViaje);
		}
	}
}
int GestorViaje::ObtenerCantidadViajesDelConductor(int codigoConductor) {
	int Contador = 0;
	for (int i = 0; i < this->listaViajes->Count; i++) {
		if (this->listaViajes[i]->objConductor->CodigoDeUsuario == codigoConductor) {
			Contador++;
		}
	}
	return Contador;
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
		lineasArchivo[i] = objViaje->codigoViaje + ";" + objViaje->HoraSalida + ";" + objViaje->HoraLlegada + ";" + objViaje->Fecha + ";" + objViaje->Estado + ";" + objViaje->NumeroPasajeros + ";" + objViaje->AsientosDisponibles + ";" + objViaje->Tarifa + ";" + objViaje->objConductor->CodigoDeUsuario;
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
				lineas[k] = objViaje->codigoViaje + ";" + objViaje->listaPasajeros[j]->CodigoDeUsuario;
				k++;
			}
		}
		File::WriteAllLines("pasajerosXviajes.txt", lineas);
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

int GestorViaje::obtenerCodigoViaje() {
	int CodigoMasAlto = 0;
	GestorViaje^ objGestorViajeProvisional = gcnew GestorViaje();
	objGestorViajeProvisional->LeerViajesDesdeArchivo();

	array<String^>^ lineas = File::ReadAllLines("Viajes.txt");
	String^ separadores = ";";

	for each (String ^ lineaViaje in lineas) {
		array<String^>^ palabras = lineaViaje->Split(separadores->ToCharArray());
		int codigoViaje = Convert::ToInt32(palabras[0]);
		if (codigoViaje > CodigoMasAlto) {
			CodigoMasAlto = codigoViaje;
		}
	}
	return CodigoMasAlto+1;
}


List<Viaje^>^ GestorViaje::BuscarViajesxFecha(String^ fecha) {
	List<Viaje^>^ listaViajesEncontrados = gcnew List<Viaje^>();

	for (int i = 0; i < this->listaViajes->Count; i++) {
		Viaje^ objViaje = this->listaViajes[i];
		if (objViaje->Fecha == fecha) {
			listaViajesEncontrados->Add(objViaje);
		}
	}
	return listaViajesEncontrados;
}

void GestorViaje::RechazarPasajero(int codigoEliminar, Viaje^ objViaje) {
	for (int i = 0; i < objViaje->listaPasajeros->Count; i++) {
		if (objViaje->listaPasajeros[i]->CodigoDeUsuario == codigoEliminar) {
			objViaje->listaPasajeros->RemoveAt(i);
			break;
		}
	}
}


void GestorViaje::AgregarPasajeroAlViaje(int codigoViaje, int CodigoPasajero) {


	int cantPasajerosViaje = 0;
	for (int i = 0; i < this->listaViajes->Count; i++)
	{
		cantPasajerosViaje = cantPasajerosViaje + this->listaViajes[i]->listaPasajeros->Count;
	}
	array<String^>^ lineas = gcnew array<String^>(cantPasajerosViaje + 1);
	int k = 0;
	for (int i = 0; i < this->listaViajes->Count; i++)
	{
		Viaje^ objViaje = this->listaViajes[i];
		for (int j = 0; j < objViaje->listaPasajeros->Count; j++) {
			lineas[k] = objViaje->codigoViaje + ";" + objViaje->listaPasajeros[j]->CodigoDeUsuario;
			k++;
		}
	}
	lineas[cantPasajerosViaje] = Convert::ToString(codigoViaje) + ";" + Convert::ToString(CodigoPasajero);
	File::WriteAllLines("pasajerosXviajes.txt", lineas);

}




