#pragma once
#include "frmSeguridad.h"
#include "frmPreguntaSeguridad.h"

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
	/// Resumen de frmRegistroConductor
	/// </summary>
	public ref class frmRegistroConductor : public System::Windows::Forms::Form
	{
	public:
		frmRegistroConductor(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmRegistroConductor(Usuario^ objUsuario, GestorUsuario^ objGestorUsuario)
		{
			InitializeComponent();
			this->objUsuario = objUsuario;
			this->objGestorUsuario = objGestorUsuario;
			this->objGestorConductor = gcnew GestorConductor();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmRegistroConductor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: Usuario^ objUsuario;
	private: GestorUsuario^ objGestorUsuario;
	private: GestorConductor^ objGestorConductor;
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(209, 251);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmRegistroConductor::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(433, 251);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Siguiente";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmRegistroConductor::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(85, 62);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(612, 135);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos Conductor";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(256, 65);
			this->textBox1->MaxLength = 9;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(254, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Numero de Licencia:";
			// 
			// frmRegistroConductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(780, 358);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"frmRegistroConductor";
			this->Text = L"Registro Conductor";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmRegistroConductor::frmRegistroConductor_FormClosing);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int datos_llenos;
	
	String^ Licencia = this->textBox1->Text;
	
	datos_llenos = this->objGestorConductor->DatosLlenos(Licencia);
	if (datos_llenos) {
		Conductor^ objConductor = gcnew Conductor(objUsuario->CodigoDeUsuario,objUsuario->Nombre,Licencia,"No Disponible",0,"Posicion","Asientos",2);
		int es_valido, mismos_datos, esta_completo, mismo_tipo_usuario;
		es_valido = objGestorUsuario->UsuarioRepetido(objUsuario->userName);
		mismos_datos = objGestorUsuario->MismosDatos(objUsuario->DNI, objUsuario->Correo, objUsuario->Nombre, objUsuario->ApellidoPaterno, objUsuario->ApellidoMaterno);
		esta_completo = objGestorUsuario->ValidarRegistro(objUsuario->Nombre, objUsuario->ApellidoPaterno, objUsuario->ApellidoMaterno, objUsuario->DNI, objUsuario->Correo, objUsuario->userName, objUsuario->password);
		mismo_tipo_usuario = objGestorUsuario->MismoTipoUsuario(objUsuario->DNI, objUsuario->Correo, objUsuario->Nombre, objUsuario->ApellidoPaterno, objUsuario->ApellidoMaterno, objUsuario->tipoUsuario);

		if (mismos_datos && es_valido && (!mismo_tipo_usuario) && esta_completo) {	//Segunda vez registro
			frmSeguridad^ ventanaSeguridad = gcnew frmSeguridad(this->objUsuario, this->objGestorUsuario);
			ventanaSeguridad->Show();
			this->objGestorConductor->AgregarALista(objConductor);
			//this->Hide();
			//this->objGestorUsuario->AgregarUsuario(objUsuario);
			this->Close();
		}

		if (mismos_datos && es_valido && mismo_tipo_usuario) {
			MessageBox::Show("Ya hay una cuenta con el mismo tipo de usuario y datos");
		}

		if (es_valido && esta_completo && (!mismos_datos) && esta_completo) {	//Primera vez registro
			frmPreguntaSeguridad^ ventanaPreguntaSeguridad = gcnew frmPreguntaSeguridad(this->objUsuario, this->objGestorUsuario);
			ventanaPreguntaSeguridad->Show();

			//this->objGestorUsuario->AgregarUsuario(objUsuario);		IMPORTANTE
			//MessageBox::Show("El usuario ha sido agregado correctamente");
			this->Close();
		}

	}
	else {
		MessageBox::Show("Debe llenar todos los datos");
	}
}
private: System::Void frmRegistroConductor_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorConductor->EscribirArchivo();
}
};
}
