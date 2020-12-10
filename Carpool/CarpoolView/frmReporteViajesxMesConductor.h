#pragma once

namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace CarpoolModel;
	using namespace CarpoolController;

	/// <summary>
	/// Resumen de frmReporteViajesxMesConductor
	/// </summary>
	public ref class frmReporteViajesxMesConductor : public System::Windows::Forms::Form
	{
	public:
		frmReporteViajesxMesConductor(Usuario^ objUsuario)
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
		~frmReporteViajesxMesConductor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(121, 146);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(767, 437);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// frmReporteViajesxMesConductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1045, 684);
			this->Controls->Add(this->chart1);
			this->Name = L"frmReporteViajesxMesConductor";
			this->Text = L"Reporte viajes por mes";
			this->Load += gcnew System::EventHandler(this, &frmReporteViajesxMesConductor::frmReporteViajesxMesConductor_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmReporteViajesxMesConductor_Load(System::Object^ sender, System::EventArgs^ e) {
		GestorReporteViajesxMesConductor^ objGestorReporte = gcnew GestorReporteViajesxMesConductor();
		objGestorReporte->GenerarReporte(this->objUsuario->CodigoDeUsuario);

		for (int i = 0; i < objGestorReporte->CantidadDetalle(); i++) {
			this->chart1->Series["Series1"]->Points->Add(objGestorReporte->ObtenerDetalleReporte(i)->cantidad);
			/*Esto es estética*/
			this->chart1->Series["Series1"]->Points[i]->Color = Color::Blue;
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = objGestorReporte->ObtenerDetalleReporte(i)->mes;
			this->chart1->Series["Series1"]->Points[i]->LegendText = objGestorReporte->ObtenerDetalleReporte(i)->mes;
			this->chart1->Series["Series1"]->Points[i]->Label = "" + objGestorReporte->ObtenerDetalleReporte(i)->cantidad;
		}
	}
	};
}
