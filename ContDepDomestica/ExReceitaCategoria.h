#pragma once

namespace ContDepDomestica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ExReceitaCategoria
	/// </summary>
	public ref class ExReceitaCategoria : public System::Windows::Forms::Form
	{
	public:
		ExReceitaCategoria(void)
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
		~ExReceitaCategoria()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cbx_exibirRecCategoria;
	private: System::Windows::Forms::Button^ Btn_ImpRecCategoria;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btn_sair;
	private: System::Windows::Forms::ListBox^ lbx_exiRecCategoria;


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
			this->cbx_exibirRecCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->Btn_ImpRecCategoria = (gcnew System::Windows::Forms::Button());
			this->btn_sair = (gcnew System::Windows::Forms::Button());
			this->lbx_exiRecCategoria = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// cbx_exibirRecCategoria
			// 
			this->cbx_exibirRecCategoria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cbx_exibirRecCategoria->FormattingEnabled = true;
			this->cbx_exibirRecCategoria->Location = System::Drawing::Point(516, 144);
			this->cbx_exibirRecCategoria->Name = L"cbx_exibirRecCategoria";
			this->cbx_exibirRecCategoria->Size = System::Drawing::Size(213, 24);
			this->cbx_exibirRecCategoria->TabIndex = 37;
			// 
			// Btn_ImpRecCategoria
			// 
			this->Btn_ImpRecCategoria->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Btn_ImpRecCategoria->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Btn_ImpRecCategoria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Btn_ImpRecCategoria->ForeColor = System::Drawing::Color::Blue;
			this->Btn_ImpRecCategoria->Location = System::Drawing::Point(516, 411);
			this->Btn_ImpRecCategoria->Margin = System::Windows::Forms::Padding(5);
			this->Btn_ImpRecCategoria->Name = L"Btn_ImpRecCategoria";
			this->Btn_ImpRecCategoria->Size = System::Drawing::Size(213, 38);
			this->Btn_ImpRecCategoria->TabIndex = 36;
			this->Btn_ImpRecCategoria->Text = L"Imprimir";
			this->Btn_ImpRecCategoria->UseVisualStyleBackColor = true;
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
			this->btn_sair->TabIndex = 35;
			this->btn_sair->Text = L"Sair";
			this->btn_sair->UseVisualStyleBackColor = true;
			this->btn_sair->Click += gcnew System::EventHandler(this, &ExReceitaCategoria::btn_sair_Click);
			// 
			// lbx_exiRecCategoria
			// 
			this->lbx_exiRecCategoria->FormattingEnabled = true;
			this->lbx_exiRecCategoria->Location = System::Drawing::Point(12, 12);
			this->lbx_exiRecCategoria->Name = L"lbx_exiRecCategoria";
			this->lbx_exiRecCategoria->Size = System::Drawing::Size(471, 498);
			this->lbx_exiRecCategoria->TabIndex = 34;
			// 
			// ExReceitaCategoria
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(754, 521);
			this->ControlBox = false;
			this->Controls->Add(this->cbx_exibirRecCategoria);
			this->Controls->Add(this->Btn_ImpRecCategoria);
			this->Controls->Add(this->btn_sair);
			this->Controls->Add(this->lbx_exiRecCategoria);
			this->Name = L"ExReceitaCategoria";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Exibir Receita por Categoria";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_sair_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
