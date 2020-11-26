#pragma once
#include "frmVerificarConductor.h"
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
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;
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
	private: Ruta^ objRuta;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
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
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->textBox5);
			this->groupBox4->Controls->Add(this->textBox6);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Location = System::Drawing::Point(73, 250);
			this->groupBox4->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox4->Size = System::Drawing::Size(410, 72);
			this->groupBox4->TabIndex = 28;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ruta";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(229, 19);
			this->button4->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 39);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Definir";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmNuevoViaje::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(79, 45);
			this->textBox5->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(86, 20);
			this->textBox5->TabIndex = 22;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(77, 19);
			this->textBox6->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(86, 20);
			this->textBox6->TabIndex = 20;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(21, 45);
			this->label14->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(49, 13);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Destino :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(21, 20);
			this->label15->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(44, 13);
			this->label15->TabIndex = 20;
			this->label15->Text = L"Origen :";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Location = System::Drawing::Point(73, 335);
			this->groupBox3->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox3->Size = System::Drawing::Size(410, 106);
			this->groupBox3->TabIndex = 27;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Pasajeros";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(20, 31);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 102;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->Size = System::Drawing::Size(246, 63);
			this->dataGridView1->TabIndex = 26;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"CodigoUsuario";
			this->Column1->MinimumWidth = 12;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 250;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Calificacion";
			this->Column2->MinimumWidth = 12;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 250;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(293, 66);
			this->button3->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(68, 24);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(293, 22);
			this->button2->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(68, 24);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Location = System::Drawing::Point(73, 160);
			this->groupBox2->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox2->Size = System::Drawing::Size(410, 72);
			this->groupBox2->TabIndex = 26;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Conductor";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(229, 19);
			this->button1->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 39);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Verificar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoViaje::button1_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(79, 45);
			this->textBox12->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(86, 20);
			this->textBox12->TabIndex = 22;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(77, 19);
			this->textBox11->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(86, 20);
			this->textBox11->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(21, 48);
			this->label12->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Codigo :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(21, 18);
			this->label11->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(50, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Nombre :";
			// 
			// groupBox1
			// 
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
			this->groupBox1->Location = System::Drawing::Point(73, 7);
			this->groupBox1->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox1->Size = System::Drawing::Size(410, 138);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de Viaje";
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
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(104, 52);
			this->textBox2->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(86, 20);
			this->textBox2->TabIndex = 11;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(102, 26);
			this->textBox1->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox1->Name = L"textBox1";
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
			this->button5->Location = System::Drawing::Point(73, 460);
			this->button5->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(128, 27);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Grabar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(315, 460);
			this->button6->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(128, 27);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Cancelar";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// frmNuevoViaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(512, 506);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->Name = L"frmNuevoViaje";
			this->Text = L"frmNuevoViaje";
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmVerificarConductor^ ventanaVerificarConductor = gcnew frmVerificarConductor(this->objConductor);
		ventanaVerificarConductor->ShowDialog();
		//this->textBox11->Text = this->objConductor->Nombre;
		//this->textBox12->Text = this->objConductor->CodigoDeUsuario;
}
};
}
