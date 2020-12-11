#pragma once
#include "frmVerRuta.h"
#include "frmPagar.h"


namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CarpoolController;
	using namespace CarpoolModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmReservarViaje
	/// </summary>
	public ref class frmReservarViaje : public System::Windows::Forms::Form
	{
	public:
		frmReservarViaje(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmReservarViaje(Usuario^ objUsuario)
		{
			InitializeComponent();
			this->objUsuario = objUsuario;
			this->objGestorFigura = gcnew GestorFigura();
			this->objGestorViaje = gcnew GestorViaje();
				




			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmReservarViaje()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ button3;
	private: Usuario^ objUsuario;
	private: GestorFigura^ objGestorFigura;
	private: GestorViaje^ objGestorViaje;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(425, 295);
			this->button4->Margin = System::Windows::Forms::Padding(1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(68, 37);
			this->button4->TabIndex = 30;
			this->button4->Text = L"Cancelar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmReservarViaje::button4_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(92, 295);
			this->button2->Margin = System::Windows::Forms::Padding(1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(68, 37);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Reservar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmReservarViaje::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(353, 26);
			this->button1->Margin = System::Windows::Forms::Padding(1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 31);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmReservarViaje::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(223, 33);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(1);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(91, 20);
			this->dateTimePicker1->TabIndex = 26;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(149, 36);
			this->label1->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Fecha :";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(41, 87);
			this->groupBox1->Margin = System::Windows::Forms::Padding(1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(1);
			this->groupBox1->Size = System::Drawing::Size(505, 190);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Viajes disponibles: ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(19, 32);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 30;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->Size = System::Drawing::Size(466, 143);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->MinimumWidth = 12;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Hora Inicio";
			this->Column2->MinimumWidth = 12;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Hora Fin";
			this->Column3->MinimumWidth = 12;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Fecha";
			this->Column4->MinimumWidth = 12;
			this->Column4->Name = L"Column4";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(268, 295);
			this->button3->Margin = System::Windows::Forms::Padding(1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(68, 37);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Ver ruta";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmReservarViaje::button3_Click);
			// 
			// frmReservarViaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 375);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmReservarViaje";
			this->Text = L"frmReservarViaje";
			this->Load += gcnew System::EventHandler(this, &frmReservarViaje::frmReservarViaje_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmReservarViaje_Load(System::Object^ sender, System::EventArgs^ e) { //Falta que se vean solo los viajes cercanos
		this->objGestorViaje->LeerViajesDesdeArchivo();
		//Usuario^ objUsuarioLogeado = this->objGestorUsuario->LeerUsuarioLogeadoDesdeArchivo();
		List<Viaje^>^ listaViajes = this->objGestorViaje->DevolverAllViajes();
		//Metodo en GestorViaje -> DevolverViajesUsuarioLoqueado
		MostrarGrilla(listaViajes);
	}



	private: void MostrarGrilla(List<Viaje^>^ listaViajes) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaViajes->Count; i++) {
			Viaje^ objViaje = listaViajes[i];
			array<String^>^ fila = gcnew array<String^>(4);
			fila[0] = Convert::ToString(objViaje->codigoViaje);
			fila[1] = objViaje->HoraSalida;
			fila[2] = objViaje->HoraLlegada;
			fila[3] = objViaje->Fecha;
			this->dataGridView1->Rows->Add(fila);
		}
	}

	private: void MostrarGrilla() {
		this->dataGridView1->Rows->Clear();
		this->objGestorViaje->LeerViajesDesdeArchivo();
		for (int i = 0; i < this->objGestorViaje->ObtenerCantidadViajes(); i++) {
			Viaje^ objViaje = gcnew Viaje();
			objViaje = this->objGestorViaje->ObtenerViajeLista(i);
			array<String^>^ fila = gcnew array<String^>(4);
			fila[0] = Convert::ToString(objViaje->codigoViaje);
			fila[1] = objViaje->HoraSalida;
			fila[2] = objViaje->HoraLlegada;
			fila[3] = objViaje->Fecha;
			this->dataGridView1->Rows->Add(fila);
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//Boton ver ruta
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoVer = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	frmVerRuta^ ventanaVerRuta = gcnew frmVerRuta(codigoVer);
	ventanaVerRuta->ShowDialog();


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Boton reservar viaje
	int FlagValido = 1;	//empieza siendo valido

	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoReservar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

	Viaje^ objViajeProvisional = this->objGestorViaje->ObtenerViajeoxCodigo(codigoReservar);

	this->objGestorViaje->CargarPasajerosViajes(objViajeProvisional);

	for (int i = 0; i < objViajeProvisional->listaPasajeros->Count; i++) {
		if (objViajeProvisional->listaPasajeros[i]->CodigoDeUsuario == this->objUsuario->CodigoDeUsuario) {

			FlagValido = 0; //Invalidar
		}
	}

	if (FlagValido == 1) {

	frmPagar^ ventanaPagar = gcnew frmPagar(codigoReservar, this->objGestorViaje, this->objUsuario);
	ventanaPagar->ShowDialog();

	}
	else {
		MessageBox::Show("Ya se ha registrado en este viaje");
	}


	//this->objGestorViaje->AgregarPasajeroAlViaje(codigoReservar, this->objUsuario->CodigoDeUsuario);
	//this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fecha = this->dateTimePicker1->Text;
	this->objGestorViaje->LeerViajesDesdeArchivo();
	List<Viaje^>^ listaViajes = this->objGestorViaje->BuscarViajesxFecha(fecha);
	MostrarGrilla(listaViajes);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
