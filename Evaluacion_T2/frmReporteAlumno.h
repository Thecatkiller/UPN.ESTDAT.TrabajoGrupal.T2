#pragma once

namespace Evaluacion_T2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmReporteAlumno
	/// </summary>
	public ref class frmReporteAlumno : public System::Windows::Forms::Form
	{
	public:
		frmReporteAlumno(void)
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
		~frmReporteAlumno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dgvLista;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colApellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colTardanzas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colFaltas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colFaltasTotales;
	private: System::Windows::Forms::Button^  btnReport;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DateTimePicker^  dtFin;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DateTimePicker^  dtInicio;
	private: System::Windows::Forms::ComboBox^  cmbCurso;
	private: System::Windows::Forms::Label^  label3;

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
			this->colApellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTardanzas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFaltas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFaltasTotales = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnReport = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dtFin = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dtInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->cmbCurso = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvLista
			// 
			this->dgvLista->AllowUserToAddRows = false;
			this->dgvLista->AllowUserToDeleteRows = false;
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->colCodigo, this->colApellido,
					this->colNombre, this->colTardanzas, this->colFaltas, this->colFaltasTotales
			});
			this->dgvLista->Location = System::Drawing::Point(23, 61);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->ReadOnly = true;
			this->dgvLista->Size = System::Drawing::Size(824, 438);
			this->dgvLista->TabIndex = 22;
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
			// colTardanzas
			// 
			this->colTardanzas->HeaderText = L"Tardanzas";
			this->colTardanzas->Name = L"colTardanzas";
			this->colTardanzas->ReadOnly = true;
			// 
			// colFaltas
			// 
			this->colFaltas->HeaderText = L"Faltas";
			this->colFaltas->Name = L"colFaltas";
			this->colFaltas->ReadOnly = true;
			// 
			// colFaltasTotales
			// 
			this->colFaltasTotales->HeaderText = L"Faltas Totales";
			this->colFaltasTotales->Name = L"colFaltasTotales";
			this->colFaltasTotales->ReadOnly = true;
			// 
			// btnReport
			// 
			this->btnReport->Location = System::Drawing::Point(722, 10);
			this->btnReport->Name = L"btnReport";
			this->btnReport->Size = System::Drawing::Size(125, 30);
			this->btnReport->TabIndex = 30;
			this->btnReport->Text = L"Buscar";
			this->btnReport->UseVisualStyleBackColor = true;
			this->btnReport->Click += gcnew System::EventHandler(this, &frmReporteAlumno::btnReport_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(155, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Fin";
			// 
			// dtFin
			// 
			this->dtFin->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtFin->Location = System::Drawing::Point(181, 16);
			this->dtFin->Name = L"dtFin";
			this->dtFin->Size = System::Drawing::Size(90, 20);
			this->dtFin->TabIndex = 28;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Inicio";
			// 
			// dtInicio
			// 
			this->dtInicio->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtInicio->Location = System::Drawing::Point(55, 16);
			this->dtInicio->Name = L"dtInicio";
			this->dtInicio->Size = System::Drawing::Size(90, 20);
			this->dtInicio->TabIndex = 26;
			// 
			// cmbCurso
			// 
			this->cmbCurso->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbCurso->FormattingEnabled = true;
			this->cmbCurso->Location = System::Drawing::Point(333, 17);
			this->cmbCurso->Name = L"cmbCurso";
			this->cmbCurso->Size = System::Drawing::Size(371, 21);
			this->cmbCurso->TabIndex = 32;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(293, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 13);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Curso";
			// 
			// frmReporteAlumno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(874, 511);
			this->Controls->Add(this->cmbCurso);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnReport);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dtFin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dtInicio);
			this->Controls->Add(this->dgvLista);
			this->Name = L"frmReporteAlumno";
			this->Text = L"frmReporteAlumno";
			this->Load += gcnew System::EventHandler(this, &frmReporteAlumno::frmReporteAlumno_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnReport_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (cmbCurso->SelectedIndex != -1){
					 mostrarLista();
				 }
				 else{
					 MessageBox::Show("Debe elegir un curso");
				 }
	}
	private: void mostrarLista() {

				 char* codigoCurso = StringToChar(((KeyValuePair<String^, String^>)cmbCurso->SelectedItem).Key);
				 Curso curso = buscarPilaCurso(topePilaCurso, limitePilaCurso, PilaCursoI, PilaCursoF, codigoCurso);

				 DateTime dtHoraInicio = DateTime(dtInicio->Value.Year, dtInicio->Value.Month, dtInicio->Value.Day, 0, 0, 0);
				 DateTime dtHoraFin = DateTime(dtFin->Value.Year, dtFin->Value.Month, dtFin->Value.Day, 23, 59, 59);

				 dgvLista->Rows->Clear();
				 int ta = 0;
				 NodoDAlumno *I, *D;
				 I = NULL, D = NULL;
				 dgvLista->Rows->Clear();

				 int tardanzas, faltas, faltasTotales;

				 while (!estaVacia(topeColaDAlumno))
				 {
					 Alumno * alumnoBuscar = NULL;
					 tardanzas = faltas = faltasTotales = 0;
					 Alumno ex = desenColarID(topeColaDAlumno, ColaDAlumnoI, ColaDAlumnoD);

					 for (NodoDRegistro *aux = ColaDRegistroI; aux != NULL; aux = aux->der){
						 DateTime horaIni = DateTime(aux->dato.HI.año, aux->dato.HI.mes, aux->dato.HI.dia, 0, 0, 0);
						 DateTime horaFin = DateTime(aux->dato.HS.año, aux->dato.HS.mes, aux->dato.HS.dia, 23, 59, 59);

						 if (horaIni >= dtHoraInicio && horaFin <= dtHoraFin){
							 if (strcmp(aux->dato.unCurso.codigo, curso.codigo) == 0){
								 alumnoBuscar = buscarAlumnoEnColaD(aux->dato.tope, aux->dato.lim, aux->dato.I, aux->dato.D, ex.codigo);

								 if (alumnoBuscar != NULL){
									 if (alumnoBuscar->estado == 2)
										 tardanzas++;
									 else if (alumnoBuscar->estado == 3)
										 faltas++;
								 }
							 }
						 }
					 }

					 if (alumnoBuscar != NULL){
						 faltasTotales = faltas + ((int)(tardanzas / 2));

						 dgvLista->Rows->Add(
							 gcnew String(ex.codigo),
							 gcnew String(ex.Apellido),
							 gcnew String(ex.nombre),
							 tardanzas + "",
							 faltas + "",
							 faltasTotales + ""
							 );
					 }
					 enColarID(ta, limiteColaDAlumno, I, D, ex);
				 }
				 while (!estaVacia(ta))
				 {
					 Alumno ex = desenColarID(ta, I, D);
					 enColarID(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, ex);
				 }
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
	private: System::Void frmReporteAlumno_Load(System::Object^  sender, System::EventArgs^  e) {
				 cargarComboBoxCurso();
	}
	};
}
