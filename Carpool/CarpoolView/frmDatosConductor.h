#pragma once
#include"frmMisVehiculos.h"

namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CarpoolController;
	using namespace CarpoolModel;

	/// <summary>
	/// Resumen de frmDatosConductor
	/// </summary>
	public ref class frmDatosConductor : public System::Windows::Forms::Form
	{
	public:
		frmDatosConductor(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//GestorVehiculo^ objGestorVehiculoDefault = gcnew GestorVehiculo();
			this->objGestorConductor = gcnew GestorConductor();
			this->objConductor = gcnew Conductor();
			this->objGestorVehiculo = gcnew GestorVehiculo();
			this->objVehiculoDefault = gcnew Vehiculo(); //#profe
			Calificacion = 0;
			//
		}

		frmDatosConductor(Conductor^ objConductor)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//GestorVehiculo^ objGestorVehiculoDefault = gcnew GestorVehiculo();
			this->objGestorConductor = gcnew GestorConductor();
			this->objConductor = objConductor;
			//
		}

		frmDatosConductor(GestorConductor^ objGestorConductor, Conductor^ objConductor)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			this->objGestorConductor = objGestorConductor;
			this->objConductor = objConductor;
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmDatosConductor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBoxPlaca;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxModelo;
	private: System::Windows::Forms::TextBox^ textBoxMarca;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBoxLicencia;
	private: System::Windows::Forms::TextBox^ textBoxNombre;
	private: System::Windows::Forms::Label^ lblCalificacion;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;

	private:
		GestorConductor^ objGestorConductor;
		GestorVehiculo^ objGestorVehiculo; //#profe no tiene por que llamarse
		Conductor^ objConductor;
		Vehiculo^ objVehiculoDefault;//#profe

	private: System::Windows::Forms::Label^ AsientosDisp;
	private: System::Windows::Forms::ComboBox^ Asientos;
	private: System::Windows::Forms::TextBox^ NroCta;

	private: System::Windows::Forms::GroupBox^ groupBox3;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ImageList^ imageList2;
	private: System::Windows::Forms::Label^ lblVehiculo;



		int Calificacion;
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmDatosConductor::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lblVehiculo = (gcnew System::Windows::Forms::Label());
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxPlaca = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxModelo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMarca = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->AsientosDisp = (gcnew System::Windows::Forms::Label());
			this->Asientos = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxLicencia = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->lblCalificacion = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NroCta = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblVehiculo);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBoxPlaca);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBoxModelo);
			this->groupBox2->Controls->Add(this->textBoxMarca);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(353, 24);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(335, 349);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Vehiculo Actual";
			// 
			// lblVehiculo
			// 
			this->lblVehiculo->ImageIndex = 1;
			this->lblVehiculo->ImageList = this->imageList2;
			this->lblVehiculo->Location = System::Drawing::Point(23, 57);
			this->lblVehiculo->Name = L"lblVehiculo";
			this->lblVehiculo->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lblVehiculo->Size = System::Drawing::Size(290, 90);
			this->lblVehiculo->TabIndex = 7;
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"1.png");
			this->imageList2->Images->SetKeyName(1, L"2.png");
			this->imageList2->Images->SetKeyName(2, L"3.png");
			this->imageList2->Images->SetKeyName(3, L"4.png");
			this->imageList2->Images->SetKeyName(4, L"5.png");
			this->imageList2->Images->SetKeyName(5, L"6.png");
			this->imageList2->Images->SetKeyName(6, L"7.png");
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(106, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Cambiar Vehiculo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmDatosConductor::button1_Click);
			// 
			// textBoxPlaca
			// 
			this->textBoxPlaca->Enabled = false;
			this->textBoxPlaca->Location = System::Drawing::Point(106, 251);
			this->textBoxPlaca->Name = L"textBoxPlaca";
			this->textBoxPlaca->ReadOnly = true;
			this->textBoxPlaca->Size = System::Drawing::Size(158, 20);
			this->textBoxPlaca->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(40, 254);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Placa:";
			// 
			// textBoxModelo
			// 
			this->textBoxModelo->Enabled = false;
			this->textBoxModelo->Location = System::Drawing::Point(106, 212);
			this->textBoxModelo->Name = L"textBoxModelo";
			this->textBoxModelo->ReadOnly = true;
			this->textBoxModelo->Size = System::Drawing::Size(158, 20);
			this->textBoxModelo->TabIndex = 3;
			// 
			// textBoxMarca
			// 
			this->textBoxMarca->Enabled = false;
			this->textBoxMarca->Location = System::Drawing::Point(106, 173);
			this->textBoxMarca->Name = L"textBoxMarca";
			this->textBoxMarca->ReadOnly = true;
			this->textBoxMarca->Size = System::Drawing::Size(158, 20);
			this->textBoxMarca->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(40, 215);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Modelo:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(40, 176);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Marca:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->AsientosDisp);
			this->groupBox1->Controls->Add(this->Asientos);
			this->groupBox1->Controls->Add(this->textBoxLicencia);
			this->groupBox1->Controls->Add(this->textBoxNombre);
			this->groupBox1->Controls->Add(this->lblCalificacion);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(23, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(324, 251);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Conductor";
			// 
			// AsientosDisp
			// 
			this->AsientosDisp->AutoSize = true;
			this->AsientosDisp->Location = System::Drawing::Point(6, 212);
			this->AsientosDisp->Name = L"AsientosDisp";
			this->AsientosDisp->Size = System::Drawing::Size(104, 13);
			this->AsientosDisp->TabIndex = 10;
			this->AsientosDisp->Text = L"Asientos Disponibles";
			this->AsientosDisp->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Asientos
			// 
			this->Asientos->FormattingEnabled = true;
			this->Asientos->Location = System::Drawing::Point(127, 209);
			this->Asientos->Name = L"Asientos";
			this->Asientos->Size = System::Drawing::Size(56, 21);
			this->Asientos->TabIndex = 7;
			// 
			// textBoxLicencia
			// 
			this->textBoxLicencia->Enabled = false;
			this->textBoxLicencia->Location = System::Drawing::Point(126, 131);
			this->textBoxLicencia->Name = L"textBoxLicencia";
			this->textBoxLicencia->ReadOnly = true;
			this->textBoxLicencia->Size = System::Drawing::Size(156, 20);
			this->textBoxLicencia->TabIndex = 8;
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->Enabled = false;
			this->textBoxNombre->Location = System::Drawing::Point(127, 89);
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->ReadOnly = true;
			this->textBoxNombre->Size = System::Drawing::Size(156, 20);
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
			this->lblCalificacion->Click += gcnew System::EventHandler(this, &frmDatosConductor::lblCalificacion_Click);
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 134);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label2->Size = System::Drawing::Size(102, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Numero de Licencia";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Calficación";
			// 
			// NroCta
			// 
			this->NroCta->Location = System::Drawing::Point(85, 30);
			this->NroCta->Name = L"NroCta";
			this->NroCta->Size = System::Drawing::Size(210, 20);
			this->NroCta->TabIndex = 5;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->NroCta);
			this->groupBox3->Location = System::Drawing::Point(23, 281);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(315, 92);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Cuenta Bancaria";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Nro. Cuenta";
			// 
			// frmDatosConductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 432);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmDatosConductor";
			this->Text = L"Datos de conductor";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmDatosConductor::frmDatosConductor_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmDatosConductor::frmDatosConductor_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void LoadImgVehiculo() {
		if (this->objConductor->objVehiculo->Tipo == "Sedan") {
			this->lblVehiculo->ImageIndex = 0;
		}
		else if (this->objConductor->objVehiculo->Tipo == "Coupé") {
			this->lblVehiculo->ImageIndex = 1;
		}
		else if (this->objConductor->objVehiculo->Tipo == "Hatchback") {
			this->lblVehiculo->ImageIndex = 2;
		}
		else if (this->objConductor->objVehiculo->Tipo == "Convertible") {
			this->lblVehiculo->ImageIndex = 3;
		}
		else if (this->objConductor->objVehiculo->Tipo == "Station Wagon") {
			this->lblVehiculo->ImageIndex = 4;
		}
		else if (this->objConductor->objVehiculo->Tipo == "SUV") {
			this->lblVehiculo->ImageIndex = 5;
		}
		else if (this->objConductor->objVehiculo->Tipo == "Arenero") {
			this->lblVehiculo->ImageIndex = 6;
		}
		else {
			this->lblVehiculo->ImageIndex = 0;
		}
	}

	private: void LoadVehiculo(){
		if (this->objConductor->objVehiculo == nullptr) {

			this->textBoxMarca->Text = "NULL";
			this->textBoxModelo->Text = "NULL";
			this->textBoxPlaca->Text = "NULL";
			this->Asientos->Items->Clear();
			LoadImgVehiculo();
		}
		else
		{
			this->textBoxMarca->Text = this->objConductor->objVehiculo->Marca;
			this->textBoxModelo->Text = this->objConductor->objVehiculo->Modelo;
			this->textBoxPlaca->Text = this->objConductor->objVehiculo->Placa;
			LoadImgVehiculo();
			//TODO:NUMERO DE ASIENTOS POR VEHICULO
			this->Asientos->Items->Clear();
			
			for (int i = 0; i < Convert::ToInt16(this->objConductor->objVehiculo->NumeroAsientos)+1; i++) {
				String^ num = Convert::ToString(i);
				this->Asientos->Items->Add(num);
			}
			this->Asientos->Text = this->objConductor->objVehiculo->NumeroAsientos;
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*CAMBIAR VEHICL*/

		frmMisVehiculos^ VentanaMisVehiculos = gcnew frmMisVehiculos(this->objConductor); //aqui debería poderse enviar el conductor
		VentanaMisVehiculos->ShowDialog();
		LoadVehiculo();

	}
private: System::Void frmDatosConductor_Load(System::Object^ sender, System::EventArgs^ e) {
	/*Load*/

	//int UserID = 1;

	//objGestorConductor lee la lista de conductores desde archivo
	this->objGestorConductor->LeerConductoresDesdeArchivo();

	//Busca el conductor con user id
	//this-> objConductor = this->objGestorConductor->BuscarConductorxUserID(3);

	//Muestra en la ventana los datos del conductor
	Calificacion = this->objConductor->CalificacionConductor;

	this->lblCalificacion->ImageIndex = Calificacion*2; //actualiza estrellas basado en calificacion

	this->textBoxNombre->Text= this->objConductor->Nombre;
	this->textBoxLicencia->Text = this->objConductor->NumeroDeLicencia;

	this->NroCta->Text = this->objConductor->CuentaBancaria;
	this->Asientos->Text = Convert::ToString(this->objConductor->AsientosDisponibles);
			
	//this->objConductor->Disponibilidad = this->checkBox1->Text;

	LoadVehiculo();

}
private: System::Void lblCalificacion_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmDatosConductor_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	
	this->objConductor->CuentaBancaria = this->NroCta->Text;
	this->objConductor->AsientosDisponibles = Convert::ToInt16(this->Asientos->Text);
	this->objGestorConductor->EliminarConductorxCodigo(this->objConductor->CodigoDeUsuario);
	this->objGestorConductor->AgregarALista(this->objConductor);
}
};
}
