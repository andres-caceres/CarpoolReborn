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
	/// Resumen de frmVerRuta
	/// </summary>
	public ref class frmVerRuta : public System::Windows::Forms::Form
	{
	public:
		frmVerRuta(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmVerRuta(int codigoViaje)
		{
			InitializeComponent();
			this->objGestorFigura = gcnew GestorFigura();
			this->tipoFigura = 1; //Solo usamos lineas
			this->objColor = Color::Blue;
			this->flagPrimeraLinea = 1; //iniciamos con el 1er click
			this->listaFiguras = gcnew List<figura^>();
			this->listaFiguras->Clear(); //la lista empieza en blanco
			this->objGestorRuta = gcnew GestorRuta();
			//this->objGestorCoordenadas = gcnew GestorCoordenadas();
			this->objGestorCoordenadas = gcnew GestorCoordenadas();
			this->numeroPuntosMaximo = 50;
			this->contadorPuntos = 0;
			this->codigoViaje = codigoViaje;
			this->objListaCoordenadas = gcnew ListaCoordenadas();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmVerRuta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button1;
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
	private: GestorRuta^ objGestorRuta;
	private: GestorCoordenadas^ objGestorCoordenadas;
	private: int numeroPuntosMaximo;
	private: int contadorPuntos;
	private: Coordenadas objCoordenadasProvisionales;
	private: int codigoViaje;
	private: ListaCoordenadas^ objListaCoordenadas;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmVerRuta::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(139, 15);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(949, 507);
			this->panel1->TabIndex = 5;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmVerRuta::panel1_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 217);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVerRuta::button1_Click);
			// 
			// frmVerRuta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1112, 545);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"frmVerRuta";
			this->Text = L"Ver ruta";
			this->Load += gcnew System::EventHandler(this, &frmVerRuta::frmVerRuta_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmVerRuta::frmVerRuta_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmVerRuta_Load(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorCoordenadas->leerListaDeListasDeCoordenadasFromTxt();
		
		this->objListaCoordenadas = this->objGestorCoordenadas->obtenerListaCoordenadasConCodigo(this->codigoViaje);


		for (int i = 0; i < 25; i++) {
			if (flagPrimeraLinea == 1) {

				this->inicioX = Convert::ToInt32(this->objListaCoordenadas->objListaCoordenadas[i]->posicionX);
				this->inicioY = Convert::ToInt32(this->objListaCoordenadas->objListaCoordenadas[i]->posicionY);
				flagPrimeraLinea = 0;
			}
			else{

				this->finX = Convert::ToInt32(this->objListaCoordenadas->objListaCoordenadas[i]->posicionX);
				this->finY= Convert::ToInt32(this->objListaCoordenadas->objListaCoordenadas[i]->posicionY);

				figura^ objFigura = gcnew figura(this->inicioX, this->inicioY, this->finX, this->finY, this->tipoFigura, this->objColor);
				this->objGestorFigura->AgregarFigura(objFigura);
				this->panel1->Invalidate();

				this->inicioX = this->finX;
				this->inicioY = this->finY;
			}
			
		
		}


	}
	private: System::Void frmVerRuta_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		
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
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
