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
	/// Summary for frmVerViaje
	/// </summary>
	public ref class frmVerViaje : public System::Windows::Forms::Form
	{
	public:
		frmVerViaje(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		frmVerViaje(GestorViaje^ objGestorViaje, int codigoEditar)
		{
			this->objGestorViaje = objGestorViaje;
			this->codigoEditar = codigoEditar;
			this->objConductor = gcnew Conductor();
			this->objGestorRuta = gcnew GestorRuta();
			this->objRuta = gcnew Ruta();
			this->listaPasajeros = gcnew List<Pasajero^>();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmVerViaje()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button6;
	protected:

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label16;



	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: GestorViaje^ objGestorViaje;
	private: int codigoEditar;
	private: Conductor^ objConductor;
	private: List<Pasajero^>^ listaPasajeros;
	private: GestorRuta^ objGestorRuta;
	private: Ruta^ objRuta;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmVerViaje::typeid));
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->ForeColor = System::Drawing::Color::Red;
			this->button6->Location = System::Drawing::Point(251, 524);
			this->button6->Margin = System::Windows::Forms::Padding(1);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(239, 33);
			this->button6->TabIndex = 39;
			this->button6->Text = L"Cerrar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmVerViaje::button6_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Location = System::Drawing::Point(72, 372);
			this->groupBox3->Margin = System::Windows::Forms::Padding(1);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(1);
			this->groupBox3->Size = System::Drawing::Size(611, 138);
			this->groupBox3->TabIndex = 37;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Pasajeros";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &frmVerViaje::groupBox3_Enter);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(81, 36);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 102;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->Size = System::Drawing::Size(429, 108);
			this->dataGridView1->TabIndex = 26;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmVerViaje::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"CodigoUsuario";
			this->Column1->MinimumWidth = 12;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Calificacion";
			this->Column2->MinimumWidth = 12;
			this->Column2->Name = L"Column2";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Location = System::Drawing::Point(67, 230);
			this->groupBox2->Margin = System::Windows::Forms::Padding(1);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(1);
			this->groupBox2->Size = System::Drawing::Size(615, 65);
			this->groupBox2->TabIndex = 36;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Conductor";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(416, 33);
			this->textBox12->Margin = System::Windows::Forms::Padding(1);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(113, 22);
			this->textBox12->TabIndex = 22;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &frmVerViaje::textBox12_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(148, 33);
			this->textBox11->Margin = System::Windows::Forms::Padding(1);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(113, 22);
			this->textBox11->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(339, 32);
			this->label12->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 17);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Codigo :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(73, 32);
			this->label11->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(66, 17);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Nombre :";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(67, 44);
			this->groupBox1->Margin = System::Windows::Forms::Padding(1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(1);
			this->groupBox1->Size = System::Drawing::Size(615, 175);
			this->groupBox1->TabIndex = 35;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de Viaje";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(411, 100);
			this->textBox8->Margin = System::Windows::Forms::Padding(1);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(113, 22);
			this->textBox8->TabIndex = 39;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(411, 64);
			this->textBox6->Margin = System::Windows::Forms::Padding(1);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(113, 22);
			this->textBox6->TabIndex = 38;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(411, 34);
			this->textBox5->Margin = System::Windows::Forms::Padding(1);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(113, 22);
			this->textBox5->TabIndex = 37;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(183, 64);
			this->textBox2->Margin = System::Windows::Forms::Padding(1);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(113, 22);
			this->textBox2->TabIndex = 36;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(411, 143);
			this->textBox7->Margin = System::Windows::Forms::Padding(1);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(113, 22);
			this->textBox7->TabIndex = 35;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(336, 144);
			this->label16->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(53, 17);
			this->label16->TabIndex = 34;
			this->label16->Text = L"Tarifa :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(351, 108);
			this->label13->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 17);
			this->label13->TabIndex = 20;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(183, 135);
			this->textBox4->Margin = System::Windows::Forms::Padding(1);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(113, 22);
			this->textBox4->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(183, 97);
			this->textBox3->Margin = System::Windows::Forms::Padding(1);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(113, 22);
			this->textBox3->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(183, 28);
			this->textBox1->Margin = System::Windows::Forms::Padding(1);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(113, 22);
			this->textBox1->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(332, 34);
			this->label6->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Fecha :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(343, 62);
			this->label7->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 17);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Hora:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(343, 75);
			this->label8->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Inicio";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(343, 100);
			this->label9->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 17);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Hora :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(345, 113);
			this->label10->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 17);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Fin";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(83, 135);
			this->label5->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"# Pasajeros :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(83, 108);
			this->label4->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Disponibles";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(83, 92);
			this->label3->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Asientos :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(83, 64);
			this->label2->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Estado :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(83, 32);
			this->label1->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Codigo :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(291, 315);
			this->button1->Margin = System::Windows::Forms::Padding(1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 41);
			this->button1->TabIndex = 40;
			this->button1->Text = L"Ver Ruta";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVerViaje::button1_Click);
			// 
			// frmVerViaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(717, 586);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(1);
			this->Name = L"frmVerViaje";
			this->Text = L"Ver viaje";
			this->Load += gcnew System::EventHandler(this, &frmVerViaje::frmVerViaje_Load);
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmVerViaje_Load(System::Object^ sender, System::EventArgs^ e) {
		Viaje^ objViajeModificar = this->objGestorViaje->ObtenerViajeoxCodigo(this->codigoEditar);
		this->textBox1->Text = Convert::ToString(objViajeModificar->codigoViaje);
		this->textBox2->Text = objViajeModificar->Estado;
		this->textBox3->Text = Convert::ToString(objViajeModificar->AsientosDisponibles);
		this->textBox4->Text = Convert::ToString(objViajeModificar->listaPasajeros->Count);
		this->textBox7->Text = Convert::ToString(objViajeModificar->Tarifa);
		this->textBox5->Text = objViajeModificar->Fecha;
		this->textBox6->Text = objViajeModificar->HoraSalida;
		this->textBox8->Text = objViajeModificar->HoraLlegada;
		this->textBox11->Text = objViajeModificar->objConductor->Nombre;
		this->textBox12->Text = Convert::ToString(objViajeModificar->objConductor->CodigoDeUsuario);

		this->objGestorViaje->CargarPasajerosViajes(objViajeModificar);
		MostrarGrilla(objViajeModificar->listaPasajeros);
	}

	private: void MostrarGrilla(List<Pasajero^>^ listaPasajeros) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaPasajeros->Count; i++) {
			Pasajero^ objPasajero = listaPasajeros[i];
			array<String^>^ fila = gcnew array<String^>(2);
			fila[0] = Convert::ToString(objPasajero->CodigoDeUsuario);
			fila[1] = Convert::ToString(objPasajero->Calificacion);
			this->dataGridView1->Rows->Add(fila);
		}
	}




private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	frmVerRuta^ ventanaVerRuta = gcnew frmVerRuta(this->codigoEditar);
	ventanaVerRuta->ShowDialog();

}
};
}
