#pragma once
#include "frmNuevoContacto.h"
#include "frmEditarContacto.h"

namespace CarpoolView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CarpoolController;
	using namespace CarpoolModel;

	/// <summary>
	/// Resumen de frmUpdateContacto
	/// </summary>
	public ref class frmUpdateContacto : public System::Windows::Forms::Form
	{
	public:
		frmUpdateContacto(Usuario^ objUsuario)
		{
			InitializeComponent();
			this->objGestorContacto = gcnew GestorContacto();
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
		~frmUpdateContacto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: Usuario^ objUsuario;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: GestorContacto^ objGestorContacto;
	private: GestorUsuario^ objGestorUsuario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;




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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(604, 539);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 42);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmUpdateContacto::button4_Click);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Green;
			this->button3->Location = System::Drawing::Point(413, 538);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 45);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmUpdateContacto::button3_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Blue;
			this->button2->Location = System::Drawing::Point(245, 539);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 42);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmUpdateContacto::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(44, 216);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 102;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->Size = System::Drawing::Size(871, 260);
			this->dataGridView1->TabIndex = 7;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"userName";
			this->Column1->MinimumWidth = 12;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Apodo";
			this->Column2->MinimumWidth = 12;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Nombre";
			this->Column3->MinimumWidth = 12;
			this->Column3->Name = L"Column3";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(204, 66);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(558, 107);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Busqueda";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(137, 50);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 22);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Coral;
			this->button1->Location = System::Drawing::Point(377, 48);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 26);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmUpdateContacto::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 51);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Apodo:";
			// 
			// frmUpdateContacto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(962, 626);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmUpdateContacto";
			this->Text = L"Contactos";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmUpdateContacto::frmUpdateContacto_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmUpdateContacto::frmUpdateContacto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //Buscar
		Usuario^ objUsuarioLogeado = this->objUsuario;

		String^ Apodo = this->textBox1->Text;
		Contactos^ objContacto = this->objGestorContacto->ObtenerContactoxApodo(Apodo,objUsuarioLogeado->CodigoDeUsuario);
		this->dataGridView1->Rows->Clear();
		if (objContacto->codigoDelAñador == objUsuarioLogeado->CodigoDeUsuario) {
			array<String^>^ fila = gcnew array<String^>(3);
			fila[0] = objContacto->userNameDelAñadido;
			fila[1] = objContacto->Apodo;
			fila[2] = objContacto->Nombre;
			this->dataGridView1->Rows->Add(fila);
		}
	}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //Nuevo
	Usuario^ objUsuarioLogeado = this->objUsuario;
	frmNuevoContacto^ ventanNuevoContacto = gcnew frmNuevoContacto(this->objGestorContacto, objUsuarioLogeado);
	ventanNuevoContacto->ShowDialog();
	this->dataGridView1->Rows->Clear();

	for (int i = 0; i < objGestorContacto->ObtenerCantidadContactos(); i++) {
		Contactos^ objContacto = objGestorContacto->ObtenerContactoLista(i);
		if (objContacto->codigoDelAñador == objUsuarioLogeado->CodigoDeUsuario) {
			array<String^>^ fila = gcnew array<String^>(3);
			fila[0] = objContacto->userNameDelAñadido;
			fila[1] = objContacto->Apodo;
			fila[2] = objContacto->Nombre;
			this->dataGridView1->Rows->Add(fila);
		}
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //Editar
	Usuario^ objUsuarioLogeado = this->objUsuario;
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ userNameEditar= (this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());//acccede codigo Cells[0]
	frmEditarContacto^ ventanaEditarContacto = gcnew frmEditarContacto(this->objGestorContacto, objUsuarioLogeado);
	ventanaEditarContacto->ShowDialog();
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < objGestorContacto->ObtenerCantidadContactos(); i++) {
		Contactos^ objContacto = objGestorContacto->ObtenerContactoLista(i);
		if (objContacto->codigoDelAñador == objUsuarioLogeado->CodigoDeUsuario) {
			array<String^>^ fila = gcnew array<String^>(3);
			fila[0] = objContacto->userNameDelAñadido;
			fila[1] = objContacto->Apodo;
			fila[2] = objContacto->Nombre;
			this->dataGridView1->Rows->Add(fila);
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //Eliminar
	//SelectedRows[0] devuelve primera fila que se marca
	//index posicion real
	Usuario^ objUsuarioLogeado = this->objUsuario;
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ userNameEliminar = (this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());//acccede codigo Cells[0]
	this->objGestorContacto->EliminarContactoXuserName(userNameEliminar, objUsuarioLogeado->CodigoDeUsuario);
	MessageBox::Show("Contacto eliminado exitosamente");

	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < objGestorContacto->ObtenerCantidadContactos(); i++) {
		Contactos^ objContacto = objGestorContacto->ObtenerContactoLista(i);
		if (objContacto->codigoDelAñador == objUsuarioLogeado->CodigoDeUsuario) {
			array<String^>^ fila = gcnew array<String^>(3);
			fila[0] = objContacto->userNameDelAñadido;
			fila[1] = objContacto->Apodo;
			fila[2] = objContacto->Nombre;
			this->dataGridView1->Rows->Add(fila);
		}
	}
}
private: System::Void frmUpdateContacto_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	//this->objGestorContacto->GrabarEnArchivo();
}
private: System::Void frmUpdateContacto_Load(System::Object^ sender, System::EventArgs^ e) {
	//this->objGestorContacto->LeerContactosDesdeArchivo();
	this->objGestorContacto->listaContactos = this->objGestorContacto->BuscarAllBD();

	Usuario^ objUsuarioLogeado = this->objUsuario;

	for (int i = 0; i < objGestorContacto->ObtenerCantidadContactos(); i++) {
		Contactos^ objContacto = objGestorContacto->ObtenerContactoLista(i);
		if (objContacto->codigoDelAñador == objUsuarioLogeado->CodigoDeUsuario) {
			array<String^>^ fila = gcnew array<String^>(3);
			fila[0] = objContacto->userNameDelAñadido;
			fila[1] = objContacto->Apodo;
			fila[2] = objContacto->Nombre;
			this->dataGridView1->Rows->Add(fila);
		}
	}
}
};
}
