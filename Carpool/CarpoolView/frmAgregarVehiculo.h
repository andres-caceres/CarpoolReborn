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
	/// Summary for frmAgregarVehiculo
	/// </summary>
	public ref class frmAgregarVehiculo : public System::Windows::Forms::Form
	{
	public:
		frmAgregarVehiculo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		frmAgregarVehiculo(GestorVehiculo^ objGestorVehiculo)
		{
			InitializeComponent();

			this->objGestorVehiculo = objGestorVehiculo;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmAgregarVehiculo()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ Marca;
	private: System::Windows::Forms::TextBox^ Modelo;
	private: System::Windows::Forms::TextBox^ Placa;
	private: System::Windows::Forms::TextBox^ Tipo;
	private: System::Windows::Forms::TextBox^ Asientos;
	private: System::Windows::Forms::TextBox^ Propietario;







	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ Color;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ tarjetaPropiedad;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:
		GestorVehiculo^ objGestorVehiculo;

		   /// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Marca = (gcnew System::Windows::Forms::ComboBox());
			this->Modelo = (gcnew System::Windows::Forms::TextBox());
			this->Placa = (gcnew System::Windows::Forms::TextBox());
			this->Tipo = (gcnew System::Windows::Forms::TextBox());
			this->Asientos = (gcnew System::Windows::Forms::TextBox());
			this->Propietario = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Color = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tarjetaPropiedad = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Marca";
			this->label1->Click += gcnew System::EventHandler(this, &frmAgregarVehiculo::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Modelo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Placa";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(39, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Color";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 181);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Tipo";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(39, 218);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Asientos";
			this->label6->Click += gcnew System::EventHandler(this, &frmAgregarVehiculo::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(39, 30);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Propietario";
			// 
			// Marca
			// 
			this->Marca->FormattingEnabled = true;
			this->Marca->Items->AddRange(gcnew cli::array< System::Object^  >(40) {
				L"Alfa Romeo", L"Audi", L"Bentley", L"BMW", L"Cadillac",
					L"Citroen", L"Changan", L"Chery", L"Chevrolet", L"Daewoo", L"Dodge", L"Ferrari", L"Fiat", L"Ford", L"GMC", L"Great Wall", L"Honda",
					L"Hyundai", L"JAC", L"Jaguar", L"Jeep", L"KIA", L"Land Rover", L"Lexus", L"Maserati", L"Mazda", L"Mercedes-Benz", L"MG", L"Mini",
					L"Mitsubishi", L"Nissan", L"Peugeot", L"Porsche", L"Renault", L"Subaru", L"Suzuki", L"Toyota", L"Volkswagen", L"Volvo", L"Otro"
			});
			this->Marca->Location = System::Drawing::Point(133, 19);
			this->Marca->Name = L"Marca";
			this->Marca->Size = System::Drawing::Size(171, 21);
			this->Marca->TabIndex = 7;
			// 
			// Modelo
			// 
			this->Modelo->Location = System::Drawing::Point(133, 58);
			this->Modelo->Name = L"Modelo";
			this->Modelo->Size = System::Drawing::Size(171, 20);
			this->Modelo->TabIndex = 8;
			// 
			// Placa
			// 
			this->Placa->Location = System::Drawing::Point(133, 104);
			this->Placa->Name = L"Placa";
			this->Placa->Size = System::Drawing::Size(171, 20);
			this->Placa->TabIndex = 9;
			// 
			// Tipo
			// 
			this->Tipo->Location = System::Drawing::Point(133, 181);
			this->Tipo->Name = L"Tipo";
			this->Tipo->Size = System::Drawing::Size(171, 20);
			this->Tipo->TabIndex = 11;
			// 
			// Asientos
			// 
			this->Asientos->Location = System::Drawing::Point(133, 214);
			this->Asientos->Name = L"Asientos";
			this->Asientos->Size = System::Drawing::Size(171, 20);
			this->Asientos->TabIndex = 12;
			// 
			// Propietario
			// 
			this->Propietario->Location = System::Drawing::Point(133, 27);
			this->Propietario->Name = L"Propietario";
			this->Propietario->Size = System::Drawing::Size(171, 20);
			this->Propietario->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(39, 62);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(161, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Numero de Tarjeta de Propiedad";
			this->label8->Click += gcnew System::EventHandler(this, &frmAgregarVehiculo::label8_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Color);
			this->groupBox1->Controls->Add(this->Marca);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->Asientos);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->Tipo);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->Placa);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->Modelo);
			this->groupBox1->Location = System::Drawing::Point(29, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(349, 247);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Vehiculo";
			// 
			// Color
			// 
			this->Color->FormattingEnabled = true;
			this->Color->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"AMA - Amarillo", L"ANA - Anaranjado", L"AZU - Azul",
					L"BEI - Beige", L"BLA - Blanco", L"CEL - Celeste", L"CRE - Crema", L"DOR - Dorado", L"FUC - Fucsia", L"GRI - Gris", L"GUI - Guinda",
					L"MAR - Marrón", L"MOR - Morado", L"NEG - Negro", L"PLA - Plata", L"ROJ - Rojo", L"ROS - Rosado", L"SAL - Salmón", L"TUR - Turquesa",
					L"VER - Verde", L"VIO - Violeta"
			});
			this->Color->Location = System::Drawing::Point(133, 137);
			this->Color->Name = L"Color";
			this->Color->Size = System::Drawing::Size(171, 21);
			this->Color->TabIndex = 13;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tarjetaPropiedad);
			this->groupBox2->Controls->Add(this->Propietario);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Location = System::Drawing::Point(29, 275);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(349, 123);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Propietario";
			// 
			// tarjetaPropiedad
			// 
			this->tarjetaPropiedad->Location = System::Drawing::Point(133, 87);
			this->tarjetaPropiedad->Name = L"tarjetaPropiedad";
			this->tarjetaPropiedad->Size = System::Drawing::Size(171, 20);
			this->tarjetaPropiedad->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(246, 404);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 24);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAgregarVehiculo::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(71, 404);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 24);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAgregarVehiculo::button2_Click);
			// 
			// frmAgregarVehiculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(404, 456);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmAgregarVehiculo";
			this->Text = L"frmAgregarVehiculo";
			this->Load += gcnew System::EventHandler(this, &frmAgregarVehiculo::frmAgregarVehiculo_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void frmAgregarVehiculo_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ Marca = this->Marca->Text;
	String^ Modelo = this->Modelo->Text;
	String^ Placa = this->Placa->Text;
	String^ Color = this->Color->Text; 
	String^ Tipo = this->Tipo->Text;
	String^ Asientos = this->Asientos->Text;
	String^ Propietario = this->Propietario->Text;
	String^ TarjetaPropiedad = this->tarjetaPropiedad->Text;

	Vehiculo^ objVehiculo = gcnew Vehiculo(Marca, Modelo, Placa, Color, Tipo, Asientos, Propietario, TarjetaPropiedad);
	this->objGestorVehiculo->AgregarVehiculo(objVehiculo);
	MessageBox::Show("El vehiculo ha sido agregado correctamente");
	this->Close();
}
};
}
