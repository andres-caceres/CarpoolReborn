#include "GestorReporteUsuarios.h"
#include "GlobalSettings.h"

using namespace CarpoolController;
using namespace System::IO;
using namespace System;

GestorReporteUsuarios::GestorReporteUsuarios() {
	this->lista = gcnew List<ReporteUsuarios^>();
	this->objConexion = gcnew SqlConnection();
}

void GestorReporteUsuarios::AbrirConexionBD() {
	this->objConexion->ConnectionString = "Server=" + ENDPOINT + ";Database=" + DATABASE +
		";User ID=" + USERNAME + ";Password=" + PASSWORD + ";";
	this->objConexion->Open();
}

void GestorReporteUsuarios::CerrarConexionBD() {
	this->objConexion->Close();
}

int GestorReporteUsuarios::ObtenerNumeroDeUsuariosPorTipo(int tipoUsuario) {
	List<int>^ listaCodigos;
	listaCodigos = gcnew List<int>();

	AbrirConexionBD();
	SqlDataReader^ objData;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Usuario where tipoUsuario=" + tipoUsuario + ";";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		int  CodigoDeUsuario = safe_cast<int>(objData[0]);
		listaCodigos->Add(CodigoDeUsuario);
	}
	int numero = listaCodigos->Count;
	CerrarConexionBD();
	return numero;
}

void GestorReporteUsuarios::GenerarReporte() {
	this->lista->Clear();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");
	String^ separadores = ";";


	int contadorPasajeros = ObtenerNumeroDeUsuariosPorTipo(2);
	int contadorConductores = ObtenerNumeroDeUsuariosPorTipo(3);
	
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