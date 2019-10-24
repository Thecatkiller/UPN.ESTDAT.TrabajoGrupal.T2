#pragma once

namespace Evaluacion_T2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmReporteProfesor
	/// </summary>
	public ref class frmReporteProfesor : public System::Windows::Forms::Form
	{
	public:
		frmReporteProfesor(void)
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
		~frmReporteProfesor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^  dtInicio;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DateTimePicker^  dtFin;
	private: System::Windows::Forms::DataGridView^  dgvLista;



	private: System::Windows::Forms::Button^  btnReport;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colCreditos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colHorasTrabajadas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colTotalPagar;






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
			this->dtInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dtFin = (gcnew System::Windows::Forms::DateTimePicker());
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->btnReport = (gcnew System::Windows::Forms::Button());
			this->colCodigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCreditos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colHorasTrabajadas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTotalPagar = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// dtInicio
			// 
			this->dtInicio->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtInicio->Location = System::Drawing::Point(50, 21);
			this->dtInicio->Name = L"dtInicio";
			this->dtInicio->Size = System::Drawing::Size(90, 20);
			this->dtInicio->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Inicio";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(183, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Fin";
			// 
			// dtFin
			// 
			this->dtFin->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtFin->Location = System::Drawing::Point(209, 21);
			this->dtFin->Name = L"dtFin";
			this->dtFin->Size = System::Drawing::Size(90, 20);
			this->dtFin->TabIndex = 2;
			// 
			// dgvLista
			// 
			this->dgvLista->AllowUserToAddRows = false;
			this->dgvLista->AllowUserToDeleteRows = false;
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->colCodigo, this->colNombre,
					this->colCreditos, this->colHorasTrabajadas, this->colTotalPagar
			});
			this->dgvLista->Location = System::Drawing::Point(15, 77);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->ReadOnly = true;
			this->dgvLista->Size = System::Drawing::Size(636, 297);
			this->dgvLista->TabIndex = 24;
			// 
			// btnReport
			// 
			this->btnReport->Location = System::Drawing::Point(526, 18);
			this->btnReport->Name = L"btnReport";
			this->btnReport->Size = System::Drawing::Size(125, 30);
			this->btnReport->TabIndex = 25;
			this->btnReport->Text = L"Buscar";
			this->btnReport->UseVisualStyleBackColor = true;
			this->btnReport->Click += gcnew System::EventHandler(this, &frmReporteProfesor::btnReport_Click);
			// 
			// colCodigo
			// 
			this->colCodigo->HeaderText = L"Código";
			this->colCodigo->Name = L"colCodigo";
			this->colCodigo->ReadOnly = true;
			// 
			// colNombre
			// 
			this->colNombre->HeaderText = L"Nombres Completos";
			this->colNombre->Name = L"colNombre";
			this->colNombre->ReadOnly = true;
			this->colNombre->Width = 180;
			// 
			// colCreditos
			// 
			this->colCreditos->HeaderText = L"Sueldo/Hora";
			this->colCreditos->Name = L"colCreditos";
			this->colCreditos->ReadOnly = true;
			// 
			// colHorasTrabajadas
			// 
			this->colHorasTrabajadas->HeaderText = L"Horas Trabajadas";
			this->colHorasTrabajadas->Name = L"colHorasTrabajadas";
			this->colHorasTrabajadas->ReadOnly = true;
			// 
			// colTotalPagar
			// 
			this->colTotalPagar->HeaderText = L"Total a Pagar";
			this->colTotalPagar->Name = L"colTotalPagar";
			this->colTotalPagar->ReadOnly = true;
			// 
			// frmReporteProfesor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(658, 386);
			this->Controls->Add(this->btnReport);
			this->Controls->Add(this->dgvLista);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dtFin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dtInicio);
			this->Name = L"frmReporteProfesor";
			this->Text = L"frmReporteProfesor";
			this->Load += gcnew System::EventHandler(this, &frmReporteProfesor::frmReporteProfesor_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnReport_Click(System::Object^  sender, System::EventArgs^  e) {

				 mostrarLista();

	}



	private: void mostrarLista() {

				 DateTime dtHoraInicio = DateTime(dtInicio->Value.Year, dtInicio->Value.Month, dtInicio->Value.Day, 0, 0, 0);
				 DateTime dtHoraFin = DateTime(dtFin->Value.Year, dtFin->Value.Month, dtFin->Value.Day, 23, 59, 59);

				 dgvLista->Rows->Clear();
				 int ta = 0;
				 NodoSDocente *Ini, *Fin;
				 double sueldoPagar = 0;
				 int horasTrabajadas = 0;
				 Ini = NULL, Fin = NULL;
				 dgvLista->Rows->Clear();
				 while (!estaVacia(topePilaDocente))
				 {
					 sueldoPagar = 0;
					 horasTrabajadas = 0;
					 Docente ex = desaPilar(topePilaDocente, PilaDocenteI, PilaDocenteF);

					 NodoSRegistro *lRegistros = buscarRegistrosPorDocente(topeColaDRegistro, limiteColaDRegistro, ColaDRegistroI, ColaDRegistroD, ex.codigo);

					 for (NodoSRegistro *aux = lRegistros; aux != NULL; aux = aux->puntero)
					 {
						 DateTime horaIni = DateTime(aux->dato.HI.año, aux->dato.HI.mes, aux->dato.HI.dia, 0, 0, 0);
						 DateTime horaFin = DateTime(aux->dato.HS.año, aux->dato.HS.mes, aux->dato.HS.dia, 23, 59, 59);
						
						 if (horaIni >= dtHoraInicio && horaFin <= dtHoraFin){
							 DateTime horasTIni = DateTime(aux->dato.HI.año, aux->dato.HI.mes, aux->dato.HI.dia, aux->dato.HI.hora, aux->dato.HI.minuto, 0);
							 DateTime horasTFin = DateTime(aux->dato.HS.año, aux->dato.HS.mes, aux->dato.HS.dia, aux->dato.HS.hora, aux->dato.HS.minuto, 0);

							 TimeSpan ts = TimeSpan(horasTFin.Ticks - horasTIni.Ticks);							 
							 horasTrabajadas += ts.TotalMinutes / 60;
						 } 
							
					 }

					 sueldoPagar = ex.sueldoxHora * horasTrabajadas;

					 dgvLista->Rows->Add(
						 gcnew String(ex.codigo),
						 gcnew String(ex.nombresAP),
						 "S/ " + ex.sueldoxHora.ToString("N2"),
						 horasTrabajadas + " horas",
						 "S/ " + sueldoPagar.ToString("N2")
						 );

					 apilar(ta, limitePilaDocente, Ini, Fin, ex);
				 }
				 while (!estaVacia(ta))
				 {
					 Docente ex = desaPilar(ta, Ini, Fin);
					 apilar(topePilaDocente, limitePilaDocente, PilaDocenteI, PilaDocenteF, ex);
				 }
	}

	private: System::Void frmReporteProfesor_Load(System::Object^  sender, System::EventArgs^  e) {



	}
	};
}
