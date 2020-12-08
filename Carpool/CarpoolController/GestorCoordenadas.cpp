#include "GestorCoordenadas.h"
#include "GestorViaje.h"

using namespace CarpoolController;
//using namespace CarpoolModel;
using namespace System;
using namespace System::IO;

GestorCoordenadas::GestorCoordenadas() {

	listaCoordenadas = gcnew ListaCoordenadas();
	listaListasCoordenadas = gcnew List<ListaCoordenadas^>();

}



void GestorCoordenadas::AgregarParDeCoordenadasAListaCoordenadas(int coordenadaX, int coordenadaY) {
	
	Coordenadas^ objCoordenadas = gcnew Coordenadas(coordenadaX, coordenadaY);
	this->listaCoordenadas->objListaCoordenadas->Add(objCoordenadas);


}

void GestorCoordenadas::AgregarListaCoordenadasAListaDeListasCoordenadas(ListaCoordenadas^ listaCoordenadas) {

	this->listaListasCoordenadas->Add(listaCoordenadas);
}

ListaCoordenadas^ GestorCoordenadas::GiveMeListaCoordenadas() {
	return this->listaCoordenadas;
}


//
//void GestorCoordenadas::ConvertirListaCoordenadasEnString(List<Coordenadas^>^ listaGenericaCoordenadas, String^ CadenaDeTexto) {
//	
//	for (int i = 0; i < 50; i++) {
//		Coordenadas^ objCoordenadasProvisionales = listaGenericaCoordenadas[i];		
//		CadenaDeTexto = objCoordenadasProvisionales->posicionX + ";" + objCoordenadasProvisionales->posicionY;
//	}
//}

void GestorCoordenadas::saveCoordinatesListAndTripCodeInTxt(int tripCode) {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaListasCoordenadas->Count);
	String^ CadenaDeTexto = nullptr; 
	String^ CadenaDeTextoAlternative = nullptr;
	int Contador = 0;
	GestorViaje^ objGestorViajeProvisional = gcnew GestorViaje();
	objGestorViajeProvisional->LeerViajesDesdeArchivo();
	Viaje^ objViajeProvisional = gcnew Viaje();


	for (int i = 0; i < this->listaListasCoordenadas->Count; i++) {
		ListaCoordenadas^ objListaCoordenadasProvisionales = gcnew ListaCoordenadas();

		objListaCoordenadasProvisionales = this->listaListasCoordenadas[i];
		//Convertimos la lista de coordenadas en una cadena de texto
		for (int i = 0; i < 25; i++) {
			Coordenadas^ objCoordenadasProvisionales = objListaCoordenadasProvisionales->objListaCoordenadas[i];
			CadenaDeTexto = CadenaDeTexto + ";" + objCoordenadasProvisionales->posicionX + ";" + objCoordenadasProvisionales->posicionY;
			CadenaDeTextoAlternative = CadenaDeTexto;
			
		}
		CadenaDeTexto = "";
		Contador++;

		if (Contador < this->listaListasCoordenadas->Count) {

			objViajeProvisional = objGestorViajeProvisional->ObtenerViajeLista(i);

			lineasArchivo[i] = objViajeProvisional->codigoViaje + CadenaDeTextoAlternative;
		}
		else{
			

			lineasArchivo[i] = Convert::ToString(tripCode) + CadenaDeTextoAlternative;
		}
		//lineasArchivo[i] = objListaCoordenadas->   ConvertirListaCoordenadasEnString or smth
	}
	File::WriteAllLines("ListaListasCoordenadas.txt", lineasArchivo);

}



void GestorCoordenadas::leerListaDeListasDeCoordenadasFromTxt() {
	this->listaListasCoordenadas->Clear();
	array<String^>^ lineas = File::ReadAllLines("ListaListasCoordenadas.txt");

	String^ separadores = ";";
	for each (String ^ lineaCoordenadas in lineas) {
		array<String^>^ palabras = lineaCoordenadas->Split(separadores->ToCharArray());

		String^ codigoViaje = palabras[0];

		ListaCoordenadas^ listaCoordenadasProvisional = gcnew ListaCoordenadas();
		listaCoordenadasProvisional-> CodigoViaje = Convert::ToInt32(codigoViaje);
		//listaCoordenadasProvisional->
		for (int i = 1; i < 50; i=i+2) {
			Coordenadas^ objCoordenadasProvisionales = gcnew Coordenadas(Convert::ToInt32(palabras[i]), Convert::ToInt32(palabras[i + 1]));
			listaCoordenadasProvisional->objListaCoordenadas->Add(objCoordenadasProvisionales);
		}
		//listaCoordenadasProvisional->add()
		
		listaListasCoordenadas->Add(listaCoordenadasProvisional);

	}

}

ListaCoordenadas^ GestorCoordenadas::obtenerListaCoordenadasConCodigo(int codigoViaje) {

	ListaCoordenadas^ objListaCoordenadasProvisional = gcnew ListaCoordenadas();

	for (int i = 0; i < this->listaListasCoordenadas->Count; i++) {
		
		if (listaListasCoordenadas[i]->CodigoViaje == codigoViaje) {
			objListaCoordenadasProvisional=	listaListasCoordenadas[i];
			break;
		}
	}
	return objListaCoordenadasProvisional;
}

//void obtenerFiguraAPartirDeCoordenadasConCodigo(int codigoViaje);



//
//void GestorSeguridad::LeerSeguridadDesdeArchivo() {
//	this->listaSeguridad->Clear();
//	array<String^>^ lineas = File::ReadAllLines("Seguridad.txt");
//
//	String^ separadores = ";";
//	for each (String ^ lineaSeguridad in lineas)
//	{
//		array<String^>^ palabras = lineaSeguridad->Split(separadores->ToCharArray());
//		String^ DniSeguro = palabras[0];
//		String^ EmisionDni = palabras[1];
//		String^ Pregunta = palabras[2];
//		String^ Respuesta = palabras[3];
//
//		Seguridad^ objSeguridad = gcnew Seguridad(DniSeguro, EmisionDni, Pregunta, Respuesta);
//		this->listaSeguridad->Add(objSeguridad);
//	}
//}
