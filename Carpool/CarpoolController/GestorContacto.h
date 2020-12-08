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
		Contactos^ ObtenerContactoxApodo(String^ Apodo, int CodigoAñador);
		//Contactos^ ObtenerContactoxCodigo(int codigo);
		void AgregarContacto(Contactos^ objContacto);
		void EliminarContactoXuserName(String^ userName, int codigoAñador);
		void GrabarEnArchivo();		
		//int verificaNuevoUsuario(String^ dni);
		int ValidarRegistro(String^ userNameDelAñadido, String^ Apodo);
		int ObtenerCantidadContactosSegunCodigoDeAñadidor(int codigoAñadidor);
		Contactos^ ObtenerContactoxUserName(String^ UserName, int CodigoAñador);
		int MismoContacto(String^ UserName, int codigoAñador);

		void AbrirConexionBD();
		void CerrarConexionBD();
		List<Contactos^>^ BuscarAllBD();
		void GuardarContactoBD(Contactos^ objContacto);
		void BorrarContactoBD(Contactos^ objContacto);
		void GrabarEnBD();
	};
}