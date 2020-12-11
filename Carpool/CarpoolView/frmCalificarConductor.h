#pragma once

namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmCalificarConductor
	/// </summary>
	public ref class frmCalificarConductor : public System::Windows::Forms::Form
	{
	public:
		frmCalificarConductor(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		/*
		frmCalificarConductor(Viaje^ objViaje)
		{
			InitializeComponent();
			this->objViaje = objViaje;

			//
			//TODO: Add the constructor code here
			//
		}
		*/
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmCalificarConductor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cancelar;
	protected:
	private: System::Windows::Forms::Button^ aceptar;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblCalificacion;
	private: System::Windows::Forms::ComboBox^ calificacion;
	private: System::Windows::Forms::TextBox^ viaje;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmCalificarConductor::typeid));
			this->cancelar = (gcnew System::Windows::Forms::Button());
			this->aceptar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblCalificacion = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->calificacion = (gcnew System::Windows::Forms::ComboBox());
			this->viaje = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// cancelar
			// 
			this->cancelar->Location = System::Drawing::Point(384, 202);
			this->cancelar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cancelar->Name = L"cancelar";
			this->cancelar->Size = System::Drawing::Size(127, 36);
			this->cancelar->TabIndex = 5;
			this->cancelar->Text = L"Cancelar";
			this->cancelar->UseVisualStyleBackColor = true;
			// 
			// aceptar
			// 
			this->aceptar->Location = System::Drawing::Point(547, 202);
			this->aceptar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->aceptar->Name = L"aceptar";
			this->aceptar->Size = System::Drawing::Size(132, 34);
			this->aceptar->TabIndex = 4;
			this->aceptar->Text = L"Aceptar";
			this->aceptar->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->lblCalificacion);
			this->groupBox1->Controls->Add(this->calificacion);
			this->groupBox1->Controls->Add(this->viaje);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(39, 34);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(677, 149);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Calificar Conductor";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(108, 82);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(265, 22);
			this->textBox1->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(409, 20);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Calificar:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 86);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Conductor";
			// 
			// lblCalificacion
			// 
			this->lblCalificacion->ImageIndex = 7;
			this->lblCalificacion->ImageList = this->imageList1;
			this->lblCalificacion->Location = System::Drawing::Point(409, 39);
			this->lblCalificacion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCalificacion->Name = L"lblCalificacion";
			this->lblCalificacion->Size = System::Drawing::Size(171, 39);
			this->lblCalificacion->TabIndex = 6;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"estrellas00.png");
			this->imageList1->Images->SetKeyName(1, L"estrellas05.png");
			this->imageList1->Images->SetKeyName(2, L"estrellas10.png");
			this->imageList1->Images->SetKeyName(3, L"estrellas15.png");
			this->imageList1->Images->SetKeyName(4, L"estrellas20.png");
			this->imageList1->Images->SetKeyName(5, L"estrellas25.png");
			this->imageList1->Images->SetKeyName(6, L"estrellas30.png");
			this->imageList1->Images->SetKeyName(7, L"estrellas35.png");
			this->imageList1->Images->SetKeyName(8, L"estrellas40.png");
			this->imageList1->Images->SetKeyName(9, L"estrellas45.png");
			this->imageList1->Images->SetKeyName(10, L"estrellas50.png");
			// 
			// calificacion
			// 
			this->calificacion->FormattingEnabled = true;
			this->calificacion->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"0", L"1", L"2", L"3", L"4", L"5" });
			this->calificacion->Location = System::Drawing::Point(419, 82);
			this->calificacion->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->calificacion->Name = L"calificacion";
			this->calificacion->Size = System::Drawing::Size(160, 24);
			this->calificacion->TabIndex = 5;
			// 
			// viaje
			// 
			this->viaje->Location = System::Drawing::Point(108, 36);
			this->viaje->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->viaje->Name = L"viaje";
			this->viaje->ReadOnly = true;
			this->viaje->Size = System::Drawing::Size(132, 22);
			this->viaje->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 39);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Viaje";
			// 
			// frmCalificarConductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(769, 252);
			this->Controls->Add(this->cancelar);
			this->Controls->Add(this->aceptar);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"frmCalificarConductor";
			this->Text = L"Calificar conductor";
			this->Load += gcnew System::EventHandler(this, &frmCalificarConductor::frmCalificarConductor_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmCalificarConductor_Load(System::Object^ sender, System::EventArgs^ e) {
		/*
		this->viaje->Text = Convert::ToString(this->objViaje->codigoViaje);
		int numPasajeros = this->objViaje->listaPasajeros->Count;

		if (numPasajeros > 0) {
			for (int i = 0; i < numPasajeros; i++) {
				objPasajero = this->objViaje->listaPasajeros[i];
				objUsuario = objGestorUsuario->ObtenerUsuarioxCodigoBD(objPasajero->CodigoDeUsuario);
				this->pasajeros->Items->Add(objUsuario->Nombre);
				this->objGestorPasajero->listaPasajeros->Add(objPasajero); //agregar pasajero a lista de gestor
			}
		}
		*/
	}
};
}
