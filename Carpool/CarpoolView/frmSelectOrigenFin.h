#pragma once
#include "frmReservarViaje.h"


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
	/// Resumen de frmSelectOrigenFin
	/// </summary>
	public ref class frmSelectOrigenFin : public System::Windows::Forms::Form
	{
	public:
		frmSelectOrigenFin(void)
		{
			InitializeComponent();
			this->objGestorFigura = gcnew GestorFigura();
			this->tipoFigura = 1; //Solo usamos lineas
			this->objColor = Color::Blue;
			this->flagPrimeraLinea = 1; //iniciamos con el 1er click
			this->listaFiguras = gcnew List<figura^>();
			this->listaFiguras->Clear(); //la lista empieza en blanco
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmSelectOrigenFin(Usuario^ objUsuario)
		{
			InitializeComponent();
			this->objUsuario = objUsuario;
			this->objGestorFigura = gcnew GestorFigura();
			this->tipoFigura = 1; //Solo usamos lineas
			this->objColor = Color::Blue;
			this->flagPrimeraLinea = 1; //iniciamos con el 1er click
			this->listaFiguras = gcnew List<figura^>();
			this->listaFiguras->Clear(); //la lista empieza en blanco
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmSelectOrigenFin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: GestorFigura^ objGestorFigura;
	private: Color objColor;
	private: int tipoFigura;
	private: int inicioX;
	private: int inicioY;
	private: int finX;
	private: int finY;
	private: int puntoX;
	private: int puntoY;
	private: int flagPrimeraLinea;
	private: List<figura^>^ listaFiguras;
	private: Usuario^ objUsuario;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmSelectOrigenFin::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(192, 15);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(949, 507);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmSelectOrigenFin::panel1_Paint);
			this->panel1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmSelectOrigenFin::panel1_MouseClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 16);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Por vafor seleeccione";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 37);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"origen y fin:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(17, 96);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmSelectOrigenFin::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(17, 292);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmSelectOrigenFin::button2_Click);
			// 
			// frmSelectOrigenFin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1164, 539);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"frmSelectOrigenFin";
			this->Text = L"Seleccionar Origen Fin";
			this->Load += gcnew System::EventHandler(this, &frmSelectOrigenFin::frmSelectOrigenFin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmSelectOrigenFin_Load(System::Object^ sender, System::EventArgs^ e) {




	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	Graphics^ objGraphics = e->Graphics;

	for (int i = 0; i < this->objGestorFigura->obtenerCantidadFiguras(); i++) {

		figura^ objFigura = this->objGestorFigura->obtenerFiguraxIndice(i);
		Pen^ objLapiz = gcnew Pen(objFigura->objColor);
		int ancho = objFigura->finX - objFigura->inicioX;
		int alto = objFigura->finY - objFigura->inicioY;

		//objGraphics->DrawLine(objLapiz, objFigura->inicioX, objFigura->inicioY, objFigura->finX, objFigura->finY);
		objGraphics->DrawRectangle(objLapiz, objFigura->inicioX - 10, objFigura->inicioY - 10,20,20);

	}



}
private: System::Void panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {


	if (flagPrimeraLinea == 1) {
		this->inicioX = e->X;
		this->inicioY = e->Y;
		flagPrimeraLinea = 0;
		figura^ objFigura = gcnew figura(this->inicioX, this->inicioY, this->finX, this->finY, this->tipoFigura, this->objColor);
		this->objGestorFigura->AgregarFigura(objFigura);
		this->panel1->Invalidate();
	}
	else if (flagPrimeraLinea==0){
		this->inicioX = e->X;
		this->inicioY = e->Y;

		figura^ objFigura = gcnew figura(this->inicioX, this->inicioY, this->finX, this->finY, this->tipoFigura, this->objColor);
		this->objGestorFigura->AgregarFigura(objFigura);
		this->panel1->Invalidate();
		flagPrimeraLinea = 2; //solo lo pongo para que acepte 2 puntos 
		//this->inicioX = this->finX;
		//this->inicioY = this->finY; //Siguiente línea inicia donde acabó la anterior

	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Boton Buscar

	frmReservarViaje^ ventanaReservarViaje = gcnew frmReservarViaje(this->objUsuario);
	ventanaReservarViaje->ShowDialog();
	

	this->Close();
}
};
}
