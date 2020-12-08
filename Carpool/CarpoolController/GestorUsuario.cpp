#include "GestorUsuario.h"

using namespace CarpoolController;
using namespace CarpoolModel;
using namespace System::IO;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace System;

GestorUsuario::GestorUsuario() {
	this->listaUsuarios = gcnew List<Usuario^>();
	this->objConexion = gcnew SqlConnection();
}

void GestorUsuario::AbrirConexionBD() {
	/*Datos para la conexión a la BD: servidor, nombreBD,usuarioBD,passBD*/
	String^ pass = "RAGNAROK";
	this->objConexion->ConnectionString = "Server=asgard.c5npowpqydq4.us-east-1.rds.amazonaws.com;DataBase=carpool;" + "User ID=ODIN;Password=" + pass + ";";
	this->objConexion->Open();
}

void GestorUsuario::CerrarConexionBD() {
	this->objConexion->Close();
}

List<Usuario^>^ GestorUsuario::BuscarAllUsuariosBD() {
	List<Usuario^>^ listaAllUsuarios = gcnew List<Usuario^>;
	AbrirConexionBD();
	SqlDataReader^ objData;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Usuario;";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		int  CodigoDeUsuario = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		String^ ApellidoPaterno = safe_cast<String^>(objData[2]);
		String^ ApellidoMaterno = safe_cast<String^>(objData[3]);
		String^ DNI = safe_cast<String^>(objData[4]);
		String^ Correo = safe_cast<String^>(objData[5]);
		String^ userName = safe_cast<String^>(objData[6]);
		String^ contrasenha = safe_cast<String^>(objData[7]);
		int tipoUsuario = safe_cast<int>(objData[8]);
		Usuario^ objUsuario = gcnew Usuario(CodigoDeUsuario, Nombre, ApellidoPaterno, ApellidoMaterno, DNI, Correo, userName, contrasenha, tipoUsuario);
		listaAllUsuarios->Add(objUsuario);
	}
	objData->Close();
	CerrarConexionBD();
	return listaAllUsuarios;
}

int GestorUsuario::validarUsuarioBD(String^ userName, String^ password) {
	List<Usuario^>^ listaUsuarios = BuscarAllUsuariosBD();
	int es_valido = 0;
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->userName == userName && listaUsuarios[i]->password == password) {
			es_valido = 1;
			break;
		}
	}
	return es_valido;
}

int GestorUsuario::UsuarioRepetidoBD(String^ userName) {
	List<Usuario^>^ listaUsuarios = BuscarAllUsuariosBD();
	int es_valido = 1;
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if ((listaUsuarios[i]->userName == userName)) {
			es_valido = 0;
			break;
		}
	}
	return es_valido;
}

void GestorUsuario::InsertarUsuario(Usuario^ objUsuario) {
	AbrirConexionBD();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "insert into Usuario values(@p1,@p2,@p3,@p4,@p5,@p6,@p7,@p8,@p9);";
	SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::Int);
	p1->Value = objUsuario->CodigoDeUsuario;
	SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::VarChar, 50);
	p2->Value = objUsuario->Nombre;
	SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::VarChar, 50);
	p3->Value = objUsuario->ApellidoPaterno;
	SqlParameter^ p4 = gcnew SqlParameter("@p4", System::Data::SqlDbType::VarChar, 50);
	p4->Value = objUsuario->ApellidoMaterno;
	SqlParameter^ p5 = gcnew SqlParameter("@p5", System::Data::SqlDbType::VarChar, 8);
	p5->Value = objUsuario->DNI;
	SqlParameter^ p6 = gcnew SqlParameter("@p6", System::Data::SqlDbType::VarChar,50);
	p6->Value = objUsuario->Correo;
	SqlParameter^ p7 = gcnew SqlParameter("@p7", System::Data::SqlDbType::VarChar, 50);
	p7->Value = objUsuario->userName;
	SqlParameter^ p8 = gcnew SqlParameter("@p8", System::Data::SqlDbType::VarChar, 50);
	p8->Value = objUsuario->password;
	SqlParameter^ p9 = gcnew SqlParameter("@p9", System::Data::SqlDbType::Int);
	p9->Value = objUsuario->tipoUsuario;
	objQuery->Parameters->Add(p1);
	objQuery->Parameters->Add(p2);
	objQuery->Parameters->Add(p3);
	objQuery->Parameters->Add(p4);
	objQuery->Parameters->Add(p5);
	objQuery->Parameters->Add(p6);
	objQuery->Parameters->Add(p7);
	objQuery->Parameters->Add(p8);
	objQuery->Parameters->Add(p9);
	objQuery->ExecuteNonQuery();
	CerrarConexionBD();
}

int GestorUsuario::MismosDatosBD(String^ DNI, String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno) {
	List<Usuario^>^ listaUsuarios = BuscarAllUsuariosBD();
	int mismos_datos = 0;
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if ((listaUsuarios[i]->ApellidoMaterno == ApellidoMaterno) && (listaUsuarios[i]->ApellidoPaterno == ApellidoPaterno) && (listaUsuarios[i]->Nombre == Nombre) && (listaUsuarios[i]->DNI == DNI)) {
			mismos_datos = 1;
		}
	}

	return mismos_datos;
}

int GestorUsuario::MismoTipoUsuarioBD(String^ DNI, String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno, int tipoUsuario) {
	List<Usuario^>^ listaUsuarios = BuscarAllUsuariosBD();
	int mismo_tipo_usuario = 0;
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if ((listaUsuarios[i]->ApellidoMaterno == ApellidoMaterno) && (listaUsuarios[i]->ApellidoPaterno == ApellidoPaterno) && (listaUsuarios[i]->Nombre == Nombre) && (listaUsuarios[i]->DNI == DNI) && (listaUsuarios[i]->tipoUsuario == tipoUsuario)) {
			mismo_tipo_usuario = 1;
		}
	}

	return mismo_tipo_usuario;
}

Usuario^ GestorUsuario::ObtenerUsuarioxUserNameBD(String^ userName) {
	List<Usuario^>^ listaUsuarios = BuscarAllUsuariosBD();
	Usuario^ objUsuarioBuscado = nullptr;
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->userName == userName) {
			objUsuarioBuscado = listaUsuarios[i];
			break;
		}
	}
	return objUsuarioBuscado;
}

void GestorUsuario::EliminarUsuarioBD(String^ userNameEliminar) {
	AbrirConexionBD();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "delete from Usuario where userName ='" + userNameEliminar+"';";
	objQuery->ExecuteNonQuery();
	CerrarConexionBD();
}

void GestorUsuario::EliminarUsuarioXDniBD(String^ dniEliminar) {
	AbrirConexionBD();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "delete from Usuario where DNI ='" + dniEliminar + "';";
	objQuery->ExecuteNonQuery();
	CerrarConexionBD();
}

String^ GestorUsuario::ObtenerContrasenhaBD(String^ DNI, int tipoUsuario) {
	List<Usuario^>^ listaUsuarios = BuscarAllUsuariosBD();
	String^ ContrasenhaObtenida;
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if ((listaUsuarios[i]->DNI == DNI) && listaUsuarios[i]->tipoUsuario == tipoUsuario) {
			ContrasenhaObtenida = listaUsuarios[i]->password;
			break;
		}
	}
	return ContrasenhaObtenida;
}

int GestorUsuario::ObtenerTipoDeUsuarioBD(String^ userName) {
	List<Usuario^>^ listaUsuarios = BuscarAllUsuariosBD();
	int tipoDeUsuario;
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->userName == userName) {
			tipoDeUsuario =listaUsuarios[i]->tipoUsuario;
			break;
		}
	}
	return tipoDeUsuario;

}

int GestorUsuario::UsuarioRepetidoConCodigoBD(int codigo) {
	List<Usuario^>^ listaUsuarios = BuscarAllUsuariosBD();
	int mismo_codigo = 0;
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if ((listaUsuarios[i]->CodigoDeUsuario == codigo)) {
			mismo_codigo = 1;
			break;
		}
	}
	return mismo_codigo;
}

Usuario^ GestorUsuario::ObtenerUsuarioxDNIyTipoDeUsuarioBD(String^ DNI, int tipoUsuario) {
	List<Usuario^>^ listaUsuarios = BuscarAllUsuariosBD();
	Usuario^ objUsuarioBuscado = nullptr;
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if ((listaUsuarios[i]->DNI == DNI) && listaUsuarios[i]->tipoUsuario == tipoUsuario) {
			objUsuarioBuscado = listaUsuarios[i];
			break;
		}
	}

	return objUsuarioBuscado;
}

int GestorUsuario::ValidarRegistro(String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno, String^ DNI, String^ Correo, String^ userName, String^ password) {
	int esta_completo = 1;
	if (Nombre == "" || ApellidoPaterno == "" || ApellidoMaterno == "" || DNI == "" || Correo == "" || userName == "" || password == "") {
		esta_completo = 0;
	}
	return esta_completo;
}

int GestorUsuario::DarValorAlCodigoDelUsuario() {
	List<Usuario^>^ listaUsuarios = BuscarAllUsuariosBD();
	int CodigoDado = 1, CodigoDadoMismo = 1;

	if (listaUsuarios->Count == 0) {
		CodigoDado = 1;
	}
	else {

		while (CodigoDadoMismo) {
			CodigoDado = CodigoDado + 1;
			CodigoDadoMismo = UsuarioRepetidoConCodigo(CodigoDado);
		}

	}

	return CodigoDado;
}

int GestorUsuario::UsuarioRepetidoConCodigo(int codigo) {
	List<Usuario^>^ listaUsuarios = BuscarAllUsuariosBD();
	int mismo_codigo = 0;
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if ((listaUsuarios[i]->CodigoDeUsuario == codigo)) {
			mismo_codigo = 1;
			break;
		}
	}
	return mismo_codigo;
}









void GestorUsuario::LeerUsuariosDesdeArchivo() {
	this->listaUsuarios->Clear();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");

	String^ separadores = ";";
	for each (String ^ lineaUsuario in lineas)
	{
		array<String^>^ palabras = lineaUsuario->Split(separadores->ToCharArray());
		int CodigoDeUsuario = Convert::ToInt32(palabras[0]);
		String^ Nombre = palabras[1];
		String^ ApellidoPaterno = palabras[2];
		String^ ApellidoMaterno = palabras[3];
		String^ DNI = palabras[4];
		String^ Correo = palabras[5];
		String^ userName = palabras[6];
		String^ contrasenha = palabras[7];
		int tipoUsuario = Convert::ToInt32(palabras[8]);

		Usuario^ objUsuario = gcnew Usuario(CodigoDeUsuario,Nombre, ApellidoPaterno, ApellidoMaterno, DNI, Correo, userName, contrasenha, tipoUsuario);
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
		lineasArchivo[i] = objUsuario->CodigoDeUsuario + ";" + objUsuario->Nombre + ";" + objUsuario->ApellidoPaterno + ";" + objUsuario->ApellidoMaterno + ";" + objUsuario->DNI + ";" + objUsuario->Correo + ";" + objUsuario->userName + ";" + objUsuario->password + ";" + objUsuario->tipoUsuario;
	}
	File::WriteAllLines("Usuarios.txt", lineasArchivo);
}

void GestorUsuario::AgregarUsuario(Usuario^ objUsuario) {
	this->listaUsuarios->Add(objUsuario);
}

int GestorUsuario::UsuarioRepetido(String^ userName) {
	int es_valido = 1;
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if ((this->listaUsuarios[i]->userName == userName)) {
			es_valido = 0;
			break;
		}
	}
	return es_valido;
}

int GestorUsuario::MismosDatos(String^ DNI, String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno) {
	int mismos_datos = 0;
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if ((this->listaUsuarios[i]->ApellidoMaterno == ApellidoMaterno) && (this->listaUsuarios[i]->ApellidoPaterno == ApellidoPaterno) && (this->listaUsuarios[i]->Nombre == Nombre) && (this->listaUsuarios[i]->DNI == DNI)) {
			mismos_datos = 1;
		}
	}

	return mismos_datos;
}

int GestorUsuario::MismoTipoUsuario(String^ DNI, String^ Correo, String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno, int tipoUsuario) {
	int mismo_tipo_usuario = 0;
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if ((this->listaUsuarios[i]->ApellidoMaterno == ApellidoMaterno) && (this->listaUsuarios[i]->ApellidoPaterno == ApellidoPaterno) && (this->listaUsuarios[i]->Nombre == Nombre) && (this->listaUsuarios[i]->DNI == DNI) && (this->listaUsuarios[i]->Correo == Correo) && (this->listaUsuarios[i]->tipoUsuario == tipoUsuario)) {
			mismo_tipo_usuario = 1;
		}
	}

	return mismo_tipo_usuario;
}


//
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

//////////////////////////////


void GestorUsuario::EliminarUsuario(String^ userNameEliminar) {
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if (this->listaUsuarios[i]->userName == userNameEliminar) {
			/*Encontre al que debo eliminar*/
			this->listaUsuarios->RemoveAt(i);
			break;
		}
	}
}

void GestorUsuario::EliminarUsuarioXDni(String^ dniEliminar) {
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if (this->listaUsuarios[i]->DNI == dniEliminar) {
			/*Encontre al que debo eliminar*/
			this->listaUsuarios->RemoveAt(i);
			break;
		}
	}
}

///////////////////
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
	/*Posible error*/
	int tipoUsuario = 0;
	int es_admin = 0;
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if ((this->listaUsuarios[i]->userName == userName) && (this->listaUsuarios[i]->tipoUsuario == 1)) {
			es_admin = 1;
			break;
		}
	}
	return es_admin;
}

int GestorUsuario::VerificarPasajero(String^ userName) {
	/*Posible error*/
	int tipoUsuario = 0;
	int es_pasajero = 0;
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if ((this->listaUsuarios[i]->userName == userName) && (this->listaUsuarios[i]->tipoUsuario == 2)) {
			es_pasajero = 1;
			break;
		}
	}
	return es_pasajero;
}

int GestorUsuario::VerificarConductor(String^ userName) {
	/*Posible error*/
	int tipoUsuario = 0;
	int es_conductor = 0;
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if ((this->listaUsuarios[i]->userName == userName) && (this->listaUsuarios[i]->tipoUsuario == 3)) {
			es_conductor = 1;
			break;
		}
	}
	return es_conductor;
}

String^ GestorUsuario::ObtenerContrasenha(String^ DNI, int tipoUsuario) {
	String^ ContrasenhaObtenida;
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if ((this->listaUsuarios[i]->DNI == DNI) && this->listaUsuarios[i]->tipoUsuario == tipoUsuario) {
			ContrasenhaObtenida = this->listaUsuarios[i]->password;
			break;
		}
	}
	return ContrasenhaObtenida;
}

int GestorUsuario::ObtenerTipoDeUsuario(String^ userName) {
	int tipoDeUsuario;
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if (this->listaUsuarios[i]->userName == userName) {
			tipoDeUsuario = this->listaUsuarios[i]->tipoUsuario;
			break;
		}
	}
	return tipoDeUsuario;

}





Usuario^ GestorUsuario::ObtenerUsuarioxDNIyTipoDeUsuario(String^ DNI, int tipoUsuario) {
	Usuario^ objUsuarioBuscado = nullptr;

	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if ((this->listaUsuarios[i]->DNI == DNI) && this->listaUsuarios[i]->tipoUsuario == tipoUsuario) {
			objUsuarioBuscado = this->listaUsuarios[i];
			break;
		}
	}

	return objUsuarioBuscado;
}