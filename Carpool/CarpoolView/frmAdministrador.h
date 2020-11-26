#pragma once
#include "frmBuscarUsuario.h"
#include "frmRevisarViajes.h"
#include "frmValidarConductor.h"

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

	protected:


	private: GestorUsuario^ objGestorUsuario;
	private: GestorRuta^ objGestorRutas;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarUsuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarVehículosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ revisarRutasYHorariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoConductorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ conductorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vehiculosToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmAdministrador::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->buscarUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoConductorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->conductorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vehiculosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarVehículosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->revisarRutasYHorariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->buscarUsuarioToolStripMenuItem,
					this->mantenimientoConductorToolStripMenuItem, this->buscarVehículosToolStripMenuItem, this->revisarRutasYHorariosToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1266, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// buscarUsuarioToolStripMenuItem
			// 
			this->buscarUsuarioToolStripMenuItem->Name = L"buscarUsuarioToolStripMenuItem";
			this->buscarUsuarioToolStripMenuItem->Size = System::Drawing::Size(176, 24);
			this->buscarUsuarioToolStripMenuItem->Text = L"Mantenimiento usuario";
			this->buscarUsuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmAdministrador::buscarUsuarioToolStripMenuItem_Click);
			// 
			// mantenimientoConductorToolStripMenuItem
			// 
			this->mantenimientoConductorToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->conductorToolStripMenuItem,
					this->vehiculosToolStripMenuItem
			});
			this->mantenimientoConductorToolStripMenuItem->Name = L"mantenimientoConductorToolStripMenuItem";
			this->mantenimientoConductorToolStripMenuItem->Size = System::Drawing::Size(140, 24);
			this->mantenimientoConductorToolStripMenuItem->Text = L"Validar conductor";
			this->mantenimientoConductorToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmAdministrador::mantenimientoConductorToolStripMenuItem_Click);
			// 
			// conductorToolStripMenuItem
			// 
			this->conductorToolStripMenuItem->Name = L"conductorToolStripMenuItem";
			this->conductorToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->conductorToolStripMenuItem->Text = L"Conductores";
			this->conductorToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmAdministrador::conductorToolStripMenuItem_Click);
			// 
			// vehiculosToolStripMenuItem
			// 
			this->vehiculosToolStripMenuItem->Name = L"vehiculosToolStripMenuItem";
			this->vehiculosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->vehiculosToolStripMenuItem->Text = L"Vehiculos";
			this->vehiculosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmAdministrador::vehiculosToolStripMenuItem_Click);
			// 
			// buscarVehículosToolStripMenuItem
			// 
			this->buscarVehículosToolStripMenuItem->Name = L"buscarVehículosToolStripMenuItem";
			this->buscarVehículosToolStripMenuItem->Size = System::Drawing::Size(131, 24);
			this->buscarVehículosToolStripMenuItem->Text = L"Buscar vehículos";
			// 
			// revisarRutasYHorariosToolStripMenuItem
			// 
			this->revisarRutasYHorariosToolStripMenuItem->Name = L"revisarRutasYHorariosToolStripMenuItem";
			this->revisarRutasYHorariosToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->revisarRutasYHorariosToolStripMenuItem->Text = L"Revisar rutas y horarios";
			this->revisarRutasYHorariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmAdministrador::revisarRutasYHorariosToolStripMenuItem_Click);
			// 
			// frmAdministrador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1266, 554);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmAdministrador";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Administrador";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmAdministrador::frmAdministrador_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmBuscarUsuario^ ventanaBuscarUsuario = gcnew frmBuscarUsuario(this->objGestorUsuario);
		ventanaBuscarUsuario->ShowDialog();
	}
	
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		frmRevisarViajes^ ventanaRevisarViajes = gcnew frmRevisarViajes(this->objGestorRutas);
		ventanaRevisarViajes->ShowDialog();
	}

	//Parte que sirve
	private: System::Void frmAdministrador_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit();
	}


private: System::Void buscarUsuarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmBuscarUsuario^ ventanaBuscarUsuario = gcnew frmBuscarUsuario(this->objGestorUsuario);
	ventanaBuscarUsuario->MdiParent = this;
	ventanaBuscarUsuario->Show();
}
private: System::Void revisarRutasYHorariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmRevisarViajes^ ventanaRevisarViajes = gcnew frmRevisarViajes(this->objGestorRutas);
	ventanaRevisarViajes->MdiParent = this;
	ventanaRevisarViajes->Show();
}
private: System::Void mantenimientoConductorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void conductorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	/*VALIDAR CONDUCTOR*/
	frmValidarConductor^ ventanaValidarConductor = gcnew frmValidarConductor();
	ventanaValidarConductor->MdiParent = this;
	ventanaValidarConductor->Show();
}
private: System::Void vehiculosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	/*VALIDAR VEHICULOS*/

}
};
}
