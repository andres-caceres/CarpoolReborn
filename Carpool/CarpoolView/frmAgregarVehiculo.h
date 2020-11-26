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
	/// Resumen de frmAgregarVehiculo
	/// </summary>
	public ref class frmAgregarVehiculo : public System::Windows::Forms::Form
	{
	public:
		frmAgregarVehiculo(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
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

		frmAgregarVehiculo(int UserID)
		{
			InitializeComponent();

			this->objGestorVehiculo = gcnew GestorVehiculo();
			this->objConductor = gcnew Conductor(UserID);
			//
			//TODO: Add the constructor code here
			//
		}

		
		frmAgregarVehiculo(Conductor^ objConductor)
		{
			InitializeComponent();

			this->objGestorVehiculo = objGestorVehiculo;
			this->objConductor = objConductor;
			//
			//TODO: Add the constructor code here
			//
		}
		
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmAgregarVehiculo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::TextBox^ Propietario;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ Color;
	private: System::Windows::Forms::ComboBox^ Marca;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Placa;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Modelo;
	private: System::Windows::Forms::ComboBox^ Tipo;

	private:
		GestorVehiculo^ objGestorVehiculo;
		Conductor^ objConductor;

	private: System::Windows::Forms::TextBox^ SOAT;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ RevTec;
	private: System::Windows::Forms::ComboBox^ Asientos;


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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->Propietario = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->RevTec = (gcnew System::Windows::Forms::TextBox());
			this->SOAT = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Tipo = (gcnew System::Windows::Forms::ComboBox());
			this->Color = (gcnew System::Windows::Forms::ComboBox());
			this->Marca = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Placa = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Modelo = (gcnew System::Windows::Forms::TextBox());
			this->Asientos = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(71, 442);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 24);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAgregarVehiculo::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(234, 442);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 24);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAgregarVehiculo::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->Propietario);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Location = System::Drawing::Point(28, 356);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(349, 62);
			this->groupBox2->TabIndex = 20;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Propietario";
			// 
			// Propietario
			// 
			this->Propietario->Location = System::Drawing::Point(133, 27);
			this->Propietario->MaxLength = 50;
			this->Propietario->Name = L"Propietario";
			this->Propietario->Size = System::Drawing::Size(171, 20);
			this->Propietario->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(27, 30);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Nombres y Apellidos";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Asientos);
			this->groupBox1->Controls->Add(this->RevTec);
			this->groupBox1->Controls->Add(this->SOAT);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->Tipo);
			this->groupBox1->Controls->Add(this->Color);
			this->groupBox1->Controls->Add(this->Marca);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->Placa);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->Modelo);
			this->groupBox1->Location = System::Drawing::Point(28, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(349, 319);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Vehiculo";
			// 
			// RevTec
			// 
			this->RevTec->Location = System::Drawing::Point(133, 284);
			this->RevTec->Name = L"RevTec";
			this->RevTec->Size = System::Drawing::Size(171, 20);
			this->RevTec->TabIndex = 18;
			// 
			// SOAT
			// 
			this->SOAT->Location = System::Drawing::Point(133, 250);
			this->SOAT->Name = L"SOAT";
			this->SOAT->Size = System::Drawing::Size(171, 20);
			this->SOAT->TabIndex = 17;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(27, 291);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Revisión Técnica";
			this->label10->Click += gcnew System::EventHandler(this, &frmAgregarVehiculo::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(40, 257);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"SOAT";
			// 
			// Tipo
			// 
			this->Tipo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Tipo->FormattingEnabled = true;
			this->Tipo->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Sedan", L"Coupé", L"Hatchback", L"Convertible", L"Station Wagon",
					L"SUV", L"Arenero"
			});
			this->Tipo->Location = System::Drawing::Point(133, 176);
			this->Tipo->Margin = System::Windows::Forms::Padding(2);
			this->Tipo->Name = L"Tipo";
			this->Tipo->Size = System::Drawing::Size(171, 21);
			this->Tipo->TabIndex = 14;
			// 
			// Color
			// 
			this->Color->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
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
			// Marca
			// 
			this->Marca->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Marca";
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
			// Placa
			// 
			this->Placa->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->Placa->Location = System::Drawing::Point(133, 104);
			this->Placa->MaxLength = 10;
			this->Placa->Name = L"Placa";
			this->Placa->Size = System::Drawing::Size(171, 20);
			this->Placa->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(39, 218);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Asientos";
			// 
			// Modelo
			// 
			this->Modelo->Location = System::Drawing::Point(133, 58);
			this->Modelo->Name = L"Modelo";
			this->Modelo->Size = System::Drawing::Size(171, 20);
			this->Modelo->TabIndex = 8;
			// 
			// Asientos
			// 
			this->Asientos->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Asientos->FormattingEnabled = true;
			this->Asientos->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"4", L"5", L"6", L"7", L"8" });
			this->Asientos->Location = System::Drawing::Point(252, 215);
			this->Asientos->Name = L"Asientos";
			this->Asientos->Size = System::Drawing::Size(52, 21);
			this->Asientos->TabIndex = 19;
			// 
			// frmAgregarVehiculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 487);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmAgregarVehiculo";
			this->Text = L"Agregar vehículo";
			this->Load += gcnew System::EventHandler(this, &frmAgregarVehiculo::frmAgregarVehiculo_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool validar_entradas(String^ Marca, String^ Modelo, String^ Placa, String^ Color, String^ Tipo, String^ Asientos, String^ Propietario, String^ SOAT, String^ RevTec) {

			bool isEmpty1 = (Marca == "" || Modelo == "" || Placa == "" || Color == "" || Tipo == "" || Asientos == "" || Propietario == "" || SOAT == "" || RevTec == "");

			if (isEmpty1) {
				MessageBox::Show("Debe llenar todos los campos", "Error");
				return 0;
			}
			return 1;
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*AGREGAR*/
		
			String^ Marca = this->Marca->Text;
			String^ Modelo = this->Modelo->Text;
			String^ Placa = this->Placa->Text;
			String^ Color = this->Color->Text;
			String^ Tipo = this->Tipo->Text;
			String^ Asientos = this->Asientos->Text;
			String^ Propietario = this->Propietario->Text;
			String^ SOAT = this->SOAT->Text;
			String^ RevTec = this->RevTec->Text;
			int IDConductor = this->objConductor->CodigoDeUsuario;

			int valido = 2;  // 2: en proceso de validacion (ver vehiculo.h para mas info)

			if (validar_entradas(Marca, Modelo, Placa, Color, Tipo, Asientos, Propietario, SOAT, RevTec)) {

			Vehiculo^ objVehiculo = gcnew Vehiculo(Marca, Modelo, Placa, Color, Tipo, Asientos, Propietario, SOAT, RevTec, IDConductor, valido);
			this->objGestorVehiculo->AgregarVehiculo(objVehiculo);
			this->objGestorVehiculo->EscribirArchivo();

			MessageBox::Show("Los datos han sido enviados para verificación y aprobación, se le notificará cuando esté disponible para su uso", "Vehiculo Agregado");

			this->Close();
			}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*CANCELAR*/

	this->Close();
}
private: System::Void frmAgregarVehiculo_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tarjetaPropiedad_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
