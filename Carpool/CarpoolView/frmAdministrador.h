#pragma once
#include "frmBuscarUsuario.h"
#include "frmRevisarViajes.h"

namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmAdministrador
	/// </summary>
	public ref class frmAdministrador : public System::Windows::Forms::Form
	{
	public:
		frmAdministrador(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmAdministrador(GestorUsuario^objGestorUsuario,GestorRuta^objGestorRuta)
		{
			InitializeComponent();
			this->objGestorUsuario = gcnew GestorUsuario();
			this->objGestorRutas = gcnew GestorRuta();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmAdministrador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: GestorUsuario^ objGestorUsuario;
	private: GestorRuta^ objGestorRutas;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Purple;
			this->button3->Location = System::Drawing::Point(106, 291);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(168, 57);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Revisar rutas y horarios";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmAdministrador::button3_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Green;
			this->button2->Location = System::Drawing::Point(106, 186);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 57);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Buscar vehículo";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Blue;
			this->button1->Location = System::Drawing::Point(106, 72);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 57);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Buscar usuario";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAdministrador::button1_Click);
			// 
			// frmAdministrador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 409);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmAdministrador";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Administrador";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmAdministrador::frmAdministrador_FormClosing);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmBuscarUsuario^ ventanaBuscarUsuario = gcnew frmBuscarUsuario(this->objGestorUsuario);
		ventanaBuscarUsuario->ShowDialog();
	}
	private: System::Void frmAdministrador_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		frmRevisarViajes^ ventanaRevisarViajes = gcnew frmRevisarViajes(this->objGestorRutas);
		ventanaRevisarViajes->ShowDialog();
	}
};
}
