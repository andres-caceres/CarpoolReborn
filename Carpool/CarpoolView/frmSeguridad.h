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
	/// Resumen de frmSeguridad
	/// </summary>
	public ref class frmSeguridad : public System::Windows::Forms::Form
	{
	public:
		frmSeguridad(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

		frmSeguridad(Usuario^ objUsuario, GestorUsuario^ objGestorUsuario)
		{
			InitializeComponent();
			this->objUsuario = objUsuario;
			this->objGestorUsuario = objGestorUsuario;
			this->objGestorSeguridad = gcnew GestorSeguridad();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmSeguridad()
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
	private: System::Windows::Forms::Label^ label4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmSeguridad::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->button2->Location = System::Drawing::Point(249, 249);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 31);
			this->button2->TabIndex = 37;
			this->button2->Text = L"Registrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmSeguridad::button2_Click);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(98, 249);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 31);
			this->button1->TabIndex = 36;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmSeguridad::button1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->dateTimePicker1);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Location = System::Drawing::Point(30, 28);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Size = System::Drawing::Size(392, 199);
			this->groupBox3->TabIndex = 35;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Seguridad";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &frmSeguridad::groupBox3_Enter);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(193, 100);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Pregunta";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 154);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Respuesta";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(195, 46);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(184, 20);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 100);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Pregunta de Seguridad";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 50);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Fecha de emisi�n de su DNI";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(195, 152);
			this->textBox9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(140, 20);
			this->textBox9->TabIndex = 1;
			// 
			// frmSeguridad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(468, 344);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmSeguridad";
			this->Text = L"Seguridad";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmSeguridad::frmSeguridad_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmSeguridad::frmSeguridad_Load);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int es_valido;

		this->objGestorSeguridad->LeerSeguridadDesdeArchivo();
		//GestorSeguridad^ objGestorSeguridad = gcnew GestorSeguridad();

		String^ DniSeguro = this->objUsuario->DNI; /// es lo mismo
		String^ emisionDNI = this->dateTimePicker1->Text;
		String^ Respuesta = this->textBox9->Text;

		es_valido = this->objGestorSeguridad->validarSeguridad(DniSeguro, emisionDNI, Respuesta);

		/*SI COINCIDE SE AGREGA*/
		if (es_valido) {


				this->objGestorUsuario->AgregarUsuario(objUsuario);
				MessageBox::Show("El usuario ha sido agregado correctamente");
				this->Close();
			
			
		}

		if (!es_valido) {
			MessageBox::Show("Incorrecto");
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void frmSeguridad_Load(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorSeguridad->LeerSeguridadDesdeArchivo();

	String^ DniSeguro = this->objUsuario->DNI; /// es lo mismo

	//GestorSeguridad^ objGestorSeguridad = gcnew GestorSeguridad();
	String^ PreguntaObtenida = this->objGestorSeguridad->ObtenerPregunta(DniSeguro);
	this->label4->Text = PreguntaObtenida;
	/*Si esta esto esta bien*/
}
private: System::Void frmSeguridad_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	GestorSeguridad^ objGestorSeguridad = gcnew GestorSeguridad(); 

	this->objGestorUsuario->EscribirArchivo();
}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
