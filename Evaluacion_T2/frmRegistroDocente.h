#pragma once

namespace Evaluacion_T2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmRegistroDocente
	/// </summary>
	public ref class frmRegistroDocente : public System::Windows::Forms::Form
	{
	public:
		frmRegistroDocente(void)
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
		~frmRegistroDocente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dgvLista;
	protected:



	private: System::Windows::Forms::Button^  btnAgregar;
	private: System::Windows::Forms::TextBox^  txtSueldoPorHora;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colCreditos;
	private: System::Windows::Forms::Button^  btnEliminar;

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
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCreditos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->txtSueldoPorHora = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvLista
			// 
			this->dgvLista->AllowUserToAddRows = false;
			this->dgvLista->AllowUserToDeleteRows = false;
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->colCodigo, this->colNombre,
					this->colCreditos
			});
			this->dgvLista->Location = System::Drawing::Point(12, 130);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->ReadOnly = true;
			this->dgvLista->Size = System::Drawing::Size(440, 239);
			this->dgvLista->TabIndex = 23;
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
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(367, 71);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 23);
			this->btnAgregar->TabIndex = 22;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &frmRegistroDocente::btnAgregar_Click);
			// 
			// txtSueldoPorHora
			// 
			this->txtSueldoPorHora->Location = System::Drawing::Point(322, 45);
			this->txtSueldoPorHora->Name = L"txtSueldoPorHora";
			this->txtSueldoPorHora->Size = System::Drawing::Size(120, 20);
			this->txtSueldoPorHora->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(172, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Sueldo por Hora";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(227, 16);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(215, 20);
			this->txtNombre->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(123, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Nombre Completo:";
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(367, 101);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 24;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &frmRegistroDocente::btnEliminar_Click);
			// 
			// frmRegistroDocente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(464, 381);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->dgvLista);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->txtSueldoPorHora);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label1);
			this->Name = L"frmRegistroDocente";
			this->Text = L"frmRegistroDocente";
			this->Load += gcnew System::EventHandler(this, &frmRegistroDocente::frmRegistroDocente_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void mostrarLista() {
				 dgvLista->Rows->Clear();
				 int ta = 0;
				 NodoSDocente *Ini, *Fin;
				 Ini = NULL, Fin = NULL;
				 dgvLista->Rows->Clear();
				 while (!estaVacia(topePilaDocente))
				 {
					 Docente ex = desaPilar(topePilaDocente, PilaDocenteI, PilaDocenteF);
					 dgvLista->Rows->Add(
						 gcnew String(ex.codigo),
						 gcnew String(ex.nombresAP),
						 "S/ " + ex.sueldoxHora.ToString("N2")
						 );

					 apilar(ta, limitePilaDocente, Ini, Fin, ex);
				 }
				 while (!estaVacia(ta))
				 {
					 Docente ex = desaPilar(ta, Ini, Fin);
					 apilar(topePilaDocente, limitePilaDocente, PilaDocenteI, PilaDocenteF, ex);
				 }
	}
	private: void limpiarCampos() {
				 limpiarTextBoxs(this->Controls);

	}
	private: System::Void frmRegistroDocente_Load(System::Object^  sender, System::EventArgs^  e) {
				 mostrarLista();
	}
	private: System::Void btnAgregar_Click(System::Object^  sender, System::EventArgs^  e) {

				 string codigo = "D" + ZeroPadNumber(topePilaDocente + 1, 5);
				 apilar(topePilaDocente, limitePilaDocente, PilaDocenteI, PilaDocenteF,
					 setDocente(&codigo[0], StringToChar(txtNombre), Convert::ToDouble(txtSueldoPorHora->Text)));
				 limpiarCampos();
				 mostrarLista();



	}
	private: System::Void btnEliminar_Click(System::Object^  sender, System::EventArgs^  e) {

				 System::Windows::Forms::DataGridViewSelectedRowCollection ^seleccionadas = dgvLista->SelectedRows;

				 if (seleccionadas->Count == 1){
					 String ^codigo = seleccionadas[0]->Cells[0]->Value->ToString();
					 Docente docenteSeleccionado = buscarPilaDocente(topePilaDocente, limitePilaDocente, PilaDocenteI, PilaDocenteF, StringToChar(codigo));


					 //Implementar logica para borrar, preguntar si el docenteSeleccionado se encuentra registrado en un cola de docente

					 mostrarLista();
				 }
				 else{
					 MessageBox::Show("Debe seleccionar una fila");
				 }





	}
	};
}
