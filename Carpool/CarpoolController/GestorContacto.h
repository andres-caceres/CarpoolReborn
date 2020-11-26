#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace CarpoolModel;

namespace CarpoolController {
	public ref class GestorContacto {
	private:
		//min atributo:lista de objetos de la clase que gestiona
		List<Contactos^>^ listaContactos;
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
	};
}