#include "GestorReporteViajesxMes.h"

using namespace CarpoolController;
using namespace System::IO;
using namespace System;

GestorReporteViajesxMes::GestorReporteViajesxMes() {
	this->lista = gcnew List<ViajesxMes^>();
}

void GestorReporteViajesxMes::GenerarReporte() {
	this->lista->Clear();
	array<String^>^ lineas = File::ReadAllLines("Viajes.txt");
	String^ separadores = ";";
	int i = 0;
	String^ Fecha;
	int contadorViajes=0;
	String^ separador = "/";
	String^ mes;
	String^ mes_anterior="";

	for each (String ^ linea in lineas)
	{
		array<String^>^ palabras = Fecha->Split(separador->ToCharArray());
		int dia_numero = Convert::ToInt32(palabras[0]);
		int mes_numero = Convert::ToInt32(palabras[1]);
		int anho_numero = Convert::ToInt32(palabras[2]);

		if (mes_numero == 1) { mes = "Enero"; }
		else if (mes_numero == 2) { mes = "Febrero"; }
		else if (mes_numero == 3) { mes = "Marzo"; }
		else if (mes_numero == 4) { mes = "Abril"; }
		else if (mes_numero == 5) { mes = "Mayo"; }
		else if (mes_numero == 6) { mes = "Junio"; }
		else if (mes_numero == 7) { mes = "Julio"; }
		else if (mes_numero == 8) { mes = "Agosto"; }
		else if (mes_numero == 9) { mes = "Septiembre"; }
		else if (mes_numero == 10) { mes = "Octubre"; }
		else if (mes_numero == 11) { mes = "Noviembre"; }
		else if (mes_numero == 12) { mes = "Diciembre"; }

		if (i == 0) {
			mes_anterior = mes;
			i++;
		}

		if (mes == mes_anterior) {
			contadorViajes++;
		}
		else {
			ViajesxMes^ objViajexMes = gcnew ViajesxMes(mes_anterior, contadorViajes);
			this->lista->Add(objViajexMes);
			mes_anterior = palabras[1];
			contadorViajes = 1;
		}
	}

	ViajesxMes^ objViajexMes = gcnew ViajesxMes(mes_anterior, contadorViajes);
	this->lista->Add(objViajexMes);
}

int GestorReporteViajesxMes::CantidadDetalle() {
	return this->lista->Count;
}

ViajesxMes^ GestorReporteViajesxMes::ObtenerDetalleReporte(int i) {
	return this->lista[i];
}