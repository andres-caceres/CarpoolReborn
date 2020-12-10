#include "GestorReporteGananciaConductor.h"

using namespace CarpoolController;
using namespace System::IO;
using namespace System;

GestorReporteGananciaConductor::GestorReporteGananciaConductor() {
	this->lista = gcnew List<ReporteGananciaConductor^>();
}


String^ GestorReporteGananciaConductor::DevuelveMes(array<String^>^ palabras) {
	String^ separadores = "/";
	String^ Mes = palabras[3]->Split(separadores->ToCharArray());

}



void GestorReporteGananciaConductor::GenerarReporte() {
	this->lista->Clear();
	array<String^>^ lineas = File::ReadAllLines("Viajes.txt");
	String^ separadores = ";";
	int i = 0;
	int contadorDineroh = 0;
	String^ MesAnterior = "";
	for each (String ^ linea in lineas)
	{
		array<String^>^ palabras = linea->Split(separadores->ToCharArray());

		if (i == 0) {
			diaAnterior = palabras[1];
			i++;
		}
		//palabras[1] ubicacion de fecha en el txt aparcamientos
		if (palabras[1] == diaAnterior) {
			contadorAparcamientos++;
		}
		else {
			ReporteAparcamiento^ objReporte = gcnew ReporteAparcamiento(diaAnterior, contadorAparcamientos);
			this->lista->Add(objReporte);
			diaAnterior = palabras[1];//update la variable
			contadorAparcamientos = 1;//updatea la variable
		}
	}
	//para cargar el ultimo elemento 
	ReporteGananciaConductor^ objReporte = gcnew ReporteGananciaConductor(diaAnterior, contadorAparcamientos);
	this->lista->Add(objReporte);
}

int GestorReporteGananciaConductor::CantidadDetalle() {
	return this->lista->Count;
}

ReporteGananciaConductor^ GestorReporteGananciaConductor::ObtenerDetalleReporte(int i) {
	return this->lista[i];
}