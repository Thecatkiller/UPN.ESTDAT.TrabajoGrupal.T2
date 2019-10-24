#pragma once

namespace Evaluacion_T2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmBuscarAlumno
	/// </summary>
	public ref class frmBuscarAlumno : public System::Windows::Forms::Form
	{
	public:
		frmBuscarAlumno()
		{
			ColaDAlumnoAuxI = ColaDAlumnoAuxD = NULL;
			topeAuxColaDAlumno = 0;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~frmBuscarAlumno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dgvLista;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colApellidos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNombres;
	private: System::Windows::Forms::Button^  btnAgregar;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->colCodigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colApellidos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvLista
			// 
			this->dgvLista->AllowUserToAddRows = false;
			this->dgvLista->AllowUserToDeleteRows = false;
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->colCodigo, this->colApellidos,
					this->colNombres
			});
			this->dgvLista->Location = System::Drawing::Point(23, 50);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->ReadOnly = true;
			this->dgvLista->Size = System::Drawing::Size(448, 301);
			this->dgvLista->TabIndex = 6;
			// 
			// colCodigo
			// 
			this->colCodigo->HeaderText = L"Código Alumno";
			this->colCodigo->Name = L"colCodigo";
			this->colCodigo->ReadOnly = true;
			// 
			// colApellidos
			// 
			this->colApellidos->HeaderText = L"Apellidos";
			this->colApellidos->Name = L"colApellidos";
			this->colApellidos->ReadOnly = true;
			this->colApellidos->Width = 150;
			// 
			// colNombres
			// 
			this->colNombres->HeaderText = L"Nombres";
			this->colNombres->Name = L"colNombres";
			this->colNombres->ReadOnly = true;
			this->colNombres->Width = 150;
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(195, 357);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(102, 43);
			this->btnAgregar->TabIndex = 7;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &frmBuscarAlumno::btnAgregar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(396, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Se debe seleccionar todas las filas a agregar y luego dar click en el botón agreg"
				L"ar.";
			// 
			// frmBuscarAlumno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(483, 412);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->dgvLista);
			this->Name = L"frmBuscarAlumno";
			this->Text = L"frmBuscarAlumno";
			this->Load += gcnew System::EventHandler(this, &frmBuscarAlumno::frmBuscarAlumno_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAgregar_Click(System::Object^  sender, System::EventArgs^  e) {

				 System::Windows::Forms::DataGridViewSelectedRowCollection ^seleccionadas = dgvLista->SelectedRows;

				 for (int counter = 0;
					 counter < (seleccionadas->Count); counter++){
					 String ^codigo = seleccionadas[counter]->Cells[0]->Value->ToString();

					 Alumno al = buscarColaDAlumno(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, StringToChar(codigo));
					 EncolarAlumnoOrdenadamente(topeAuxColaDAlumno, limiteAuxColaDAlumno, ColaDAlumnoAuxI, ColaDAlumnoAuxD, al);
				 }

				 this->Close();
	}
	private: System::Void frmBuscarAlumno_Load(System::Object^  sender, System::EventArgs^  e) {
				 mostrarLista();
	}
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
	};
}
