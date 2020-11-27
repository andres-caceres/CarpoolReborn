#pragma once
#include "frmTrazarRuta.h"

namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmCreaViaje
	/// </summary>
	public ref class frmCreaViaje : public System::Windows::Forms::Form
	{
	public:
		frmCreaViaje(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		frmCreaViaje(GestorRuta^ objGestorRuta, Ruta^ objRuta)
		{
			InitializeComponent();
			this->objGestorRuta = objGestorRuta;
			this->objRuta = objRuta;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmCreaViaje()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: GestorRuta^ objGestorRuta;
	private: Ruta^ objRuta;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(805, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(216, 98);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Trazar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmCreaViaje::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(143, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Origen :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(133, 275);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Destino :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(362, 175);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 38);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(358, 263);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(228, 38);
			this->textBox2->TabIndex = 4;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(358, 352);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(224, 38);
			this->textBox8->TabIndex = 27;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(133, 355);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(121, 32);
			this->label17->TabIndex = 26;
			this->label17->Text = L"Codigo :";
			this->label17->Click += gcnew System::EventHandler(this, &frmCreaViaje::label17_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(324, 665);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(199, 80);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmCreaViaje::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(822, 665);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(199, 80);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Cancelar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmCreaViaje::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(133, 445);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 32);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Favorito :";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Favorito", L"No Favorito" });
			this->comboBox1->Location = System::Drawing::Point(358, 438);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(224, 39);
			this->comboBox1->TabIndex = 31;
			// 
			// frmCreaViaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1320, 926);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"frmCreaViaje";
			this->Text = L"frmCreaViaje";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmTrazarRuta^ ventanaMapa = gcnew frmTrazarRuta();
		ventanaMapa->ShowDialog();
	}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigoRuta = Convert::ToInt32(this->textBox8->Text);
	String^ origen = this->textBox1->Text;
	String^ destino = this->textBox2->Text;
	String^ favorito = this->comboBox1->Text;
	Ruta^ objRuta = gcnew Ruta(codigoRuta,origen,destino,favorito);
	this->objGestorRuta->AgregarRuta(objRuta);
	MessageBox::Show("Ruta Creada exitosamente");
	this->Close();


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
