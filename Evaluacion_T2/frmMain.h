#pragma once

namespace Evaluacion_T2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
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
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  registroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cursoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  docenteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  asistenciaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  alumnoToolStripMenuItem;
	protected:

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->registroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cursoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->docenteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asistenciaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alumnoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->registroToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// registroToolStripMenuItem
			// 
			this->registroToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->cursoToolStripMenuItem,
					this->docenteToolStripMenuItem, this->alumnoToolStripMenuItem, this->asistenciaToolStripMenuItem
			});
			this->registroToolStripMenuItem->Name = L"registroToolStripMenuItem";
			this->registroToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->registroToolStripMenuItem->Text = L"Registro";
			// 
			// cursoToolStripMenuItem
			// 
			this->cursoToolStripMenuItem->Name = L"cursoToolStripMenuItem";
			this->cursoToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->cursoToolStripMenuItem->Text = L"Curso";
			this->cursoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::cursoToolStripMenuItem_Click);
			// 
			// docenteToolStripMenuItem
			// 
			this->docenteToolStripMenuItem->Name = L"docenteToolStripMenuItem";
			this->docenteToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->docenteToolStripMenuItem->Text = L"Docente";
			this->docenteToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::docenteToolStripMenuItem_Click);
			// 
			// asistenciaToolStripMenuItem
			// 
			this->asistenciaToolStripMenuItem->Name = L"asistenciaToolStripMenuItem";
			this->asistenciaToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->asistenciaToolStripMenuItem->Text = L"Asistencia";
			this->asistenciaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::asistenciaToolStripMenuItem_Click);
			// 
			// alumnoToolStripMenuItem
			// 
			this->alumnoToolStripMenuItem->Name = L"alumnoToolStripMenuItem";
			this->alumnoToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->alumnoToolStripMenuItem->Text = L"Alumno";
			this->alumnoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::alumnoToolStripMenuItem_Click);
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmMain";
			this->Text = L"frmMain";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cursoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 frmRegistroCurso ^x = gcnew frmRegistroCurso;
				 x->MdiParent = this;
				 x->Show();
	}
	private: System::Void docenteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 frmRegistroDocente ^x = gcnew frmRegistroDocente;
				 x->MdiParent = this;
				 x->Show();
	}
	private: System::Void asistenciaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 frmRegistroAsistencia  ^x = gcnew frmRegistroAsistencia;
				 x->MdiParent = this;
				 x->Show();
	}
	private: System::Void frmMain_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->IsMdiContainer = true;
	}
	private: System::Void alumnoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 frmRegistroAlumno  ^x = gcnew frmRegistroAlumno;
				 x->MdiParent = this;
				 x->Show();
	}
	};
}
