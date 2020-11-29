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
	/// Resumen de frmTrazarRuta
	/// </summary>
	public ref class frmTrazarRuta : public System::Windows::Forms::Form
	{
	public:
		frmTrazarRuta(void)
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

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmTrazarRuta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
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
	private: System::Windows::Forms::Label^ label2;
		   //private: List<Coordenadas^> listaCoordenadas;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmTrazarRuta::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 16);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Inserte los puntos que ";
			this->label1->Click += gcnew System::EventHandler(this, &frmTrazarRuta::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 118);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmTrazarRuta::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(21, 422);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmTrazarRuta::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(180, 16);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(949, 507);
			this->panel1->TabIndex = 3;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmTrazarRuta::panel1_Paint);
			this->panel1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmTrazarRuta::panel1_MouseClick);
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmTrazarRuta::panel1_MouseDown);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmTrazarRuta::panel1_MouseUp);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 32);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"conforman la ruta:";
			this->label2->Click += gcnew System::EventHandler(this, &frmTrazarRuta::label2_Click);
			// 
			// frmTrazarRuta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1145, 538);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"frmTrazarRuta";
			this->Text = L"Trazar ruta";
			this->Load += gcnew System::EventHandler(this, &frmTrazarRuta::frmTrazarRuta_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmTrazarRuta_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ objGraphics = e->Graphics;

		for (int i = 0; i < this->objGestorFigura->obtenerCantidadFiguras(); i++) {

			figura^ objFigura = this->objGestorFigura->obtenerFiguraxIndice(i);
			Pen^ objLapiz = gcnew Pen(objFigura->objColor);
			int ancho = objFigura->finX - objFigura->inicioX;
			int alto = objFigura->finY - objFigura->inicioY;

			objGraphics->DrawLine(objLapiz, objFigura->inicioX, objFigura->inicioY, objFigura->finX, objFigura->finY);
		}



	}
private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//this->inicioX = e->X;
	//this->inicioY = e->Y;

	

}
private: System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//this->finX = e->X;
	//this->finY = e->Y;
	//figura^ objFigura = gcnew figura(this->inicioX, this->inicioY, this->finX, this->finY, this->tipoFigura, this->objColor);
	//this->objGestorFigura->AgregarFigura(objFigura);
	//this->panel1->Invalidate();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	if (flagPrimeraLinea == 1) {
		this->inicioX = e->X;
		this->inicioY = e->Y;
		flagPrimeraLinea = 0;
	}
	else {
		this->finX = e->X;
		this->finY = e->Y;

		figura^ objFigura = gcnew figura(this->inicioX, this->inicioY, this->finX, this->finY, this->tipoFigura, this->objColor);
		this->objGestorFigura->AgregarFigura(objFigura);
		this->panel1->Invalidate();

		this->inicioX = this->finX;
		this->inicioY = this->finY; //Siguiente línea inicia donde acabó la anterior

	}

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
