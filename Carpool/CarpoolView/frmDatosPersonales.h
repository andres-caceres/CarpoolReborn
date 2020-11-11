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
	/// Resumen de frmDatosPersonales
	/// </summary>
	public ref class frmDatosPersonales : public System::Windows::Forms::Form
	{
	public:
		frmDatosPersonales(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Label^ lblMensaje5;
	private: System::Windows::Forms::Label^ lblMensaje4;
	private: System::Windows::Forms::Label^ lblMensaje3;
	private: System::Windows::Forms::Label^ lblMensaje2;
	private: GestorUsuario^ objGestorUsuario;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lblMensaje5 = (gcnew System::Windows::Forms::Label());
			this->lblMensaje4 = (gcnew System::Windows::Forms::Label());
			this->lblMensaje3 = (gcnew System::Windows::Forms::Label());
			this->lblMensaje2 = (gcnew System::Windows::Forms::Label());
			this->lblMensaje = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(216, 366);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 38);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Cerrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmDatosPersonales::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lblMensaje5);
			this->groupBox1->Controls->Add(this->lblMensaje4);
			this->groupBox1->Controls->Add(this->lblMensaje3);
			this->groupBox1->Controls->Add(this->lblMensaje2);
			this->groupBox1->Controls->Add(this->lblMensaje);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(36, 43);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(480, 296);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sus datos personales";
			// 
			// lblMensaje5
			// 
			this->lblMensaje5->AutoSize = true;
			this->lblMensaje5->Location = System::Drawing::Point(210, 247);
			this->lblMensaje5->Name = L"lblMensaje5";
			this->lblMensaje5->Size = System::Drawing::Size(72, 17);
			this->lblMensaje5->TabIndex = 9;
			this->lblMensaje5->Text = L"Tu Correo";
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
			// frmDatosPersonales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 415);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmDatosPersonales";
			this->Text = L"Datos Personales";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &frmDatosPersonales::frmDatosPersonales_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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
	//GestorUsuario^ objGestorUsuario = gcnew GestorUsuario();
	//objGestorUsuario->LeerUsuarioLogeadoDesdeArchivo();

	this->lblMensaje->Text  = objUsuario->Nombre;
	this->lblMensaje2->Text = objUsuario->ApellidoPaterno;
	this->lblMensaje3->Text = objUsuario->ApellidoMaterno;
	this->lblMensaje4->Text = objUsuario->DNI;
	this->lblMensaje5->Text = objUsuario->Correo;
}
};
}
