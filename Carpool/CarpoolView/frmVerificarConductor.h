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
	/// Summary for frmVerificarConductor
	/// </summary>
	public ref class frmVerificarConductor : public System::Windows::Forms::Form
	{
	public:
		frmVerificarConductor(void)
		{
			InitializeComponent();
			this->objGestorConductor = gcnew GestorConductor();
			//
			//TODO: Add the constructor code here
			//
		}

		frmVerificarConductor(Conductor^ objConductor)
		{
			InitializeComponent();
			this->objGestorConductor = gcnew GestorConductor();
			this->objConductor = objConductor;
			//
			//TODO: Add the constructor code here
			//
		}

		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmVerificarConductor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: GestorConductor^ objGestorConductor;
	private: Conductor^ objConductor;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(47, 44);
			this->groupBox1->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox1->Size = System::Drawing::Size(468, 173);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Conductor";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(44, 246);
			this->groupBox2->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->groupBox2->Size = System::Drawing::Size(471, 126);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Vehiculo";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(165, 62);
			this->textBox2->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(87, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(165, 31);
			this->textBox1->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(87, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 62);
			this->label2->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Placa :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 34);
			this->label1->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Modelo :";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(344, 28);
			this->button3->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 48);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Escoger";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 406);
			this->button1->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 32);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(339, 406);
			this->button2->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 32);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// frmVerificarConductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(553, 452);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->Name = L"frmVerificarConductor";
			this->Text = L"frmVerificarConductor";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
