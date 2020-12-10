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
	/// Summary for frmModificarViaje
	/// </summary>
	public ref class frmModificarViaje : public System::Windows::Forms::Form
	{
	public:
		frmModificarViaje(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		frmModificarViaje(GestorViaje^ objGestorViaje, int codigoEditar,Conductor^ objConductor)
		{
			InitializeComponent();
			this->objGestorViaje = objGestorViaje;
			this->codigoEditar = codigoEditar;
			this->objConductor = objConductor;
			this->objGestorRuta = gcnew GestorRuta();
			this->objRuta = gcnew Ruta();
			this->listaPasajeros = gcnew List<Pasajero^>();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmModificarViaje()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::GroupBox^ groupBox1;



	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: GestorViaje^ objGestorViaje;
	private: int codigoEditar;
	private: Conductor^ objConductor;
	private: List<Pasajero^>^ listaPasajeros;
	private: GestorRuta^ objGestorRuta;
	private: Ruta^ objRuta;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmModificarViaje::typeid));
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Location = System::Drawing::Point(75, 584);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(1221, 360);
			this->groupBox3->TabIndex = 31;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Pasajeros";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(53, 74);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 102;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->Size = System::Drawing::Size(859, 210);
			this->dataGridView1->TabIndex = 26;
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
			// button3
			// 
			this->button3->Location = System::Drawing::Point(979, 167);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(181, 57);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Denegar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmModificarViaje::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Location = System::Drawing::Point(64, 401);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(1229, 148);
			this->groupBox2->TabIndex = 30;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Conductor";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(832, 64);
			this->textBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(223, 38);
			this->textBox12->TabIndex = 22;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(296, 64);
			this->textBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(223, 38);
			this->textBox11->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(677, 62);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(121, 32);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Codigo :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(147, 62);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(130, 32);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Nombre :";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(64, 41);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(1229, 339);
			this->groupBox1->TabIndex = 29;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de Viaje";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(829, 277);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(223, 38);
			this->textBox7->TabIndex = 35;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(672, 279);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(103, 32);
			this->label16->TabIndex = 34;
			this->label16->Text = L"Tarifa :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(701, 210);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 32);
			this->label13->TabIndex = 20;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(365, 188);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(223, 38);
			this->textBox3->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(365, 55);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(223, 38);
			this->textBox1->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(664, 67);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 32);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Fecha :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(685, 119);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 32);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Hora:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(685, 145);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 32);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Inicio";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(685, 193);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(91, 32);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Hora :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(691, 219);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(55, 32);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Fin";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(165, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 32);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Disponibles";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(165, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Asientos :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(165, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Estado :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(165, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Codigo :";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(747, 980);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(477, 64);
			this->button6->TabIndex = 34;
			this->button6->Text = L"Cancelar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmModificarViaje::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(157, 980);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(477, 64);
			this->button5->TabIndex = 33;
			this->button5->Text = L"Grabar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmModificarViaje::button5_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(365, 116);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(223, 38);
			this->textBox2->TabIndex = 36;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(829, 64);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(223, 38);
			this->textBox4->TabIndex = 37;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(829, 121);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(223, 38);
			this->textBox5->TabIndex = 38;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(829, 193);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(223, 38);
			this->textBox6->TabIndex = 39;
			// 
			// frmModificarViaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1336, 1068);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmModificarViaje";
			this->Text = L"Modificar viaje";
			this->Load += gcnew System::EventHandler(this, &frmModificarViaje::frmModificarViaje_Load);
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void frmModificarViaje_Load(System::Object^ sender, System::EventArgs^ e) {
	Viaje^ objViajeModificar = this->objGestorViaje->ObtenerViajeoxCodigo(this->codigoEditar);
	this->textBox1->Text = Convert::ToString(objViajeModificar->codigoViaje);
	this->textBox2->Text = objViajeModificar->Estado;
	this->textBox3->Text = Convert::ToString(objViajeModificar->AsientosDisponibles);
	//this->textBox4->Text = Convert::ToString(objViajeModificar->NumeroPasajeros);
	this->textBox7->Text = Convert::ToString(objViajeModificar->Tarifa);
	this->textBox4->Text = objViajeModificar->Fecha;
	this->textBox5->Text = objViajeModificar->HoraSalida;
	this->textBox6->Text = objViajeModificar->HoraLlegada;
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



private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigo = Convert::ToInt32(this->textBox1->Text);
	String^ HoraInicio = this->textBox5->Text;
	String^ HoraFin = this->textBox6->Text;
	String^ fecha = this->textBox4->Text;
	String^ Estado = this->textBox2->Text;
	int nroPasajeros = Convert::ToInt32(this->textBox3->Text);
	int AsientosDisponibles = Convert::ToInt32(this->textBox3->Text);
	int Tarifa = Convert::ToInt32(this->textBox7->Text);
	int codigoConductor = Convert::ToInt32(this->textBox12->Text); //maybe useless?
	
	Viaje^ objViajeModificar = this->objGestorViaje->ObtenerViajeoxCodigo(this->codigoEditar);


	Viaje^ objViaje = gcnew Viaje(codigo, HoraInicio, HoraFin, fecha, Estado, nroPasajeros, AsientosDisponibles, Tarifa, objViajeModificar->objListaCoordenadas, this->objConductor);
	//this->objGestorViaje->AgregarViaje(objViaje);
	//this->objGestorCoordenadas->saveCoordinatesListAndTripCodeInTxt(this->objGestorViaje->obtenerCodigoViaje());
	//this->Close();

	this->objGestorViaje->AgregarViaje(objViaje);
	this->objGestorViaje->EliminarViaje(codigo);
	//this->objGestorViaje->EscribirArchivo();
	
	MessageBox::Show("Ha agregado a sus pasajeros");
	this->Close();

}



private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Viaje^ objViajeModificar = this->objGestorViaje->ObtenerViajeoxCodigo(this->codigoEditar);
	this->objGestorViaje->CargarPasajerosViajes(objViajeModificar);
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	this->objGestorViaje->RechazarPasajero(codigoEliminar, objViajeModificar);
	this->objGestorViaje->EscribirPasajerosViajeArchivo();

	MessageBox::Show("El Pasajero ha sido rechazado");

	MostrarGrilla(objViajeModificar->listaPasajeros);
}
};
}