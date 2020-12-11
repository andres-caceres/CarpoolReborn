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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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


		   /// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmReporteViajesXMes::typeid));
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
			this->chart1->Location = System::Drawing::Point(44, 68);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(1020, 537);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// frmReporteViajesXMes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1147, 763);
			this->Controls->Add(this->chart1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmReporteViajesXMes";
			this->Text = L"Reporte de viajes por mes";
			this->Load += gcnew System::EventHandler(this, &frmReporteViajesXMes::frmReporteViajesXMes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmReporteViajesXMes_Load(System::Object^ sender, System::EventArgs^ e) {
		GestorReporteViajesxMes^ objGestorReporte = gcnew GestorReporteViajesxMes();
		objGestorReporte->GenerarReporte(this->objUsuario->CodigoDeUsuario);
	
		for (int i = 0; i < objGestorReporte->CantidadDetalle(); i++) {
			this->chart1->Series["Series1"]->Points->Add(objGestorReporte->ObtenerDetalleReporte(i)->cantidad);
			/*Esto es est�tica*/
			this->chart1->Series["Series1"]->Points[i]->Color = Color::Blue;
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = objGestorReporte->ObtenerDetalleReporte(i)->mes;
			this->chart1->Series["Series1"]->Points[i]->LegendText = objGestorReporte->ObtenerDetalleReporte(i)->mes;
			this->chart1->Series["Series1"]->Points[i]->Label = "" + objGestorReporte->ObtenerDetalleReporte(i)->cantidad;
		}

	}
	private: System::Void comboBox1_DropDownClosed(System::Object^ sender, System::EventArgs^ e) {
		//System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		//String^ tipoGrafico = this->comboBox1->Text;
		//if (tipoGrafico == "Line") {
	//		series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
//		}
	//	else if (tipoGrafico == "Column") {
		//	series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
		//}
		
		//GestorReporteViajesxMes^ objGestorReporte = gcnew GestorReporteViajesxMes();
		//objGestorReporte->GenerarReporte(this->objUsuario->CodigoDeUsuario);

//		for (int i = 0; i < objGestorReporte->CantidadDetalle(); i++) {
//			this->chart1->Series["Series1"]->Points->Add(objGestorReporte->ObtenerDetalleReporte(i)->cantidad);
//			/*Esto es est�tica*/
	//		this->chart1->Series["Series1"]->Points[i]->Color = Color::Blue;
	//		this->chart1->Series["Series1"]->Points[i]->AxisLabel = objGestorReporte->ObtenerDetalleReporte(i)->mes;
	//		this->chart1->Series["Series1"]->Points[i]->LegendText = objGestorReporte->ObtenerDetalleReporte(i)->mes;
	//		this->chart1->Series["Series1"]->Points[i]->Label = "" + objGestorReporte->ObtenerDetalleReporte(i)->cantidad;
	//	}
	}
};
}
