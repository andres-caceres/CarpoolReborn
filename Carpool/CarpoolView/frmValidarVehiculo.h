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
	/// Resumen de frmValidarVehiculo
	/// </summary>
	public ref class frmValidarVehiculo : public System::Windows::Forms::Form
	{
	public:
		frmValidarVehiculo(void)
		{
			InitializeComponent();
			this->objGestorVehiculo = gcnew GestorVehiculo();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmValidarVehiculo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: GestorVehiculo^ objGestorVehiculo;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmValidarVehiculo::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(461, 72);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(537, 90);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Buscar";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"En proceso", L"Validado", L"Rechazado", L"Sin filtro" });
			this->comboBox1->Location = System::Drawing::Point(152, 39);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(189, 24);
			this->comboBox1->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Blue;
			this->button1->Location = System::Drawing::Point(388, 36);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmValidarVehiculo::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(74, 40);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 18);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Validez:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11
			});
			this->dataGridView1->Location = System::Drawing::Point(37, 208);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1446, 234);
			this->dataGridView1->TabIndex = 11;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Marca";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Modelo";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Placa";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Color";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Tipo";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"# de asientos";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Propietario";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"SOAT";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Revisión Técnica";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"ID del Conductor";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Validez";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::BlueViolet;
			this->button2->Location = System::Drawing::Point(556, 487);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 28);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Validar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmValidarVehiculo::button2_Click);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(771, 487);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 28);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Denegar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmValidarVehiculo::button3_Click);
			// 
			// frmValidarVehiculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1519, 540);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmValidarVehiculo";
			this->Text = L"Validar Vehiculo";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmValidarVehiculo::frmValidarVehiculo_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmValidarVehiculo::frmValidarVehiculo_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmValidarVehiculo_Load(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorVehiculo->LeerVehiculosDesdeArchivo();

		for (int i = 0; i < objGestorVehiculo->ObtenerCantidadVehiculos(); i++) {
			Vehiculo^ objVehiculo = objGestorVehiculo->ObtenerVehiculoDeLista(i);
			array<String^>^ fila = gcnew array<String^>(11);
			fila[0] = objVehiculo->Marca;
			fila[1] = objVehiculo->Modelo;
			fila[2] = objVehiculo->Placa;
			fila[3] = objVehiculo->Color;
			fila[4] = objVehiculo->Tipo;
			fila[5] = objVehiculo->NumeroAsientos;
			fila[6] = objVehiculo->Propietario;
			fila[7] = objVehiculo->SOAT;
			fila[8] = objVehiculo->RevTec;
			fila[9] = Convert::ToString(objVehiculo->IDConductor);
			fila[10] = Convert::ToString(objVehiculo->valido);

			this->dataGridView1->Rows->Add(fila);
		}

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ValidezComboBox = this->comboBox1->Text;
	int ValidezBuscar;

	if (ValidezComboBox == "Sin filtro") {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < objGestorVehiculo->ObtenerCantidadVehiculos(); i++) {
			Vehiculo^ objVehiculo = objGestorVehiculo->ObtenerVehiculoDeLista(i);
			array<String^>^ fila = gcnew array<String^>(11);
			fila[0] = objVehiculo->Marca;
			fila[1] = objVehiculo->Modelo;
			fila[2] = objVehiculo->Placa;
			fila[3] = objVehiculo->Color;
			fila[4] = objVehiculo->Tipo;
			fila[5] = objVehiculo->NumeroAsientos;
			fila[6] = objVehiculo->Propietario;
			fila[7] = objVehiculo->SOAT;
			fila[8] = objVehiculo->RevTec;
			fila[9] = Convert::ToString(objVehiculo->IDConductor);
			fila[10] = Convert::ToString(objVehiculo->valido);

			this->dataGridView1->Rows->Add(fila);
		}
	}
	else {
		if (ValidezComboBox == "En proceso") { ValidezBuscar = 2; }
		else if (ValidezComboBox == "Validado") { ValidezBuscar = 1; }
		else if (ValidezComboBox == "Rechazado") { ValidezBuscar = 0; }
		this->dataGridView1->Rows->Clear();
		int CantidadDeVehiculosConEsaValidacion = this->objGestorVehiculo->ObtenerCantidadVehiculosSegunSuValidez(ValidezBuscar);

		for (int i = 0; i < CantidadDeVehiculosConEsaValidacion; i++) {
			Vehiculo^ objVehiculo = objGestorVehiculo->ObtenerVehiculoDeLista(i);
			if (objVehiculo->valido == ValidezBuscar) {
				Vehiculo^ objVehiculo = objGestorVehiculo->ObtenerVehiculoDeLista(i);
				array<String^>^ fila = gcnew array<String^>(11);
				fila[0] = objVehiculo->Marca;
				fila[1] = objVehiculo->Modelo;
				fila[2] = objVehiculo->Placa;
				fila[3] = objVehiculo->Color;
				fila[4] = objVehiculo->Tipo;
				fila[5] = objVehiculo->NumeroAsientos;
				fila[6] = objVehiculo->Propietario;
				fila[7] = objVehiculo->SOAT;
				fila[8] = objVehiculo->RevTec;
				fila[9] = Convert::ToString(objVehiculo->IDConductor);
				fila[10] = Convert::ToString(objVehiculo->valido);

				this->dataGridView1->Rows->Add(fila);
			}
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->objGestorVehiculo->LeerVehiculosDesdeArchivo();

	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;

	String^ Placa = (this->dataGridView1->Rows[filaSeleccionada]->Cells[2]->Value->ToString());

	Vehiculo^ objVehiculo= objGestorVehiculo->ObtenerVehiculoPorPlaca(Placa);
	this->objGestorVehiculo->EliminarVehiculo(Placa);
	Vehiculo^ objVehiculoValidado= gcnew Vehiculo(objVehiculo->Marca, objVehiculo->Modelo, objVehiculo->Placa, objVehiculo->Color, objVehiculo->Tipo, objVehiculo->NumeroAsientos, objVehiculo->Propietario, objVehiculo->SOAT, objVehiculo->RevTec, objVehiculo->IDConductor, 1);

	this->objGestorVehiculo->AgregarVehiculo(objVehiculoValidado);

	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < objGestorVehiculo->ObtenerCantidadVehiculos(); i++) {
		Vehiculo^ objVehiculo = objGestorVehiculo->ObtenerVehiculoDeLista(i);
		array<String^>^ fila = gcnew array<String^>(11);
		fila[0] = objVehiculo->Marca;
		fila[1] = objVehiculo->Modelo;
		fila[2] = objVehiculo->Placa;
		fila[3] = objVehiculo->Color;
		fila[4] = objVehiculo->Tipo;
		fila[5] = objVehiculo->NumeroAsientos;
		fila[6] = objVehiculo->Propietario;
		fila[7] = objVehiculo->SOAT;
		fila[8] = objVehiculo->RevTec;
		fila[9] = Convert::ToString(objVehiculo->IDConductor);
		fila[10] = Convert::ToString(objVehiculo->valido);

		this->dataGridView1->Rows->Add(fila);


	}
	MessageBox::Show("Conductor seleccionado ahora está validado");

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	this->objGestorVehiculo->LeerVehiculosDesdeArchivo();

	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;

	String^ Placa = (this->dataGridView1->Rows[filaSeleccionada]->Cells[2]->Value->ToString());

	Vehiculo^ objVehiculo = objGestorVehiculo->ObtenerVehiculoPorPlaca(Placa);
	this->objGestorVehiculo->EliminarVehiculo(Placa);
	Vehiculo^ objVehiculoValidado = gcnew Vehiculo(objVehiculo->Marca, objVehiculo->Modelo, objVehiculo->Placa, objVehiculo->Color, objVehiculo->Tipo, objVehiculo->NumeroAsientos, objVehiculo->Propietario, objVehiculo->SOAT, objVehiculo->RevTec, objVehiculo->IDConductor, 0);

	this->objGestorVehiculo->AgregarVehiculo(objVehiculoValidado);

	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < objGestorVehiculo->ObtenerCantidadVehiculos(); i++) {
		Vehiculo^ objVehiculo = objGestorVehiculo->ObtenerVehiculoDeLista(i);
		array<String^>^ fila = gcnew array<String^>(11);
		fila[0] = objVehiculo->Marca;
		fila[1] = objVehiculo->Modelo;
		fila[2] = objVehiculo->Placa;
		fila[3] = objVehiculo->Color;
		fila[4] = objVehiculo->Tipo;
		fila[5] = objVehiculo->NumeroAsientos;
		fila[6] = objVehiculo->Propietario;
		fila[7] = objVehiculo->SOAT;
		fila[8] = objVehiculo->RevTec;
		fila[9] = Convert::ToString(objVehiculo->IDConductor);
		fila[10] = Convert::ToString(objVehiculo->valido);

		this->dataGridView1->Rows->Add(fila);


	}
	MessageBox::Show("Conductor seleccionado ahora está validado");

}
private: System::Void frmValidarVehiculo_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorVehiculo->EscribirArchivo();
}
};
}
