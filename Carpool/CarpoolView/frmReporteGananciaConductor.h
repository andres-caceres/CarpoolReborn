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
	/// Summary for frmReporteGananciaConductor
	/// </summary>
	public ref class frmReporteGananciaConductor : public System::Windows::Forms::Form
	{
	public:
		frmReporteGananciaConductor(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		

		frmReporteGananciaConductor(Conductor^ objConductor)
		{
			InitializeComponent();
			this->objConductor = objConductor;
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmReporteGananciaConductor()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: Conductor^ objConductor;
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
			this->chart1->Location = System::Drawing::Point(108, 124);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Ganancias";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(1199, 726);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &frmReporteGananciaConductor::chart1_Click);
			// 
			// frmReporteGananciaConductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1536, 1050);
			this->Controls->Add(this->chart1);
			this->Name = L"frmReporteGananciaConductor";
			this->Text = L"frmReporteGananciaConductor";
			this->Load += gcnew System::EventHandler(this, &frmReporteGananciaConductor::frmReporteGananciaConductor_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmReporteGananciaConductor_Load(System::Object^ sender, System::EventArgs^ e) {

		GestorReporteGananciaConductor^ objGestorReporteGananciaConductor = gcnew GestorReporteGananciaConductor();
		objGestorReporteGananciaConductor->GenerarReporte(this->objConductor);

		for (int i = 0; i < objGestorReporteGananciaConductor->CantidadDetalle(); i++) {
			this->chart1->Series["Ganancias"]->Points->Add(objGestorReporteGananciaConductor->ObtenerDetalleReporte(i)->dinero);
			/*Esto es estética*/
			//this->chart1->Series["Aparcamientos"]->Points[i]->Color = Color::Blue;
			this->chart1->Series["Ganancias"]->Points[i]->AxisLabel = objGestorReporteGananciaConductor->ObtenerDetalleReporte(i)->mes;
			this->chart1->Series["Ganancias"]->Points[i]->LegendText = objGestorReporteGananciaConductor->ObtenerDetalleReporte(i)->mes;
			this->chart1->Series["Ganancias"]->Points[i]->Label = "" + objGestorReporteGananciaConductor->ObtenerDetalleReporte(i)->dinero;
		}

	}
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
