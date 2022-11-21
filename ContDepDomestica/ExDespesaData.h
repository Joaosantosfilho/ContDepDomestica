#pragma once

namespace ContDepDomestica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ExDespesaData
	/// </summary>
	public ref class ExDespesaData : public System::Windows::Forms::Form
	{
	public:
		ExDespesaData(void)
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
		~ExDespesaData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Btn_ImpDespData;
	protected:
	private: System::Windows::Forms::Button^ btn_sair;
	private: System::Windows::Forms::ListBox^ lbx_exiDespDat;
	private: System::Windows::Forms::DateTimePicker^ dtp_exibirDespesaData;



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
			this->Btn_ImpDespData = (gcnew System::Windows::Forms::Button());
			this->btn_sair = (gcnew System::Windows::Forms::Button());
			this->lbx_exiDespDat = (gcnew System::Windows::Forms::ListBox());
			this->dtp_exibirDespesaData = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// Btn_ImpDespData
			// 
			this->Btn_ImpDespData->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Btn_ImpDespData->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Btn_ImpDespData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_ImpDespData->ForeColor = System::Drawing::Color::Blue;
			this->Btn_ImpDespData->Location = System::Drawing::Point(516, 411);
			this->Btn_ImpDespData->Margin = System::Windows::Forms::Padding(5);
			this->Btn_ImpDespData->Name = L"Btn_ImpDespData";
			this->Btn_ImpDespData->Size = System::Drawing::Size(213, 38);
			this->Btn_ImpDespData->TabIndex = 36;
			this->Btn_ImpDespData->Text = L"Imprimir";
			this->Btn_ImpDespData->UseVisualStyleBackColor = true;
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
			this->btn_sair->Click += gcnew System::EventHandler(this, &ExDespesaData::btn_sair_Click);
			// 
			// lbx_exiDespDat
			// 
			this->lbx_exiDespDat->FormattingEnabled = true;
			this->lbx_exiDespDat->Location = System::Drawing::Point(12, 12);
			this->lbx_exiDespDat->Name = L"lbx_exiDespDat";
			this->lbx_exiDespDat->Size = System::Drawing::Size(471, 498);
			this->lbx_exiDespDat->TabIndex = 34;
			// 
			// dtp_exibirDespesaData
			// 
			this->dtp_exibirDespesaData->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtp_exibirDespesaData->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtp_exibirDespesaData->Location = System::Drawing::Point(516, 144);
			this->dtp_exibirDespesaData->Name = L"dtp_exibirDespesaData";
			this->dtp_exibirDespesaData->Size = System::Drawing::Size(213, 20);
			this->dtp_exibirDespesaData->TabIndex = 38;
			// 
			// ExDespesaData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(754, 521);
			this->ControlBox = false;
			this->Controls->Add(this->dtp_exibirDespesaData);
			this->Controls->Add(this->Btn_ImpDespData);
			this->Controls->Add(this->btn_sair);
			this->Controls->Add(this->lbx_exiDespDat);
			this->Name = L"ExDespesaData";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Exibir Despesa por Data";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_sair_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
