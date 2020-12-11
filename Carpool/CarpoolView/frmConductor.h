#pragma once
#include "frmDatosPersonales.h"
#include "frmMisVehiculos.h"
#include "frmDatosConductor.h"
#include "frmMantViajes.h"
#include "frmRegistroConductor.h"
#include "frmReporteGananciaConductor.h"
#include "frmReporteViajesxMesConductor.h"
#include "frmUpdateContacto.h"

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
			//Valores inventados para el conductor
			this->objUsuario = gcnew Usuario();
			this->objUsuario->CodigoDeUsuario = 6;
			this->objUsuario->Nombre = "WALDOW";

			this->objGestorConductor = gcnew GestorConductor();
			this->objConductor = gcnew Conductor();
			this->objGestorUsuario = gcnew GestorUsuario();

		}

		frmConductor(Usuario^ objUsuario)
		{
			InitializeComponent();
			this->objGestorConductor = gcnew GestorConductor();
			this->objConductor = gcnew Conductor();
			this->objUsuario = objUsuario;

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


	private: System::Windows::Forms::ToolStripMenuItem^ datosPersonalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ datosConductorToolStripMenuItem;
	protected:

	private:
		GestorConductor^ objGestorConductor;
		Conductor^ objConductor;
		Usuario^ objUsuario;
		GestorUsuario^ objGestorUsuario;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gananciasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viajesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contactosToolStripMenuItem;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmConductor::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->misDatosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->datosPersonalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->datosConductorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->misVehículosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gananciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viajesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->definirViajeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crearViajeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->misDatosToolStripMenuItem,
					this->misVehículosToolStripMenuItem, this->contactosToolStripMenuItem, this->reportesToolStripMenuItem, this->definirViajeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1075, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &frmConductor::menuStrip1_ItemClicked);
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
			// contactosToolStripMenuItem
			// 
			this->contactosToolStripMenuItem->Name = L"contactosToolStripMenuItem";
			this->contactosToolStripMenuItem->Size = System::Drawing::Size(114, 24);
			this->contactosToolStripMenuItem->Text = L"Mis contactos";
			this->contactosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmConductor::contactosToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->gananciasToolStripMenuItem,
					this->viajesToolStripMenuItem
			});
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// gananciasToolStripMenuItem
			// 
			this->gananciasToolStripMenuItem->Name = L"gananciasToolStripMenuItem";
			this->gananciasToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->gananciasToolStripMenuItem->Text = L"Ganancias";
			this->gananciasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmConductor::gananciasToolStripMenuItem_Click);
			// 
			// viajesToolStripMenuItem
			// 
			this->viajesToolStripMenuItem->Name = L"viajesToolStripMenuItem";
			this->viajesToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->viajesToolStripMenuItem->Text = L"Viajes";
			this->viajesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmConductor::viajesToolStripMenuItem_Click);
			// 
			// definirViajeToolStripMenuItem
			// 
			this->definirViajeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->crearViajeToolStripMenuItem });
			this->definirViajeToolStripMenuItem->ForeColor = System::Drawing::Color::Blue;
			this->definirViajeToolStripMenuItem->Name = L"definirViajeToolStripMenuItem";
			this->definirViajeToolStripMenuItem->Size = System::Drawing::Size(103, 24);
			this->definirViajeToolStripMenuItem->Text = L"Definir viaje";
			// 
			// crearViajeToolStripMenuItem
			// 
			this->crearViajeToolStripMenuItem->Name = L"crearViajeToolStripMenuItem";
			this->crearViajeToolStripMenuItem->Size = System::Drawing::Size(162, 26);
			this->crearViajeToolStripMenuItem->Text = L"Crear viaje";
			this->crearViajeToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmConductor::crearViajeToolStripMenuItem_Click);
			// 
			// frmConductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1075, 567);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmConductor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Conductor";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmConductor::frmConductor_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmConductor::frmConductor_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void datosPersonalesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	frmDatosPersonales^ ventanaDatosPersonales = gcnew frmDatosPersonales(this->objUsuario);
	ventanaDatosPersonales->MdiParent = this;
	ventanaDatosPersonales->Show();
}
private: System::Void frmConductor_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorConductor->EscribirArchivo();
	Application::Exit();
}
private: System::Void misVehículosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	frmMisVehiculos^ ventanaMisVehiculos = gcnew frmMisVehiculos(this->objConductor);
	ventanaMisVehiculos->MdiParent = this;
	ventanaMisVehiculos->Show();
}
private: System::Void datosConductorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmDatosConductor^ ventanaDatosConductor = gcnew frmDatosConductor(this->objGestorConductor, this->objConductor);
	ventanaDatosConductor->MdiParent = this;
	ventanaDatosConductor->Show();
}
private: System::Void crearViajeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantViajes^ ventanaMantViaje = gcnew frmMantViajes(this->objConductor);
	ventanaMantViaje->MdiParent = this;
	ventanaMantViaje->Show();
}
private: System::Void frmConductor_Load(System::Object^ sender, System::EventArgs^ e) {

	this->objGestorConductor->LeerConductoresDesdeArchivo();
	this->objConductor = this->objGestorConductor->BuscarConductorxUserID(this->objUsuario->CodigoDeUsuario);

}
private: System::Void cuentaBancariaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void gananciasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteGananciaConductor^ ventanaReporteGananciaConductor = gcnew frmReporteGananciaConductor(this->objConductor);
	ventanaReporteGananciaConductor->MdiParent = this;
	ventanaReporteGananciaConductor->Show();
}
private: System::Void viajesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteViajesxMesConductor^ ventanafrmReporteViajesXMes = gcnew frmReporteViajesxMesConductor(this->objUsuario);
	ventanafrmReporteViajesXMes->MdiParent = this;
	ventanafrmReporteViajesXMes->Show();
}
private: System::Void contactosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmUpdateContacto^ ventanaUpdateContactos = gcnew frmUpdateContacto(this->objUsuario);
	ventanaUpdateContactos->MdiParent = this;
	ventanaUpdateContactos->Show();
}
};
}
