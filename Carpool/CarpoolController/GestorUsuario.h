#pragma once
////////////////IDEASA GUARDAR LO QUE ESTÁ EN TEXT ANTES DE REGISTRAR, LEER Y GUARDAR LO DE TEXT ANTES DE NADA.


using namespace System::Collections::Generic;
using namespace CarpoolModel;
using namespace System::Data::SqlClient; /*Esto es para BD*/
using namespace System;

namespace CarpoolController {

	public ref class GestorUsuario {

	private:
		List<Usuario^>^ listaUsuarios;
		//Para conectar el visual studio a la base de datos//
		SqlConnection^ objConexion;

	public:
		GestorUsuario();

		void AbrirConexionBD();
		void CerrarConexionBD();
		List<Usuario^>^ BuscarAllUsuariosBD();
		int validarUsuarioBD(String^ userName, String^ password);
		int UsuarioRepetidoBD(String^ userName);
		void InsertarUsuario(Usuario^ objUsuario);
		int MismosDatosBD(String^ DNI, String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno);
		int MismoTipoUsuarioBD(String^ DNI, String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno, int tipoUsuario);
		int ValidarRegistro(String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno, String^ DNI, String^ Correo, String^ userName, String^ password);
		Usuario^ ObtenerUsuarioxUserNameBD(String^ userName);
		void EliminarUsuarioBD(String^ userNameEliminar);
		void EliminarUsuarioXDniBD(String^ dniEliminar);
		String^ ObtenerContrasenhaBD(String^ DNI, int tipoUsuario);
		int ObtenerTipoDeUsuarioBD(String^ userName);
		int UsuarioRepetidoConCodigoBD(int codigo);
		Usuario^ ObtenerUsuarioxDNIyTipoDeUsuarioBD(String^ DNI, int tipoUsuario);
		void ActualizarUserName(String^ dniEditar, int tipoUsuarioEditar, String^ correo);
		void ActualizarCorreo(String^ dniEditar, int tipoUsuarioEditar, String^ correo);
		void ActualizarPassword(String^ dniEditar, int tipoUsuarioEditar, String^ contrasenha);
		void ActualizarAAdmin(String^ userName);
		List<Usuario^>^ BuscarUsuariosBD(String^ userName,  String^ tipoUsuarioFiltro);


		void LeerUsuariosDesdeArchivo();
		int validarUsuario(String^ userName, String^ password);	//YA
		void EscribirArchivo();	//YA
		void AgregarUsuario(Usuario^ objUsuario); //YA
		//Usuario^ ObtenerUsuarioxuserName(String^ userName);
		int UsuarioRepetido(String^ userName);//YA
		int MismosDatos(String^ DNI, String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno);//YA
		int MismoTipoUsuario(String^ DNI, String^ Correo, String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno, int tipoUsuario);//YA

		Usuario^ ObtenerUsuarioxUserName(String^ userName);
		void EliminarUsuario(String^ userNameEliminar);
		int ObtenerCantidadUsuarios();//IMP
		Usuario^ ObtenerUsuarioLista(int indice);//IMP
		void BorrarUsuarioLogeadoDesdeArchivo();
		int VerificarAdmin(String^ userName);
		int VerificarPasajero(String^ userName);
		int VerificarConductor(String^ userName);
		void EliminarUsuarioXDni(String^ dniEliminar);
		String^ ObtenerContrasenha(String^ DNI, int tipoUsuario);
		int ObtenerTipoDeUsuario(String^ userName);//Ya no lo uso
		int DarValorAlCodigoDelUsuario();
		int UsuarioRepetidoConCodigo(int codigo);
		Usuario^ ObtenerUsuarioxDNIyTipoDeUsuario(String^ DNI, int tipoUsuario);

	};
}

