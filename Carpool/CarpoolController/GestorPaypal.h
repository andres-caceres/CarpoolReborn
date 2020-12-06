#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System;

namespace CarpoolController {

	public ref class GestorPaypal {

	private:
		List<Paypal^>^ listaPaypal;

	public:
		GestorPaypal();
		void LeerPaypalDesdeArchivo();
		void EscribirArchivo();
		void AgregarPaypal(Paypal^ objPaypal);
		//void EliminarPaypal(String^ correo);
		//int ObtenerCantidadTarjetasSegunCodigoDePropietario(int codigoPropietario);
		Paypal^ ObtenerPaypalLista(int indice);
		int ObtenerCantidadPaypal();
		void EliminarPaypalXcodigo(String^ correo, int codigoPropietario);
		int MismoPaypal(String^ correo, int codigoPropietario);
	};
}