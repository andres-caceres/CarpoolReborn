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
	/// Summary for frmCalificarPasajeros
	/// </summary>
	public ref class frmCalificarPasajeros : public System::Windows::Forms::Form
	{
	public:
		frmCalificarPasajeros(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		frmCalificarPasajeros(Viaje^ objViaje)
		{
			InitializeComponent();

			this->objViaje = objViaje;
			this->objPasajero = gcnew Pasajero();
			this->objUsuario = gcnew Usuario();
			this->objGestorPasajero = gcnew GestorPasajero();
			this->objGestorUsuario = gcnew GestorUsuario();
			this->objGestorPasajeroREAL = gcnew GestorPasajero();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmCalificarPasajeros()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ calificacion;

	private: System::Windows::Forms::TextBox^ viaje;
	private: System::Windows::Forms::ComboBox^ pasajeros;



	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ aceptar;
	private: System::Windows::Forms::Button^ cancelar;
	private: System::ComponentModel::IContainer^ components;

	private:

		Viaje^ objViaje;
	private: System::Windows::Forms::Label^ lblCalificacion;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Label^ label3;

		   GestorUsuario^ objGestorUsuario;
		   GestorPasajero^ objGestorPasajero;
		   GestorPasajero^ objGestorPasajeroREAL;
		   Pasajero^ objPasajero;
		   Usuario^ objUsuario;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmCalificarPasajeros::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblCalificacion = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->calificacion = (gcnew System::Windows::Forms::ComboBox());
			this->viaje = (gcnew System::Windows::Forms::TextBox());
			this->pasajeros = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->aceptar = (gcnew System::Windows::Forms::Button());
			this->cancelar = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->lblCalificacion);
			this->groupBox1->Controls->Add(this->calificacion);
			this->groupBox1->Controls->Add(this->viaje);
			this->groupBox1->Controls->Add(this->pasajeros);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(26, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(508, 154);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Calificar Pasajeros";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmCalificarPasajeros::groupBox1_Enter);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(291, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Calificar:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Pasajero";
			// 
			// lblCalificacion
			// 
			this->lblCalificacion->ImageIndex = 7;
			this->lblCalificacion->ImageList = this->imageList1;
			this->lblCalificacion->Location = System::Drawing::Point(291, 32);
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
			this->calificacion->Location = System::Drawing::Point(294, 67);
			this->calificacion->Name = L"calificacion";
			this->calificacion->Size = System::Drawing::Size(121, 21);
			this->calificacion->TabIndex = 5;
			this->calificacion->SelectedIndexChanged += gcnew System::EventHandler(this, &frmCalificarPasajeros::calificacion_SelectedIndexChanged);
			// 
			// viaje
			// 
			this->viaje->Location = System::Drawing::Point(94, 29);
			this->viaje->Name = L"viaje";
			this->viaje->ReadOnly = true;
			this->viaje->Size = System::Drawing::Size(100, 20);
			this->viaje->TabIndex = 4;
			// 
			// pasajeros
			// 
			this->pasajeros->FormattingEnabled = true;
			this->pasajeros->Location = System::Drawing::Point(94, 67);
			this->pasajeros->Name = L"pasajeros";
			this->pasajeros->Size = System::Drawing::Size(141, 21);
			this->pasajeros->TabIndex = 2;
			this->pasajeros->SelectedIndexChanged += gcnew System::EventHandler(this, &frmCalificarPasajeros::pasajeros_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Viaje";
			// 
			// aceptar
			// 
			this->aceptar->Location = System::Drawing::Point(407, 193);
			this->aceptar->Name = L"aceptar";
			this->aceptar->Size = System::Drawing::Size(99, 28);
			this->aceptar->TabIndex = 1;
			this->aceptar->Text = L"Aceptar";
			this->aceptar->UseVisualStyleBackColor = true;
			this->aceptar->Click += gcnew System::EventHandler(this, &frmCalificarPasajeros::aceptar_Click);
			// 
			// cancelar
			// 
			this->cancelar->Location = System::Drawing::Point(279, 193);
			this->cancelar->Name = L"cancelar";
			this->cancelar->Size = System::Drawing::Size(95, 29);
			this->cancelar->TabIndex = 2;
			this->cancelar->Text = L"Cancelar";
			this->cancelar->UseVisualStyleBackColor = true;
			// 
			// frmCalificarPasajeros
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 239);
			this->Controls->Add(this->cancelar);
			this->Controls->Add(this->aceptar);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmCalificarPasajeros";
			this->Text = L"frmCalificarPasajeros";
			this->Load += gcnew System::EventHandler(this, &frmCalificarPasajeros::frmCalificarPasajeros_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmCalificarPasajeros_Load(System::Object^ sender, System::EventArgs^ e) {

		this->viaje->Text=Convert::ToString(this->objViaje->codigoViaje);
		int numPasajeros = this->objViaje->listaPasajeros->Count;


		for (int i = 0; i < numPasajeros; i++) {
			objPasajero = this->objViaje->listaPasajeros[i];
			objUsuario = objGestorUsuario->ObtenerUsuarioxCodigoBD(objPasajero->CodigoDeUsuario);
			this->pasajeros->Items->Add(objUsuario->Nombre);
			this->objGestorPasajero->listaPasajeros->Add(objPasajero); //agregar pasajero a lista de gestor
		}
		
		
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pasajeros_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int index = this->pasajeros->SelectedIndex;
	this->calificacion->SelectedIndex = this->objGestorPasajero->listaPasajeros[index]->Calificacion;	
	this->lblCalificacion->ImageIndex = (this->objGestorPasajero->listaPasajeros[index]->Calificacion)*2;
}
private: System::Void calificacion_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int index = this->pasajeros->SelectedIndex;
	int selectedIndex = 0;
	selectedIndex = this->calificacion->SelectedIndex;
	if (selectedIndex >= 0) {
		this->objGestorPasajero->listaPasajeros[index]->Calificacion = selectedIndex ;
		this->lblCalificacion->ImageIndex = selectedIndex * 2;
	}
	
}
private: System::Void aceptar_Click(System::Object^ sender, System::EventArgs^ e) {

	this->objGestorPasajeroREAL->LeerPasajerosDesdeArchivo();
	this->objGestorPasajeroREAL->ActualizarCalificacionPasajeros(this->objGestorPasajero->listaPasajeros);
	this->objGestorPasajeroREAL->EscribirArchivo();

}
};
}
