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
	/// Resumen de frmNuevoContacto
	/// </summary>
	public ref class frmNuevoContacto : public System::Windows::Forms::Form
	{
	public:

		frmNuevoContacto(GestorContacto^ objGestorContacto, Usuario^ objUsuario)
		{
			this->objGestorContacto = objGestorContacto;
			this->objGestorUsuario = gcnew GestorUsuario();
			this->objUsuario = objUsuario;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmNuevoContacto()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: GestorContacto^ objGestorContacto;
	private: GestorUsuario^ objGestorUsuario;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(235, 292);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 39);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoContacto::button2_Click);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Green;
			this->button1->Location = System::Drawing::Point(86, 292);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 39);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoContacto::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(44, 56);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(352, 206);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del Contacto";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(146, 129);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(157, 22);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(146, 65);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(157, 22);
			this->textBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 130);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apodo :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 66);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"UserName:";
			// 
			// frmNuevoContacto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(446, 363);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmNuevoContacto";
			this->Text = L"Nuevo Contacto";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ UserName = this->textBox1->Text;
		String^ Apodo = this->textBox2->Text;

		int CreacionValida = this->objGestorContacto->ValidarRegistro(UserName, Apodo);
		if (CreacionValida) {
			this->objGestorUsuario->LeerUsuariosDesdeArchivo();
			Usuario^ UsuarioLogeado = this->objUsuario;
			Usuario^ UsuarioPorAñadir = this->objGestorUsuario->ObtenerUsuarioxUserNameBD(UserName);

			if (UsuarioPorAñadir == nullptr) {
				MessageBox::Show("No existe ese userName");
			}
			else {
				int mismo_contacto=this->objGestorContacto->MismoContacto(UsuarioPorAñadir->userName,UsuarioLogeado->CodigoDeUsuario);
				
				if (!mismo_contacto) {
					if (UsuarioLogeado->CodigoDeUsuario == UsuarioPorAñadir->CodigoDeUsuario) {
						MessageBox::Show("No te puedes agregar a ti mismo");
					}
					else {
						Contactos^ objContacto = gcnew Contactos(UsuarioLogeado->CodigoDeUsuario, UsuarioPorAñadir->CodigoDeUsuario, UsuarioPorAñadir->userName, Apodo, UsuarioPorAñadir->Nombre);

						//this->objGestorContacto->AgregarContacto(objContacto);
						this->objGestorContacto->GuardarContactoBD(objContacto);

						MessageBox::Show("Contacto agregado exitosamente");
						this->Close();
					}
				}
				else {
					MessageBox::Show("Ya tienes agregado a este contacto");
				}
			}
		}
		else {
			MessageBox::Show("Completar todos los campos");
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
