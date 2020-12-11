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
	/// Resumen de frmNuevaTarjeta
	/// </summary>
	public ref class frmNuevaTarjeta : public System::Windows::Forms::Form
	{
	public:
		frmNuevaTarjeta(Usuario^ objUsuario, GestorTarjeta^ objGestorTarjeta)
		{
			InitializeComponent();
			this->objGestorTarjeta = objGestorTarjeta;
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
		~frmNuevaTarjeta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: GestorTarjeta^ objGestorTarjeta;
	private: Usuario^ objUsuario;
	private: GestorUsuario^ objGestorUsuario;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmNuevaTarjeta::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(46, 56);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(601, 336);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de su tarjeta";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(94, 274);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Tipo de tarjeta:";
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"VISA", L"MasterCard", L"AmericanExpress" });
			this->comboBox3->Location = System::Drawing::Point(232, 271);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(136, 24);
			this->comboBox3->TabIndex = 8;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"2021", L"2022", L"2023", L"2024", L"2025", L"2026",
					L"2027", L"2028"
			});
			this->comboBox2->Location = System::Drawing::Point(232, 215);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(136, 24);
			this->comboBox2->TabIndex = 7;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Enero", L"Febrero", L"Marzo", L"Abril", L"Mayo",
					L"Junio", L"Julio", L"Agosto", L"Septiembre", L"Octubre", L"Noviembre", L"Diciembre"
			});
			this->comboBox1->Location = System::Drawing::Point(232, 163);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(136, 24);
			this->comboBox1->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(73, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Año de expiración:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(72, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Mes de expiración:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(232, 109);
			this->textBox2->MaxLength = 3;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmNuevaTarjeta::textBox2_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(159, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"CVV:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(67, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Numero de Tarjeta:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(232, 57);
			this->textBox1->MaxLength = 16;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(262, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmNuevaTarjeta::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(190, 442);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevaTarjeta::button1_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(389, 442);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 37);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevaTarjeta::button2_Click);
			// 
			// frmNuevaTarjeta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(698, 525);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmNuevaTarjeta";
			this->Text = L"Nueva Tarjeta";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ NroTarjeta = this->textBox1->Text;
		String^ CVV = this->textBox2->Text;
		String^ MesExp=this->comboBox1->Text;
		String^ AnhoExp = this->comboBox2->Text;
		String^ TipoTarjeta = this->comboBox3->Text;
		String^ NumMesExp;
		if (MesExp == "Enero") { NumMesExp = "01"; }
		else if (MesExp == "Febrero") { NumMesExp = "02"; }
		else if (MesExp == "Marzo") { NumMesExp = "03"; }
		else if (MesExp == "Abril") { NumMesExp = "04"; }
		else if (MesExp == "Mayo") { NumMesExp = "05"; }
		else if (MesExp == "Junio") { NumMesExp = "06"; }
		else if (MesExp == "Julio") { NumMesExp = "07"; }
		else if (MesExp == "Agosto") { NumMesExp = "08"; }
		else if (MesExp == "Septiembre") { NumMesExp = "09"; }
		else if (MesExp == "Octubre") { NumMesExp = "10"; }
		else if (MesExp == "Noviembre") { NumMesExp = "11"; }
		else if (MesExp == "Diciembre") { NumMesExp = "12"; }

		int misma_tarjeta = this->objGestorTarjeta->MismaTarjeta(NroTarjeta, this->objUsuario->CodigoDeUsuario,TipoTarjeta);

		if ((MesExp == "") || (AnhoExp == "")||(CVV=="")||(NroTarjeta=="")||(TipoTarjeta=="")||(NroTarjeta->Length!=16)||(CVV->Length!=3)) {
			MessageBox::Show("Debe completar todos los datos");
		}
		else {

			if (!misma_tarjeta) {
				String^ FechaExp = NumMesExp + "/" + AnhoExp;
				//this->objGestorUsuario->LeerUsuariosDesdeArchivo();
				Usuario^ UsuarioLogeado = this->objUsuario;
			
				Tarjeta^ objTarjeta = gcnew Tarjeta(UsuarioLogeado->CodigoDeUsuario, NroTarjeta, CVV, FechaExp, TipoTarjeta);

				//this->objGestorTarjeta->AgregarTarjeta(objTarjeta);
				this->objGestorTarjeta->InsertarTarjeta(objTarjeta);

				MessageBox::Show("Tarjeta añadida exitosamente");
				this->Close();
			}
			else {
				MessageBox::Show("Ya tienes agregada esta tarjeta");
			}
			
			
		}
		
	}

   bool IsNumeric(char c) {
	   if ((c >= '0' && c <= '9') || (c == 8))
	   {
		   return true;
	   }
	   return false;
   }



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (IsNumeric(e->KeyChar)) {
		e->Handled = false;
	}
	else {
		e->Handled = true;
	}
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (IsNumeric(e->KeyChar)) {
		e->Handled = false;
	}
	else {
		e->Handled = true;
	}
}
};
}
