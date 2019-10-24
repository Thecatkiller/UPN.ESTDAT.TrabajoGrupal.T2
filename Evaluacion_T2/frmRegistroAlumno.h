#pragma once

namespace Evaluacion_T2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmRegistroAlumno
	/// </summary>
	public ref class frmRegistroAlumno : public System::Windows::Forms::Form
	{
	public:
		frmRegistroAlumno(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmRegistroAlumno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtApellidos;
	protected:

	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtNombres;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnRegistrar;
	private: System::Windows::Forms::DataGridView^  dgvLista;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colApellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNombre;

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
			this->txtApellidos = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtNombres = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->colCodigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colApellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// txtApellidos
			// 
			this->txtApellidos->Location = System::Drawing::Point(75, 18);
			this->txtApellidos->Name = L"txtApellidos";
			this->txtApellidos->Size = System::Drawing::Size(215, 20);
			this->txtApellidos->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Apellidos";
			// 
			// txtNombres
			// 
			this->txtNombres->Location = System::Drawing::Point(75, 44);
			this->txtNombres->Name = L"txtNombres";
			this->txtNombres->Size = System::Drawing::Size(215, 20);
			this->txtNombres->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Nombres";
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Location = System::Drawing::Point(215, 78);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(75, 23);
			this->btnRegistrar->TabIndex = 20;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &frmRegistroAlumno::btnRegistrar_Click);
			// 
			// dgvLista
			// 
			this->dgvLista->AllowUserToAddRows = false;
			this->dgvLista->AllowUserToDeleteRows = false;
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->colCodigo, this->colApellido,
					this->colNombre
			});
			this->dgvLista->Location = System::Drawing::Point(12, 115);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->ReadOnly = true;
			this->dgvLista->Size = System::Drawing::Size(511, 377);
			this->dgvLista->TabIndex = 21;
			// 
			// colCodigo
			// 
			this->colCodigo->HeaderText = L"Código";
			this->colCodigo->Name = L"colCodigo";
			this->colCodigo->ReadOnly = true;
			// 
			// colApellido
			// 
			this->colApellido->HeaderText = L"Apellidos";
			this->colApellido->Name = L"colApellido";
			this->colApellido->ReadOnly = true;
			this->colApellido->Width = 180;
			// 
			// colNombre
			// 
			this->colNombre->HeaderText = L"Nombres";
			this->colNombre->Name = L"colNombre";
			this->colNombre->ReadOnly = true;
			this->colNombre->Width = 180;
			// 
			// frmRegistroAlumno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 504);
			this->Controls->Add(this->dgvLista);
			this->Controls->Add(this->btnRegistrar);
			this->Controls->Add(this->txtApellidos);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtNombres);
			this->Controls->Add(this->label1);
			this->Name = L"frmRegistroAlumno";
			this->Text = L"frmRegistroAlumno";
			this->Load += gcnew System::EventHandler(this, &frmRegistroAlumno::frmRegistroAlumno_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void mostrarLista() {
				 dgvLista->Rows->Clear();
				 int ta = 0;
				 NodoDAlumno *I, *D;
				 I = NULL, D = NULL;
				 dgvLista->Rows->Clear();
				 while (!estaVacia(topeColaDAlumno))
				 {
					 Alumno ex = desenColarID(topeColaDAlumno, ColaDAlumnoI, ColaDAlumnoD);
					 dgvLista->Rows->Add(
						 gcnew String(ex.codigo),
						 gcnew String(ex.Apellido),
						 gcnew String(ex.nombre)
						 );

					 enColarID(ta, limiteColaDAlumno, I, D, ex);
				 }
				 while (!estaVacia(ta))
				 {
					 Alumno ex = desenColarID(ta, I, D);
					 enColarID(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, ex);
				 }
	}
	private: System::Void btnRegistrar_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (txtNombres->Text->Trim() != "" && txtApellidos->Text->Trim() != ""){
					 string codigo = "N" + ZeroPadNumber(topeColaDAlumno + 1, 7);
					 Alumno al = setAlumno(&codigo[0], StringToChar(txtNombres), StringToChar(txtApellidos), 0);
					 EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, al);
					 mostrarLista();
				 }
	}
	private: System::Void frmRegistroAlumno_Load(System::Object^  sender, System::EventArgs^  e) {
				 mostrarLista();
	}
	};
}
