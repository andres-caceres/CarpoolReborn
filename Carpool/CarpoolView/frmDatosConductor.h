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
			this->objGestorVehiculo = gcnew GestorVehiculo();
			this->objVehiculoDefault = gcnew Vehiculo(); //#profe
			Calificacion = 0;
			//
		}
		frmDatosConductor(GestorConductor^ objGestorConductor)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			this->objGestorConductor = objGestorConductor;
			this->objConductor = gcnew Conductor();
			this->objGestorVehiculo = gcnew GestorVehiculo();
			this->objVehiculoDefault = gcnew Vehiculo(); //#profe
			Calificacion = 0;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxPlaca = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxModelo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMarca = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxLicencia = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->lblCalificacion = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBoxPlaca);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBoxModelo);
			this->groupBox2->Controls->Add(this->textBoxMarca);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(396, 30);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(372, 402);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Vehiculo Actual";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(120, 354);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 28);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Cambiar Vehiculo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmDatosConductor::button1_Click);
			// 
			// textBoxPlaca
			// 
			this->textBoxPlaca->Enabled = false;
			this->textBoxPlaca->Location = System::Drawing::Point(141, 309);
			this->textBoxPlaca->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPlaca->Name = L"textBoxPlaca";
			this->textBoxPlaca->ReadOnly = true;
			this->textBoxPlaca->Size = System::Drawing::Size(155, 22);
			this->textBoxPlaca->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(53, 313);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 17);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Placa:";
			// 
			// textBoxModelo
			// 
			this->textBoxModelo->Enabled = false;
			this->textBoxModelo->Location = System::Drawing::Point(141, 261);
			this->textBoxModelo->Margin = System::Windows::Forms::Padding(4);
			this->textBoxModelo->Name = L"textBoxModelo";
			this->textBoxModelo->ReadOnly = true;
			this->textBoxModelo->Size = System::Drawing::Size(155, 22);
			this->textBoxModelo->TabIndex = 3;
			// 
			// textBoxMarca
			// 
			this->textBoxMarca->Enabled = false;
			this->textBoxMarca->Location = System::Drawing::Point(141, 213);
			this->textBoxMarca->Margin = System::Windows::Forms::Padding(4);
			this->textBoxMarca->Name = L"textBoxMarca";
			this->textBoxMarca->ReadOnly = true;
			this->textBoxMarca->Size = System::Drawing::Size(155, 22);
			this->textBoxMarca->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(53, 265);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 17);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Modelo:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(53, 217);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 17);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Marca:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxLicencia);
			this->groupBox1->Controls->Add(this->textBoxNombre);
			this->groupBox1->Controls->Add(this->lblCalificacion);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(31, 30);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(357, 402);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Conductor";
			// 
			// textBoxLicencia
			// 
			this->textBoxLicencia->Enabled = false;
			this->textBoxLicencia->Location = System::Drawing::Point(156, 161);
			this->textBoxLicencia->Margin = System::Windows::Forms::Padding(4);
			this->textBoxLicencia->Name = L"textBoxLicencia";
			this->textBoxLicencia->ReadOnly = true;
			this->textBoxLicencia->Size = System::Drawing::Size(181, 22);
			this->textBoxLicencia->TabIndex = 8;
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->Enabled = false;
			this->textBoxNombre->Location = System::Drawing::Point(156, 110);
			this->textBoxNombre->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->ReadOnly = true;
			this->textBoxNombre->Size = System::Drawing::Size(181, 22);
			this->textBoxNombre->TabIndex = 7;
			// 
			// lblCalificacion
			// 
			this->lblCalificacion->ImageIndex = 7;
			this->lblCalificacion->ImageList = this->imageList1;
			this->lblCalificacion->Location = System::Drawing::Point(153, 37);
			this->lblCalificacion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCalificacion->Name = L"lblCalificacion";
			this->lblCalificacion->Size = System::Drawing::Size(171, 39);
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
			this->label3->Location = System::Drawing::Point(8, 113);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 165);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label2->Size = System::Drawing::Size(134, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Numero de Licencia";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 37);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Calficación";
			// 
			// frmDatosConductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 465);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmDatosConductor";
			this->Text = L"Datos de conductor";
			this->Load += gcnew System::EventHandler(this, &frmDatosConductor::frmDatosConductor_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*CAMBIAR VEHICL*/

		frmMisVehiculos^ VentanaMisVehiculos = gcnew frmMisVehiculos(); //aqui debería poderse enviar el conductor
		VentanaMisVehiculos->ShowDialog();
	}
private: System::Void frmDatosConductor_Load(System::Object^ sender, System::EventArgs^ e) {
	/*Load*/

	//int UserID = 1;

	//objGestorConductor lee la lista de conductores desde archivo
	//this->objGestorConductor->LeerConductoresDesdeArchivo();

	//Busca el conductor con user id
	//this-> objConductor = this->objGestorConductor->BuscarConductorxUserID(3);

	//Muestra en la ventana los datos del conductor
	Calificacion = this->objConductor->CalificacionConductor;

	this->lblCalificacion->ImageIndex = Calificacion*2; //actualiza estrellas basado en calificacion

	this->textBoxNombre->Text= this->objConductor->Nombre;
	this->textBoxLicencia->Text = this->objConductor->NumeroDeLicencia;


	if (this->objConductor->objVehiculo == nullptr) {

		this->textBoxMarca->Text = "NULL";
		this->textBoxModelo->Text = "NULL";
		this->textBoxPlaca->Text = "NULL";		
	}
	else
	{
		this->textBoxMarca->Text = this->objConductor->objVehiculo->Marca;
		this->textBoxModelo->Text = this->objConductor->objVehiculo->Modelo;
		this->textBoxPlaca->Text = this->objConductor->objVehiculo->Placa;
	}

}
private: System::Void lblCalificacion_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
