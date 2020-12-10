#pragma once
#include "frmDatosPersonales.h"
#include "frmUpdateContacto.h"
//#include "frmReservaViaje.h"
#include "frmDatosPasajero.h"
#include "frmSelectOrigenFin.h"
#include "frmTarjeta.h"
#include "frmPaypal.h"
#include "frmReporteViajesXMes.h"

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

		frmPasajero(Usuario^ objUsuario)
		{
			InitializeComponent();
			this->objUsuario = objUsuario;
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
	private: Usuario^ objUsuario;
	private: System::Windows::Forms::ToolStripMenuItem^ metodosDePagoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tarjetaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paypalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viajesPorMesToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPasajero::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->misDatosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->datosPersonalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->datosPasajeroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->misViajesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->misContactosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->metodosDePagoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tarjetaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paypalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->elegirViajeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarViajesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rutasYHorariosFavoritosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viajesPorMesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->misDatosToolStripMenuItem,
					this->misViajesToolStripMenuItem, this->misContactosToolStripMenuItem, this->metodosDePagoToolStripMenuItem, this->reporteToolStripMenuItem,
					this->elegirViajeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(979, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &frmPasajero::menuStrip1_ItemClicked);
			// 
			// misDatosToolStripMenuItem
			// 
			this->misDatosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->datosPersonalesToolStripMenuItem,
					this->datosPasajeroToolStripMenuItem
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
			this->datosPersonalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPasajero::datosPersonalesToolStripMenuItem_Click);
			// 
			// datosPasajeroToolStripMenuItem
			// 
			this->datosPasajeroToolStripMenuItem->Name = L"datosPasajeroToolStripMenuItem";
			this->datosPasajeroToolStripMenuItem->Size = System::Drawing::Size(206, 26);
			this->datosPasajeroToolStripMenuItem->Text = L"Datos pasajero";
			this->datosPasajeroToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPasajero::datosPasajeroToolStripMenuItem_Click);
			// 
			// misViajesToolStripMenuItem
			// 
			this->misViajesToolStripMenuItem->Name = L"misViajesToolStripMenuItem";
			this->misViajesToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->misViajesToolStripMenuItem->Text = L"Mis viajes";
			// 
			// misContactosToolStripMenuItem
			// 
			this->misContactosToolStripMenuItem->Name = L"misContactosToolStripMenuItem";
			this->misContactosToolStripMenuItem->Size = System::Drawing::Size(114, 24);
			this->misContactosToolStripMenuItem->Text = L"Mis contactos";
			this->misContactosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPasajero::misContactosToolStripMenuItem_Click);
			// 
			// metodosDePagoToolStripMenuItem
			// 
			this->metodosDePagoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tarjetaToolStripMenuItem,
					this->paypalToolStripMenuItem
			});
			this->metodosDePagoToolStripMenuItem->Name = L"metodosDePagoToolStripMenuItem";
			this->metodosDePagoToolStripMenuItem->Size = System::Drawing::Size(142, 24);
			this->metodosDePagoToolStripMenuItem->Text = L"Metodos de pago";
			// 
			// tarjetaToolStripMenuItem
			// 
			this->tarjetaToolStripMenuItem->Name = L"tarjetaToolStripMenuItem";
			this->tarjetaToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->tarjetaToolStripMenuItem->Text = L"Tarjeta";
			this->tarjetaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPasajero::tarjetaToolStripMenuItem_Click);
			// 
			// paypalToolStripMenuItem
			// 
			this->paypalToolStripMenuItem->Name = L"paypalToolStripMenuItem";
			this->paypalToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->paypalToolStripMenuItem->Text = L"Paypal";
			this->paypalToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPasajero::paypalToolStripMenuItem_Click);
			// 
			// elegirViajeToolStripMenuItem
			// 
			this->elegirViajeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->buscarViajesToolStripMenuItem,
					this->rutasYHorariosFavoritosToolStripMenuItem
			});
			this->elegirViajeToolStripMenuItem->ForeColor = System::Drawing::Color::Red;
			this->elegirViajeToolStripMenuItem->Name = L"elegirViajeToolStripMenuItem";
			this->elegirViajeToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->elegirViajeToolStripMenuItem->Text = L"Elegir Viaje";
			this->elegirViajeToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPasajero::elegirViajeToolStripMenuItem_Click);
			// 
			// buscarViajesToolStripMenuItem
			// 
			this->buscarViajesToolStripMenuItem->Name = L"buscarViajesToolStripMenuItem";
			this->buscarViajesToolStripMenuItem->Size = System::Drawing::Size(259, 26);
			this->buscarViajesToolStripMenuItem->Text = L"Buscar Viajes";
			this->buscarViajesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPasajero::buscarViajesToolStripMenuItem_Click);
			// 
			// rutasYHorariosFavoritosToolStripMenuItem
			// 
			this->rutasYHorariosFavoritosToolStripMenuItem->Name = L"rutasYHorariosFavoritosToolStripMenuItem";
			this->rutasYHorariosFavoritosToolStripMenuItem->Size = System::Drawing::Size(259, 26);
			this->rutasYHorariosFavoritosToolStripMenuItem->Text = L"Rutas y horarios favoritos";
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->viajesPorMesToolStripMenuItem });
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// viajesPorMesToolStripMenuItem
			// 
			this->viajesPorMesToolStripMenuItem->Name = L"viajesPorMesToolStripMenuItem";
			this->viajesPorMesToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->viajesPorMesToolStripMenuItem->Text = L"Viajes por mes";
			this->viajesPorMesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPasajero::viajesPorMesToolStripMenuItem_Click);
			// 
			// frmPasajero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(979, 658);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmPasajero";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Pasajero";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPasajero::frmPasajero_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmPasajero::frmPasajero_Load);
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
private: System::Void frmPasajero_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
private: System::Void misContactosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmUpdateContacto^ ventanaUpdateContactos = gcnew frmUpdateContacto(this->objUsuario);
	ventanaUpdateContactos->MdiParent = this;
	ventanaUpdateContactos->Show();
}
private: System::Void buscarViajesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//frmReservaViaje^ ventanaReservaViaje = gcnew frmReservaViaje();
	//ventanaReservaViaje->MdiParent = this;
	//ventanaReservaViaje->Show();

	//

	/*frmSelectOrigenFin^ ventanaSelectOrigenFin = gcnew frmSelectOrigenFin(this->objUsuario);
	ventanaSelectOrigenFin->ShowDialog();*/

	frmReservarViaje^ ventanaReservarViaje = gcnew frmReservarViaje(this->objUsuario);
	ventanaReservarViaje->ShowDialog();
	


}
private: System::Void datosPasajeroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmDatosPasajero^ ventanaDatosPasajero = gcnew frmDatosPasajero(this->objUsuario); //TODO: debe pasarle el gestorPasajero
	ventanaDatosPasajero->MdiParent = this;
	ventanaDatosPasajero->Show();
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void tarjetaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmTarjeta^ ventanaTarjeta = gcnew frmTarjeta(this->objUsuario);
	ventanaTarjeta->MdiParent = this;
	ventanaTarjeta->Show();
}
private: System::Void paypalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmPaypal^ ventanaPaypal = gcnew frmPaypal(this->objUsuario);
	ventanaPaypal->MdiParent = this;
	ventanaPaypal->Show();
}
private: System::Void elegirViajeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmPasajero_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void viajesPorMesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteViajesXMes^ ventanaReportes = gcnew frmReporteViajesXMes(this->objUsuario);
	ventanaReportes->MdiParent = this;
	ventanaReportes->Show();
}
};
}
