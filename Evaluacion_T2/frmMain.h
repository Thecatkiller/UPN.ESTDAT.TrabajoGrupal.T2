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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
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
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido del m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->registroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cursoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->docenteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->registroToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->cursoToolStripMenuItem,
					this->docenteToolStripMenuItem
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
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmMain";
			this->Text = L"frmMain";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cursoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 frmRegistroCurso ^x = gcnew frmRegistroCurso;
				 x->Show();
	}
	private: System::Void docenteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 frmRegistroDocente ^x = gcnew frmRegistroDocente;
				 x->Show();
	}
	};
}