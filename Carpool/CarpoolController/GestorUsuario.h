#pragma once
////////////////IDEASA GUARDAR LO QUE EST� EN TEXT ANTES DE REGISTRAR, LEER Y GUARDAR LO DE TEXT ANTES DE NADA.


using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System;

namespace CarpoolController {

	public ref class GestorUsuario {

	private:
		List<Usuario^>^ listaUsuarios;

	public:
		GestorUsuario();
		void LeerUsuariosDesdeArchivo();
		int validarUsuario(String^ userName, String^ password);
		void EscribirArchivo();
		void AgregarUsuario(Usuario^ objUsuario);
		//Usuario^ ObtenerUsuarioxuserName(String^ userName);
		int UsuarioRepetido(String^ DNI, String^ Correo, String^ userName);
		int ValidarRegistro(String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno, String^ DNI, String^ Correo, String^ userName, String^ password);
		void EscribirArchivoUsuarioLogeado(String^ userName);
		Usuario^ LeerUsuarioLogeadoDesdeArchivo();
		Usuario^ ObtenerUsuarioxUserName(String^ userName);
		void EliminarUsuario(String^ userNameEliminar);
		int ObtenerCantidadUsuarios();//IMP
		Usuario^ ObtenerUsuarioLista(int indice);//IMP
		void BorrarUsuarioLogeadoDesdeArchivo();
		int VerificarAdmin(String^ userName);
	};
}
