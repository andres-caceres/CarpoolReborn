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
	/// Resumen de frmValidarConductor
	/// </summary>
	public ref class frmValidarConductor : public System::Windows::Forms::Form
	{
	public:
		frmValidarConductor(void)
		{
			InitializeComponent();
			this->objGestorConductor = gcnew GestorConductor();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmValidarConductor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: GestorConductor^ objGestorConductor;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmValidarConductor::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->Location = System::Drawing::Point(50, 190);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(995, 232);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo de Usuario";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Licencia";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Disponibilidad";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Calificación";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Posición";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Asientos";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Validez";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(290, 53);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(537, 90);
			this->groupBox1->TabIndex = 9;
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
			this->button1->Click += gcnew System::EventHandler(this, &frmValidarConductor::button1_Click);
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
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::BlueViolet;
			this->button2->Location = System::Drawing::Point(327, 463);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 28);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Validar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmValidarConductor::button2_Click);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(558, 463);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 28);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Denegar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmValidarConductor::button3_Click);
			// 
			// frmValidarConductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1102, 531);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmValidarConductor";
			this->Text = L"Validar conductor";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmValidarConductor::frmValidarConductor_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmValidarConductor::frmValidarConductor_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmValidarConductor_Load(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorConductor->LeerConductoresDesdeArchivo();

		for (int i = 0; i < objGestorConductor->ObtenerCantidadConductores(); i++) {
			Conductor^ objConductor = objGestorConductor->ObtenerConductorLista(i);
			array<String^>^ fila = gcnew array<String^>(8);
			fila[0] = Convert::ToString(objConductor->CodigoDeUsuario);
			fila[1] = objConductor->Nombre;
			fila[2] = objConductor->NumeroDeLicencia;
			fila[3] = objConductor->Disponibilidad;
			fila[4] = Convert::ToString(objConductor->CalificacionConductor);
			fila[5] = objConductor->Posicion;
			fila[6] = objConductor->AsientosDisponibles;
			fila[7] = Convert::ToString(objConductor->valido);

			this->dataGridView1->Rows->Add(fila);
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ ValidezComboBox = this->comboBox1->Text;
	int ValidezBuscar;

	if (ValidezComboBox == "Sin filtro") {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < objGestorConductor->ObtenerCantidadConductores(); i++) {
			Conductor^ objConductor = objGestorConductor->ObtenerConductorLista(i);
			array<String^>^ fila = gcnew array<String^>(8);
			fila[0] = Convert::ToString(objConductor->CodigoDeUsuario);
			fila[1] = objConductor->Nombre;
			fila[2] = objConductor->NumeroDeLicencia;
			fila[3] = objConductor->Disponibilidad;
			fila[4] = Convert::ToString(objConductor->CalificacionConductor);
			fila[5] = objConductor->Posicion;
			fila[6] = objConductor->AsientosDisponibles;
			fila[7] = Convert::ToString(objConductor->valido);

			this->dataGridView1->Rows->Add(fila);
		}
	}
	else {
		if (ValidezComboBox == "En proceso") { ValidezBuscar = 2; }
		else if (ValidezComboBox == "Validado") { ValidezBuscar = 1; }
		else if (ValidezComboBox == "Rechazado") { ValidezBuscar = 0; }
		this->dataGridView1->Rows->Clear();
		int CantidadDeConductoresConEsaValidacion = this->objGestorConductor->ObtenerCantidadConductoresSegunSuValidez(ValidezBuscar);

		for (int i = 0; i < CantidadDeConductoresConEsaValidacion; i++) {
			Conductor^ objConductor = objGestorConductor->ObtenerConductorLista(i);
			if (objConductor->valido == ValidezBuscar) {
				array<String^>^ fila = gcnew array<String^>(8);
				fila[0] = Convert::ToString(objConductor->CodigoDeUsuario);
				fila[1] = objConductor->Nombre;
				fila[2] = objConductor->NumeroDeLicencia;
				fila[3] = objConductor->Disponibilidad;
				fila[4] = Convert::ToString(objConductor->CalificacionConductor);
				fila[5] = objConductor->Posicion;
				fila[6] = objConductor->AsientosDisponibles;
				fila[7] = Convert::ToString(objConductor->valido);

				this->dataGridView1->Rows->Add(fila);
			}
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorConductor->LeerConductoresDesdeArchivo();

	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;

	int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

	Conductor^ objConductor = objGestorConductor->ObtenerConductorxCodigo(codigoEditar);
	this->objGestorConductor->EliminarConductorxCodigo(codigoEditar);
	Conductor^ objConductorValidado = gcnew Conductor(objConductor->CodigoDeUsuario, objConductor->Nombre, objConductor->NumeroDeLicencia, objConductor->Disponibilidad, objConductor->CalificacionConductor, objConductor->Posicion, objConductor->AsientosDisponibles,1);

	this->objGestorConductor->AgregarALista(objConductorValidado);

	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < objGestorConductor->ObtenerCantidadConductores(); i++) {
		Conductor^ objConductor= objGestorConductor->ObtenerConductorLista(i);
		array<String^>^ fila = gcnew array<String^>(8);
		fila[0] = Convert::ToString(objConductor->CodigoDeUsuario);
		fila[1] = objConductor->Nombre;
		fila[2] = objConductor->NumeroDeLicencia;
		fila[3] = objConductor->Disponibilidad;
		fila[4] = Convert::ToString(objConductor->CalificacionConductor);
		fila[5] = objConductor->Posicion;
		fila[6] = objConductor->AsientosDisponibles;
		fila[7] = Convert::ToString(objConductor->valido);

		this->dataGridView1->Rows->Add(fila);


	}
	MessageBox::Show("Conductor seleccionado ahora está validado");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorConductor->LeerConductoresDesdeArchivo();

	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;

	int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

	Conductor^ objConductor = objGestorConductor->ObtenerConductorxCodigo(codigoEditar);
	this->objGestorConductor->EliminarConductorxCodigo(codigoEditar);
	Conductor^ objConductorValidado = gcnew Conductor(objConductor->CodigoDeUsuario, objConductor->Nombre, objConductor->NumeroDeLicencia, objConductor->Disponibilidad, objConductor->CalificacionConductor, objConductor->Posicion, objConductor->AsientosDisponibles, 0);

	this->objGestorConductor->AgregarALista(objConductorValidado);

	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < objGestorConductor->ObtenerCantidadConductores(); i++) {
		Conductor^ objConductor = objGestorConductor->ObtenerConductorLista(i);
		array<String^>^ fila = gcnew array<String^>(8);
		fila[0] = Convert::ToString(objConductor->CodigoDeUsuario);
		fila[1] = objConductor->Nombre;
		fila[2] = objConductor->NumeroDeLicencia;
		fila[3] = objConductor->Disponibilidad;
		fila[4] = Convert::ToString(objConductor->CalificacionConductor);
		fila[5] = objConductor->Posicion;
		fila[6] = objConductor->AsientosDisponibles;
		fila[7] = Convert::ToString(objConductor->valido);

		this->dataGridView1->Rows->Add(fila);


	}
	MessageBox::Show("Conductor seleccionado fue denegado");
}
private: System::Void frmValidarConductor_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorConductor->EscribirArchivo();
}
};
}
