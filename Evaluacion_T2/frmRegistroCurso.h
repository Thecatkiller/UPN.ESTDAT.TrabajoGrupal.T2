#pragma once

namespace Evaluacion_T2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmRegistroCurso
	/// </summary>
	public ref class frmRegistroCurso : public System::Windows::Forms::Form
	{
	public:
		frmRegistroCurso(void)
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
		~frmRegistroCurso()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dgvLista;
	protected:



	private: System::Windows::Forms::Button^  btnAgregar;
	private: System::Windows::Forms::TextBox^  txtCreditos;
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
			this->txtCreditos = (gcnew System::Windows::Forms::TextBox());
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
			this->dgvLista->Location = System::Drawing::Point(12, 128);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->ReadOnly = true;
			this->dgvLista->Size = System::Drawing::Size(430, 227);
			this->dgvLista->TabIndex = 17;
			// 
			// colCodigo
			// 
			this->colCodigo->HeaderText = L"Código";
			this->colCodigo->Name = L"colCodigo";
			this->colCodigo->ReadOnly = true;
			// 
			// colNombre
			// 
			this->colNombre->HeaderText = L"Nombre";
			this->colNombre->Name = L"colNombre";
			this->colNombre->ReadOnly = true;
			this->colNombre->Width = 180;
			// 
			// colCreditos
			// 
			this->colCreditos->HeaderText = L"Créditos";
			this->colCreditos->Name = L"colCreditos";
			this->colCreditos->ReadOnly = true;
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(367, 69);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 23);
			this->btnAgregar->TabIndex = 16;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &frmRegistroCurso::btnAgregar_Click);
			// 
			// txtCreditos
			// 
			this->txtCreditos->Location = System::Drawing::Point(322, 43);
			this->txtCreditos->Name = L"txtCreditos";
			this->txtCreditos->Size = System::Drawing::Size(120, 20);
			this->txtCreditos->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(172, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Créditos";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(227, 14);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(215, 20);
			this->txtNombre->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(172, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Nombre";
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(367, 98);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 18;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &frmRegistroCurso::btnEliminar_Click);
			// 
			// frmRegistroCurso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 371);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->dgvLista);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->txtCreditos);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label1);
			this->Name = L"frmRegistroCurso";
			this->Text = L"frmRegistroCurso";
			this->Load += gcnew System::EventHandler(this, &frmRegistroCurso::frmRegistroCurso_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void mostrarLista() {
				 dgvLista->Rows->Clear();


				 int ta = 0;
				 NodoSCurso *Ini, *Fin;
				 Ini = NULL, Fin = NULL;
				 dgvLista->Rows->Clear();
				 while (!estaVacia(topePilaCurso))
				 {
					 Curso ex = desaPilar(topePilaCurso, PilaCursoI, PilaCursoF);
					 dgvLista->Rows->Add(
						 gcnew String(ex.codigo),
						 gcnew String(ex.nombre),
						 gcnew String(ex.creditos + "")
						 );

					 apilar(ta, limitePilaCurso, Ini, Fin, ex);
				 }
				 while (!estaVacia(ta))
				 {
					 Curso ex = desaPilar(ta, Ini, Fin);
					 apilar(topePilaCurso, limitePilaCurso, PilaCursoI, PilaCursoF, ex);
				 }
	}
	private: void limpiarCampos() {
				 limpiarTextBoxs(this->Controls);

	}
	private: System::Void btnAgregar_Click(System::Object^  sender, System::EventArgs^  e) {

				 string codigo = "C" + ZeroPadNumber(topePilaCurso + 1, 7);

				 Curso curso;
				 strcpy(curso.codigo, codigo.c_str());
				 strcpy(curso.nombre, StringToChar(txtNombre));

				 curso.creditos = Convert::ToInt32(txtCreditos->Text);

				 apilar(topePilaCurso, limitePilaCurso, PilaCursoI, PilaCursoF, curso);
				 limpiarCampos();
				 mostrarLista();

	}
	private: System::Void frmRegistroCurso_Load(System::Object^  sender, System::EventArgs^  e) {
				 mostrarLista();
	}
	private: System::Void btnEliminar_Click(System::Object^  sender, System::EventArgs^  e) {
				  System::Windows::Forms::DataGridViewSelectedRowCollection ^seleccionadas = dgvLista->SelectedRows;

				 if (seleccionadas->Count == 1){
					 String ^codigo = seleccionadas[0]->Cells[0]->Value->ToString();
					 Curso cursoSeleccionado = buscarPilaCurso(topePilaCurso, limitePilaCurso, PilaCursoI, PilaCursoF, StringToChar(codigo));

					 NodoSRegistro *listaRegistro = buscarRegistrosPorCurso(topeColaDRegistro, limiteColaDRegistro, ColaDRegistroI, ColaDRegistroD, cursoSeleccionado.codigo);

					 if (listaRegistro == NULL){
						 int ta = 0;
						 NodoSCurso *Ini, *Fin;
						 Ini = NULL, Fin = NULL;
						 dgvLista->Rows->Clear();
						 while (!estaVacia(topePilaCurso))
						 {
							 Curso ex = desaPilar(topePilaCurso, PilaCursoI, PilaCursoF);
							 if (strcmpi(ex.codigo, cursoSeleccionado.codigo) != 0)
								 apilar(ta, limitePilaCurso, Ini, Fin, ex);
						 }
						 while (!estaVacia(ta))
						 {
							 Curso ex = desaPilar(ta, Ini, Fin);
							 apilar(topePilaCurso, limitePilaCurso, PilaCursoI, PilaCursoF, ex);
						 }
						 mostrarLista();
					 }
					 else{
						 MessageBox::Show("No se puede eliminar el curso");
					 }

				 }
				 else{
					 MessageBox::Show("Debe seleccionar una fila");
				 }
	}
};
}
