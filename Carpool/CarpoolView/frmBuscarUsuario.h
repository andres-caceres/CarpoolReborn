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

	/// <summary>
	/// Resumen de frmBuscarUsuario
	/// </summary>
	public ref class frmBuscarUsuario : public System::Windows::Forms::Form
	{
	public:
		frmBuscarUsuario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		frmBuscarUsuario(GestorUsuario^ objGestorUsuario)
		{
			InitializeComponent();
			this->objGestorUsuario = objGestorUsuario;
			this->objGestorSeguridad = gcnew GestorSeguridad();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmBuscarUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;









	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: GestorUsuario^ objGestorUsuario;
	private: GestorSeguridad^ objGestorSeguridad;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;





















	private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmBuscarUsuario::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Blue;
			this->button1->Location = System::Drawing::Point(360, 36);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmBuscarUsuario::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column10,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dataGridView1->Location = System::Drawing::Point(32, 138);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1219, 209);
			this->dataGridView1->TabIndex = 6;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Codigo";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Apellido Paterno";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Apellido Materno";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"DNI";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Edad";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Correo";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Idioma";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Username";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Tipo de usuario";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(179, 40);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(74, 40);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 18);
			this->label1->TabIndex = 4;
			this->label1->Text = L"UserName";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(345, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(537, 90);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Buscar";
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::BlueViolet;
			this->button2->Location = System::Drawing::Point(457, 385);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 28);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Hacer admin";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmBuscarUsuario::button2_Click);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(661, 385);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 28);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Eliminar usuario";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmBuscarUsuario::button3_Click);
			// 
			// frmBuscarUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1282, 459);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmBuscarUsuario";
			this->Text = L"Buscar Usuario";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmBuscarUsuario::frmBuscarUsuario_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmBuscarUsuario::frmBuscarUsuario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ userName = this->textBox1->Text;
		Usuario^ objUsuario = this->objGestorUsuario->ObtenerUsuarioxUserName(userName);
		this->dataGridView1->Rows->Clear();

		array<String^>^ fila = gcnew array<String^>(10);
		fila[0] = Convert::ToString(objUsuario->CodigoDeUsuario);
		fila[1] = objUsuario->Nombre;
		fila[2] = objUsuario->ApellidoPaterno;
		fila[3] = objUsuario->ApellidoMaterno;
		fila[4] = objUsuario->DNI;
		fila[5] = objUsuario->Edad;
		fila[6] = objUsuario->Correo;
		fila[7] = "Espa�ol";
		fila[8] = objUsuario->userName;
		fila[9] = Convert::ToString(objUsuario->tipoUsuario);
		
		this->dataGridView1->Rows->Add(fila);
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//SelectedRows[0] devuelve primera fila que se marca
	//index posicion real
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ userNameEliminar = (this->dataGridView1->Rows[filaSeleccionada]->Cells[8]->Value->ToString());//acccede codigo Cells[0]
	String^ dniEliminar = (this->dataGridView1->Rows[filaSeleccionada]->Cells[4]->Value->ToString());//acccede codigo Cells[0]
	this->objGestorUsuario->EliminarUsuario(userNameEliminar);
	this->objGestorSeguridad->EliminarSeguridad(dniEliminar);

	MessageBox::Show("Contacto eliminado exitosamente");

	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < objGestorUsuario->ObtenerCantidadUsuarios(); i++) {
		Usuario^ objUsuario = objGestorUsuario->ObtenerUsuarioLista(i);
		array<String^>^ fila = gcnew array<String^>(10);
		fila[0] = Convert::ToString(objUsuario->CodigoDeUsuario);
		fila[1] = objUsuario->Nombre;
		fila[2] = objUsuario->ApellidoPaterno;
		fila[3] = objUsuario->ApellidoMaterno;
		fila[4] = objUsuario->DNI;
		fila[5] = objUsuario->Edad;
		fila[6] = objUsuario->Correo;
		//fila[6] = objUsuario->Idioma;
		fila[7] = "Espa�ol";
		fila[8] = objUsuario->userName;
		fila[9] = Convert::ToString(objUsuario->tipoUsuario);
		
		this->dataGridView1->Rows->Add(fila);
	}
}
private: System::Void frmBuscarUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorUsuario->LeerUsuariosDesdeArchivo();
	this->objGestorSeguridad->LeerSeguridadDesdeArchivo();

	for (int i = 0; i < objGestorUsuario->ObtenerCantidadUsuarios(); i++) {
		Usuario^ objUsuario = objGestorUsuario->ObtenerUsuarioLista(i);
		array<String^>^ fila = gcnew array<String^>(10);
		fila[0] = Convert::ToString(objUsuario->CodigoDeUsuario);
		fila[1] = objUsuario->Nombre;
		fila[2] = objUsuario->ApellidoPaterno;
		fila[3] = objUsuario->ApellidoMaterno;
		fila[4] = objUsuario->DNI;
		fila[5] = objUsuario->Edad;
		fila[6] = objUsuario->Correo;
		fila[7] = "Espa�ol";
		fila[8] = objUsuario->userName;
		fila[9] = Convert::ToString(objUsuario->tipoUsuario);
		
		this->dataGridView1->Rows->Add(fila);
	}
}

//BOTON PARA HACER ADMIN FALTA, CAMBIAR A 1
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorUsuario->LeerUsuariosDesdeArchivo();
		
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		
		String^ userNameEditar = (this->dataGridView1->Rows[filaSeleccionada]->Cells[8]->Value->ToString());
		String^ dniEliminar = (this->dataGridView1->Rows[filaSeleccionada]->Cells[4]->Value->ToString());//acccede codigo Cells[0]
		
		Usuario^ objUsuario = objGestorUsuario->ObtenerUsuarioxUserName(userNameEditar);
		this->objGestorUsuario->EliminarUsuarioXDni(dniEliminar);
		Usuario^ objUsuarioAdmin = gcnew Usuario(objUsuario->CodigoDeUsuario ,objUsuario->Nombre, objUsuario->ApellidoPaterno, objUsuario->ApellidoMaterno, objUsuario->DNI, objUsuario->Correo, objUsuario->userName, objUsuario->password, 1);

		this->objGestorUsuario->AgregarUsuario(objUsuarioAdmin);

		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < objGestorUsuario->ObtenerCantidadUsuarios(); i++) {
			Usuario^ objUsuario = objGestorUsuario->ObtenerUsuarioLista(i);
			array<String^>^ fila = gcnew array<String^>(10);
			fila[0] = Convert::ToString(objUsuario->CodigoDeUsuario); 
			fila[1] = objUsuario->Nombre; 
			fila[2] = objUsuario->ApellidoPaterno;
			fila[3] = objUsuario->ApellidoMaterno;
			fila[4] = objUsuario->DNI;
			fila[5] = objUsuario->Edad;
			fila[6] = objUsuario->Correo;
			//fila[6] = objUsuario->Idioma;
			fila[7] = "Espa�ol";
			fila[8] = objUsuario->userName;
			fila[9] = Convert::ToString(objUsuario->tipoUsuario);
			
			this->dataGridView1->Rows->Add(fila);

			
		}
		MessageBox::Show("Usuario seleccionado ahora es admin");
	}
private: System::Void frmBuscarUsuario_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorUsuario->EscribirArchivo();
	this->objGestorSeguridad->EscribirArchivo();
}
};
}
