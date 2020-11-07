#pragma once
#include "frmAgregarVehiculo.h"

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
	/// Summary for frmMisVehiculos
	/// </summary>
	public ref class frmMisVehiculos : public System::Windows::Forms::Form
	{
	public:
		frmMisVehiculos(void)
		{
			InitializeComponent();
			this->objGestorVehiculo = gcnew GestorVehiculo();
			//
			//TODO: Add the constructor code here
			//
		}

		frmMisVehiculos(GestorVehiculo^ objGestorVehiculo) //TODO: es necesario?
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			this->objGestorVehiculo = objGestorVehiculo;
			//
		}

		frmMisVehiculos( Conductor^ objConductor)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			GestorConductor^ objGestorConductor = gcnew GestorConductor();
			this->objConductor = objConductor;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMisVehiculos()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		GestorConductor^ objGestorConductor;
		GestorVehiculo^ objGestorVehiculo;
		Conductor^ objConductor;

	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ buttonSelec;

	private: System::Windows::Forms::Button^ buttonNuevo;
	private: System::Windows::Forms::Button^ buttonEliminar;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSelec = (gcnew System::Windows::Forms::Button());
			this->buttonNuevo = (gcnew System::Windows::Forms::Button());
			this->buttonEliminar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(30, 32);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(544, 195);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMisVehiculos::dataGridView1_CellContentClick_1);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Marca";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Modelo";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Placa";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Color";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Tipo";
			this->Column5->Name = L"Column5";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(601, 246);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Mis Vehiculos";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmMisVehiculos::groupBox1_Enter);
			// 
			// buttonSelec
			// 
			this->buttonSelec->Location = System::Drawing::Point(503, 274);
			this->buttonSelec->Name = L"buttonSelec";
			this->buttonSelec->Size = System::Drawing::Size(83, 26);
			this->buttonSelec->TabIndex = 3;
			this->buttonSelec->Text = L"Seleccionar";
			this->buttonSelec->UseVisualStyleBackColor = true;
			this->buttonSelec->Click += gcnew System::EventHandler(this, &frmMisVehiculos::button1_Click);
			// 
			// buttonNuevo
			// 
			this->buttonNuevo->Location = System::Drawing::Point(156, 274);
			this->buttonNuevo->Name = L"buttonNuevo";
			this->buttonNuevo->Size = System::Drawing::Size(85, 26);
			this->buttonNuevo->TabIndex = 4;
			this->buttonNuevo->Text = L"Nuevo";
			this->buttonNuevo->UseVisualStyleBackColor = true;
			this->buttonNuevo->Click += gcnew System::EventHandler(this, &frmMisVehiculos::button2_Click);
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Location = System::Drawing::Point(42, 274);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(88, 26);
			this->buttonEliminar->TabIndex = 5;
			this->buttonEliminar->Text = L"Eliminar";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			this->buttonEliminar->Click += gcnew System::EventHandler(this, &frmMisVehiculos::buttonEliminar_Click);
			// 
			// frmMisVehiculos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(628, 319);
			this->Controls->Add(this->buttonEliminar);
			this->Controls->Add(this->buttonNuevo);
			this->Controls->Add(this->buttonSelec);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMisVehiculos";
			this->Text = L"frmMisVehiculos";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMisVehiculos::frmMisVehiculos_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMisVehiculos::frmMisVehiculos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmMisVehiculos_Load(System::Object^ sender, System::EventArgs^ e) {

	this->objGestorVehiculo->LeerVehiculosDesdeArchivo();

	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < objGestorVehiculo->ObtenerCantidadVehiculos(); i++) {
		Vehiculo^ objVehiculo = objGestorVehiculo->ObtenerVehiculoDeLista(i);
		array<String^>^ fila = gcnew array<String^>(5);
		fila[0] = objVehiculo->Marca;
		fila[1] = objVehiculo->Modelo;
		fila[2] = objVehiculo->Placa;
		fila[3] = objVehiculo->Color;
		fila[4] = objVehiculo->Tipo;
		//Por si se agranda el datagrid:
		//fila[5] = objVehiculo->NumeroAsientos;
		//fila[6] = objVehiculo->Propietario;
		//fila[7] = objVehiculo->NumeroTarjetaPropiedad;
		this->dataGridView1->Rows->Add(fila);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//devolver vehiculo seleccionado
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //BotonNuevo

	frmAgregarVehiculo^ ventanaAgregarVehiculo = gcnew frmAgregarVehiculo(this->objGestorVehiculo);
	ventanaAgregarVehiculo->ShowDialog();

	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < objGestorVehiculo->ObtenerCantidadVehiculos(); i++) {
		Vehiculo^ objVehiculo = objGestorVehiculo->ObtenerVehiculoDeLista(i);
		array<String^>^ fila = gcnew array<String^>(5);
		fila[0] = objVehiculo->Marca;
		fila[1] = objVehiculo->Modelo;
		fila[2] = objVehiculo->Placa;
		fila[3] = objVehiculo->Color;
		fila[4] = objVehiculo->Tipo;
		//Por si se agranda el datagrid:
		//fila[5] = objVehiculo->NumeroAsientos;
		//fila[6] = objVehiculo->Propietario;
		//fila[7] = objVehiculo->NumeroTarjetaPropiedad;
		this->dataGridView1->Rows->Add(fila);
	}
}
private: System::Void buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {

	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ placa = this->dataGridView1->Rows[filaSeleccionada]->Cells[2]->Value->ToString();
	this->objGestorVehiculo->EliminarVehiculo(placa);
	MessageBox::Show("El vehiculo ha sido eliminado correctamente");

	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < objGestorVehiculo->ObtenerCantidadVehiculos(); i++) {
		Vehiculo^ objVehiculo = objGestorVehiculo->ObtenerVehiculoDeLista(i);
		array<String^>^ fila = gcnew array<String^>(5);
		fila[0] = objVehiculo->Marca;
		fila[1] = objVehiculo->Modelo;
		fila[2] = objVehiculo->Placa;
		fila[3] = objVehiculo->Color;
		fila[4] = objVehiculo->Tipo;
		//Por si se agranda el datagrid:
		//fila[5] = objVehiculo->NumeroAsientos;
		//fila[6] = objVehiculo->Propietario;
		//fila[7] = objVehiculo->NumeroTarjetaPropiedad;
		this->dataGridView1->Rows->Add(fila);	
	}
}
private: System::Void frmMisVehiculos_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {

	this->objGestorVehiculo->EscribirArchivo();
}
};
}
