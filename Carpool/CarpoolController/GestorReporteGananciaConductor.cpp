#include "GestorReporteGananciaConductor.h"

using namespace CarpoolController;
using namespace System::IO;
using namespace System;

GestorReporteGananciaConductor::GestorReporteGananciaConductor() {
	this->lista = gcnew List<GananciaConductor^>();
}

void GestorReporteGananciaConductor::GenerarReporte(Conductor^ objConductor) {
	int codigo = objConductor->CodigoDeUsuario;
	this->lista->Clear();

	array<String^>^ lineas = File::ReadAllLines("Viajes.txt");

	String^ separadores = ";";
	int i = 0;

	int ganancia = 0;
	String^ separador = "/";
	String^ mes;
	String^ mes_anterior = "";
	int gananciaDia = 0;
	

	for each (String ^ linea in lineas) {
		array<String^>^ palabras = linea->Split(separadores->ToCharArray());
		String^ Fecha = palabras[3];
		 gananciaDia = Convert::ToInt32(palabras[7]);
		int codigotxt = Convert::ToInt32(palabras[8]);

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

		if (codigo == codigotxt) {

			if (i == 0) {
				mes_anterior = mes;
				i++;
			}
			if (mes == mes_anterior) {
				ganancia = ganancia + gananciaDia;
			}
			else {
				GananciaConductor^ objGananciaConductor = gcnew GananciaConductor(mes_anterior, ganancia);
				this->lista->Add(objGananciaConductor);
				mes_anterior = mes;
				ganancia = Convert::ToInt32(palabras[7]);
			}

			
				
			
		}

	}

	GananciaConductor^ objGananciaConductor = gcnew GananciaConductor(mes_anterior, ganancia);
	this->lista->Add(objGananciaConductor);
		
	
}

int GestorReporteGananciaConductor::CantidadDetalle() {
	return this->lista->Count;
}

GananciaConductor^ GestorReporteGananciaConductor::ObtenerDetalleReporte(int i) {
	return this->lista[i];
}