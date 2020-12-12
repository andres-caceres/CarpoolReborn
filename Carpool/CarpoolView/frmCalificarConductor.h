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
		
		frmCalificarConductor(Viaje^ objViaje)
		{
			InitializeComponent();
			this->objViaje = objViaje;
			this->objGestorConductor = gcnew GestorConductor();

			//
			//TODO: Add the constructor code here
			//
		}
		
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

		Viaje^ objViaje;
		GestorConductor^ objGestorConductor;
		Conductor^ objConductorCalificado;

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
			this->cancelar->Location = System::Drawing::Point(288, 164);
			this->cancelar->Name = L"cancelar";
			this->cancelar->Size = System::Drawing::Size(95, 29);
			this->cancelar->TabIndex = 5;
			this->cancelar->Text = L"Cancelar";
			this->cancelar->UseVisualStyleBackColor = true;
			// 
			// aceptar
			// 
			this->aceptar->Location = System::Drawing::Point(410, 164);
			this->aceptar->Name = L"aceptar";
			this->aceptar->Size = System::Drawing::Size(99, 28);
			this->aceptar->TabIndex = 4;
			this->aceptar->Text = L"Aceptar";
			this->aceptar->UseVisualStyleBackColor = true;
			this->aceptar->Click += gcnew System::EventHandler(this, &frmCalificarConductor::aceptar_Click);
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
			this->groupBox1->Location = System::Drawing::Point(29, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(508, 121);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Calificar Conductor";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(81, 67);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(200, 20);
			this->textBox1->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(307, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Calificar:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Conductor";
			// 
			// lblCalificacion
			// 
			this->lblCalificacion->ImageIndex = 7;
			this->lblCalificacion->ImageList = this->imageList1;
			this->lblCalificacion->Location = System::Drawing::Point(307, 32);
			this->lblCalificacion->Name = L"lblCalificacion";
			this->lblCalificacion->Size = System::Drawing::Size(128, 32);
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
			this->calificacion->Location = System::Drawing::Point(314, 67);
			this->calificacion->Name = L"calificacion";
			this->calificacion->Size = System::Drawing::Size(121, 21);
			this->calificacion->TabIndex = 5;
			this->calificacion->SelectedIndexChanged += gcnew System::EventHandler(this, &frmCalificarConductor::calificacion_SelectedIndexChanged);
			// 
			// viaje
			// 
			this->viaje->Location = System::Drawing::Point(81, 29);
			this->viaje->Name = L"viaje";
			this->viaje->ReadOnly = true;
			this->viaje->Size = System::Drawing::Size(100, 20);
			this->viaje->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Viaje";
			// 
			// frmCalificarConductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 205);
			this->Controls->Add(this->cancelar);
			this->Controls->Add(this->aceptar);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmCalificarConductor";
			this->Text = L"Calificar conductor";
			this->Load += gcnew System::EventHandler(this, &frmCalificarConductor::frmCalificarConductor_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmCalificarConductor_Load(System::Object^ sender, System::EventArgs^ e) {

		this->objGestorConductor->LeerConductoresDesdeArchivo();
		this->objConductorCalificado =this->objGestorConductor->ObtenerConductorxCodigo(this->objViaje->objConductor->CodigoDeUsuario);
		this->calificacion->Text = Convert::ToString(this->objConductorCalificado->CalificacionConductor);
	}
private: System::Void calificacion_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		int selectedIndex = this->calificacion->SelectedIndex;
		this->objConductorCalificado->CalificacionConductor = selectedIndex;
		this->lblCalificacion->ImageIndex = selectedIndex * 2;	
}
private: System::Void aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->objGestorConductor->EliminarConductorxCodigo(this->objConductorCalificado->CodigoDeUsuario);
	this->objGestorConductor->AgregarALista(this->objConductorCalificado);
	this->objGestorConductor->EscribirArchivo();

}
};
}
