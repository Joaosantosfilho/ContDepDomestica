#pragma once

namespace ContDepDomestica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ExReceitaData
	/// </summary>
	public ref class ExReceitaData : public System::Windows::Forms::Form
	{
	public:
		ExReceitaData(void)
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
		~ExReceitaData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dtp_exibirReceitaData;
	protected:
	private: System::Windows::Forms::Button^ Btn_ImpRecData;
	private: System::Windows::Forms::Button^ btn_sair;
	private: System::Windows::Forms::ListBox^ lbx_exiRecDat;

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
			this->dtp_exibirReceitaData = (gcnew System::Windows::Forms::DateTimePicker());
			this->Btn_ImpRecData = (gcnew System::Windows::Forms::Button());
			this->btn_sair = (gcnew System::Windows::Forms::Button());
			this->lbx_exiRecDat = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// dtp_exibirReceitaData
			// 
			this->dtp_exibirReceitaData->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtp_exibirReceitaData->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtp_exibirReceitaData->Location = System::Drawing::Point(516, 144);
			this->dtp_exibirReceitaData->Name = L"dtp_exibirReceitaData";
			this->dtp_exibirReceitaData->Size = System::Drawing::Size(213, 20);
			this->dtp_exibirReceitaData->TabIndex = 42;
			// 
			// Btn_ImpRecData
			// 
			this->Btn_ImpRecData->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Btn_ImpRecData->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Btn_ImpRecData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_ImpRecData->ForeColor = System::Drawing::Color::Blue;
			this->Btn_ImpRecData->Location = System::Drawing::Point(516, 411);
			this->Btn_ImpRecData->Margin = System::Windows::Forms::Padding(5);
			this->Btn_ImpRecData->Name = L"Btn_ImpRecData";
			this->Btn_ImpRecData->Size = System::Drawing::Size(213, 38);
			this->Btn_ImpRecData->TabIndex = 41;
			this->Btn_ImpRecData->Text = L"Imprimir";
			this->Btn_ImpRecData->UseVisualStyleBackColor = true;
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
			this->btn_sair->Click += gcnew System::EventHandler(this, &ExReceitaData::btn_sair_Click);
			// 
			// lbx_exiRecDat
			// 
			this->lbx_exiRecDat->FormattingEnabled = true;
			this->lbx_exiRecDat->Location = System::Drawing::Point(12, 12);
			this->lbx_exiRecDat->Name = L"lbx_exiRecDat";
			this->lbx_exiRecDat->Size = System::Drawing::Size(471, 498);
			this->lbx_exiRecDat->TabIndex = 39;
			// 
			// ExReceitaData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(754, 521);
			this->ControlBox = false;
			this->Controls->Add(this->dtp_exibirReceitaData);
			this->Controls->Add(this->Btn_ImpRecData);
			this->Controls->Add(this->btn_sair);
			this->Controls->Add(this->lbx_exiRecDat);
			this->Name = L"ExReceitaData";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ExReceitaData";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_sair_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
