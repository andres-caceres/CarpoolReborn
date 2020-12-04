#pragma once
//#include "frmVerificarConductor.h"
#include "frmAgregaPasajeros.h"
#include "frmCreaViaje.h"


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
	private: System::Windows::Forms::GroupBox^ groupBox4;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;






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
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label17;


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
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
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
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox8);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->textBox5);
			this->groupBox4->Controls->Add(this->textBox6);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Location = System::Drawing::Point(194, 715);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(1094, 238);
			this->groupBox4->TabIndex = 28;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ruta";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(210, 174);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(222, 38);
			this->textBox8->TabIndex = 25;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(56, 174);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(121, 32);
			this->label17->TabIndex = 24;
			this->label17->Text = L"Codigo :";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(610, 45);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(234, 93);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Definir";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmNuevoViaje::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(210, 107);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(222, 38);
			this->textBox5->TabIndex = 22;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(206, 45);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(222, 38);
			this->textBox6->TabIndex = 20;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(56, 107);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(127, 32);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Destino :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(56, 48);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(116, 32);
			this->label15->TabIndex = 20;
			this->label15->Text = L"Origen :";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Location = System::Drawing::Point(194, 515);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(1094, 172);
			this->groupBox2->TabIndex = 26;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Conductor";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(534, 101);
			this->textBox12->Margin = System::Windows::Forms::Padding(2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(222, 38);
			this->textBox12->TabIndex = 22;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(534, 43);
			this->textBox11->Margin = System::Windows::Forms::Padding(2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(222, 38);
			this->textBox11->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(266, 105);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(121, 32);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Codigo :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(256, 43);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(130, 32);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Nombre :";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label16);
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
			this->groupBox1->Location = System::Drawing::Point(194, 89);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(1094, 329);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de Viaje";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(742, 271);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(222, 38);
			this->textBox7->TabIndex = 25;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(584, 275);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(103, 32);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Tarifa :";
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker3->Location = System::Drawing::Point(742, 205);
			this->dateTimePicker3->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(222, 38);
			this->dateTimePicker3->TabIndex = 23;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker2->Location = System::Drawing::Point(742, 122);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(222, 38);
			this->dateTimePicker2->TabIndex = 22;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(742, 54);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(222, 38);
			this->dateTimePicker1->TabIndex = 21;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(614, 209);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 32);
			this->label13->TabIndex = 20;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(272, 260);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(222, 38);
			this->textBox4->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(272, 188);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(222, 38);
			this->textBox3->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(278, 124);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(222, 38);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmNuevoViaje::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(272, 62);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(222, 38);
			this->textBox1->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(576, 66);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 32);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Fecha :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(598, 120);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 32);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Hora:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(598, 145);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 32);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Inicio";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(598, 194);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(91, 32);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Hora :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(602, 219);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(55, 32);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Fin";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(78, 262);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(180, 32);
			this->label5->TabIndex = 4;
			this->label5->Text = L"# Pasajeros :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(78, 209);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 32);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Disponibles";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(78, 178);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Asientos :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(78, 124);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Estado :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(78, 62);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Codigo :";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(242, 1011);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(342, 64);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Grabar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmNuevoViaje::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(872, 1011);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(342, 64);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Cancelar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmNuevoViaje::button6_Click);
			// 
			// frmNuevoViaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1480, 1116);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmNuevoViaje";
			this->Text = L"Nuevo Viaje";
			this->Load += gcnew System::EventHandler(this, &frmNuevoViaje::frmNuevoViaje_Load);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		frmCreaViaje^ ventanaCreaViaje = gcnew frmCreaViaje(this->objRuta);
		ventanaCreaViaje->ShowDialog();
		this->textBox6->Text = this->objRuta->Origen;
		this->textBox5->Text = this->objRuta->Destino;
		this->textBox8->Text = Convert::ToString(this->objRuta->CodigoViaje);

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	int codigo = Convert::ToInt32(this->textBox1->Text);
	String^ HoraInicio = this->dateTimePicker2->Text;
	String^ HoraFin = this->dateTimePicker3->Text;
	String^ fecha = this->dateTimePicker1->Text;
	String^ Estado = this->textBox2->Text;
	int nroPasajeros = Convert::ToInt32(this->textBox4->Text);
	int AsientosDisponibles = Convert::ToInt32(this->textBox3->Text);
	String^ Tarifa = this->textBox7->Text;
	int codigoConductor = Convert::ToInt32(this->textBox12->Text);
	//int codigoRuta = Convert::ToInt32(this->textBox8->Text);
	Usuario^ objUsuarioLogeado = this->objUsuario;
	Conductor^ objConductor = objGestorConductor->BuscarConductorxUserID(objUsuarioLogeado->CodigoDeUsuario);
	//Ruta^ objRuta = objGestorRuta->ObtenerRutaxCodigo(codigoRuta);
	Viaje^ objViaje = gcnew Viaje(codigo, HoraInicio, HoraFin, fecha, Estado, nroPasajeros,
		AsientosDisponibles, Tarifa, this->objRuta, this->objConductor);
	this->objGestorViaje->AgregarViaje(objViaje);
	this->Close();
}
private: System::Void frmNuevoViaje_Load(System::Object^ sender, System::EventArgs^ e) {
	Usuario^ objUsuarioLogeado = this->objUsuario;
	this->textBox12->Text = Convert::ToString(objUsuarioLogeado->CodigoDeUsuario);
	this->textBox11->Text = Convert::ToString(objUsuarioLogeado->Nombre);
	this->textBox2->Text = "No Iniciado";
}


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
