#pragma once

namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace CarpoolController;
	using namespace CarpoolModel;
	/// <summary>
	/// Resumen de frmReporteTiposDeUsuarios
	/// </summary>
	public ref class frmReporteTiposDeUsuarios : public System::Windows::Forms::Form
	{
	public:
		frmReporteTiposDeUsuarios(void)
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
		~frmReporteTiposDeUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmReporteTiposDeUsuarios::typeid));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(58, 70);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Usuarios";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(618, 376);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// frmReporteTiposDeUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 517);
			this->Controls->Add(this->chart1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmReporteTiposDeUsuarios";
			this->Text = L"Reporte de tipos de Usuarios";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &frmReporteTiposDeUsuarios::frmReporteTiposDeUsuarios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmReporteTiposDeUsuarios_Load(System::Object^ sender, System::EventArgs^ e) {
		GestorReporteUsuarios^ objGestorReporte = gcnew GestorReporteUsuarios();
		objGestorReporte->GenerarReporte();

		for (int i = 0; i < objGestorReporte->CantidadDetalle(); i++) {
			this->chart1->Series["Usuarios"]->Points->Add(objGestorReporte->ObtenerDetalleReporte(i)->cantidadUsuarios);
			/*Esto es estética*/
			this->chart1->Series["Usuarios"]->Points[i]->Color = Color::Blue;
			this->chart1->Series["Usuarios"]->Points[i]->AxisLabel = Convert::ToString(objGestorReporte->ObtenerDetalleReporte(i)->TipoDeUsuario);
			this->chart1->Series["Usuarios"]->Points[i]->LegendText = Convert::ToString(objGestorReporte->ObtenerDetalleReporte(i)->TipoDeUsuario);
			this->chart1->Series["Usuarios"]->Points[i]->Label = "" + objGestorReporte->ObtenerDetalleReporte(i)->cantidadUsuarios;
		}
	}
	};
}
