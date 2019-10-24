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
	private: System::Windows::Forms::DataGridView^  dgvLista;





	private: System::Windows::Forms::Button^  btnBuscarAlumno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colApellidos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNombres;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  colEstado;
	private: System::Windows::Forms::Button^  btnNuevoRegistro;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DateTimePicker^  dtInicio;
	private: System::Windows::Forms::DateTimePicker^  dtFin;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DateTimePicker^  dtFecha;













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
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->colCodigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colApellidos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEstado = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->btnBuscarAlumno = (gcnew System::Windows::Forms::Button());
			this->btnNuevoRegistro = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dtInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtFin = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dtFecha = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
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
			this->btnGrabarRegistro->Location = System::Drawing::Point(212, 463);
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
			// dgvLista
			// 
			this->dgvLista->AllowUserToAddRows = false;
			this->dgvLista->AllowUserToDeleteRows = false;
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->colCodigo, this->colApellidos,
					this->colNombres, this->colEstado
			});
			this->dgvLista->Location = System::Drawing::Point(25, 163);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->Size = System::Drawing::Size(547, 294);
			this->dgvLista->TabIndex = 5;
			// 
			// colCodigo
			// 
			this->colCodigo->HeaderText = L"Código Alumno";
			this->colCodigo->Name = L"colCodigo";
			// 
			// colApellidos
			// 
			this->colApellidos->HeaderText = L"Apellidos";
			this->colApellidos->Name = L"colApellidos";
			this->colApellidos->Width = 150;
			// 
			// colNombres
			// 
			this->colNombres->HeaderText = L"Nombres";
			this->colNombres->Name = L"colNombres";
			this->colNombres->Width = 150;
			// 
			// colEstado
			// 
			this->colEstado->HeaderText = L"Estado";
			this->colEstado->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Asistió", L"Tardanza", L"Falta" });
			this->colEstado->Name = L"colEstado";
			this->colEstado->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->colEstado->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
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
			// btnNuevoRegistro
			// 
			this->btnNuevoRegistro->Location = System::Drawing::Point(497, 12);
			this->btnNuevoRegistro->Name = L"btnNuevoRegistro";
			this->btnNuevoRegistro->Size = System::Drawing::Size(105, 23);
			this->btnNuevoRegistro->TabIndex = 7;
			this->btnNuevoRegistro->Text = L"Nuevo Registro";
			this->btnNuevoRegistro->UseVisualStyleBackColor = true;
			this->btnNuevoRegistro->Click += gcnew System::EventHandler(this, &frmRegistroAsistencia::btnNuevoRegistro_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(194, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Inicio";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(331, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Fin";
			// 
			// dtInicio
			// 
			this->dtInicio->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtInicio->Location = System::Drawing::Point(232, 102);
			this->dtInicio->Name = L"dtInicio";
			this->dtInicio->Size = System::Drawing::Size(93, 20);
			this->dtInicio->TabIndex = 10;
			// 
			// dtFin
			// 
			this->dtFin->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtFin->Location = System::Drawing::Point(358, 102);
			this->dtFin->Name = L"dtFin";
			this->dtFin->Size = System::Drawing::Size(93, 20);
			this->dtFin->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Fecha";
			// 
			// dtFecha
			// 
			this->dtFecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtFecha->Location = System::Drawing::Point(80, 102);
			this->dtFecha->Name = L"dtFecha";
			this->dtFecha->Size = System::Drawing::Size(82, 20);
			this->dtFecha->TabIndex = 13;
			// 
			// frmRegistroAsistencia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 517);
			this->Controls->Add(this->dtFecha);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dtFin);
			this->Controls->Add(this->dtInicio);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnNuevoRegistro);
			this->Controls->Add(this->btnBuscarAlumno);
			this->Controls->Add(this->dgvLista);
			this->Controls->Add(this->cmbDocente);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnGrabarRegistro);
			this->Controls->Add(this->cmbCurso);
			this->Controls->Add(this->label1);
			this->Name = L"frmRegistroAsistencia";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmRegistroAsistencia";
			this->Load += gcnew System::EventHandler(this, &frmRegistroAsistencia::frmRegistroAsistencia_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmRegistroAsistencia_Load(System::Object^  sender, System::EventArgs^  e) {
				 cargarComboBoxCurso();
				 cargarComboBoxDocente();
				 dtInicio->CustomFormat = "hh:mm tt";
				 dtFin->CustomFormat = "hh:mm tt";
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

					 Registro registro;
					 registro.unCurso = curso;
					 registro.unDocente = docente;


					 int ta = 0;
					 NodoDAlumno *I, *D;
					 I = NULL, D = NULL;

					 //NodoDAlumno *AI, *AD;
					 registro.I = registro.D = NULL;

					 for (int i = 0; i < topeAuxColaDAlumno; i++)
					 {
						 String^ value = dgvLista[3, ta]->FormattedValue->ToString();

						 int estado = -1;
						 if (value == "Asistió")
							 estado = 1;
						 else if (value == "Tardanza")
							 estado = 2;
						 else if (value == "Falta")
							 estado = 3;
						 if (estado == -1){
							 MessageBox::Show("Debe elegir un estado para todos los alumnos");
							 return;
						 }
					 }

					 while (!estaVacia(topeAuxColaDAlumno))
					 {
						 Alumno ex = desenColarID(topeAuxColaDAlumno, ColaDAlumnoAuxI, ColaDAlumnoAuxD);

						 String^ value = dgvLista[3, ta]->FormattedValue->ToString();

						 int estado = -1;
						 if (value == "Asistió")
							 estado = 1;
						 else if (value == "Tardanza")
							 estado = 2;
						 else if (value == "Falta")
							 estado = 3;



						 ex.estado = estado;

						 enColarID(registro.tope, registro.lim, registro.I, registro.D, ex);

						 enColarID(ta, limiteAuxColaDAlumno, I, D, ex);
					 }

					 registro.HI.año = dtFecha->Value.Year;
					 registro.HI.mes = dtFecha->Value.Month;
					 registro.HI.dia = dtFecha->Value.Day;
					 registro.HI.hora = dtInicio->Value.Hour;
					 registro.HI.minuto = dtInicio->Value.Minute;

					 registro.HS.año = dtFecha->Value.Year;
					 registro.HS.mes = dtFecha->Value.Month;
					 registro.HS.dia = dtFecha->Value.Day;
					 registro.HS.hora = dtFin->Value.Hour;
					 registro.HS.minuto = dtFin->Value.Minute;

					 if (registro.HS.hora == registro.HI.hora &&
						 registro.HS.minuto == registro.HI.minuto){
						 MessageBox::Show("La hora de inicio no puede ser igual a la de fin");
						 return;
					 }
					 else if (dtFin->Value.Ticks - dtInicio->Value.Ticks < 0){
						 MessageBox::Show("La hora de fin no puede ser menor a la de inicio");
						 return;
					 }

					 registro.horas = DateTime(dtFin->Value.Ticks - dtInicio->Value.Ticks).Minute / 60;

					 string codigo = "R" + ZeroPadNumber(topeColaDRegistro + 1, 7);
					 strcpy(registro.codigo, codigo.c_str());


					 EncolarRegistroOrdenadamente(topeColaDRegistro, limiteColaDRegistro, ColaDRegistroI, ColaDRegistroD, registro);
					 //enColarID(topeColaDRegistro, limiteColaDRegistro, ColaDRegistroI, ColaDRegistroD, registro);

					 topeAuxColaDAlumno = 0;
					 ColaDAlumnoAuxI = ColaDAlumnoAuxD = NULL;

					 MessageBox::Show("Se guardó el registro satisfactoriamente");
					 this->Close();
				 }
	}
	private: void mostrarLista() {
				 dgvLista->Rows->Clear();
				 int ta = 0;
				 NodoDAlumno *I, *D;
				 I = NULL, D = NULL;
				 dgvLista->Rows->Clear();
				 while (!estaVacia(topeAuxColaDAlumno))
				 {
					 Alumno ex = desenColarID(topeAuxColaDAlumno, ColaDAlumnoAuxI, ColaDAlumnoAuxD);
					 dgvLista->Rows->Add(
						 gcnew String(ex.codigo),
						 gcnew String(ex.Apellido),
						 gcnew String(ex.nombre)
						 );

					 enColarID(ta, limiteAuxColaDAlumno, I, D, ex);
				 }
				 while (!estaVacia(ta))
				 {
					 Alumno ex = desenColarID(ta, I, D);
					 enColarID(topeAuxColaDAlumno, limiteAuxColaDAlumno, ColaDAlumnoAuxI, ColaDAlumnoAuxD, ex);
				 }
	}
	private: System::Void btnBuscarAlumno_Click(System::Object^  sender, System::EventArgs^  e) {

				 frmBuscarAlumno ^x = gcnew frmBuscarAlumno;
				 x->ShowDialog();

				 mostrarLista();

	}
	private: System::Void btnNuevoRegistro_Click(System::Object^  sender, System::EventArgs^  e) {
				 frmRegistroAsistencia ^x = gcnew frmRegistroAsistencia();
				 x->Show();

				 this->Close();
	}
	};
}
