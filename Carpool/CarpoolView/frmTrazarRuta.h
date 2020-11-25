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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Trazar ruta:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 96);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 253);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(135, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(712, 412);
			this->panel1->TabIndex = 3;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmTrazarRuta::panel1_Paint);
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmTrazarRuta::panel1_MouseDown);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmTrazarRuta::panel1_MouseUp);
			// 
			// frmTrazarRuta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(859, 437);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"frmTrazarRuta";
			this->Text = L"frmTrazarRuta";
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
	this->inicioX = e->X;
	this->inicioY = e->Y;
}
private: System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->finX = e->X;
	this->finY = e->Y;
	figura^ objFigura = gcnew figura(this->inicioX, this->inicioY, this->finX, this->finY, this->tipoFigura, this->objColor);
	this->objGestorFigura->AgregarFigura(objFigura);
	this->panel1->Invalidate();
}
};
}
