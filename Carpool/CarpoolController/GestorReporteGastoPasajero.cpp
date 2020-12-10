#include "GestorReporteGastoPasajero.h"

using namespace CarpoolController;
using namespace System::IO;
using namespace System;

GestorReporteGastoPasajero::GestorReporteGastoPasajero() {
	this->lista = gcnew List<GastoPasajero^>();
}

void GestorReporteGastoPasajero::GenerarReporte(Usuario^ objUsuario) {
	int codigo = objUsuario->CodigoDeUsuario;
	this->lista->Clear();

	array<String^>^ pasajerosxviajes = File::ReadAllLines("pasajerosXviajes.txt");
	array<String^>^ viajes = File::ReadAllLines("Viajes.txt");


	String^ separadores = ";";
	int i = 0;
	int gasto = 0;
	String^ separador = "/";
	String^ mes;
	String^ mes_anterior = "";
	int gastoDia = 0;

	for each (String ^ lineapasajeroXviaje in pasajerosxviajes) {
		array<String^>^ lazoviaje = lineapasajeroXviaje->Split(separadores->ToCharArray());
		int codigoV = Convert::ToInt32(lazoviaje[0]);
		int codigoP = Convert::ToInt32(lazoviaje[1]);
		if (codigoP = objUsuario->CodigoDeUsuario) {



			for each (String ^ lineaviaje in viajes) {
				array<String^>^ palabras = lineaviaje->Split(separadores->ToCharArray());
				String^ Fecha = palabras[3];
				gastoDia = Convert::ToInt32(palabras[7]);
				int codigoviaje = Convert::ToInt32(palabras[0]);

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

				if (codigoV == codigoviaje) {

					if (i == 0) {
						mes_anterior = mes;
						i++;
					}
					if (mes == mes_anterior) {
						gasto = gasto + gastoDia;
					}
					else {
						GastoPasajero^ objGastoPasajero = gcnew GastoPasajero(mes_anterior, gasto);
						this->lista->Add(objGastoPasajero);
						mes_anterior = mes;
						gasto = Convert::ToInt32(palabras[7]);
					}

				}

			}

		}


	}
}

int GestorReporteGastoPasajero::CantidadDetalle() {
	return this->lista->Count;
}

GastoPasajero^ GestorReporteGastoPasajero::ObtenerDetalleReporte(int i) {
	return this->lista[i];
}