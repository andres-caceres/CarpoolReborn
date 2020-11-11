#include "GestorUsuario.h"

using namespace CarpoolController;
using namespace CarpoolModel;
using namespace System::IO;
using namespace System::Text;

GestorUsuario::GestorUsuario() {
	this->listaUsuarios = gcnew List<Usuario^>();
}

void GestorUsuario::LeerUsuariosDesdeArchivo() {
	this->listaUsuarios->Clear();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");

	String^ separadores = ";";
	for each (String ^ lineaUsuario in lineas)
	{
		array<String^>^ palabras = lineaUsuario->Split(separadores->ToCharArray());
		String^ Nombre = palabras[0];
		String^ ApellidoPaterno = palabras[1];
		String^ ApellidoMaterno = palabras[2];
		String^ DNI = palabras[3];
		String^ Correo = palabras[4];
		String^ userName = palabras[5];
		String^ contrasenha = palabras[6];
		int es_admin = Convert::ToInt32(palabras[7]);
		
		Usuario^ objUsuario = gcnew Usuario(Nombre,ApellidoPaterno,ApellidoMaterno,DNI,Correo,userName, contrasenha,es_admin);
		this->listaUsuarios->Add(objUsuario);
	}
}

int GestorUsuario::validarUsuario(String^ userName, String^ password) {
	int es_valido = 0;
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if (this->listaUsuarios[i]->userName == userName && this->listaUsuarios[i]->password == password) {
			es_valido = 1;
			break;
		}
	}
	return es_valido;
}

void GestorUsuario::EscribirArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaUsuarios->Count);
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		Usuario^ objUsuario = this->listaUsuarios[i];
		lineasArchivo[i] = objUsuario->Nombre + ";"+ objUsuario->ApellidoPaterno + ";" + objUsuario->ApellidoMaterno + ";" + objUsuario->DNI + ";" + objUsuario->Correo + ";" + objUsuario->userName + ";" + objUsuario->password + ";" + objUsuario->es_admin;
	}
	File::WriteAllLines("Usuarios.txt", lineasArchivo);
}

void GestorUsuario::AgregarUsuario(Usuario^ objUsuario) {
	this->listaUsuarios->Add(objUsuario);
}

//Usuario^ GestorUsuario::ObtenerUsuarioxuserName(String^ userName) {

//	Usuario^ objUsuarioBuscado = nullptr;
//	for (int i = 0; i < this->listaUsuarios->Count; i++) {
//		if (this->listaUsuarios[i]->userName == userName) {
//			objUsuarioBuscado = this->listaUsuarios[i];
//			break;
//		}
//	}
//	return objUsuarioBuscado;
///}

int GestorUsuario::UsuarioRepetido(String^ DNI, String^ Correo,String^ userName) {
	int es_valido = 1;
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if ((this->listaUsuarios[i]->userName == userName)|| (this->listaUsuarios[i]->DNI == DNI)|| (this->listaUsuarios[i]->Correo == Correo)) {
			es_valido = 0;
			break;
		}
	}
	return es_valido;
}

int GestorUsuario::ValidarRegistro(String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno, String^ DNI, String^ Correo, String^ userName, String^ password) {
	int esta_completo = 1;
	if (Nombre == "" || ApellidoPaterno == "" || ApellidoMaterno == "" || DNI == "" || Correo == "" || userName == "" || password == "") {
		esta_completo = 0;
	}
	return esta_completo;
}

//void GestorUsuario::EscribirArchivoUsuarioLogeado(String^userName) {
//	File::WriteAllText("UsuarioLogeado.txt", userName);
//}	
void GestorUsuario::EscribirArchivoUsuarioLogeado(String^ userName) {
	LeerUsuariosDesdeArchivo();//AÑADIDO
	Usuario^ objUsuarioBuscado = nullptr;
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if (this->listaUsuarios[i]->userName == userName) {
			objUsuarioBuscado = this->listaUsuarios[i];
			array<String^>^ lineasArchivo = gcnew array<String^>(this->listaUsuarios->Count);
			
				Usuario^ objUsuarioBuscado = this->listaUsuarios[i];
				lineasArchivo[0] = objUsuarioBuscado->Nombre + ";" + objUsuarioBuscado->ApellidoPaterno + ";" + objUsuarioBuscado->ApellidoMaterno + ";" + objUsuarioBuscado->DNI + ";" + objUsuarioBuscado->Correo + ";" + objUsuarioBuscado->userName + ";" + objUsuarioBuscado->password + ";" + objUsuarioBuscado->es_admin;
			
			File::WriteAllLines("UsuarioLogeado.txt", lineasArchivo);
			break;
		}
	}

}

Usuario^ GestorUsuario::LeerUsuarioLogeadoDesdeArchivo() {
	/*Funciona pero luego de registrar*/
	array<String^>^ lineas = File::ReadAllLines("UsuarioLogeado.txt");

	String^ separadores = ";";
	for each (String ^ lineaUsuario in lineas)
	{
		array<String^>^ palabras = lineaUsuario->Split(separadores->ToCharArray());
		String^ Nombre = palabras[0];
		String^ ApellidoPaterno = palabras[1];
		String^ ApellidoMaterno = palabras[2];
		String^ DNI = palabras[3];
		String^ Correo = palabras[4];
		String^ userName = palabras[5];
		String^ contrasenha = palabras[6];
		int es_admin = Convert::ToInt32(palabras[7]);

		Usuario^ objUsuarioLogeado = gcnew Usuario(Nombre, ApellidoPaterno, ApellidoMaterno, DNI, Correo, userName, contrasenha,es_admin);
		return objUsuarioLogeado;
	}
}

Usuario^ GestorUsuario::ObtenerUsuarioxUserName(String^ userName) {
	Usuario^ objUsuarioBuscado = nullptr;
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if (this->listaUsuarios[i]->userName == userName) {
			objUsuarioBuscado = this->listaUsuarios[i];
			break;
		}
	}
	return objUsuarioBuscado;
}

void GestorUsuario::EliminarUsuario(String^ userNameEliminar) {
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if (this->listaUsuarios[i]->userName == userNameEliminar) {
			/*Encontre al que debo eliminar*/
			this->listaUsuarios->RemoveAt(i);
			break;
		}
	}
}

int GestorUsuario::ObtenerCantidadUsuarios() {
	return this->listaUsuarios->Count;
}

Usuario^ GestorUsuario::ObtenerUsuarioLista(int indice) {
	return this->listaUsuarios[indice];
}

void GestorUsuario::BorrarUsuarioLogeadoDesdeArchivo() {
	
	File::WriteAllText("UsuarioLogeado.txt", "");
	
}

int GestorUsuario::VerificarAdmin(String^ userName) {
	int es_admin = 0;
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if ((this->listaUsuarios[i]->userName == userName) && (this->listaUsuarios[i]->es_admin == 1)) {
			es_admin = 1;
			break;
		}
	}
	return es_admin;
}