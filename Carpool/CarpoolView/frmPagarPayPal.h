#pragma once
#include "frmAgregarPaypal.h"

namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace CarpoolController;
	using namespace CarpoolModel;

	/// <summary>
	/// Resumen de frmPagarPayPal
	/// </summary>
	public ref class frmPagarPayPal : public System::Windows::Forms::Form
	{
	public:
		frmPagarPayPal(int codigoReservar, GestorViaje^ objGestorViaje, Usuario^ objUsuario)
		{
			InitializeComponent();

			this->codigoReservar = codigoReservar;
			this->objGestorViaje = objGestorViaje;
			this->objGestorPaypal = gcnew GestorPaypal();
			this->objGestorUsuario = gcnew GestorUsuario();
			this->objUsuario = objUsuario;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPagarPayPal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: int codigoReservar;
	private: GestorViaje^ objGestorViaje;
	private: Usuario^ objUsuario;
	private: GestorPaypal^ objGestorPaypal;
	private: GestorUsuario^ objGestorUsuario;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPagarPayPal::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::IndianRed;
			this->button4->ForeColor = System::Drawing::Color::Bisque;
			this->button4->Location = System::Drawing::Point(464, 337);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 46);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &frmPagarPayPal::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(280, 337);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 46);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmPagarPayPal::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(40, 47);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(796, 251);
			this->dataGridView1->TabIndex = 10;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Correo";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(96, 337);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 46);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Pagar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmPagarPayPal::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::IndianRed;
			this->button3->ForeColor = System::Drawing::Color::Bisque;
			this->button3->Location = System::Drawing::Point(651, 337);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 46);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Cancelar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmPagarPayPal::button3_Click);
			// 
			// frmPagarPayPal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(879, 422);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"frmPagarPayPal";
			this->Text = L"Pagar Paypal";
			this->Load += gcnew System::EventHandler(this, &frmPagarPayPal::frmPagarPayPal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: void MostrarGrilla(List<Paypal^>^ listaPaypal) {
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < listaPaypal->Count; i++) {
		Paypal^ objPaypal = listaPaypal[i];
		array<String^>^ fila = gcnew array<String^>(1);
		fila[0] = objPaypal->correo;
		this->dataGridView1->Rows->Add(fila);
	}
}


	private: System::Void frmPagarPayPal_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Paypal^>^ listaPaypal = this->objGestorPaypal->BuscarPaypalXcodigoBD(this->objUsuario->CodigoDeUsuario);
		MostrarGrilla(listaPaypal);

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Boton pagar

	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	//int codigoPagar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

	if (this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value == nullptr) {
		MessageBox::Show("Por favor, seleccione un PayPal");

	}
	else
	{

		this->objGestorViaje->AgregarPasajeroAlViaje(codigoReservar, this->objUsuario->CodigoDeUsuario);
		MessageBox::Show("Se ha registrado correctamente");
		this->Close();
	}


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Usuario^ objUsuarioLogeado = this->objUsuario;
	frmAgregarPaypal^ ventanaPaypal = gcnew frmAgregarPaypal(objUsuarioLogeado, objGestorPaypal);
	ventanaPaypal->ShowDialog();

	List<Paypal^>^ listaPaypal = this->objGestorPaypal->BuscarPaypalXcodigoBD(this->objUsuario->CodigoDeUsuario);
	MostrarGrilla(listaPaypal);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Usuario^ objUsuarioLogeado = this->objUsuario;
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ correo = (this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());//acccede codigo Cells[0]
	this->objGestorPaypal->BorrarPaypal(correo, objUsuarioLogeado->CodigoDeUsuario);
	MessageBox::Show("Paypal eliminado exitosamente");

	List<Paypal^>^ listaPaypal = this->objGestorPaypal->BuscarPaypalXcodigoBD(this->objUsuario->CodigoDeUsuario);
	MostrarGrilla(listaPaypal);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Operación cancelada");
	this->Close();
}
};
}
