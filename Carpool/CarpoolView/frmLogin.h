#pragma once
#include "frmRegister.h"
#include "frmPasajero.h"
#include "frmConductor.h"
#include "frmAdministrador.h"

namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CarpoolController;
	using namespace CarpoolModel;

	/// <summary>
	/// Resumen de frmLogin
	/// </summary>
	public ref class frmLogin : public System::Windows::Forms::Form
	{
	public:
		frmLogin(void)
		{
			InitializeComponent();
			this->objGestorUsuario = gcnew GestorUsuario();
			this->objGestorRuta = gcnew GestorRuta();
			this->objGestorConductor = gcnew GestorConductor();
			this->objGestorVehiculo = gcnew GestorVehiculo();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

			protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: GestorUsuario^ objGestorUsuario;
	private: GestorRuta^ objGestorRuta;
	private: GestorConductor^ objGestorConductor;
	private: GestorVehiculo^ objGestorVehiculo;
	private: System::Windows::Forms::Button^ button3;


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmLogin::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(471, 205);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 36);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmLogin::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(504, 156);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(175, 22);
			this->textBox2->TabIndex = 12;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmLogin::textBox2_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(504, 120);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 22);
			this->textBox1->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(388, 157);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 18);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Contrase�a :";
			this->label3->Click += gcnew System::EventHandler(this, &frmLogin::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(388, 120);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 18);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Usuario :";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(57, 46);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(279, 174);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(465, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(156, 31);
			this->label4->TabIndex = 15;
			this->label4->Text = L"CARPOOL";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Blue;
			this->button2->Location = System::Drawing::Point(134, 249);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 33);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Registrarse";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmLogin::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(497, 249);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Salir";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmLogin::button3_Click);
			// 
			// frmLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(796, 323);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmLogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmLogin::frmLogin_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmLogin::frmLogin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int es_valido;
	//GestorUsuario^ objGestorUsuario = gcnew GestorUsuario();
	this->objGestorUsuario->LeerUsuariosDesdeArchivo();
	String^ userName = this->textBox1->Text;
	String^ contrasenha = this->textBox2->Text;
	es_valido = this->objGestorUsuario->validarUsuarioBD(userName, contrasenha);
	if (es_valido) {
		/*Puedo ingresar al sistema*/
	//	this->objGestorUsuario->EscribirArchivoUsuarioLogeado(userName);
		
		Usuario^ objUsuarioLogeado = this->objGestorUsuario->ObtenerUsuarioxUserNameBD(userName);/*Usuario Logeado*/

		if (objUsuarioLogeado->tipoUsuario == 1) {
			frmAdministrador^ ventanaAdministrador = gcnew frmAdministrador(this->objGestorUsuario, this->objGestorRuta);
			ventanaAdministrador->Show();
			this->Hide();
		}
		if (objUsuarioLogeado->tipoUsuario == 2) {
			frmPasajero^ ventanaPasajero = gcnew frmPasajero(objUsuarioLogeado);
			ventanaPasajero->Show();
			this->Hide();
		}
		if (objUsuarioLogeado->tipoUsuario == 3) {
			this->objGestorConductor->LeerConductoresDesdeArchivo();
			Conductor^ objConductorLogeado = this->objGestorConductor->ObtenerConductorxCodigo(objUsuarioLogeado->CodigoDeUsuario);
			Vehiculo^ objVehiculoInicial = objConductorLogeado->objVehiculo;

			if ((objConductorLogeado->valido == 1) && (objVehiculoInicial->valido==1)) {
				frmConductor^ ventanaConductor = gcnew frmConductor(objUsuarioLogeado);
				ventanaConductor->Show();
				this->Hide();
			}
			else if (objConductorLogeado->valido == 2) {
				MessageBox::Show("Su solicitud est� en proceso");
			}
			else if (objConductorLogeado->valido == 0) {
				MessageBox::Show("Su solicitud ha sido rechazada");
			}
			else if (objVehiculoInicial->valido == 0) {
				MessageBox::Show("Su vehiculo ha sido rechazado");
			}
			else if (objVehiculoInicial->valido == 2) {
				MessageBox::Show("Su vehiculo se encuentra en proceso de validacion");
			}
		}
	}
	else {
		MessageBox::Show("Usuario y/o password incorrectos");
	}
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmRegister^ ventanaRegister = gcnew frmRegister(this->objGestorUsuario);
	ventanaRegister->ShowDialog();
}
private: System::Void frmLogin_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	//this->objGestorUsuario->EscribirArchivo();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void frmLogin_Load(System::Object^ sender, System::EventArgs^ e) {
//	this->objGestorUsuario->BorrarUsuarioLogeadoDesdeArchivo();
//	this->objGestorUsuario->LeerUsuariosDesdeArchivo();
//	this->objGestorUsuario->EscribirArchivo();
}

private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if (e->KeyChar == 13) {
		int es_valido;
		//GestorUsuario^ objGestorUsuario = gcnew GestorUsuario();
		this->objGestorUsuario->LeerUsuariosDesdeArchivo();
		String^ userName = this->textBox1->Text;
		String^ contrasenha = this->textBox2->Text;
		es_valido = this->objGestorUsuario->validarUsuarioBD(userName, contrasenha);
		if (es_valido) {
			/*Puedo ingresar al sistema*/
		//	this->objGestorUsuario->EscribirArchivoUsuarioLogeado(userName);

			Usuario^ objUsuarioLogeado = this->objGestorUsuario->ObtenerUsuarioxUserNameBD(userName);/*Usuario Logeado*/

			if (objUsuarioLogeado->tipoUsuario == 1) {
				frmAdministrador^ ventanaAdministrador = gcnew frmAdministrador(this->objGestorUsuario, this->objGestorRuta);
				ventanaAdministrador->Show();
				this->Hide();
			}
			if (objUsuarioLogeado->tipoUsuario == 2) {
				frmPasajero^ ventanaPasajero = gcnew frmPasajero(objUsuarioLogeado);
				ventanaPasajero->Show();
				this->Hide();
			}
			if (objUsuarioLogeado->tipoUsuario == 3) {
				this->objGestorConductor->LeerConductoresDesdeArchivo();
				Conductor^ objConductorLogeado = this->objGestorConductor->ObtenerConductorxCodigo(objUsuarioLogeado->CodigoDeUsuario);
				Vehiculo^ objVehiculoInicial = objConductorLogeado->objVehiculo;

				if ((objConductorLogeado->valido == 1) && (objVehiculoInicial->valido == 1)) {
					frmConductor^ ventanaConductor = gcnew frmConductor(objUsuarioLogeado);
					ventanaConductor->Show();
					this->Hide();
				}
				else if (objConductorLogeado->valido == 2) {
					MessageBox::Show("Su solicitud est� en proceso");
				}
				else if (objConductorLogeado->valido == 0) {
					MessageBox::Show("Su solicitud ha sido rechazada");
				}
				else if (objVehiculoInicial->valido == 0) {
					MessageBox::Show("Su vehiculo ha sido rechazado");
				}
				else if (objVehiculoInicial->valido == 2) {
					MessageBox::Show("Su vehiculo se encuentra en proceso de validacion");
				}
			}
		}
		else {
			MessageBox::Show("Usuario y/o password incorrectos");
		}
	}

}
};
}
