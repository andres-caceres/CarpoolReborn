#include "GestorReporteViajesxMes.h"
#include "GestorViaje.h"

using namespace CarpoolController;
using namespace CarpoolModel;
using namespace System::IO;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace System;

GestorReporteViajesxMes::GestorReporteViajesxMes() {
	this->lista = gcnew List<ViajesxMes^>();
}

void GestorReporteViajesxMes::GenerarReporte(int CodigoUsuario) {
	this->lista->Clear();
	array<String^>^ lineaPasajeroViajes = File::ReadAllLines("pasajerosXviajes.txt");

	array<String^>^ lineas = File::ReadAllLines("Viajes.txt");

	String^ separadores = ";";
	int i = 0;
	int j = 0;
	int contadorViajes = 0;
	String^ separador = "/";
	String^ mes;
	String^ mes_anterior = "";
	List<int>^ listaCodigos;
	listaCodigos = gcnew List<int>();

	for each (String ^ linea2 in lineaPasajeroViajes)
	{
		array<String^>^ palabrasPxV = linea2->Split(separadores->ToCharArray());
		int codigoViaje = Convert::ToInt32(palabrasPxV[0]);
		int codigoPasajero = Convert::ToInt32(palabrasPxV[1]);
		
		listaCodigos->Add(codigoPasajero);
	}

		for each (String ^ linea in lineas)
		{
			j++;
			if (listaCodigos[j] == CodigoUsuario) {
			array<String^>^ palabras = linea->Split(separadores->ToCharArray());
			String^ Fecha = palabras[3];
			array<String^>^ numeros = Fecha->Split(separador->ToCharArray());
			int dia_numero = Convert::ToInt32(numeros[1]);
			int mes_numero = Convert::ToInt32(numeros[0]);
			int anho_numero = Convert::ToInt32(numeros[2]);
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
				int mes_numero_anterior = Convert::ToInt32(numeros[0]);
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
				mes_anterior = mes;

				contadorViajes = 1;
			}
			
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