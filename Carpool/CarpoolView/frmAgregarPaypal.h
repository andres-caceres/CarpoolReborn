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
	/// Resumen de frmAgregarPaypal
	/// </summary>
	public ref class frmAgregarPaypal : public System::Windows::Forms::Form
	{
	public:
		frmAgregarPaypal(Usuario^ objUsuario, GestorPaypal^objGestorPaypal)
		{
			InitializeComponent();
			this->objGestorPaypal = objGestorPaypal;
			this->objGestorUsuario = gcnew GestorUsuario();
			this->objUsuario = objUsuario;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmAgregarPaypal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: Usuario^ objUsuario;
	private: GestorPaypal^ objGestorPaypal;
	private: GestorUsuario^ objGestorUsuario;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(419, 271);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 37);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAgregarPaypal::button2_Click);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(217, 271);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 37);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAgregarPaypal::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(41, 43);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(714, 177);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del PayPal";
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Green;
			this->button3->Location = System::Drawing::Point(551, 47);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 37);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Es mi correo";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmAgregarPaypal::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(232, 109);
			this->textBox2->MaxLength = 40;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(214, 22);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(113, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Contraseña:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(143, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Correo:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(232, 57);
			this->textBox1->MaxLength = 16;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(262, 22);
			this->textBox1->TabIndex = 0;
			// 
			// frmAgregarPaypal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(798, 349);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"frmAgregarPaypal";
			this->Text = L"Agregar Paypal";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ correo = this->textBox1->Text;
		String^ contrasenha = this->textBox2->Text;
		
		int mismo_paypal = this->objGestorPaypal->MismoPaypal(correo,this->objUsuario->CodigoDeUsuario);

		if ((correo == "") || (contrasenha == "")) {
			MessageBox::Show("Debe llenar todos los datos");
		}
		else {

			if (!mismo_paypal) {

				Usuario^ UsuarioLogeado = this->objUsuario;

				Paypal^ objPaypal = gcnew Paypal(UsuarioLogeado->CodigoDeUsuario, correo, contrasenha);
				this->objGestorPaypal->AgregarPaypal(objPaypal);

				MessageBox::Show("Paypal añadido exitosamente");
				this->Close();
			}
			else {
				MessageBox::Show("Ya existe un paypal con ese correo");
			}

		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ correo = this->objUsuario->Correo;

	this->textBox1->Text = correo;
}
};
}
