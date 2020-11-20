#pragma once

namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CarpoolModel;
	using namespace CarpoolController;

	/// <summary>
	/// Summary for frmDatosPasajero
	/// </summary>
	public ref class frmDatosPasajero : public System::Windows::Forms::Form
	{
	public:
		frmDatosPasajero(void)
		{
			InitializeComponent();
			this->objGestorPasajero = gcnew GestorPasajero();
			//
			//TODO: Add the constructor code here
			//
		}
		frmDatosPasajero(GestorPasajero^ objGestorPasajero)
		{
			InitializeComponent();
			this->objGestorPasajero = objGestorPasajero;
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmDatosPasajero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::GroupBox^ groupBox2;







	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::TextBox^ textBoxNombre;
	private: System::Windows::Forms::Label^ lblCalificacion;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		GestorPasajero^ objGestorPasajero;

		   Pasajero^ objPasajero;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmDatosPasajero::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->lblCalificacion = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
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
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(286, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(279, 327);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ultimo Viaje";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxNombre);
			this->groupBox1->Controls->Add(this->lblCalificacion);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(268, 327);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pasajero";
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->Enabled = false;
			this->textBoxNombre->Location = System::Drawing::Point(117, 89);
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->ReadOnly = true;
			this->textBoxNombre->Size = System::Drawing::Size(137, 20);
			this->textBoxNombre->TabIndex = 7;
			// 
			// lblCalificacion
			// 
			this->lblCalificacion->ImageIndex = 7;
			this->lblCalificacion->ImageList = this->imageList1;
			this->lblCalificacion->Location = System::Drawing::Point(115, 30);
			this->lblCalificacion->Name = L"lblCalificacion";
			this->lblCalificacion->Size = System::Drawing::Size(128, 32);
			this->lblCalificacion->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Calficaci�n";
			// 
			// frmDatosPasajero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(578, 349);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmDatosPasajero";
			this->Text = L"frmDatosPasajero";
			this->Load += gcnew System::EventHandler(this, &frmDatosPasajero::frmDatosPasajero_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmDatosPasajero_Load(System::Object^ sender, System::EventArgs^ e) {

		this->objGestorPasajero->LeerPasajerosDesdeArchivo();
		this->objPasajero = objGestorPasajero->BuscarxUserID(1);
	}
};
}