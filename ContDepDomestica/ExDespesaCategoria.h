#pragma once

namespace ContDepDomestica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ExDespesaCategoria
	/// </summary>
	public ref class ExDespesaCategoria : public System::Windows::Forms::Form
	{
	public:
		ExDespesaCategoria(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ExDespesaCategoria()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Btn_ImpDespCategoria;
	protected:

	protected:
	private: System::Windows::Forms::Button^ btn_sair;
	private: System::Windows::Forms::ListBox^ lbx_exiDespCategoria;
	private: System::Windows::Forms::ComboBox^ cbx_exibirDespCategoria;



	protected:


	protected:


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Btn_ImpDespCategoria = (gcnew System::Windows::Forms::Button());
			this->btn_sair = (gcnew System::Windows::Forms::Button());
			this->lbx_exiDespCategoria = (gcnew System::Windows::Forms::ListBox());
			this->cbx_exibirDespCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// Btn_ImpDespCategoria
			// 
			this->Btn_ImpDespCategoria->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Btn_ImpDespCategoria->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Btn_ImpDespCategoria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Btn_ImpDespCategoria->ForeColor = System::Drawing::Color::Blue;
			this->Btn_ImpDespCategoria->Location = System::Drawing::Point(516, 411);
			this->Btn_ImpDespCategoria->Margin = System::Windows::Forms::Padding(5);
			this->Btn_ImpDespCategoria->Name = L"Btn_ImpDespCategoria";
			this->Btn_ImpDespCategoria->Size = System::Drawing::Size(213, 38);
			this->Btn_ImpDespCategoria->TabIndex = 32;
			this->Btn_ImpDespCategoria->Text = L"Imprimir";
			this->Btn_ImpDespCategoria->UseVisualStyleBackColor = true;
			// 
			// btn_sair
			// 
			this->btn_sair->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_sair->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_sair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sair->ForeColor = System::Drawing::Color::Blue;
			this->btn_sair->Location = System::Drawing::Point(516, 472);
			this->btn_sair->Margin = System::Windows::Forms::Padding(5);
			this->btn_sair->Name = L"btn_sair";
			this->btn_sair->Size = System::Drawing::Size(213, 38);
			this->btn_sair->TabIndex = 31;
			this->btn_sair->Text = L"Sair";
			this->btn_sair->UseVisualStyleBackColor = true;
			this->btn_sair->Click += gcnew System::EventHandler(this, &ExDespesaCategoria::btn_sair_Click);
			// 
			// lbx_exiDespCategoria
			// 
			this->lbx_exiDespCategoria->FormattingEnabled = true;
			this->lbx_exiDespCategoria->Location = System::Drawing::Point(12, 12);
			this->lbx_exiDespCategoria->Name = L"lbx_exiDespCategoria";
			this->lbx_exiDespCategoria->Size = System::Drawing::Size(471, 498);
			this->lbx_exiDespCategoria->TabIndex = 30;
			// 
			// cbx_exibirDespCategoria
			// 
			this->cbx_exibirDespCategoria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cbx_exibirDespCategoria->FormattingEnabled = true;
			this->cbx_exibirDespCategoria->Location = System::Drawing::Point(516, 144);
			this->cbx_exibirDespCategoria->Name = L"cbx_exibirDespCategoria";
			this->cbx_exibirDespCategoria->Size = System::Drawing::Size(213, 24);
			this->cbx_exibirDespCategoria->TabIndex = 33;
			// 
			// ExDespesaCategoria
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(754, 521);
			this->ControlBox = false;
			this->Controls->Add(this->cbx_exibirDespCategoria);
			this->Controls->Add(this->Btn_ImpDespCategoria);
			this->Controls->Add(this->btn_sair);
			this->Controls->Add(this->lbx_exiDespCategoria);
			this->Name = L"ExDespesaCategoria";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Exibir Despesa por Categoria";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_sair_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
