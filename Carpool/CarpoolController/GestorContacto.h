#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System::Data::SqlClient; //BD

namespace CarpoolController {
	public ref class GestorContacto {
	public:
		//min atributo:lista de objetos de la clase que gestiona
		List<Contactos^>^ listaContactos;
		SqlConnection^ objConexion;

	public:
		GestorContacto();
		void LeerContactosDesdeArchivo();		
		int ObtenerCantidadContactos();
		Contactos^ ObtenerContactoLista(int indice);
		Contactos^ ObtenerContactoxApodo(String^ Apodo, int CodigoA�ador);
		//Contactos^ ObtenerContactoxCodigo(int codigo);
		void AgregarContacto(Contactos^ objContacto);
		void EliminarContactoXuserName(String^ userName, int codigoA�ador);
		void GrabarEnArchivo();		
		//int verificaNuevoUsuario(String^ dni);
		int ValidarRegistro(String^ userNameDelA�adido, String^ Apodo);
		int ObtenerCantidadContactosSegunCodigoDeA�adidor(int codigoA�adidor);
		Contactos^ ObtenerContactoxUserName(String^ UserName, int CodigoA�ador);
		int MismoContacto(String^ UserName, int codigoA�ador);

		void AbrirConexionBD();
		void CerrarConexionBD();
		List<Contactos^>^ BuscarAllBD();
		void GuardarContactoBD(Contactos^ objContacto);
		void BorrarContactoBD(Contactos^ objContacto);
		void GrabarEnBD();
	};
}