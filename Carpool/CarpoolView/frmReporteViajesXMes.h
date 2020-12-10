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
	/// Resumen de frmReporteViajesXMes
	/// </summary>
	public ref class frmReporteViajesXMes : public System::Windows::Forms::Form
	{
	public:
		frmReporteViajesXMes(Usuario^ objUsuario)
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
		~frmReporteViajesXMes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:

	private:
		Usuario^ objUsuario;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(69, 176);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(1020, 537);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Line", L"Column" });
			this->comboBox1->Location = System::Drawing::Point(115, 43);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(280, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->DropDownClosed += gcnew System::EventHandler(this, &frmReporteViajesXMes::comboBox1_DropDownClosed);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(301, 44);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(541, 93);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tipo de gráfico";
			// 
			// frmReporteViajesXMes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1147, 763);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Name = L"frmReporteViajesXMes";
			this->Text = L"Reporte de viajes por mes";
			this->Load += gcnew System::EventHandler(this, &frmReporteViajesXMes::frmReporteViajesXMes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmReporteViajesXMes_Load(System::Object^ sender, System::EventArgs^ e) {
		GestorReporteViajesxMes^ objGestorReporte = gcnew GestorReporteViajesxMes();
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
	private: System::Void comboBox1_DropDownClosed(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		String^ tipoGrafico = this->comboBox1->Text;
		if (tipoGrafico == "Line") {
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		}
		else if (tipoGrafico == "Column") {
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
		}
		
		GestorReporteViajesxMes^ objGestorReporte = gcnew GestorReporteViajesxMes();
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
