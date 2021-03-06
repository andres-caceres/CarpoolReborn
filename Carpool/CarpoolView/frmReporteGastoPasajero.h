#pragma once

namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CarpoolController;
	using namespace CarpoolModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for frmReporteGastoPasajero
	/// </summary>
	public ref class frmReporteGastoPasajero : public System::Windows::Forms::Form
	{
	public:
		frmReporteGastoPasajero(Usuario^ objUsuario)
		{
			InitializeComponent();
			this->objUsuario = objUsuario;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmReporteGastoPasajero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: Usuario^ objUsuario;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmReporteGastoPasajero::typeid));
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
			this->chart1->Location = System::Drawing::Point(58, 33);
			this->chart1->Margin = System::Windows::Forms::Padding(2);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Gasto";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(710, 451);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// frmReporteGastoPasajero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(812, 535);
			this->Controls->Add(this->chart1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmReporteGastoPasajero";
			this->Text = L"Reporte de gasto del pasajero";
			this->Load += gcnew System::EventHandler(this, &frmReporteGastoPasajero::frmReporteGastoPasajero_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmReporteGastoPasajero_Load(System::Object^ sender, System::EventArgs^ e) {

		GestorReporteGastoPasajero^ objGestorReporteGastoPasajero = gcnew GestorReporteGastoPasajero();
		objGestorReporteGastoPasajero->GenerarReporte(this->objUsuario);

		for (int i = 0; i < objGestorReporteGastoPasajero->CantidadDetalle(); i++) {
			this->chart1->Series["Gasto"]->Points->Add(objGestorReporteGastoPasajero->ObtenerDetalleReporte(i)->dinero);
			/*Esto es est�tica*/
			//this->chart1->Series["Aparcamientos"]->Points[i]->Color = Color::Blue;
			this->chart1->Series["Gasto"]->Points[i]->AxisLabel = objGestorReporteGastoPasajero->ObtenerDetalleReporte(i)->mes;
			this->chart1->Series["Gasto"]->Points[i]->LegendText = objGestorReporteGastoPasajero->ObtenerDetalleReporte(i)->mes;
			this->chart1->Series["Gasto"]->Points[i]->Label = "" + objGestorReporteGastoPasajero->ObtenerDetalleReporte(i)->dinero;
		}

	}
	};
}
