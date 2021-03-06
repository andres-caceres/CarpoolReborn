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
			//TODO: agregar c�digo de constructor aqu�
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
		/// Limpiar los recursos que se est�n usando.
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






	private:
			GestorConductor^ objGestorConductor;
			GestorVehiculo^ objGestorVehiculo;
			Conductor^ objConductor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;


		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMisVehiculos::typeid));
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
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Location = System::Drawing::Point(52, 288);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(88, 26);
			this->buttonEliminar->TabIndex = 9;
			this->buttonEliminar->Text = L"Eliminar";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			this->buttonEliminar->Click += gcnew System::EventHandler(this, &frmMisVehiculos::buttonEliminar_Click);
			// 
			// buttonNuevo
			// 
			this->buttonNuevo->Location = System::Drawing::Point(166, 288);
			this->buttonNuevo->Name = L"buttonNuevo";
			this->buttonNuevo->Size = System::Drawing::Size(85, 26);
			this->buttonNuevo->TabIndex = 8;
			this->buttonNuevo->Text = L"Nuevo";
			this->buttonNuevo->UseVisualStyleBackColor = true;
			this->buttonNuevo->Click += gcnew System::EventHandler(this, &frmMisVehiculos::buttonNuevo_Click);
			// 
			// buttonSelec
			// 
			this->buttonSelec->Location = System::Drawing::Point(514, 288);
			this->buttonSelec->Name = L"buttonSelec";
			this->buttonSelec->Size = System::Drawing::Size(83, 26);
			this->buttonSelec->TabIndex = 7;
			this->buttonSelec->Text = L"Seleccionar";
			this->buttonSelec->UseVisualStyleBackColor = true;
			this->buttonSelec->Click += gcnew System::EventHandler(this, &frmMisVehiculos::buttonSelec_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(22, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(601, 246);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Mis Vehiculos";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(30, 32);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(544, 195);
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
			// Column6
			// 
			this->Column6->HeaderText = L"Estado";
			this->Column6->Name = L"Column6";
			// 
			// frmMisVehiculos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(668, 353);
			this->Controls->Add(this->buttonEliminar);
			this->Controls->Add(this->buttonNuevo);
			this->Controls->Add(this->buttonSelec);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmMisVehiculos";
			this->Text = L"Mis Vehiculos";
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
			if (this->objConductor->CodigoDeUsuario == objVehiculo->IDConductor) { //Filtro de vehiculos de este conductor

				String^ Estado = "";
				switch (objVehiculo->valido)
				{
				case 1: Estado = "Disponible";
					break;

				case 2: Estado = "Validando...";
					break;
				default:
						Estado = "Invalido";
					break;
				}

				array<String^>^ fila = gcnew array<String^>(6);
				fila[0] = objVehiculo->Marca;
				fila[1] = objVehiculo->Modelo;
				fila[2] = objVehiculo->Placa;
				fila[3] = objVehiculo->Color;
				fila[4] = objVehiculo->Tipo;
				fila[5] = Estado;
				//Por si se agranda el datagrid:
				//fila[5] = objVehiculo->NumeroAsientos;
				//fila[6] = objVehiculo->Propietario;
				//fila[7] = objVehiculo->SOAT;
				//fila[8] = objVehiculo->RevTec;
				if(objVehiculo->valido!=0){this->dataGridView1->Rows->Add(fila);} //validaci�n de vehiculo
				
			}
		}
	}

	private: System::Void buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		/*boton eliminar*/

	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ placa = this->dataGridView1->Rows[filaSeleccionada]->Cells[2]->Value->ToString();
	this->objGestorVehiculo->EliminarVehiculo(placa);
	MessageBox::Show("El vehiculo ha sido eliminado correctamente","Vehiculo Eliminado");
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

	if (this->objGestorVehiculo->ObtenerVehiculoPorPlaca(placa)->valido == 1) {
		this->objConductor->objVehiculo = this->objGestorVehiculo->ObtenerVehiculoPorPlaca(placa);
		this->Close();
	}
	else
	{
		MessageBox::Show("El vehiculo seleccionado se encuentra en proceso de validaci�n, se le notificar� cuando est� listo para su uso", "Vehiculo No Disponible");
	}	
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
