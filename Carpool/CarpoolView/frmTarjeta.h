#pragma once
#include "frmNuevaTarjeta.h"

namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CarpoolController;
	using namespace CarpoolModel;

	/// <summary>
	/// Resumen de frmTarjeta
	/// </summary>
	public ref class frmTarjeta : public System::Windows::Forms::Form
	{
	public:
		frmTarjeta(Usuario^ objUsuario)
		{
			InitializeComponent();
			this->objUsuario = objUsuario;
			this->objGestorTarjeta = gcnew GestorTarjeta();
			this->objGestorUsuario = gcnew GestorUsuario();
			
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmTarjeta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: Usuario^ objUsuario;
	private: GestorUsuario^ objGestorUsuario;
	private: GestorTarjeta^ objGestorTarjeta;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmTarjeta::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(73, 164);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(796, 251);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Número de Tarjeta";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"CVV";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Fecha de Expiración (MM/YY)";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo Tarjeta";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(280, 444);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 45);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmTarjeta::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::IndianRed;
			this->button4->ForeColor = System::Drawing::Color::Bisque;
			this->button4->Location = System::Drawing::Point(508, 444);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 45);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &frmTarjeta::button4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(204, 39);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(483, 84);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Filtro";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"VISA", L"MasterCard", L"AmericanExpress", L"Sin filtro" });
			this->comboBox1->Location = System::Drawing::Point(201, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(182, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->DropDownClosed += gcnew System::EventHandler(this, &frmTarjeta::comboBox1_DropDownClosed);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tipo de Tarjeta:";
			// 
			// frmTarjeta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(915, 518);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmTarjeta";
			this->Text = L"Tarjeta";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmTarjeta::frmTarjeta_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmTarjeta::frmTarjeta_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmTarjeta_Load(System::Object^ sender, System::EventArgs^ e) {
		//this->objGestorTarjeta->LeerTarjetasDesdeArchivo();
		List<Tarjeta^>^ listaTarjetas = this->objGestorTarjeta->BuscarTarjetasXcodigoBD(this->objUsuario->CodigoDeUsuario);
		MostrarGrilla(listaTarjetas);
	}

private: void MostrarGrilla(List<Tarjeta^>^ listaTarjetas) {
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < listaTarjetas->Count; i++) {
		Tarjeta^ objTarjeta = listaTarjetas[i];
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = objTarjeta->NroTarjeta;
		fila[1] = objTarjeta->CVV;
		fila[2] = objTarjeta->FechaExp;
		fila[3] = objTarjeta->TipoTarjeta;
		this->dataGridView1->Rows->Add(fila);
	}
}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Usuario^ objUsuarioLogeado = this->objUsuario;
	frmNuevaTarjeta^ ventanNuevaTarjeta = gcnew frmNuevaTarjeta(objUsuarioLogeado, objGestorTarjeta);
	ventanNuevaTarjeta->ShowDialog();

	List<Tarjeta^>^ listaTarjetas = this->objGestorTarjeta->BuscarTarjetasXcodigoBD(this->objUsuario->CodigoDeUsuario);
	MostrarGrilla(listaTarjetas);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Usuario^ objUsuarioLogeado = this->objUsuario;
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ NumeroTarjeta = (this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());//acccede codigo Cells[0]
	this->objGestorTarjeta->EliminarTarjetaXcodigo(NumeroTarjeta, objUsuarioLogeado->CodigoDeUsuario);
	MessageBox::Show("Contacto eliminado exitosamente");

	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < objGestorTarjeta->ObtenerCantidadTarjetas(); i++) {
		Tarjeta^ objTarjeta = objGestorTarjeta->ObtenerTarjetaLista(i);
		if (objTarjeta->CodigoPropietario == objUsuarioLogeado->CodigoDeUsuario) {
			array<String^>^ fila = gcnew array<String^>(4);
			fila[0] = objTarjeta->NroTarjeta;
			fila[1] = objTarjeta->CVV;
			fila[2] = objTarjeta->FechaExp;
			fila[3] = objTarjeta->TipoTarjeta;
			this->dataGridView1->Rows->Add(fila);
		}
	}
}
private: System::Void frmTarjeta_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	//this->objGestorTarjeta->EscribirArchivo();
}
private: System::Void comboBox1_DropDownClosed(System::Object^ sender, System::EventArgs^ e) {

	Usuario^ objUsuarioLogeado = this->objUsuario;
	String^ TipoTarjeta = this->comboBox1->Text;

	if (TipoTarjeta == "Sin filtro") {
		List<Tarjeta^>^ listaTarjetas = this->objGestorTarjeta->BuscarTarjetasXcodigoBD(this->objUsuario->CodigoDeUsuario);
		MostrarGrilla(listaTarjetas);
	}
	else {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < objGestorTarjeta->ObtenerCantidadTarjetas(); i++) {
			Tarjeta^ objTarjeta = objGestorTarjeta->ObtenerTarjetaLista(i);
			if ((objTarjeta->CodigoPropietario == objUsuarioLogeado->CodigoDeUsuario)&&(objTarjeta->TipoTarjeta==TipoTarjeta)) {
				array<String^>^ fila = gcnew array<String^>(4);
				fila[0] = objTarjeta->NroTarjeta;
				fila[1] = objTarjeta->CVV;
				fila[2] = objTarjeta->FechaExp;
				fila[3] = objTarjeta->TipoTarjeta;
				this->dataGridView1->Rows->Add(fila);
			}
		}
	}


}
};
}
