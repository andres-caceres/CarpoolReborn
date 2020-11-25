#pragma once
#include "frmCambiarPassword.h"

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
	/// Resumen de frmDatosPersonales
	/// </summary>
	public ref class frmDatosPersonales : public System::Windows::Forms::Form
	{
	public:

		frmDatosPersonales(void)
		{
			InitializeComponent();
			this->objGestorUsuario = gcnew GestorUsuario();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmDatosPersonales()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblMensaje;

	private: System::Windows::Forms::Label^ lblMensaje4;
	private: System::Windows::Forms::Label^ lblMensaje3;
	private: System::Windows::Forms::Label^ lblMensaje2;
	private: GestorUsuario^ objGestorUsuario;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmDatosPersonales::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblMensaje4 = (gcnew System::Windows::Forms::Label());
			this->lblMensaje3 = (gcnew System::Windows::Forms::Label());
			this->lblMensaje2 = (gcnew System::Windows::Forms::Label());
			this->lblMensaje = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(372, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 38);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Cerrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmDatosPersonales::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->lblMensaje4);
			this->groupBox1->Controls->Add(this->lblMensaje3);
			this->groupBox1->Controls->Add(this->lblMensaje2);
			this->groupBox1->Controls->Add(this->lblMensaje);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(36, 41);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(481, 296);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sus datos personales";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(213, 244);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(225, 22);
			this->textBox1->TabIndex = 9;
			// 
			// lblMensaje4
			// 
			this->lblMensaje4->AutoSize = true;
			this->lblMensaje4->Location = System::Drawing::Point(210, 196);
			this->lblMensaje4->Name = L"lblMensaje4";
			this->lblMensaje4->Size = System::Drawing::Size(52, 17);
			this->lblMensaje4->TabIndex = 8;
			this->lblMensaje4->Text = L"Tu DNI";
			// 
			// lblMensaje3
			// 
			this->lblMensaje3->AutoSize = true;
			this->lblMensaje3->Location = System::Drawing::Point(210, 141);
			this->lblMensaje3->Name = L"lblMensaje3";
			this->lblMensaje3->Size = System::Drawing::Size(135, 17);
			this->lblMensaje3->TabIndex = 7;
			this->lblMensaje3->Text = L"Tu Apellido Materno";
			// 
			// lblMensaje2
			// 
			this->lblMensaje2->AutoSize = true;
			this->lblMensaje2->Location = System::Drawing::Point(210, 89);
			this->lblMensaje2->Name = L"lblMensaje2";
			this->lblMensaje2->Size = System::Drawing::Size(133, 17);
			this->lblMensaje2->TabIndex = 6;
			this->lblMensaje2->Text = L"Tu Apellido Paterno";
			// 
			// lblMensaje
			// 
			this->lblMensaje->AutoSize = true;
			this->lblMensaje->Location = System::Drawing::Point(210, 33);
			this->lblMensaje->Name = L"lblMensaje";
			this->lblMensaje->Size = System::Drawing::Size(79, 17);
			this->lblMensaje->TabIndex = 5;
			this->lblMensaje->Text = L"Tu Nombre";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(49, 247);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Correo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(49, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"DNI:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(49, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellido Materno:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellido Paterno:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(539, 41);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(423, 203);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos de usuario";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(155, 89);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(123, 17);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Tu tipo de usuario";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(38, 89);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(111, 17);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Tipo de usuario:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(157, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(213, 22);
			this->textBox2->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(38, 43);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 17);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Usuario:";
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Location = System::Drawing::Point(120, 134);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(177, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cambiar contraseña";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmDatosPersonales::button2_Click);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Green;
			this->button3->Location = System::Drawing::Point(539, 356);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(172, 38);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Guardar los cambios";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmDatosPersonales::button3_Click);
			// 
			// frmDatosPersonales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1016, 415);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmDatosPersonales";
			this->Text = L"Datos Personales";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmDatosPersonales::frmDatosPersonales_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmDatosPersonales::frmDatosPersonales_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void frmDatosPersonales_Load(System::Object^ sender, System::EventArgs^ e) {
	Usuario^ objUsuario = objGestorUsuario->LeerUsuarioLogeadoDesdeArchivo();
	this->objGestorUsuario->LeerUsuariosDesdeArchivo();
	//GestorUsuario^ objGestorUsuario = gcnew GestorUsuario();
	//objGestorUsuario->LeerUsuarioLogeadoDesdeArchivo();
	
	this->lblMensaje->Text  = objUsuario->Nombre;
	this->lblMensaje2->Text = objUsuario->ApellidoPaterno;
	this->lblMensaje3->Text = objUsuario->ApellidoMaterno;
	this->lblMensaje4->Text = objUsuario->DNI;
	this->textBox1->Text = objUsuario->Correo;
	this->textBox2->Text = objUsuario->userName;
	
	if (objUsuario->tipoUsuario == 2) {
		this->label8->Text = "Pasajero";
	}
	if (objUsuario->tipoUsuario == 3) {
		this->label8->Text = "Conductor";
	}


	//ContrasenhaObtenida = this->objGestorUsuario->ObtenerContrasenha(objUsuario->userName);


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//Falta ver que el nombre de usuario no se repita con UsuarioRepetido.
	Usuario^ objUsuarioLogeado = objGestorUsuario->LeerUsuarioLogeadoDesdeArchivo();
	this->objGestorUsuario->LeerUsuariosDesdeArchivo();
	int CodigoDeUsuario = objUsuarioLogeado->CodigoDeUsuario;
	String^ Nombre=this->lblMensaje->Text;
	String^ ApellidoPaterno = this->lblMensaje2->Text;
	String^ ApellidoMaterno = this->lblMensaje3->Text;
	String^ DNI = this->lblMensaje4->Text;
	String^ Correo = this->textBox1->Text;
	String^ userName = this->textBox2->Text;
	int tipoUsuario;
	if (this->label8->Text == "Pasajero") {
		tipoUsuario = 2;
	}
	if (this->label8->Text == "Conductor") {
		tipoUsuario = 3;
	}

	String^ ContrasenhaObtenida = this->objGestorUsuario->ObtenerContrasenha(DNI, tipoUsuario);

	Usuario^ objUsuario = gcnew Usuario(CodigoDeUsuario,Nombre, ApellidoPaterno, ApellidoMaterno, DNI, Correo, userName, ContrasenhaObtenida,tipoUsuario);
	this->objGestorUsuario->EliminarUsuarioXDni(DNI);
	this->objGestorUsuario->AgregarUsuario(objUsuario);
	MessageBox::Show("Sus datos han sido actualizados correctamente");
	this->Close();
}

	  

private: System::Void frmDatosPersonales_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	
	this->objGestorUsuario->EscribirArchivo();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmCambiarPassword^ ventanaCambiarPassword = gcnew frmCambiarPassword();
	ventanaCambiarPassword->Show();
}
};
}
