#pragma once
#include "frmDatosPersonales.h"
#include "frmUpdateContacto.h"
#include "frmReservaViaje.h"
#include "frmDatosPasajero.h"

namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPasajero
	/// </summary>
	public ref class frmPasajero : public System::Windows::Forms::Form
	{
	public:
		frmPasajero(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPasajero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ misDatosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ misViajesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ misContactosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ elegirViajeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarViajesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rutasYHorariosFavoritosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ datosPersonalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ datosPasajeroToolStripMenuItem;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->misDatosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->datosPersonalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->datosPasajeroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->misViajesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->misContactosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->elegirViajeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarViajesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rutasYHorariosFavoritosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->misDatosToolStripMenuItem,
					this->misViajesToolStripMenuItem, this->misContactosToolStripMenuItem, this->elegirViajeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(734, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// misDatosToolStripMenuItem
			// 
			this->misDatosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->datosPersonalesToolStripMenuItem,
					this->datosPasajeroToolStripMenuItem
			});
			this->misDatosToolStripMenuItem->Name = L"misDatosToolStripMenuItem";
			this->misDatosToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->misDatosToolStripMenuItem->Text = L"Mis datos";
			// 
			// datosPersonalesToolStripMenuItem
			// 
			this->datosPersonalesToolStripMenuItem->Name = L"datosPersonalesToolStripMenuItem";
			this->datosPersonalesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->datosPersonalesToolStripMenuItem->Text = L"Datos personales";
			this->datosPersonalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPasajero::datosPersonalesToolStripMenuItem_Click);
			// 
			// datosPasajeroToolStripMenuItem
			// 
			this->datosPasajeroToolStripMenuItem->Name = L"datosPasajeroToolStripMenuItem";
			this->datosPasajeroToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->datosPasajeroToolStripMenuItem->Text = L"Datos pasajero";
			this->datosPasajeroToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPasajero::datosPasajeroToolStripMenuItem_Click);
			// 
			// misViajesToolStripMenuItem
			// 
			this->misViajesToolStripMenuItem->Name = L"misViajesToolStripMenuItem";
			this->misViajesToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->misViajesToolStripMenuItem->Text = L"Mis viajes";
			// 
			// misContactosToolStripMenuItem
			// 
			this->misContactosToolStripMenuItem->Name = L"misContactosToolStripMenuItem";
			this->misContactosToolStripMenuItem->Size = System::Drawing::Size(93, 20);
			this->misContactosToolStripMenuItem->Text = L"Mis contactos";
			this->misContactosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPasajero::misContactosToolStripMenuItem_Click);
			// 
			// elegirViajeToolStripMenuItem
			// 
			this->elegirViajeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->buscarViajesToolStripMenuItem,
					this->rutasYHorariosFavoritosToolStripMenuItem
			});
			this->elegirViajeToolStripMenuItem->ForeColor = System::Drawing::Color::Red;
			this->elegirViajeToolStripMenuItem->Name = L"elegirViajeToolStripMenuItem";
			this->elegirViajeToolStripMenuItem->Size = System::Drawing::Size(76, 20);
			this->elegirViajeToolStripMenuItem->Text = L"Elegir Viaje";
			// 
			// buscarViajesToolStripMenuItem
			// 
			this->buscarViajesToolStripMenuItem->Name = L"buscarViajesToolStripMenuItem";
			this->buscarViajesToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->buscarViajesToolStripMenuItem->Text = L"Buscar Viajes";
			this->buscarViajesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPasajero::buscarViajesToolStripMenuItem_Click);
			// 
			// rutasYHorariosFavoritosToolStripMenuItem
			// 
			this->rutasYHorariosFavoritosToolStripMenuItem->Name = L"rutasYHorariosFavoritosToolStripMenuItem";
			this->rutasYHorariosFavoritosToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->rutasYHorariosFavoritosToolStripMenuItem->Text = L"Rutas y horarios favoritos";
			// 
			// frmPasajero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 535);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmPasajero";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Pasajero";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPasajero::frmPasajero_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void datosPersonalesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmDatosPersonales^ ventanaDatosPersonales = gcnew frmDatosPersonales();
		ventanaDatosPersonales->MdiParent = this;
		ventanaDatosPersonales->Show();
	}
private: System::Void frmPasajero_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
private: System::Void misContactosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmUpdateContacto^ ventanaUpdateContactos = gcnew frmUpdateContacto();
	ventanaUpdateContactos->MdiParent = this;
	ventanaUpdateContactos->Show();
}
private: System::Void buscarViajesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReservaViaje^ ventanaReservaViaje = gcnew frmReservaViaje();
	ventanaReservaViaje->MdiParent = this;
	ventanaReservaViaje->Show();
}
private: System::Void datosPasajeroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmDatosPasajero^ ventanaDatosPasajero = gcnew frmDatosPasajero(); //TODO: debe pasarle el gestorPasajero
	ventanaDatosPasajero->MdiParent = this;
	ventanaDatosPasajero->Show();
}
};
}
