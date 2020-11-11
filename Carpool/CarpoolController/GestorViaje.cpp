#include "GestorViaje.h";
//#include "GestorConductor.h";

using namespace CarpoolController;
using namespace System::IO;

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
		int NumeroPasajeros = Convert::ToInt32(palabras[1]);
		String^ Origen = palabras[2];
		String^ Destino = palabras[3];
		String^ HoraSalida = palabras[4];
		String^ HoraLlegada = palabras[5];
		String^ Tarifa = palabras[6];
		//int codigoConductor = Convert::ToInt32(palabras[7]);
		String^ objConductor = palabras[7];
		//GestorConductor^ objGestorConductor = gcnew GestorConductor();
		//objGestorConductor->LeerConductorDesdeArchivo();
		//Conductor^ objConductor = objGestorConductor->ObtenerConductorxCodigo(codigoConductor);
		Viaje^ objViaje = gcnew Viaje(codigoViaje, NumeroPasajeros, Origen, Destino, HoraSalida, HoraLlegada, Tarifa, objConductor);
		this->listaViajes->Add(objViaje);
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
		lineasArchivo[i] = objViaje->codigoViaje + ";" + objViaje->NumeroPasajeros + ";" + objViaje->Origen + ";" + objViaje->Destino + ";" + objViaje->HoraSalida + ";" + objViaje->HoraLlegada + ";" + objViaje->Tarifa + ";" + objViaje->objConductor;
	}
	File::WriteAllLines("Viajes.txt", lineasArchivo);
}
