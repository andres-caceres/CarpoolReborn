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
	/// Resumen de frmPreguntaSeguridad
	/// </summary>
	public ref class frmPreguntaSeguridad : public System::Windows::Forms::Form
	{
	public:
		frmPreguntaSeguridad(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmPreguntaSeguridad(Usuario^ objUsuario, GestorUsuario^ objGestorUsuario)
		{
			InitializeComponent();
			this->objUsuario = objUsuario;
			this->objGestorUsuario = objGestorUsuario;
			this->objGestorSeguridad = gcnew GestorSeguridad();

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPreguntaSeguridad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: Usuario^ objUsuario;
	private: GestorUsuario^ objGestorUsuario;
	private: GestorSeguridad^ objGestorSeguridad;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Green;
			this->button2->Location = System::Drawing::Point(327, 329);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 38);
			this->button2->TabIndex = 40;
			this->button2->Text = L"Registrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPreguntaSeguridad::button2_Click);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(126, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 38);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPreguntaSeguridad::button1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->dateTimePicker1);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Location = System::Drawing::Point(36, 42);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(523, 245);
			this->groupBox3->TabIndex = 38;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Seguridad";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Nombre de tu padre", L"Nombre de su madre", L"Mascota de la infancia",
					L"Ciudad en la que nació"
			});
			this->comboBox1->Location = System::Drawing::Point(260, 123);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(244, 24);
			this->comboBox1->TabIndex = 31;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 17);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Respuesta";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(260, 57);
			this->dateTimePicker1->MaxDate = System::DateTime(2020, 12, 2, 15, 12, 47, 97);
			this->dateTimePicker1->MinDate = System::DateTime(1980, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(134, 22);
			this->dateTimePicker1->TabIndex = 4;
			this->dateTimePicker1->Value = System::DateTime(2020, 12, 2, 0, 0, 0, 0);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Pregunta de Seguridad";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Fecha de emisión de su DNI";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(260, 187);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(186, 22);
			this->textBox9->TabIndex = 1;
			// 
			// frmPreguntaSeguridad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 400);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"frmPreguntaSeguridad";
			this->Text = L"Pregunta Seguridad";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPreguntaSeguridad::frmPreguntaSeguridad_FormClosing);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int esta_lleno;

		//GestorSeguridad^ objGestorSeguridad = gcnew GestorSeguridad();

		this->objGestorSeguridad->LeerSeguridadDesdeArchivo();
		String^ emisionDNI = this->dateTimePicker1->Text;
		String^ Pregunta = this->comboBox1->Text;
		String^ Respuesta = this->textBox9->Text;

		String^ DniSeguro = this->objUsuario->DNI; /// es lo mismo

		Seguridad^ objSeguridad = gcnew Seguridad(DniSeguro, emisionDNI, Pregunta, Respuesta);

		esta_lleno = this->objGestorSeguridad->SeguridadLlena(emisionDNI, Pregunta, Respuesta);
		//es_valido = objGestorSeguridad->validarSeguridad(DniSeguro, emisionDNI,Respuesta);

		if (esta_lleno) {


				this->objGestorUsuario->AgregarUsuario(objUsuario);
				this->objGestorSeguridad->AgregarSeguridad(objSeguridad);
				MessageBox::Show("El usuario ha sido agregado correctamente");
				this->Close();
		
		}

		if (!esta_lleno) {
			MessageBox::Show("Debe llenar todos los campos");
		}


		
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void frmPreguntaSeguridad_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorSeguridad->EscribirArchivo();
	this->objGestorUsuario->EscribirArchivo();
}
};
}
