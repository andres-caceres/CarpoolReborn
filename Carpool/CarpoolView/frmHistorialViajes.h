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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: Usuario^ objUsuario;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->dataGridView1->Location = System::Drawing::Point(49, 176);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1106, 361);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Hora inicio";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Hora fin";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Fecha";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Estado";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Numero de pasajeros";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Asientos disponibles";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Tarifa";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Nombre del Conductor";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			// 
			// frmHistorialViajes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1194, 615);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmHistorialViajes";
			this->Text = L"Historial de viajes";
			this->Load += gcnew System::EventHandler(this, &frmHistorialViajes::frmHistorialViajes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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

			this->dataGridView1->Rows->Add(fila);
		}
	}


};
}
