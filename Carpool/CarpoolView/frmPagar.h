#pragma once
#include "frmPagarTarjeta.h"
#include "frmPagarPayPal.h"


namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPagar
	/// </summary>
	public ref class frmPagar : public System::Windows::Forms::Form
	{
	public:
		frmPagar(int codigoReservar, GestorViaje^ objGestorViaje, Usuario^ objUsuario)
		{
			InitializeComponent();
			
			this->codigoReservar = codigoReservar;
			this->objGestorViaje = objGestorViaje;
			this->objUsuario = objUsuario;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPagar()
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
	private: int codigoReservar;
	private: GestorViaje^ objGestorViaje;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPagar::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Seleccione el medio de pago";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(128, 85);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 57);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Tarjeta";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPagar::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(128, 230);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(220, 59);
			this->button2->TabIndex = 2;
			this->button2->Text = L"PayPal";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPagar::button2_Click);
			// 
			// frmPagar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 388);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"frmPagar";
			this->Text = L"Pagar";
			this->Load += gcnew System::EventHandler(this, &frmPagar::frmPagar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Pagar tarjeta
		frmPagarTarjeta^ ventanaPagarTarjeta = gcnew frmPagarTarjeta(this->codigoReservar, this->objGestorViaje, this->objUsuario);
		ventanaPagarTarjeta->ShowDialog();
		this->Close();

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmPagarPayPal^ ventanaPagarPayPal = gcnew frmPagarPayPal(this->codigoReservar, this->objGestorViaje, this->objUsuario);
		ventanaPagarPayPal->ShowDialog();
		this->Close();
	}
	private: System::Void frmPagar_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}

