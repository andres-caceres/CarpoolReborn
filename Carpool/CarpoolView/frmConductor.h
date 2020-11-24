#pragma once
#include "frmDatosPersonales.h"
#include "frmMisVehiculos.h"
#include "frmDatosConductor.h"
#include "frmMantViaje.h"
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
	/// Resumen de frmConductor
	/// </summary>
	public ref class frmConductor : public System::Windows::Forms::Form
	{
	public:
		frmConductor(void)
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
		~frmConductor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ misDatosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ misVehículosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ definirViajeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ crearViajeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viajesFavoritosToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ datosPersonalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ datosConductorToolStripMenuItem;
	protected:

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
			this->datosConductorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->misVehículosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->definirViajeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crearViajeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viajesFavoritosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->misDatosToolStripMenuItem,
					this->misVehículosToolStripMenuItem, this->definirViajeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(968, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// misDatosToolStripMenuItem
			// 
			this->misDatosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->datosPersonalesToolStripMenuItem,
					this->datosConductorToolStripMenuItem
			});
			this->misDatosToolStripMenuItem->Name = L"misDatosToolStripMenuItem";
			this->misDatosToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->misDatosToolStripMenuItem->Text = L"Mis datos";
			// 
			// datosPersonalesToolStripMenuItem
			// 
			this->datosPersonalesToolStripMenuItem->Name = L"datosPersonalesToolStripMenuItem";
			this->datosPersonalesToolStripMenuItem->Size = System::Drawing::Size(206, 26);
			this->datosPersonalesToolStripMenuItem->Text = L"Datos personales";
			this->datosPersonalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmConductor::datosPersonalesToolStripMenuItem_Click);
			// 
			// datosConductorToolStripMenuItem
			// 
			this->datosConductorToolStripMenuItem->Name = L"datosConductorToolStripMenuItem";
			this->datosConductorToolStripMenuItem->Size = System::Drawing::Size(206, 26);
			this->datosConductorToolStripMenuItem->Text = L"Datos conductor";
			this->datosConductorToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmConductor::datosConductorToolStripMenuItem_Click);
			// 
			// misVehículosToolStripMenuItem
			// 
			this->misVehículosToolStripMenuItem->Name = L"misVehículosToolStripMenuItem";
			this->misVehículosToolStripMenuItem->Size = System::Drawing::Size(111, 24);
			this->misVehículosToolStripMenuItem->Text = L"Mis vehículos";
			this->misVehículosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmConductor::misVehículosToolStripMenuItem_Click);
			// 
			// definirViajeToolStripMenuItem
			// 
			this->definirViajeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->crearViajeToolStripMenuItem,
					this->viajesFavoritosToolStripMenuItem
			});
			this->definirViajeToolStripMenuItem->ForeColor = System::Drawing::Color::Blue;
			this->definirViajeToolStripMenuItem->Name = L"definirViajeToolStripMenuItem";
			this->definirViajeToolStripMenuItem->Size = System::Drawing::Size(103, 24);
			this->definirViajeToolStripMenuItem->Text = L"Definir viaje";
			// 
			// crearViajeToolStripMenuItem
			// 
			this->crearViajeToolStripMenuItem->Name = L"crearViajeToolStripMenuItem";
			this->crearViajeToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->crearViajeToolStripMenuItem->Text = L"Crear viaje";
			this->crearViajeToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmConductor::crearViajeToolStripMenuItem_Click);
			// 
			// viajesFavoritosToolStripMenuItem
			// 
			this->viajesFavoritosToolStripMenuItem->Name = L"viajesFavoritosToolStripMenuItem";
			this->viajesFavoritosToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->viajesFavoritosToolStripMenuItem->Text = L"Viajes favoritos";
			// 
			// frmConductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(968, 466);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmConductor";
			this->Text = L"Conductor";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmConductor::frmConductor_FormClosing);
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
private: System::Void frmConductor_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
private: System::Void misVehículosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMisVehiculos^ ventanaMisVehiculos = gcnew frmMisVehiculos();
	ventanaMisVehiculos->MdiParent = this;
	ventanaMisVehiculos->Show();
}
private: System::Void datosConductorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmDatosConductor^ ventanaDatosConductor = gcnew frmDatosConductor();
	ventanaDatosConductor->MdiParent = this;
	ventanaDatosConductor->Show();
}
private: System::Void crearViajeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantViaje^ ventanaMantViaje = gcnew frmMantViaje();
	ventanaMantViaje->MdiParent = this;
	ventanaMantViaje->Show();

}
};
}
