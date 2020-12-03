#include "GestorCoordenadas.h"

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
	String^ CadenaDeTexto = nullptr; //questionmark
	for (int i = 0; i < this->listaListasCoordenadas->Count; i++) {
		ListaCoordenadas^ objListaCoordenadasProvisionales = this->listaListasCoordenadas[i];
		//Convertimos la lista de coordenadas en una cadena de texto
		for (int i = 0; i < 50; i++) {
			Coordenadas^ objCoordenadasProvisionales = objListaCoordenadasProvisionales->objListaCoordenadas[i];
			CadenaDeTexto = CadenaDeTexto + ";" + objCoordenadasProvisionales->posicionX + ";" + objCoordenadasProvisionales->posicionY;
		}

		lineasArchivo[i] = Convert::ToString(tripCode) + CadenaDeTexto;



		//lineasArchivo[i] = objListaCoordenadas->   ConvertirListaCoordenadasEnString or smth
	}
	File::WriteAllLines("ListaListasCoordenadas.txt", lineasArchivo);

}



void GestorCoordenadas::readCoordinatesListFromTxt() {
	this->listaListasCoordenadas->Clear();
	array<String^>^ lineas = File::ReadAllLines("ListaListasCoordenadas.txt");

	String^ separadores = ";";
	for each (String ^ lineaCoordenadas in lineas) {
		array<String^>^ palabras = lineaCoordenadas->Split(separadores->ToCharArray());

		String^ codigoViaje = palabras[0];

	}






}



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
