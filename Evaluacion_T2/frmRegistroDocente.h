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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
		/// </summary>
		~frmRegistroDocente()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// frmRegistroDocente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(789, 381);
			this->Name = L"frmRegistroDocente";
			this->Text = L"frmRegistroDocente";
			this->Load += gcnew System::EventHandler(this, &frmRegistroDocente::frmRegistroDocente_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmRegistroDocente_Load(System::Object^  sender, System::EventArgs^  e) {


	}
	};
}
