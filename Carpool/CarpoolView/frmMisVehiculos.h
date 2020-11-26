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
	/// Resumen de frmMisVehiculos
	/// </summary>
	public ref class frmMisVehiculos : public System::Windows::Forms::Form
	{
	public:
		frmMisVehiculos(void)
		{
			InitializeComponent();
			this->objGestorVehiculo = gcnew GestorVehiculo();
			//
			//TODO: agregar código de constructor aquí
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

		frmMisVehiculos(Conductor^ objConductor)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			this->objGestorVehiculo = gcnew GestorVehiculo();
			GestorConductor^ objGestorConductor = gcnew GestorConductor();
			this->objConductor = objConductor;
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMisVehiculos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonEliminar;
	protected:
	private: System::Windows::Forms::Button^ buttonNuevo;
	private: System::Windows::Forms::Button^ buttonSelec;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;

	private:
			GestorConductor^ objGestorConductor;
			GestorVehiculo^ objGestorVehiculo;
			Conductor^ objConductor;


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
			this->buttonEliminar = (gcnew System::Windows::Forms::Button());
			this->buttonNuevo = (gcnew System::Windows::Forms::Button());
			this->buttonSelec = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Location = System::Drawing::Point(70, 355);
			this->buttonEliminar->Margin = System::Windows::Forms::Padding(4);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(117, 32);
			this->buttonEliminar->TabIndex = 9;
			this->buttonEliminar->Text = L"Eliminar";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			this->buttonEliminar->Click += gcnew System::EventHandler(this, &frmMisVehiculos::buttonEliminar_Click);
			// 
			// buttonNuevo
			// 
			this->buttonNuevo->Location = System::Drawing::Point(222, 355);
			this->buttonNuevo->Margin = System::Windows::Forms::Padding(4);
			this->buttonNuevo->Name = L"buttonNuevo";
			this->buttonNuevo->Size = System::Drawing::Size(113, 32);
			this->buttonNuevo->TabIndex = 8;
			this->buttonNuevo->Text = L"Nuevo";
			this->buttonNuevo->UseVisualStyleBackColor = true;
			this->buttonNuevo->Click += gcnew System::EventHandler(this, &frmMisVehiculos::buttonNuevo_Click);
			// 
			// buttonSelec
			// 
			this->buttonSelec->Location = System::Drawing::Point(685, 355);
			this->buttonSelec->Margin = System::Windows::Forms::Padding(4);
			this->buttonSelec->Name = L"buttonSelec";
			this->buttonSelec->Size = System::Drawing::Size(111, 32);
			this->buttonSelec->TabIndex = 7;
			this->buttonSelec->Text = L"Seleccionar";
			this->buttonSelec->UseVisualStyleBackColor = true;
			this->buttonSelec->Click += gcnew System::EventHandler(this, &frmMisVehiculos::buttonSelec_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(30, 33);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(801, 303);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Mis Vehiculos";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(40, 39);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(725, 240);
			this->dataGridView1->TabIndex = 1;
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
			// frmMisVehiculos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(891, 435);
			this->Controls->Add(this->buttonEliminar);
			this->Controls->Add(this->buttonNuevo);
			this->Controls->Add(this->buttonSelec);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMisVehiculos";
			this->Text = L"frmMisVehiculos";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMisVehiculos::frmMisVehiculos_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMisVehiculos::frmMisVehiculos_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void LoadGrid() {

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
			//fila[7] = objVehiculo->SOAT;
			//fila[8] = objVehiculo->RevTec;
			this->dataGridView1->Rows->Add(fila);
		}
	}

	private: System::Void buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		/*boton eliminar*/

	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ placa = this->dataGridView1->Rows[filaSeleccionada]->Cells[2]->Value->ToString();
	this->objGestorVehiculo->EliminarVehiculo(placa);
	MessageBox::Show("El vehiculo ha sido eliminado correctamente");
	LoadGrid();
}
private: System::Void buttonNuevo_Click(System::Object^ sender, System::EventArgs^ e) {
	/*boton nuevo*/

	frmAgregarVehiculo^ ventanaAgregarVehiculo = gcnew frmAgregarVehiculo(this->objGestorVehiculo,this->objConductor);
	ventanaAgregarVehiculo->ShowDialog();
	LoadGrid();
}
private: System::Void buttonSelec_Click(System::Object^ sender, System::EventArgs^ e) {
	/*boton seleccionar*/

	//devolver vehiculo seleccionado
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ placa = this->dataGridView1->Rows[filaSeleccionada]->Cells[2]->Value->ToString();
	this->objConductor->objVehiculo = this->objGestorVehiculo->ObtenerVehiculoPorPlaca(placa);
	this->Close();
}
private: System::Void frmMisVehiculos_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {

	this->objGestorVehiculo->EscribirArchivo();
}
private: System::Void frmMisVehiculos_Load(System::Object^ sender, System::EventArgs^ e) {

	this->objGestorVehiculo->LeerVehiculosDesdeArchivo();
	LoadGrid();

}
};
}
