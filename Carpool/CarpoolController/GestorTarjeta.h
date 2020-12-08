#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System::Data::SqlClient; /*Esto es para BD*/
using namespace System;

namespace CarpoolController {

	public ref class GestorTarjeta {

	private:
		List<Tarjeta^>^ listaTarjetas;//Ya no se va a usar
		//Para conectar el visual studio a la base de datos//
		SqlConnection^ objConexion;


	public:
		GestorTarjeta();

		void AbrirConexionBD();
		List<Tarjeta^>^ BuscarTarjetasXcodigoBD(int CodigoPropietario);
		void CerrarConexion();

		void LeerTarjetasDesdeArchivo();
		void EscribirArchivo();
		void AgregarTarjeta(Tarjeta^ objTarjeta);
		void EliminarTarjeta(String^ NroTarjeta);
		int ObtenerCantidadTarjetasSegunCodigoDePropietario(int codigoPropietario);
		Tarjeta^ ObtenerTarjetaLista(int indice);
		int ObtenerCantidadTarjetas();
		void EliminarTarjetaXcodigo(String^ NroTarjeta, int codigoPropietario);
		int MismaTarjeta(String^ NroTarjeta, int codigoPropietario, String^ TipoTarjeta);
	};
}