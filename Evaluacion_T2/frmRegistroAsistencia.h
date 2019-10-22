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
			this->cmbCurso->Size = System::Drawing::Size(292, 21);
			this->cmbCurso->TabIndex = 1;
			// 
			// btnGrabarRegistro
			// 
			this->btnGrabarRegistro->Location = System::Drawing::Point(194, 297);
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
			this->label2->Location = System::Drawing::Point(22, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Docente";
			// 
			// cmbDocente
			// 
			this->cmbDocente->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbDocente->FormattingEnabled = true;
			this->cmbDocente->Location = System::Drawing::Point(80, 73);
			this->cmbDocente->Name = L"cmbDocente";
			this->cmbDocente->Size = System::Drawing::Size(292, 21);
			this->cmbDocente->TabIndex = 4;
			// 
			// frmRegistroAsistencia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 463);
			this->Controls->Add(this->cmbDocente);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnGrabarRegistro);
			this->Controls->Add(this->cmbCurso);
			this->Controls->Add(this->label1);
			this->Name = L"frmRegistroAsistencia";
			this->Text = L"frmRegistroAsistencia";
			this->Load += gcnew System::EventHandler(this, &frmRegistroAsistencia::frmRegistroAsistencia_Load);
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

				 char* codigoCurso = StringToChar(((KeyValuePair<String^, String^>)cmbCurso->SelectedItem).Key);
				 char* codigoDocente = StringToChar(((KeyValuePair<String^, String^>)cmbDocente->SelectedItem).Key);
	}
	};
}
