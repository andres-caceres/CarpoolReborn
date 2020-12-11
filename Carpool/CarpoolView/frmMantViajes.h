#pragma once
#include "frmNuevoViaje.h"
#include "frmModificarViaje.h"
#include "frmVerViaje.h"
#include "frmVerRuta.h"
#include "frmCalificarPasajeros.h"

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
	/// Summary for frmMantViajes
	/// </summary>
	public ref class frmMantViajes : public System::Windows::Forms::Form
	{
	public:
		frmMantViajes(void)
		{
			InitializeComponent();
			this->objGestorViaje = gcnew GestorViaje();
			//this->objGestorUsuario = gcnew GestorUsuario();
			//
			//TODO: Add the constructor code here
			//
		}

		frmMantViajes(Usuario^ objUsuario)
		{
			InitializeComponent();
			this->objGestorViaje = gcnew GestorViaje();
			this->objUsuario = objUsuario;


			//this->objGestorUsuario = gcnew GestorUsuario();
			//
			//TODO: Add the constructor code here
			//
		}

		frmMantViajes(Conductor^ objConductor)
		{
			InitializeComponent();
			this->objGestorViaje = gcnew GestorViaje();
			this->objConductor = objConductor;
			this->objGestorCoordenadas = gcnew GestorCoordenadas();

			//this->objGestorUsuario = gcnew GestorUsuario();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMantViajes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button5;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	//private: GestorUsuario^ objGestorUsuario;
	private: GestorViaje^ objGestorViaje;




	private: Usuario^ objUsuario;
	private: Conductor^ objConductor;
	private: GestorCoordenadas^ objGestorCoordenadas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Button^ calificar;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::GroupBox^ groupBox2;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMantViajes::typeid));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->calificar = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(633, 425);
			this->button5->Margin = System::Windows::Forms::Padding(1);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 46);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Ver";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmMantViajes::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(295, 425);
			this->button4->Margin = System::Windows::Forms::Padding(1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(91, 46);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Cancelar Viaje";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantViajes::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(181, 425);
			this->button3->Margin = System::Windows::Forms::Padding(1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 46);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Agregar Pasajeros";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantViajes::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(67, 425);
			this->button2->Margin = System::Windows::Forms::Padding(1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 46);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantViajes::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(367, 34);
			this->button1->Margin = System::Windows::Forms::Padding(1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 38);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantViajes::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(193, 42);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(1);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(120, 22);
			this->dateTimePicker1->TabIndex = 18;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &frmMantViajes::dateTimePicker1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(95, 46);
			this->label1->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 17);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Fecha :";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(67, 161);
			this->groupBox1->Margin = System::Windows::Forms::Padding(1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(1);
			this->groupBox1->Size = System::Drawing::Size(804, 234);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Mis viajes:";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmMantViajes::groupBox1_Enter);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(25, 39);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 30;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->Size = System::Drawing::Size(753, 176);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->MinimumWidth = 12;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Hora Inicio";
			this->Column2->MinimumWidth = 12;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Hora Fin";
			this->Column3->MinimumWidth = 12;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Fecha";
			this->Column4->MinimumWidth = 12;
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Estado";
			this->Column5->MinimumWidth = 12;
			this->Column5->Name = L"Column5";
			// 
			// calificar
			// 
			this->calificar->Location = System::Drawing::Point(739, 425);
			this->calificar->Margin = System::Windows::Forms::Padding(4);
			this->calificar->Name = L"calificar";
			this->calificar->Size = System::Drawing::Size(123, 46);
			this->calificar->TabIndex = 24;
			this->calificar->Text = L"Calificar Pasajeros";
			this->calificar->UseVisualStyleBackColor = true;
			this->calificar->Click += gcnew System::EventHandler(this, &frmMantViajes::calificar_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(404, 425);
			this->button6->Margin = System::Windows::Forms::Padding(1);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(91, 46);
			this->button6->TabIndex = 25;
			this->button6->Text = L"Iniciar Viaje";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmMantViajes::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(521, 425);
			this->button7->Margin = System::Windows::Forms::Padding(1);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(91, 46);
			this->button7->TabIndex = 26;
			this->button7->Text = L"Finalizar Viaje";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &frmMantViajes::button7_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(157, 48);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(535, 88);
			this->groupBox2->TabIndex = 27;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Filtro";
			// 
			// frmMantViajes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 501);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->calificar);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(1);
			this->Name = L"frmMantViajes";
			this->Text = L"Mantenimiento de viajes";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMantViajes::frmMantViajes_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMantViajes::frmMantViajes_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmMantViajes_Load(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorViaje->LeerViajesDelConductorDesdeArchivo(objConductor);
		//Usuario^ objUsuarioLogeado = this->objGestorUsuario->LeerUsuarioLogeadoDesdeArchivo();
		List<Viaje^>^ listaViajes = this->objGestorViaje->DevolverAllViajes();
		//Metodo en GestorViaje -> DevolverViajesUsuarioLoqueado
		//MostrarGrilla(listaViajes);
		MostrarGrilla();
	}



	private: void MostrarGrilla(List<Viaje^>^ listaViajes) {
			this->dataGridView1->Rows->Clear();
			for (int i = 0; i < listaViajes->Count; i++) {
				Viaje^ objViaje = listaViajes[i];
				array<String^>^ fila = gcnew array<String^>(5);
				fila[0] = Convert::ToString(objViaje->codigoViaje);
				fila[1] = objViaje->HoraSalida;
				fila[2] = objViaje->HoraLlegada;
				fila[3] = objViaje->Fecha;
				fila[4] = objViaje->Estado;
				this->dataGridView1->Rows->Add(fila);
			}
		}

	private: void MostrarGrilla() {
	this->dataGridView1->Rows->Clear();
	this->objGestorViaje->LeerViajesDelConductorDesdeArchivo(objConductor);
	for (int i = 0; i < this->objGestorViaje->ObtenerCantidadViajesDelConductor(this->objConductor->CodigoDeUsuario); i++) {
		Viaje^ objViaje = gcnew Viaje();
		objViaje =this->objGestorViaje->ObtenerViajeLista(i);
		array<String^>^ fila = gcnew array<String^>(5);
		fila[0] = Convert::ToString(objViaje->codigoViaje);
		fila[1] = objViaje->HoraSalida;
		fila[2] = objViaje->HoraLlegada;
		fila[3] = objViaje->Fecha;
		fila[4] = objViaje->Estado;
		this->dataGridView1->Rows->Add(fila);
	}
}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Nuevo viaje
	frmNuevoViaje^ ventanaNuevoViaje = gcnew frmNuevoViaje(this->objConductor);
	//Usuario^ objUsuarioLogeado = this->objGestorUsuario->LeerUsuarioLogeadoDesdeArchivo();
	ventanaNuevoViaje->ShowDialog();
	MostrarGrilla();
}



private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	this->objGestorViaje->LeerViajesDesdeArchivo();
	//this->objGestorCoordenadas->leerListaDeListasDeCoordenadasFromTxt();
	//this->objGestorCoordenadas->EliminarLineaDeListaListasCoordenadas(codigoEliminar);

	if (this->objGestorViaje->ObtenerViajeoxCodigo(codigoEliminar)->Estado  == "No Iniciado") {

		this->objGestorViaje->ObtenerViajeoxCodigo(codigoEliminar)->Estado = "Cancelado";
		//this->objGestorViaje->EliminarViaje(codigoEliminar);
		this->objGestorViaje->EscribirArchivo();
		//this->objGestorViaje->EscribirPasajerosViajeArchivoDiseñadoParaEliminarViaje(codigoEliminar);
		MessageBox::Show("El Viaje ha sido cancelado correctamente");
		MostrarGrilla();
	}
	else {
		MessageBox::Show("Solo puede cancelar un viaje no Iniciado.");
	}

}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	String^ estado = this->dataGridView1->Rows[filaSeleccionada]->Cells[4]->Value->ToString();
	
	if (estado == "No Iniciado") {
		frmModificarViaje^ ventanaModificarViaje = gcnew frmModificarViaje(this->objGestorViaje, codigoEditar, this->objConductor);
		//Usuario^ objUsuarioLogeado = this->objGestorUsuario->LeerUsuarioLogeadoDesdeArchivo();
		ventanaModificarViaje->ShowDialog();
		MostrarGrilla();
	}
	else if (estado == "Finalizado") {
		MessageBox::Show("No se puede agregar pasajeros el viaje finalizo", "Error");
	}

	else if (estado == "Iniciado") {
		MessageBox::Show("No se puede agregar pasajeros el viaje ya Inicio", "Error");
	}

	else if (estado == "Cancelado") {
		MessageBox::Show("No se puede agregar pasajeros el viaje fue cancelado", "Error");
	}



}
private: System::Void frmMantViajes_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {

	//this->objGestorViaje->EscribirArchivo();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

	//
	//int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	//int codigoVer = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	//frmVerRuta^ ventanaVerRuta = gcnew frmVerRuta(codigoVer);
	//ventanaVerRuta->ShowDialog();

	frmVerViaje^ ventanaVerViaje = gcnew frmVerViaje(this->objGestorViaje, codigoEditar);
	//Usuario^ objUsuarioLogeado = this->objGestorUsuario->LeerUsuarioLogeadoDesdeArchivo();
	ventanaVerViaje->ShowDialog();
	MostrarGrilla();


}




private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fecha = this->dateTimePicker1->Text;
	this->objGestorViaje->LeerViajesDelConductorDesdeArchivo(objConductor);
	List<Viaje^>^ listaViajes = this->objGestorViaje->BuscarViajesxFecha(fecha);
	MostrarGrilla(listaViajes);
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void calificar_Click(System::Object^ sender, System::EventArgs^ e) {

	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigo = Convert::ToInt16(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	String^ estado = this->dataGridView1->Rows[filaSeleccionada]->Cells[4]->Value->ToString();

	
	if(estado == "Finalizado")
	{
		//do something
		//MessageBox::Show("Algo ha pasado", "Al parecer..."); //TODO: <-ELIMINAR ESTO 
		
		frmCalificarPasajeros^ ventanacalificarPasajeros = gcnew frmCalificarPasajeros(this->objGestorViaje->ObtenerViajeoxCodigo(codigo));
		ventanacalificarPasajeros->ShowDialog();
	}
	else if(estado == "No Iniciado")
	{
		MessageBox::Show("No se puede calificar a pasajeros de un viaje no iniciado", "Error");
	}
	else if (estado == "Iniciado")
	{
		MessageBox::Show("Debe esperar a que el viaje finalice para calificar a los pasajeros", "Error");
	}
	else if (estado == "Cancelado")
	{
		MessageBox::Show("No se puede calificar a pasajeros de un viaje cancelado", "Error");
	}
}





private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	this->objGestorViaje->LeerViajesDesdeArchivo();

	DateTime FechaActual = System::DateTime::Now;
	int horaActual = FechaActual.Hour;
	int minutoActual = FechaActual.Minute;
	int segundoActual = FechaActual.Second;
	int anoActual = FechaActual.Year;
	int mesActual = FechaActual.Month;
	int diaActual = FechaActual.Day;

	String^ separadores = ":";
	String^ separav = "/";
	String^ HoraSalidaE = this->objGestorViaje->ObtenerViajeoxCodigo(codigoEliminar)->HoraSalida;
	array<String^>^ tiempo1 = HoraSalidaE->Split(separadores->ToCharArray());
	int hora1 = Convert::ToInt32(tiempo1[0]);
	int minuto1 = Convert::ToInt32(tiempo1[1]);
	int segundo1 = Convert::ToInt32(tiempo1[2]);

	String^ FechaViaje = this->objGestorViaje->ObtenerViajeoxCodigo(codigoEliminar)->Fecha;
	array<String^>^ fecha1 = FechaViaje->Split(separav->ToCharArray());
	int mes1 = Convert::ToInt32(fecha1[0]);
	int dia1 = Convert::ToInt32(fecha1[1]);
	int ano1 = Convert::ToInt32(fecha1[2]);
	int numPasajeros = this->objGestorViaje->ObtenerViajeoxCodigo(codigoEliminar)->listaPasajeros->Count;

	if (this->objGestorViaje->ObtenerViajeoxCodigo(codigoEliminar)->Estado == "No Iniciado") {

		if (!(this->objGestorViaje->VerificaFecha(ano1,mes1,dia1,anoActual,mesActual,diaActual))) {
			int i = 0;
			MessageBox::Show("No puede iniciar este viaje, revisar fecha de inicio.");
		}
		else {
			if (!(this->objGestorViaje->ValidaHoraInicioViaje(horaActual, minutoActual, segundoActual, hora1, minuto1, segundo1))) {
				this->objGestorViaje->ObtenerViajeoxCodigo(codigoEliminar)->Estado = "Cancelado";
				this->objGestorViaje->EscribirArchivo();
				MessageBox::Show("Solo tiene 15 minutos de tolerancia, ya no puede iniciar su viaje, sera cancelado.");
				MostrarGrilla();
			}

			else {

				if (numPasajeros == 0) {
					MessageBox::Show("No puede Iniciar este viaje, acepte al menos un pasajero.");

				}
				else {
					this->objGestorViaje->ObtenerViajeoxCodigo(codigoEliminar)->Estado = "Iniciado";
					//this->objGestorViaje->EliminarViaje(codigoEliminar);
					this->objGestorViaje->EscribirArchivo();
					//this->objGestorViaje->EscribirPasajerosViajeArchivoDiseñadoParaEliminarViaje(codigoEliminar);
					MessageBox::Show("El Viaje ha sido Iniciado");
					MostrarGrilla();
				}

			}
		}
	}

	else {
		MessageBox::Show("No puede modificar el estado de este viaje");
	}
}


private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

	if(this->objGestorViaje->ObtenerViajeoxCodigo(codigoEliminar)->Estado != "Iniciado") {
		MessageBox::Show("No puede finalizar un viaje no iniciado.");
	}
	else {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		this->objGestorViaje->LeerViajesDesdeArchivo();
		this->objGestorViaje->ObtenerViajeoxCodigo(codigoEliminar)->Estado = "Finalizado";
		this->objGestorViaje->EscribirArchivo();
		MessageBox::Show("El Viaje ha sido Finalizado correctamente, no se olvide de calificar a su pasajeros.");
		MostrarGrilla();
	}

}
};
}
