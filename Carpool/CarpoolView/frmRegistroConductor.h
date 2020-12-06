#pragma once
#include "frmSeguridad.h"
#include "frmPreguntaSeguridad.h"

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
	/// Resumen de frmRegistroConductor
	/// </summary>
	public ref class frmRegistroConductor : public System::Windows::Forms::Form
	{
	public:
		frmRegistroConductor(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmRegistroConductor(Conductor^ objConductor)
		{
			InitializeComponent();
			this->objConductor = objConductor;

		}
		frmRegistroConductor(Usuario^ objUsuario, GestorUsuario^ objGestorUsuario)
		{
			InitializeComponent();
			this->objUsuario = objUsuario;
			this->objGestorUsuario = objGestorUsuario;
			this->objGestorConductor = gcnew GestorConductor();
			this->objGestorVehiculo = gcnew GestorVehiculo();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmRegistroConductor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: Usuario^ objUsuario;
	private: GestorUsuario^ objGestorUsuario;
	private: GestorConductor^ objGestorConductor;
	private: Conductor^ objConductor;
	private: GestorVehiculo^ objGestorVehiculo;
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ Propietario;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ComboBox^ Asientos;
	private: System::Windows::Forms::TextBox^ RevTec;
	private: System::Windows::Forms::TextBox^ SOAT;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ Tipo;
	private: System::Windows::Forms::ComboBox^ Color;
	private: System::Windows::Forms::ComboBox^ Marca;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ Placa;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ Modelo;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->Propietario = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->Asientos = (gcnew System::Windows::Forms::ComboBox());
			this->RevTec = (gcnew System::Windows::Forms::TextBox());
			this->SOAT = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Tipo = (gcnew System::Windows::Forms::ComboBox());
			this->Color = (gcnew System::Windows::Forms::ComboBox());
			this->Marca = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Placa = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Modelo = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(195, 847);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmRegistroConductor::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(409, 847);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Siguiente";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmRegistroConductor::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(85, 62);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(572, 181);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos Conductor";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(256, 124);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->MaxLength = 9;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(255, 22);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(68, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Cuenta Bancaria:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(256, 65);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->MaxLength = 9;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(255, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Numero de Licencia:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->Propietario);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Location = System::Drawing::Point(85, 731);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(572, 86);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Propietario del Vehiculo";
			// 
			// Propietario
			// 
			this->Propietario->Location = System::Drawing::Point(256, 34);
			this->Propietario->Margin = System::Windows::Forms::Padding(4);
			this->Propietario->MaxLength = 50;
			this->Propietario->Name = L"Propietario";
			this->Propietario->Size = System::Drawing::Size(255, 22);
			this->Propietario->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 37);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Nombres y Apellidos";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->Asientos);
			this->groupBox3->Controls->Add(this->RevTec);
			this->groupBox3->Controls->Add(this->SOAT);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->Tipo);
			this->groupBox3->Controls->Add(this->Color);
			this->groupBox3->Controls->Add(this->Marca);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->Placa);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->Modelo);
			this->groupBox3->Location = System::Drawing::Point(85, 264);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(572, 437);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Vehiculo";
			// 
			// Asientos
			// 
			this->Asientos->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Asientos->FormattingEnabled = true;
			this->Asientos->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"4", L"5", L"6", L"7", L"8" });
			this->Asientos->Location = System::Drawing::Point(415, 292);
			this->Asientos->Margin = System::Windows::Forms::Padding(4);
			this->Asientos->Name = L"Asientos";
			this->Asientos->Size = System::Drawing::Size(96, 24);
			this->Asientos->TabIndex = 19;
			// 
			// RevTec
			// 
			this->RevTec->Location = System::Drawing::Point(256, 382);
			this->RevTec->Margin = System::Windows::Forms::Padding(4);
			this->RevTec->Name = L"RevTec";
			this->RevTec->Size = System::Drawing::Size(255, 22);
			this->RevTec->TabIndex = 18;
			// 
			// SOAT
			// 
			this->SOAT->Location = System::Drawing::Point(256, 335);
			this->SOAT->Margin = System::Windows::Forms::Padding(4);
			this->SOAT->Name = L"SOAT";
			this->SOAT->Size = System::Drawing::Size(255, 22);
			this->SOAT->TabIndex = 17;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(36, 385);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(116, 17);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Revisión Técnica";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(53, 343);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 17);
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
			this->Tipo->Location = System::Drawing::Point(256, 244);
			this->Tipo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Tipo->Name = L"Tipo";
			this->Tipo->Size = System::Drawing::Size(255, 24);
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
			this->Color->Location = System::Drawing::Point(256, 196);
			this->Color->Margin = System::Windows::Forms::Padding(4);
			this->Color->Name = L"Color";
			this->Color->Size = System::Drawing::Size(255, 24);
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
			this->Marca->Location = System::Drawing::Point(256, 50);
			this->Marca->Margin = System::Windows::Forms::Padding(4);
			this->Marca->Name = L"Marca";
			this->Marca->Size = System::Drawing::Size(255, 24);
			this->Marca->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 50);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 17);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Marca";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(52, 98);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 17);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Modelo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(52, 155);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 17);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Placa";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(52, 205);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 17);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Color";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(52, 250);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 17);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Tipo";
			// 
			// Placa
			// 
			this->Placa->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->Placa->Location = System::Drawing::Point(256, 155);
			this->Placa->Margin = System::Windows::Forms::Padding(4);
			this->Placa->MaxLength = 10;
			this->Placa->Name = L"Placa";
			this->Placa->Size = System::Drawing::Size(255, 22);
			this->Placa->TabIndex = 9;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(52, 295);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(62, 17);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Asientos";
			// 
			// Modelo
			// 
			this->Modelo->Location = System::Drawing::Point(256, 98);
			this->Modelo->Margin = System::Windows::Forms::Padding(4);
			this->Modelo->Name = L"Modelo";
			this->Modelo->Size = System::Drawing::Size(255, 22);
			this->Modelo->TabIndex = 8;
			// 
			// frmRegistroConductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(731, 932);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmRegistroConductor";
			this->Text = L"Registro Conductor";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmRegistroConductor::frmRegistroConductor_FormClosing);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Del conductor*/
	String^ Licencia = this->textBox1->Text;
	String^ CuentaBancaria = this->textBox2->Text;
	/*De los vehiculos*/
	String^ Marca = this->Marca->Text;
	String^ Modelo = this->Modelo->Text;
	String^ Placa = this->Placa->Text;
	String^ Color = this->Color->Text;
	String^ Tipo = this->Tipo->Text;
	String^ Asientos = this->Asientos->Text;
	String^ Propietario = this->Propietario->Text;
	String^ SOAT = this->SOAT->Text;
	String^ RevTec = this->RevTec->Text;

	int datos_llenos;

	if ((Licencia == "") || (CuentaBancaria == "")||(Marca=="") || (Modelo == "") || (Placa == "") || (Color == "")||(Tipo == "") || (Asientos == "") || (Propietario == "")||(SOAT == "") || (RevTec == "")) {
		datos_llenos = 0;
	}
	else {
		datos_llenos = 1;
	}
	 
	if (datos_llenos) {
		Vehiculo^ objVehiculo = gcnew Vehiculo(Marca, Modelo,Placa, Color, Tipo, Asientos, Propietario, SOAT, RevTec,objUsuario->CodigoDeUsuario,2);
		Conductor^ objConductor = gcnew Conductor(objUsuario->CodigoDeUsuario,objUsuario->Nombre,Licencia,0,0,objVehiculo,CuentaBancaria,2);
		
		int es_valido, mismos_datos, esta_completo, mismo_tipo_usuario;
		es_valido = objGestorUsuario->UsuarioRepetido(objUsuario->userName);
		mismos_datos = objGestorUsuario->MismosDatos(objUsuario->DNI, objUsuario->Correo, objUsuario->Nombre, objUsuario->ApellidoPaterno, objUsuario->ApellidoMaterno);
		esta_completo = objGestorUsuario->ValidarRegistro(objUsuario->Nombre, objUsuario->ApellidoPaterno, objUsuario->ApellidoMaterno, objUsuario->DNI, objUsuario->Correo, objUsuario->userName, objUsuario->password);
		mismo_tipo_usuario = objGestorUsuario->MismoTipoUsuario(objUsuario->DNI, objUsuario->Correo, objUsuario->Nombre, objUsuario->ApellidoPaterno, objUsuario->ApellidoMaterno, objUsuario->tipoUsuario);

		if (mismos_datos && es_valido && (!mismo_tipo_usuario) && esta_completo) {	//Segunda vez registro
			frmSeguridad^ ventanaSeguridad = gcnew frmSeguridad(this->objUsuario, this->objGestorUsuario);
			ventanaSeguridad->Show();
			//this->objGestorConductor->AgregarALista(objConductor);
			//this->Hide();
			//this->objGestorUsuario->AgregarUsuario(objUsuario);
			this->Close();
		}

		if (mismos_datos && es_valido && mismo_tipo_usuario) {
			MessageBox::Show("Ya hay una cuenta con el mismo tipo de usuario y datos");
		}

		if (es_valido && esta_completo && (!mismos_datos) && esta_completo) {	//Primera vez registro
			frmPreguntaSeguridad^ ventanaPreguntaSeguridad = gcnew frmPreguntaSeguridad(this->objUsuario, this->objGestorUsuario, objVehiculo, objConductor, this->objGestorConductor, this->objGestorVehiculo);
			ventanaPreguntaSeguridad->Show();

			//this->objGestorUsuario->AgregarUsuario(objUsuario);		IMPORTANTE
			//MessageBox::Show("El usuario ha sido agregado correctamente");
			this->Close();
		}

	}
	else {
		MessageBox::Show("Debe llenar todos los datos");
	}
}
private: System::Void frmRegistroConductor_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	//this->objGestorConductor->EscribirArchivo();
}
};
}
