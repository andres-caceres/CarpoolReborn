#pragma once
#include "frmSeguridad.h"
#include "frmPreguntaSeguridad.h"
#include "frmRegistroConductor.h"

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
	/// Resumen de frmRegister
	/// </summary>
	public ref class frmRegister : public System::Windows::Forms::Form
	{
	public:
		frmRegister(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmRegister(GestorUsuario^ objGestorUsuario)
		{
			InitializeComponent();
			this->objGestorUsuario = objGestorUsuario;
			this->objUsuario = gcnew Usuario();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmRegister()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:











	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;





	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: GestorUsuario^ objGestorUsuario;
	private: Usuario^ objUsuario;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmRegister::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Location = System::Drawing::Point(46, 185);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(396, 225);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del Usuario";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"@pucp.edu.pe", L"@gmail.com", L"@hotmail.com",
					L"@outlook.es"
			});
			this->comboBox1->Location = System::Drawing::Point(254, 190);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(116, 21);
			this->comboBox1->TabIndex = 28;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmRegister::comboBox1_SelectedIndexChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(152, 190);
			this->textBox5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(98, 20);
			this->textBox5->TabIndex = 27;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(152, 154);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox4->MaxLength = 8;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(143, 20);
			this->textBox4->TabIndex = 26;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &frmRegister::textBox4_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmRegister::textBox4_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(152, 114);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(143, 20);
			this->textBox3->TabIndex = 25;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmRegister::textBox3_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(152, 76);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(143, 20);
			this->textBox2->TabIndex = 24;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmRegister::textBox2_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(152, 38);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(143, 20);
			this->textBox1->TabIndex = 23;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmRegister::textBox1_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(44, 190);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Correo:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(44, 154);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"DNI:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(44, 114);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(92, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Apellido Materno :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(44, 76);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Apellido Paterno :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(44, 38);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Nombres:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(40, 71);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(64, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Contraseña:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(40, 33);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Usuario:";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(122, 431);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 31);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmRegister::button1_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Green;
			this->button2->Location = System::Drawing::Point(273, 431);
			this->button2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 31);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Registrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmRegister::button2_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(148, 33);
			this->textBox6->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(143, 20);
			this->textBox6->TabIndex = 28;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(148, 71);
			this->textBox7->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox7->Name = L"textBox7";
			this->textBox7->PasswordChar = '*';
			this->textBox7->Size = System::Drawing::Size(143, 20);
			this->textBox7->TabIndex = 29;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Location = System::Drawing::Point(46, 28);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->groupBox2->Size = System::Drawing::Size(396, 140);
			this->groupBox2->TabIndex = 30;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos de la cuenta";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(204, 111);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(74, 17);
			this->radioButton2->TabIndex = 32;
			this->radioButton2->Text = L"Conductor";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(98, 111);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(66, 17);
			this->radioButton1->TabIndex = 31;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Pasajero";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// frmRegister
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 484);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"frmRegister";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registro";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmRegister::frmRegister_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmRegister::frmRegister_FormClosed);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int es_valido, esta_completo, mismos_datos, mismo_tipo_usuario;

		String^ nombres = this->textBox1->Text;
		String^ apellidoPaterno = this->textBox2->Text;
		String^ apellidoMaterno = this->textBox3->Text;
		String^ dni = this->textBox4->Text;
		String^ correo = this->textBox5->Text + this->comboBox1->Text;
		String^ userName = this->textBox6->Text;
		String^ password = this->textBox7->Text;
		int tipoUsuario;
		if (this->radioButton1->Checked == true) {
			tipoUsuario = 2;	// Pasajero
		}
		if (this->radioButton2->Checked == true) {
			tipoUsuario = 3;	//Conductor
		}
		if ((radioButton2->Checked == false) && (radioButton1->Checked == false)) {
			MessageBox::Show("Debe seleccionar Conductor o Pasajero");
		}

		int CodigoDeUsuario = this->objGestorUsuario->DarValorAlCodigoDelUsuario();

		Usuario^ objUsuario = gcnew Usuario(CodigoDeUsuario, nombres, apellidoPaterno, apellidoMaterno, dni, correo, userName, password, tipoUsuario);
		es_valido = objGestorUsuario->UsuarioRepetidoBD(userName);
		mismos_datos = objGestorUsuario->MismosDatosBD(dni, nombres, apellidoPaterno, apellidoMaterno);
		esta_completo = objGestorUsuario->ValidarRegistro(nombres, apellidoPaterno, apellidoMaterno, dni, correo, userName, password);
		mismo_tipo_usuario = objGestorUsuario->MismoTipoUsuarioBD(dni, nombres, apellidoPaterno, apellidoMaterno, tipoUsuario);

		this->objUsuario = objUsuario;

		if (esta_completo && (this->textBox5->Text!="") && (this->comboBox1->Text!="")) {
			if (dni->Length == 8) {
				if (es_valido) {
					if (objUsuario->tipoUsuario == 2) {
						if (es_valido)
							if (mismos_datos && (!mismo_tipo_usuario)) {	//Segunda vez registro
								frmSeguridad^ ventanaSeguridad = gcnew frmSeguridad(this->objUsuario, this->objGestorUsuario);
								ventanaSeguridad->ShowDialog();
								this->Close();
								
							}

							if (mismos_datos && mismo_tipo_usuario) {
								MessageBox::Show("Ya hay una cuenta con el mismo tipo de usuario y datos");
							}

							if (!mismos_datos) {	//Primera vez registro
								frmPreguntaSeguridad^ ventanaPreguntaSeguridad = gcnew frmPreguntaSeguridad(this->objUsuario, this->objGestorUsuario);
								ventanaPreguntaSeguridad->ShowDialog();
								this->Close();
								
							}
					}
					else if (objUsuario->tipoUsuario == 3) {
						if (mismos_datos && mismo_tipo_usuario) {
							MessageBox::Show("Ya hay una cuenta con el mismo tipo de usuario y datos");
						}
						else {
							this->Close();
							frmRegistroConductor^ ventanaRegistroConductor = gcnew frmRegistroConductor(this->objUsuario, this->objGestorUsuario);
							ventanaRegistroConductor->ShowDialog();
							
						}

					}
				}
				else {
					MessageBox::Show("UserName ya existente");
				}
			}
			else {
				MessageBox::Show("Dni debe tener 8 dígitos");

			}
		}
		else {
			MessageBox::Show("Debe llenar todos los espacios");

		}
	}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void frmRegister_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
}
private: System::Void frmRegister_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	//this->objGestorUsuario->EscribirArchivo();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

bool IsNumeric(char c) {
	if ((c >= '0' && c <= '9') || (c==8))
	{return true;}
	return false;
}

bool IsLetter(char c) {
	if ((c >= 'a' && c <= 'z') || (c == 8)|| (c >= 'A' && c <= 'Z')||(c=='í')||(c=='é')||(c=='á'))
	{return true;}
	return false;

}


private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		
	if (IsNumeric(e->KeyChar)) {
		e->Handled = false;
	}
	else {
		e->Handled = true;
	}

}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (IsLetter(e->KeyChar)) {
		e->Handled = false;
	}
	else {
		e->Handled = true;
	}
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (IsLetter(e->KeyChar)) {
		e->Handled = false;
	}
	else {
		e->Handled = true;
	}
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (IsLetter(e->KeyChar)) {
		e->Handled = false;
	}
	else {
		e->Handled = true;
	}
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
