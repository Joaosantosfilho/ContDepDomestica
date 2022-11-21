#pragma once

namespace ContDepDomestica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ExReceitaMenosDespesa
	/// </summary>
	public ref class ExReceitaMenosDespesa : public System::Windows::Forms::Form
	{
	public:
		ExReceitaMenosDespesa(void)
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
		~ExReceitaMenosDespesa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dtp_exibirRecMenosDespData;
	protected:
	private: System::Windows::Forms::Button^ Btn_ImpRecMenosDespData;
	private: System::Windows::Forms::Button^ btn_sair;
	private: System::Windows::Forms::ListBox^ lbx_exiRecMenosDespDat;

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
			this->dtp_exibirRecMenosDespData = (gcnew System::Windows::Forms::DateTimePicker());
			this->Btn_ImpRecMenosDespData = (gcnew System::Windows::Forms::Button());
			this->btn_sair = (gcnew System::Windows::Forms::Button());
			this->lbx_exiRecMenosDespDat = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// dtp_exibirRecMenosDespData
			// 
			this->dtp_exibirRecMenosDespData->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtp_exibirRecMenosDespData->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtp_exibirRecMenosDespData->Location = System::Drawing::Point(516, 144);
			this->dtp_exibirRecMenosDespData->Name = L"dtp_exibirRecMenosDespData";
			this->dtp_exibirRecMenosDespData->Size = System::Drawing::Size(213, 20);
			this->dtp_exibirRecMenosDespData->TabIndex = 42;
			// 
			// Btn_ImpRecMenosDespData
			// 
			this->Btn_ImpRecMenosDespData->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Btn_ImpRecMenosDespData->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Btn_ImpRecMenosDespData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Btn_ImpRecMenosDespData->ForeColor = System::Drawing::Color::Blue;
			this->Btn_ImpRecMenosDespData->Location = System::Drawing::Point(516, 411);
			this->Btn_ImpRecMenosDespData->Margin = System::Windows::Forms::Padding(5);
			this->Btn_ImpRecMenosDespData->Name = L"Btn_ImpRecMenosDespData";
			this->Btn_ImpRecMenosDespData->Size = System::Drawing::Size(213, 38);
			this->Btn_ImpRecMenosDespData->TabIndex = 41;
			this->Btn_ImpRecMenosDespData->Text = L"Imprimir";
			this->Btn_ImpRecMenosDespData->UseVisualStyleBackColor = true;
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
			this->btn_sair->TabIndex = 40;
			this->btn_sair->Text = L"Sair";
			this->btn_sair->UseVisualStyleBackColor = true;
			this->btn_sair->Click += gcnew System::EventHandler(this, &ExReceitaMenosDespesa::btn_sair_Click);
			// 
			// lbx_exiRecMenosDespDat
			// 
			this->lbx_exiRecMenosDespDat->FormattingEnabled = true;
			this->lbx_exiRecMenosDespDat->Location = System::Drawing::Point(12, 12);
			this->lbx_exiRecMenosDespDat->Name = L"lbx_exiRecMenosDespDat";
			this->lbx_exiRecMenosDespDat->Size = System::Drawing::Size(471, 498);
			this->lbx_exiRecMenosDespDat->TabIndex = 39;
			// 
			// ExReceitaMenosDespesa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(754, 521);
			this->ControlBox = false;
			this->Controls->Add(this->dtp_exibirRecMenosDespData);
			this->Controls->Add(this->Btn_ImpRecMenosDespData);
			this->Controls->Add(this->btn_sair);
			this->Controls->Add(this->lbx_exiRecMenosDespDat);
			this->Name = L"ExReceitaMenosDespesa";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ExReceitaMenosDespesa";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_sair_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
