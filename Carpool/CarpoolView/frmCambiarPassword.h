#pragma once

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
	/// Resumen de frmCambiarPassword
	/// </summary>
	public ref class frmCambiarPassword : public System::Windows::Forms::Form
	{
	public:
		//frmCambiarPassword(void)
		//{
		//	InitializeComponent();
		//	//
		//	//TODO: agregar código de constructor aquí
		//	//
		//	this->objGestorUsuario = gcnew GestorUsuario();
		//	this->objGestorSeguridad = gcnew GestorSeguridad();
		//	this->objUsuario = gcnew Usuario();
		//}
		frmCambiarPassword(Usuario^ objUsuario)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->objGestorUsuario = gcnew GestorUsuario();
			this->objGestorSeguridad = gcnew GestorSeguridad();
			this->objUsuario = objUsuario;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmCambiarPassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: GestorUsuario^ objGestorUsuario;
	private: GestorSeguridad^ objGestorSeguridad;
	private: Usuario^ objUsuario;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmCambiarPassword::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pregunta de Seguridad";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Respuesta";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 219);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nueva contraseña:";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(129, 371);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 40);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmCambiarPassword::button1_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Green;
			this->button2->Location = System::Drawing::Point(352, 371);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 40);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Confirmar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmCambiarPassword::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(262, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Pregunta ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(265, 94);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(261, 22);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(265, 219);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(261, 22);
			this->textBox2->TabIndex = 7;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(46, 46);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(578, 272);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Seguridad para la contraseña";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(265, 160);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(261, 22);
			this->dateTimePicker1->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(58, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(169, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Fecha de emisión del DNI";
			// 
			// frmCambiarPassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(667, 447);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmCambiarPassword";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cambiar contraseña";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmCambiarPassword::frmCambiarPassword_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmCambiarPassword::frmCambiarPassword_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmCambiarPassword_Load(System::Object^ sender, System::EventArgs^ e) {
		Usuario^ objUsuario = this->objUsuario;
		this->objGestorUsuario->LeerUsuariosDesdeArchivo();
		this->objGestorSeguridad->LeerSeguridadDesdeArchivo();

		String^ DniSeguro = objUsuario->DNI;
		String^ PreguntaObtenida = this->objGestorSeguridad->ObtenerPregunta(DniSeguro);
		this->label4->Text = PreguntaObtenida;

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int es_valido;

		this->objGestorSeguridad->LeerSeguridadDesdeArchivo();
		//GestorSeguridad^ objGestorSeguridad = gcnew GestorSeguridad();
		Usuario^ objUsuario = this->objUsuario;
		String^ DniSeguro = objUsuario->DNI; 
		String^ emisionDNI = this->dateTimePicker1->Text;
		String^ Respuesta = this->textBox1->Text;
		String^ NuevaPassword = this->textBox2->Text;

	es_valido = this->objGestorSeguridad->validarSeguridad(DniSeguro, emisionDNI, Respuesta);

	
	if (es_valido) {
		/*CAMBIAR CONTRASEÑA*/
		this->objGestorUsuario->EliminarUsuarioXDni(DniSeguro);
		Usuario^ objUsuarioLogeado = this->objUsuario;
		Usuario^ objUsuario = gcnew Usuario(objUsuarioLogeado->CodigoDeUsuario,objUsuarioLogeado->Nombre, objUsuarioLogeado->ApellidoPaterno, objUsuarioLogeado->ApellidoMaterno, objUsuarioLogeado->DNI, objUsuarioLogeado->Correo, objUsuarioLogeado->userName, NuevaPassword, objUsuarioLogeado->tipoUsuario);
		
		this->objGestorUsuario->AgregarUsuario(objUsuario);
		MessageBox::Show("La contraseña ha sido cambiada correctamente");
		this->Close();
	}

	if (!es_valido) {
		MessageBox::Show("Datos incorrectos, intente de nuevo.");
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void frmCambiarPassword_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorUsuario->EscribirArchivo();
}
};
}
