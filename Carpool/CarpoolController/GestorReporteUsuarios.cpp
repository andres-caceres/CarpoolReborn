#include "GestorReporteUsuarios.h"

using namespace CarpoolController;
using namespace System::IO;
using namespace System;

GestorReporteUsuarios::GestorReporteUsuarios() {
	this->lista = gcnew List<ReporteUsuarios^>();
}

void GestorReporteUsuarios::GenerarReporte() {
	this->lista->Clear();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");
	String^ separadores = ";";


	int contadorPasajeros = 0;
	int contadorConductores = 0;
	
	for each (String ^ linea in lineas)
	{
		array<String^>^ palabras = linea->Split(separadores->ToCharArray());

		if (Convert::ToInt32(palabras[8]) == 2) {
			contadorPasajeros++;
		}
		if (Convert::ToInt32(palabras[8]) == 3) {
			contadorConductores++;
		}
		//else {
		//	ReporteUsuarios^ objReporte = gcnew ReporteUsuarios(tipoUsuario, contadorPasajeros);
		//	this->lista->Add(objReporte);
		//	diaAnterior = palabras[1];
		//	contadorAparcamientos = 1;
		//}
	}
	ReporteUsuarios^ objReporteConductores = gcnew ReporteUsuarios(2, contadorConductores);
	ReporteUsuarios^ objReportePasajeros= gcnew ReporteUsuarios(3, contadorPasajeros);
	this->lista->Add(objReporteConductores);
	this->lista->Add(objReportePasajeros);
}

int GestorReporteUsuarios::CantidadDetalle() {
	return this->lista->Count;
}

ReporteUsuarios^ GestorReporteUsuarios::ObtenerDetalleReporte(int i) {
	return this->lista[i];
}