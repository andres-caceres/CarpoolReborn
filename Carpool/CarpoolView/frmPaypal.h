#pragma once
#include "frmAgregarPaypal.h"

namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CarpoolController;
	using namespace CarpoolModel;

	/// <summary>
	/// Resumen de frmPaypal
	/// </summary>
	public ref class frmPaypal : public System::Windows::Forms::Form
	{
	public:
		frmPaypal(Usuario^ objUsuario)
		{
			InitializeComponent();
			this->objUsuario = objUsuario;
			this->objGestorPaypal = gcnew GestorPaypal();
			this->objGestorUsuario = gcnew GestorUsuario();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPaypal()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: Usuario^ objUsuario;
	private: GestorPaypal^ objGestorPaypal;
	private: GestorUsuario^ objGestorUsuario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPaypal::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::IndianRed;
			this->button4->ForeColor = System::Drawing::Color::Bisque;
			this->button4->Location = System::Drawing::Point(465, 362);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 45);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &frmPaypal::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(254, 362);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 45);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmPaypal::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(34, 71);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(796, 251);
			this->dataGridView1->TabIndex = 7;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Correo";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// frmPaypal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(872, 443);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmPaypal";
			this->Text = L"Paypal";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &frmPaypal::frmPaypal_Load);
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
private: System::Void frmPaypal_Load(System::Object^ sender, System::EventArgs^ e) {
	List<Paypal^>^ listaPaypal = this->objGestorPaypal->BuscarPaypalXcodigoBD(this->objUsuario->CodigoDeUsuario);
	MostrarGrilla(listaPaypal);
}
};
}
