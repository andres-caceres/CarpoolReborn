#include "GestorPaypal.h"
#include "GlobalSettings.h"

using namespace CarpoolController;
using namespace CarpoolModel;
using namespace System::IO;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace System;

GestorPaypal::GestorPaypal() {
	this->listaPaypal = gcnew List<Paypal^>();
	this->objConexion = gcnew SqlConnection();
}

void GestorPaypal::AbrirConexionBD() {
	this->objConexion->ConnectionString = "Server=" + ENDPOINT + ";Database=" + DATABASE +
		";User ID=" + USERNAME + ";Password=" + PASSWORD + ";";
	this->objConexion->Open();
}

void GestorPaypal::CerrarConexionBD() {
	this->objConexion->Close();
}

List<Paypal^>^ GestorPaypal::BuscarPaypalXcodigoBD(int CodigoPropietario) {
	List<Paypal^>^ listaPaypalBuscados = gcnew List<Paypal^>;
	AbrirConexionBD();
	SqlDataReader^ objData;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Paypal where CodigoPropietario=" + CodigoPropietario + ";";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		int CodigoPropietario = safe_cast<int>(objData[0]);
		String^ Correo = safe_cast<String^>(objData[1]);
		String^ Password = safe_cast<String^>(objData[2]);

		Paypal^ objPaypal = gcnew Paypal(CodigoPropietario, Correo, Password);
		listaPaypalBuscados->Add(objPaypal);
	}
	objData->Close();
	CerrarConexionBD();
	return listaPaypalBuscados;
}

void GestorPaypal::InsertarPaypal(Paypal^ objPaypal) {
	AbrirConexionBD();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "insert into Paypal values(@p1,@p2,@p3);";
	SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::Int);
	p1->Value = objPaypal->codigoPropietario;
	SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::VarChar, 50);
	p2->Value = objPaypal->correo;
	SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::VarChar, 50);
	p3->Value = objPaypal->contrasenha;
	objQuery->Parameters->Add(p1);
	objQuery->Parameters->Add(p2);
	objQuery->Parameters->Add(p3);
	objQuery->ExecuteNonQuery();
	CerrarConexionBD();
}

void GestorPaypal::BorrarPaypal(String^ correo, int CodigoPropietario) {
	AbrirConexionBD();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "delete from Paypal where CodigoPropietario =" + CodigoPropietario + "and Correo = '" + correo + "';";
	objQuery->ExecuteNonQuery();
	CerrarConexionBD();
}

int GestorPaypal::MismoPaypal(String^ correo, int codigoPropietario) {
	List<Paypal^>^ listaPaypal = BuscarPaypalXcodigoBD(codigoPropietario);
	int mismo_paypal = 0;
	for (int i = 0; i < listaPaypal->Count; i++) {
		if (listaPaypal[i]->codigoPropietario == codigoPropietario && listaPaypal[i]->correo == correo) {
			mismo_paypal = 1;
			break;
		}
	}
	return mismo_paypal;
}