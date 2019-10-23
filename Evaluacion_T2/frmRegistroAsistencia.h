#pragma once

namespace Evaluacion_T2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Resumen de frmRegistroAsistencia
	/// </summary>
	public ref class frmRegistroAsistencia : public System::Windows::Forms::Form
	{
	public:
		frmRegistroAsistencia(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~frmRegistroAsistencia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::ComboBox^  cmbCurso;
	private: System::Windows::Forms::Button^  btnGrabarRegistro;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  cmbDocente;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colApellidos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNombres;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colEstado;
	private: System::Windows::Forms::Button^  btnBuscarAlumno;






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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cmbCurso = (gcnew System::Windows::Forms::ComboBox());
			this->btnGrabarRegistro = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbDocente = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->colCodigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colApellidos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnBuscarAlumno = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Curso";
			// 
			// cmbCurso
			// 
			this->cmbCurso->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbCurso->FormattingEnabled = true;
			this->cmbCurso->Location = System::Drawing::Point(80, 29);
			this->cmbCurso->Name = L"cmbCurso";
			this->cmbCurso->Size = System::Drawing::Size(371, 21);
			this->cmbCurso->TabIndex = 1;
			// 
			// btnGrabarRegistro
			// 
			this->btnGrabarRegistro->Location = System::Drawing::Point(216, 463);
			this->btnGrabarRegistro->Name = L"btnGrabarRegistro";
			this->btnGrabarRegistro->Size = System::Drawing::Size(178, 42);
			this->btnGrabarRegistro->TabIndex = 2;
			this->btnGrabarRegistro->Text = L"Guardar Registro";
			this->btnGrabarRegistro->UseVisualStyleBackColor = true;
			this->btnGrabarRegistro->Click += gcnew System::EventHandler(this, &frmRegistroAsistencia::btnGrabarRegistro_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Docente";
			// 
			// cmbDocente
			// 
			this->cmbDocente->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbDocente->FormattingEnabled = true;
			this->cmbDocente->Location = System::Drawing::Point(80, 65);
			this->cmbDocente->Name = L"cmbDocente";
			this->cmbDocente->Size = System::Drawing::Size(371, 21);
			this->cmbDocente->TabIndex = 4;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->colCodigo,
					this->colApellidos, this->colNombres, this->colEstado
			});
			this->dataGridView1->Location = System::Drawing::Point(25, 163);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(547, 294);
			this->dataGridView1->TabIndex = 5;
			// 
			// colCodigo
			// 
			this->colCodigo->HeaderText = L"Código";
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
			// colEstado
			// 
			this->colEstado->HeaderText = L"Estado";
			this->colEstado->Name = L"colEstado";
			this->colEstado->ReadOnly = true;
			// 
			// btnBuscarAlumno
			// 
			this->btnBuscarAlumno->Location = System::Drawing::Point(497, 134);
			this->btnBuscarAlumno->Name = L"btnBuscarAlumno";
			this->btnBuscarAlumno->Size = System::Drawing::Size(75, 23);
			this->btnBuscarAlumno->TabIndex = 6;
			this->btnBuscarAlumno->Text = L"Buscar";
			this->btnBuscarAlumno->UseVisualStyleBackColor = true;
			this->btnBuscarAlumno->Click += gcnew System::EventHandler(this, &frmRegistroAsistencia::btnBuscarAlumno_Click);
			// 
			// frmRegistroAsistencia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 517);
			this->Controls->Add(this->btnBuscarAlumno);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->cmbDocente);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnGrabarRegistro);
			this->Controls->Add(this->cmbCurso);
			this->Controls->Add(this->label1);
			this->Name = L"frmRegistroAsistencia";
			this->Text = L"frmRegistroAsistencia";
			this->Load += gcnew System::EventHandler(this, &frmRegistroAsistencia::frmRegistroAsistencia_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmRegistroAsistencia_Load(System::Object^  sender, System::EventArgs^  e) {
				 cargarComboBoxCurso();
				 cargarComboBoxDocente();
	}
	private:void cargarComboBoxCurso(){
				Dictionary<String^, String^> ^diccionarioCurso = gcnew Dictionary<String^, String^>();
				cmbCurso->Items->Clear();
				int ta = 0;
				NodoSCurso *Ini, *Fin;
				Ini = NULL, Fin = NULL;
				Curso dato;

				while (!estaVacia(topePilaCurso))
				{
					Curso ex = desaPilar(topePilaCurso, PilaCursoI, PilaCursoF);
					diccionarioCurso->Add(gcnew String(ex.codigo), gcnew String(ex.nombre));
					apilar(ta, limitePilaCurso, Ini, Fin, ex);
				}
				while (!estaVacia(ta))
				{
					Curso ex = desaPilar(ta, Ini, Fin);
					apilar(topePilaCurso, limitePilaCurso, PilaCursoI, PilaCursoF, ex);
				}

				cmbCurso->DisplayMember = "Value";
				cmbCurso->ValueMember = "Key";
				cmbCurso->DataSource = gcnew BindingSource(diccionarioCurso, nullptr);
				cmbCurso->SelectedIndex = -1;
	}
	private:void cargarComboBoxDocente(){
				Dictionary<String^, String^> ^diccionario = gcnew Dictionary<String^, String^>();
				cmbDocente->Items->Clear();
				int ta = 0;
				NodoSDocente *Ini, *Fin;
				Ini = NULL, Fin = NULL;
				Docente dato;

				while (!estaVacia(topePilaDocente))
				{
					Docente ex = desaPilar(topePilaDocente, PilaDocenteI, PilaDocenteF);
					diccionario->Add(gcnew String(ex.codigo), gcnew String(ex.nombresAP));
					apilar(ta, limitePilaDocente, Ini, Fin, ex);
				}
				while (!estaVacia(ta))
				{
					Docente ex = desaPilar(ta, Ini, Fin);
					apilar(topePilaDocente, limitePilaDocente, PilaDocenteI, PilaDocenteF, ex);
				}

				cmbDocente->DisplayMember = "Value";
				cmbDocente->ValueMember = "Key";
				cmbDocente->DataSource = gcnew BindingSource(diccionario, nullptr);
				cmbDocente->SelectedIndex = -1;
	}
	private: System::Void btnGrabarRegistro_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (cmbCurso->SelectedIndex != -1 && cmbDocente->SelectedIndex != -1){
					 char* codigoCurso = StringToChar(((KeyValuePair<String^, String^>)cmbCurso->SelectedItem).Key);
					 char* codigoDocente = StringToChar(((KeyValuePair<String^, String^>)cmbDocente->SelectedItem).Key);


					 Curso curso = buscarPilaCurso(topePilaCurso, limitePilaCurso, PilaCursoI, PilaCursoF, codigoCurso);
					 Docente docente = buscarPilaDocente(topePilaDocente, limitePilaDocente, PilaDocenteI, PilaDocenteF, codigoDocente);
				 }
	}
	private: System::Void btnBuscarAlumno_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
