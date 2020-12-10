#pragma once
//#include "frmVerificarConductor.h"
#include "frmAgregaPasajeros.h"
//#include "frmCreaViaje.h"
#include "frmTrazarRuta.h"


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
	/// Summary for frmNuevoViaje
	/// </summary>
	public ref class frmNuevoViaje : public System::Windows::Forms::Form
	{
	public:
		frmNuevoViaje(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		frmNuevoViaje(GestorViaje^ objGestorViaje)
		{
			InitializeComponent();
			this->objGestorViaje = objGestorViaje;
			this->objConductor = gcnew Conductor();
			this->objGestorConductor = gcnew GestorConductor();
			this->objRuta = gcnew Ruta();
			this->objGestorRuta = gcnew GestorRuta();
			this->listaPasajeros = gcnew List<Pasajero^>();
			this->objGestorUsuario = gcnew GestorUsuario();

			//
			//TODO: Add the constructor code here
			//
		}
		frmNuevoViaje(GestorViaje^ objGestorViaje, Usuario^ objUsuario)
		{
			InitializeComponent();
			this->objGestorViaje = objGestorViaje;
			this->objConductor = gcnew Conductor();
			this->objGestorConductor = gcnew GestorConductor();
			this->objRuta = gcnew Ruta();
			this->objGestorRuta = gcnew GestorRuta();
			this->listaPasajeros = gcnew List<Pasajero^>();
			this->objGestorUsuario = gcnew GestorUsuario();
			
			this->objUsuario = objUsuario;
			//
			//TODO: Add the constructor code here
			//
		}
		frmNuevoViaje(Conductor^ objConductor) //this one
		{
			InitializeComponent();
			this->objGestorViaje = gcnew GestorViaje();
			//this->objConductor = gcnew Conductor(); ahora recibes
			this->objGestorConductor = gcnew GestorConductor(); //por que?
			//this->objRuta = gcnew Ruta();
			//this->objGestorRuta = gcnew GestorRuta();
			this->listaPasajeros = gcnew List<Pasajero^>();
			this->objGestorUsuario = gcnew GestorUsuario();
			this->objGestorCoordenadas = gcnew GestorCoordenadas();
			this->objConductor = objConductor;
			this->FlagRutaTrazada = 0;
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmNuevoViaje()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
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
	private: Conductor^ objConductor;
	private: List<Pasajero^>^ listaPasajeros;
	private: GestorRuta^ objGestorRuta;
	private: Ruta^ objRuta;
	private: GestorUsuario^ objGestorUsuario;
	private: GestorConductor^ objGestorConductor;
	private: Usuario^ objUsuario;
	private: GestorCoordenadas^ objGestorCoordenadas;
	private: int FlagRutaTrazada;
	//private: ListaCoordenadas^ objListaCoordenadas;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label16;




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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(143, 146);
			this->button4->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(113, 39);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Definir ruta";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmNuevoViaje::button4_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Location = System::Drawing::Point(15, 223);
			this->groupBox2->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox2->Size = System::Drawing::Size(410, 72);
			this->groupBox2->TabIndex = 26;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Conductor";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(200, 42);
			this->textBox12->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(86, 20);
			this->textBox12->TabIndex = 22;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(200, 18);
			this->textBox11->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(86, 20);
			this->textBox11->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(100, 44);
			this->label12->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Codigo :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(96, 18);
			this->label11->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(50, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Nombre :";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->dateTimePicker3);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
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
			this->groupBox1->Location = System::Drawing::Point(15, 10);
			this->groupBox1->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox1->Size = System::Drawing::Size(410, 198);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de Viaje";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(278, 114);
			this->textBox7->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox7->MaxLength = 3;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(86, 20);
			this->textBox7->TabIndex = 25;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmNuevoViaje::textBox7_KeyPress);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(219, 115);
			this->label16->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(40, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Tarifa :";
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker3->Location = System::Drawing::Point(278, 86);
			this->dateTimePicker3->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker3->TabIndex = 23;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker2->Location = System::Drawing::Point(278, 51);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker2->TabIndex = 22;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(278, 23);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker1->TabIndex = 21;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(230, 88);
			this->label13->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 13);
			this->label13->TabIndex = 20;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(102, 109);
			this->textBox4->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(86, 20);
			this->textBox4->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(102, 79);
			this->textBox3->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(86, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &frmNuevoViaje::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmNuevoViaje::textBox3_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(102, 52);
			this->textBox2->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(86, 20);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmNuevoViaje::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(102, 26);
			this->textBox1->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(86, 20);
			this->textBox1->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(216, 28);
			this->label6->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Fecha :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(224, 50);
			this->label7->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Hora:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(224, 61);
			this->label8->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Inicio";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(224, 81);
			this->label9->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Hora :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(226, 92);
			this->label10->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(21, 13);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Fin";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 110);
			this->label5->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"# Pasajeros :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 88);
			this->label4->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Disponibles";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 75);
			this->label3->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Asientos :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 52);
			this->label2->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Estado :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 26);
			this->label1->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Codigo :";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(33, 308);
			this->button5->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(128, 27);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Grabar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmNuevoViaje::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(269, 308);
			this->button6->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(128, 27);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Cancelar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmNuevoViaje::button6_Click);
			// 
			// frmNuevoViaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(443, 350);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->Name = L"frmNuevoViaje";
			this->Text = L"Nuevo Viaje";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmNuevoViaje::frmNuevoViaje_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmNuevoViaje::frmNuevoViaje_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->FlagRutaTrazada == 1) {
			MessageBox::Show("No puede grabar dos rutas en un mismo viaje");

		}
		else {
			frmTrazarRuta^ ventanaMapa = gcnew frmTrazarRuta(this->objGestorCoordenadas, this->FlagRutaTrazada); //pasar tambien el codigo viaje
			ventanaMapa->ShowDialog();
			/*this->textBox6->Text = this->objRuta->Origen;
			this->textBox5->Text = this->objRuta->Destino;
			this->textBox8->Text = Convert::ToString(this->objRuta->CodigoViaje);*/
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//Boton grabar

	if (this->FlagRutaTrazada==0){
		MessageBox::Show("Por favor, defina una ruta");	
	}
	else {
		int codigo = Convert::ToInt32(this->textBox1->Text);
		String^ HoraInicio = this->dateTimePicker2->Text;
		String^ HoraFin = this->dateTimePicker3->Text;
		String^ fecha = this->dateTimePicker1->Text;
		String^ Estado = this->textBox2->Text;
		int nroPasajeros = Convert::ToInt32(this->textBox4->Text);
		int AsientosDisponibles = Convert::ToInt32(this->textBox3->Text);
		int Tarifa = Convert::ToInt32(this->textBox7->Text);
		int codigoConductor = Convert::ToInt32(this->textBox12->Text); //maybe useless?


		//int codigoRuta = Convert::ToInt32(this->textBox8->Text);
		/*Usuario^ objUsuarioLogeado = this->objUsuario;
		Conductor^ objConductor = objGestorConductor->BuscarConductorxUserID(objUsuarioLogeado->CodigoDeUsuario);*/
		//Ruta^ objRuta = objGestorRuta->ObtenerRutaxCodigo(codigoRuta);

		Viaje^ objViaje = gcnew Viaje(codigo, HoraInicio, HoraFin, fecha, Estado, nroPasajeros,	AsientosDisponibles, Tarifa, this->objGestorCoordenadas->GiveMeListaCoordenadas(), this->objConductor);

		this->objGestorViaje->AgregarViaje(objViaje);
		this->objGestorCoordenadas->saveCoordinatesListAndTripCodeInTxt(this->objGestorViaje->obtenerCodigoViaje());
		

		this->Close();

	}

	
}
private: System::Void frmNuevoViaje_Load(System::Object^ sender, System::EventArgs^ e) {
	//Usuario^ objUsuarioLogeado = this->objUsuario;
	///*this->textBox12->Text = Convert::ToString(objUsuarioLogeado->CodigoDeUsuario);
	//this->textBox11->Text = Convert::ToString(objUsuarioLogeado->Nombre);*/
	this->objGestorViaje->LeerViajesDesdeArchivo();

	this->textBox12->Text = Convert::ToString(objConductor->CodigoDeUsuario);
	this->textBox11->Text = Convert::ToString(objConductor->Nombre);
	this->textBox1->Text = Convert::ToString(objGestorViaje->obtenerCodigoViaje());
	this->textBox2->Text = "No Iniciado";
	this->textBox4->Text = Convert::ToString(0);
	this->textBox3->Text = Convert::ToString(this->objConductor->AsientosDisponibles);
}


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmNuevoViaje_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorViaje->EscribirArchivo();
}

	   bool IsNumeric(char c) {
		   if ((c >= '0' && c <= '9') || (c == 8))
		   {
			   return true;
		   }
		   return false;
	   }

	   bool IsLetter(char c) {
		   if ((c >= 'a' && c <= 'z') || (c == 8) || (c >= 'A' && c <= 'Z') || (c == '�') || (c == '�') || (c == '�'))
		   {
			   return true;
		   }
		   return false;

	   }





private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	

}



private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if (IsNumeric(e->KeyChar)) {
		e->Handled = false;
	}
	else {
		e->Handled = true;
	}


}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if (IsNumeric(e->KeyChar)) {
		e->Handled = false;
	}
	else {
		e->Handled = true;
	}

}
};
}
