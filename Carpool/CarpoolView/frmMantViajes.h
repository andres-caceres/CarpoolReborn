#pragma once
#include "frmNuevoViaje.h"

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
	/// Summary for frmMantViajes
	/// </summary>
	public ref class frmMantViajes : public System::Windows::Forms::Form
	{
	public:
		frmMantViajes(void)
		{
			InitializeComponent();
			this->objGestorViaje = gcnew GestorViaje();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMantViajes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button5;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
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
	private: GestorViaje^ objGestorViaje;


	private:
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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1086, 822);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(180, 89);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Ver";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(819, 822);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(180, 89);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(559, 822);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 89);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Modificar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(304, 822);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 89);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantViajes::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(996, 163);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 74);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(651, 179);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(237, 38);
			this->dateTimePicker1->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(454, 185);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 32);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Fecha :";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(169, 327);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1258, 454);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Viajes";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(31, 75);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 102;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->Size = System::Drawing::Size(1195, 326);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->MinimumWidth = 12;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 250;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Hora Inicio";
			this->Column2->MinimumWidth = 12;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 250;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Hora Fin";
			this->Column3->MinimumWidth = 12;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 250;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Fecha";
			this->Column4->MinimumWidth = 12;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 250;
			// 
			// frmMantViajes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1597, 1075);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantViajes";
			this->Text = L"frmMantViajes";
			this->Load += gcnew System::EventHandler(this, &frmMantViajes::frmMantViajes_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmMantViajes_Load(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorViaje->LeerViajesDesdeArchivo();
		List<Viaje^>^ listaViajes = this->objGestorViaje->DevolverAllViajes();
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
	for (int i = 0; i < this->objGestorViaje->ObtenerCantidadViajes(); i++) {
		Viaje^ objViaje = this->objGestorViaje->ObtenerViajeLista(i);
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = Convert::ToString(objViaje->codigoViaje);
		fila[1] = objViaje->HoraSalida;
		fila[2] = objViaje->HoraLlegada;
		fila[3] = objViaje->Fecha;
		this->dataGridView1->Rows->Add(fila);
	}
}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevoViaje^ ventanaNuevoViaje = gcnew frmNuevoViaje(this->objGestorViaje);
	ventanaNuevoViaje->ShowDialog();
	MostrarGrilla();
}
};
}
