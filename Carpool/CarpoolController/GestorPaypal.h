#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System::Data::SqlClient; /*Esto es para BD*/
using namespace System;

namespace CarpoolController {

	public ref class GestorPaypal {

	private:
		List<Paypal^>^ listaPaypal;
		SqlConnection^ objConexion;

	public:
		GestorPaypal();
		void AbrirConexionBD();
		void CerrarConexionBD();
		List<Paypal^>^ GestorPaypal::BuscarPaypalXcodigoBD(int CodigoPropietario);
		void InsertarPaypal(Paypal^ objPaypal);
		void BorrarPaypal(String^ correo, int CodigoPropietario);
		int MismoPaypal(String^ correo, int codigoPropietario);
	};
}