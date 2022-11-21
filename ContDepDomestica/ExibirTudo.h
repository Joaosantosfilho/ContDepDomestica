#pragma once
#include "DataBase.h"

namespace ContDepDomestica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ExibirTudo
	/// </summary>
	public ref class ExibirTudo : public System::Windows::Forms::Form
	{
	public:
		ExibirTudo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
            DataTable^ dados = gcnew DataTable();
            String^ strComand = String::Format("SELECT"
                + " tbcat.categoria, tbtra.valor, tbtra.date"
                + " FROM transacao as tbtra"
                + " INNER JOIN" 
                + " categoria as tbcat on tbtra.idCategoria = tbcat.idCategoria"
//                + " GROUP BY tbcat.categoria;");
                + " ORDER BY tbcat.tipoRecDesp;");
             dados = DB::execDataReaderDB(strComand);
             dados->Rows->Add("Teste 1", 55, "23-10-2020");
             dgv_exibirTudo->DataSource = dados;
        }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ExibirTudo()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btn_sair;
	private: System::Windows::Forms::Button^ Btn_ImpTudo;
    private: System::Windows::Forms::DataGridView^ dgv_exibirTudo;
    private: System::Windows::Forms::TextBox^ txb_totaReceita;
    private: System::Windows::Forms::TextBox^ txb_totDespesa;
    private: System::Windows::Forms::Label^ lbl_totReceita;
    private: System::Windows::Forms::Label^ lbl_totDespesa;
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
            this->btn_sair = (gcnew System::Windows::Forms::Button());
            this->Btn_ImpTudo = (gcnew System::Windows::Forms::Button());
            this->dgv_exibirTudo = (gcnew System::Windows::Forms::DataGridView());
            this->txb_totaReceita = (gcnew System::Windows::Forms::TextBox());
            this->txb_totDespesa = (gcnew System::Windows::Forms::TextBox());
            this->lbl_totReceita = (gcnew System::Windows::Forms::Label());
            this->lbl_totDespesa = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_exibirTudo))->BeginInit();
            this->SuspendLayout();
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
            this->btn_sair->TabIndex = 28;
            this->btn_sair->Text = L"Sair";
            this->btn_sair->UseVisualStyleBackColor = true;
            this->btn_sair->Click += gcnew System::EventHandler(this, &ExibirTudo::btn_sair_Click);
            // 
            // Btn_ImpTudo
            // 
            this->Btn_ImpTudo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->Btn_ImpTudo->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->Btn_ImpTudo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Btn_ImpTudo->ForeColor = System::Drawing::Color::Blue;
            this->Btn_ImpTudo->Location = System::Drawing::Point(516, 411);
            this->Btn_ImpTudo->Margin = System::Windows::Forms::Padding(5);
            this->Btn_ImpTudo->Name = L"Btn_ImpTudo";
            this->Btn_ImpTudo->Size = System::Drawing::Size(213, 38);
            this->Btn_ImpTudo->TabIndex = 29;
            this->Btn_ImpTudo->Text = L"Imprimir";
            this->Btn_ImpTudo->UseVisualStyleBackColor = true;
            // 
            // dgv_exibirTudo
            // 
            this->dgv_exibirTudo->AllowUserToAddRows = false;
            this->dgv_exibirTudo->AllowUserToDeleteRows = false;
            this->dgv_exibirTudo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->dgv_exibirTudo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dgv_exibirTudo->Cursor = System::Windows::Forms::Cursors::Hand;
            this->dgv_exibirTudo->Location = System::Drawing::Point(12, 12);
            this->dgv_exibirTudo->Name = L"dgv_exibirTudo";
            this->dgv_exibirTudo->ReadOnly = true;
            this->dgv_exibirTudo->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dgv_exibirTudo->Size = System::Drawing::Size(471, 498);
            this->dgv_exibirTudo->TabIndex = 30;
            // 
            // txb_totaReceita
            // 
            this->txb_totaReceita->Location = System::Drawing::Point(516, 104);
            this->txb_totaReceita->Name = L"txb_totaReceita";
            this->txb_totaReceita->Size = System::Drawing::Size(213, 20);
            this->txb_totaReceita->TabIndex = 31;
            // 
            // txb_totDespesa
            // 
            this->txb_totDespesa->Location = System::Drawing::Point(516, 158);
            this->txb_totDespesa->Name = L"txb_totDespesa";
            this->txb_totDespesa->Size = System::Drawing::Size(213, 20);
            this->txb_totDespesa->TabIndex = 32;
            // 
            // lbl_totReceita
            // 
            this->lbl_totReceita->AutoSize = true;
            this->lbl_totReceita->Location = System::Drawing::Point(516, 85);
            this->lbl_totReceita->Name = L"lbl_totReceita";
            this->lbl_totReceita->Size = System::Drawing::Size(86, 13);
            this->lbl_totReceita->TabIndex = 33;
            this->lbl_totReceita->Text = L"Total das receita";
            // 
            // lbl_totDespesa
            // 
            this->lbl_totDespesa->AutoSize = true;
            this->lbl_totDespesa->Location = System::Drawing::Point(516, 139);
            this->lbl_totDespesa->Name = L"lbl_totDespesa";
            this->lbl_totDespesa->Size = System::Drawing::Size(91, 13);
            this->lbl_totDespesa->TabIndex = 34;
            this->lbl_totDespesa->Text = L"Total de Despesa";
            // 
            // ExibirTudo
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::LightSteelBlue;
            this->ClientSize = System::Drawing::Size(754, 521);
            this->ControlBox = false;
            this->Controls->Add(this->lbl_totDespesa);
            this->Controls->Add(this->lbl_totReceita);
            this->Controls->Add(this->txb_totDespesa);
            this->Controls->Add(this->txb_totaReceita);
            this->Controls->Add(this->dgv_exibirTudo);
            this->Controls->Add(this->Btn_ImpTudo);
            this->Controls->Add(this->btn_sair);
            this->Name = L"ExibirTudo";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"ExibirTudo";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_exibirTudo))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void btn_sair_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
