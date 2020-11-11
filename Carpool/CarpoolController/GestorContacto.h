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
		Contactos^ ObtenerContactoxDni(String^ dni);
		Contactos^ ObtenerContactoxCodigo(int codigo);
		void AgregarContacto(Contactos^ objContacto);
		void EliminarContacto(int codigoEliminar);
		void GrabarEnArchivo();
		int verificaNuevoUsuario(String^ dni);
	};
}