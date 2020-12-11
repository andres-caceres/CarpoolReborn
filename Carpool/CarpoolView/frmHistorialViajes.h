#pragma once
#include "frmVerRuta.h"

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
	/// Resumen de frmHistorialViajes
	/// </summary>
	public ref class frmHistorialViajes : public System::Windows::Forms::Form
	{
	public:
		frmHistorialViajes(Usuario^ objUsuario)
		{
			InitializeComponent();
			this->objUsuario = objUsuario;
			this->objGestorViaje = gcnew GestorViaje();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmHistorialViajes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:








	private: Usuario^ objUsuario;
	private: GestorViaje^ objGestorViaje;
	private: System::Windows::Forms::Button^ button1;









	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button3;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmHistorialViajes::typeid));
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dataGridView1->Location = System::Drawing::Point(49, 176);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1106, 361);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->FillWeight = 95.95111F;
			this->Column1->HeaderText = L"Hora inicio";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->FillWeight = 95.95111F;
			this->Column2->HeaderText = L"Hora fin";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->FillWeight = 95.95111F;
			this->Column3->HeaderText = L"Fecha (MM/DD/YY)";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->FillWeight = 95.95111F;
			this->Column4->HeaderText = L"Estado";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->FillWeight = 95.95111F;
			this->Column5->HeaderText = L"Numero de pasajeros";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->FillWeight = 95.95111F;
			this->Column6->HeaderText = L"Asientos disponibles";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->FillWeight = 128.3422F;
			this->Column7->HeaderText = L"Tarifa";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->FillWeight = 95.95111F;
			this->Column8->HeaderText = L"Nombre del Conductor";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Codigo de viaje";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(497, 569);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ver ruta del viaje";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmHistorialViajes::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"M/d/yyyy";
			this->dateTimePicker1->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(138, 43);
			this->dateTimePicker1->MaxDate = System::DateTime(2100, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(1980, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dateTimePicker1->Size = System::Drawing::Size(231, 22);
			this->dateTimePicker1->TabIndex = 2;
			this->dateTimePicker1->Value = System::DateTime(2020, 10, 28, 0, 0, 0, 0);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(417, 38);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 36);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Filtrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmHistorialViajes::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Location = System::Drawing::Point(206, 41);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(778, 101);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Filtro";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(590, 38);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 36);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Ver todos";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmHistorialViajes::button3_Click);
			// 
			// frmHistorialViajes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1194, 652);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmHistorialViajes";
			this->Text = L"Historial de viajes";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &frmHistorialViajes::frmHistorialViajes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmHistorialViajes_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Viaje^>^ listaViajes = this->objGestorViaje->ListaDeViajesDeUnPasajero(this->objUsuario->CodigoDeUsuario);
		MostrarGrilla(listaViajes);
	}
	
	private: void MostrarGrilla(List<Viaje^>^ listaViajes) {

		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaViajes->Count; i++) {
			Viaje^ objViaje = listaViajes[i];
			array<String^>^ fila = gcnew array<String^>(9);
			fila[0] = objViaje->HoraSalida;
			fila[1] = objViaje->HoraLlegada;
			fila[2] = objViaje->Fecha;
			fila[3] = objViaje->Estado;
			fila[4] = Convert::ToString(objViaje->NumeroPasajeros);
			fila[5] = Convert::ToString(objViaje->AsientosDisponibles);
			fila[6] = Convert::ToString(objViaje->Tarifa);
			fila[7] = objViaje->objConductor->Nombre;
			fila[8] = Convert::ToString(objViaje->codigoViaje);

			this->dataGridView1->Rows->Add(fila);
		}
	}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigo = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[8]->Value->ToString());//acccede codigo Cells[0]

	frmVerRuta^ ventanaVerRuta = gcnew frmVerRuta(codigo);
	ventanaVerRuta->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Fecha = this->dateTimePicker1->Text;
	List<Viaje^>^ listaViajes = this->objGestorViaje->ListaDeViajesDeUnPasajeroConFecha(this->objUsuario->CodigoDeUsuario, Fecha);
	MostrarGrilla(listaViajes);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Viaje^>^ listaViajes = this->objGestorViaje->ListaDeViajesDeUnPasajero(this->objUsuario->CodigoDeUsuario);
	MostrarGrilla(listaViajes);
}
};
}
