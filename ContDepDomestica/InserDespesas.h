#pragma once
#include "DataBase.h"
#include <stdio.h>

extern void MarshalString(String^, string&);

namespace ContDepDomestica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InserDespesas
	/// </summary>
	public ref class InserDespesas : public System::Windows::Forms::Form
	{
	public:
		InserDespesas(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
            //String^ strComand = "SELECT idCategoria, categoria, tipoRecDesp FROM categoria WHERE tipoRecDesp = 0 ORDER BY categoria";
            //dados = DB::execDataReaderDB(strComand);
            //cbx_categoria->Items->Clear(); // Text = dados->Rows[0]["categoria"];
            //cbx_categoria->DataSource = dados;
            //cbx_categoria->DisplayMember = "categoria";
            //cbx_categoria->ValueMember = "idCategoria";     
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InserDespesas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cbx_categoria;
	protected:

	protected:

	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^ lbl_categoria;
	private: System::Windows::Forms::TextBox^ tbx_valor;
	private: System::Windows::Forms::Label^ lbl_valor;
	private: System::Windows::Forms::Label^ lbl_data;
	private: System::Windows::Forms::DateTimePicker^ dtp_data;
	private: System::Windows::Forms::Button^ btn_cancelar;
    private: System::Windows::Forms::Button^ btn_GravarDespesa;





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
            this->cbx_categoria = (gcnew System::Windows::Forms::ComboBox());
            this->lbl_categoria = (gcnew System::Windows::Forms::Label());
            this->tbx_valor = (gcnew System::Windows::Forms::TextBox());
            this->lbl_valor = (gcnew System::Windows::Forms::Label());
            this->dtp_data = (gcnew System::Windows::Forms::DateTimePicker());
            this->btn_cancelar = (gcnew System::Windows::Forms::Button());
            this->btn_GravarDespesa = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // cbx_categoria
            // 
            this->cbx_categoria->FormattingEnabled = true;
            this->cbx_categoria->Location = System::Drawing::Point(22, 40);
            this->cbx_categoria->Margin = System::Windows::Forms::Padding(4);
            this->cbx_categoria->Name = L"cbx_categoria";
            this->cbx_categoria->Size = System::Drawing::Size(381, 24);
            this->cbx_categoria->TabIndex = 0;
            this->cbx_categoria->Text = L"[Selecione]";
            // 
            // lbl_categoria
            // 
            this->lbl_categoria->AutoSize = true;
            this->lbl_categoria->Location = System::Drawing::Point(22, 13);
            this->lbl_categoria->Name = L"lbl_categoria";
            this->lbl_categoria->Size = System::Drawing::Size(66, 16);
            this->lbl_categoria->TabIndex = 1;
            this->lbl_categoria->Text = L"Categoria";
            // 
            // tbx_valor
            // 
            this->tbx_valor->Location = System::Drawing::Point(22, 102);
            this->tbx_valor->Name = L"tbx_valor";
            this->tbx_valor->Size = System::Drawing::Size(133, 22);
            this->tbx_valor->TabIndex = 1;
            // 
            // lbl_valor
            // 
            this->lbl_valor->AutoSize = true;
            this->lbl_valor->Location = System::Drawing::Point(22, 83);
            this->lbl_valor->Name = L"lbl_valor";
            this->lbl_valor->Size = System::Drawing::Size(39, 16);
            this->lbl_valor->TabIndex = 3;
            this->lbl_valor->Text = L"Valor";
            // 
            // dtp_data
            // 
            this->dtp_data->CustomFormat = L"";
            this->dtp_data->Format = System::Windows::Forms::DateTimePickerFormat::Short;
            this->dtp_data->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->dtp_data->Location = System::Drawing::Point(22, 181);
            this->dtp_data->Name = L"dtp_data";
            this->dtp_data->Size = System::Drawing::Size(106, 22);
            this->dtp_data->TabIndex = 2;
            // 
            // btn_cancelar
            // 
            this->btn_cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->btn_cancelar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_cancelar->ForeColor = System::Drawing::Color::Blue;
            this->btn_cancelar->Location = System::Drawing::Point(272, 233);
            this->btn_cancelar->Margin = System::Windows::Forms::Padding(5);
            this->btn_cancelar->Name = L"btn_cancelar";
            this->btn_cancelar->Size = System::Drawing::Size(213, 38);
            this->btn_cancelar->TabIndex = 4;
            this->btn_cancelar->Text = L"Sair";
            this->btn_cancelar->UseVisualStyleBackColor = true;
            this->btn_cancelar->Click += gcnew System::EventHandler(this, &InserDespesas::btn_cancelar_Click);
            // 
            // btn_GravarDespesa
            // 
            this->btn_GravarDespesa->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->btn_GravarDespesa->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btn_GravarDespesa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_GravarDespesa->ForeColor = System::Drawing::Color::Blue;
            this->btn_GravarDespesa->Location = System::Drawing::Point(22, 233);
            this->btn_GravarDespesa->Margin = System::Windows::Forms::Padding(5);
            this->btn_GravarDespesa->Name = L"btn_GravarDespesa";
            this->btn_GravarDespesa->Size = System::Drawing::Size(213, 38);
            this->btn_GravarDespesa->TabIndex = 3;
            this->btn_GravarDespesa->Text = L"Gravar";
            this->btn_GravarDespesa->UseVisualStyleBackColor = true;
            this->btn_GravarDespesa->Click += gcnew System::EventHandler(this, &InserDespesas::btn_GravarDespesa_Click);
            // 
            // InserDespesas
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoSize = true;
            this->BackColor = System::Drawing::Color::LightSteelBlue;
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->ClientSize = System::Drawing::Size(510, 291);
            this->ControlBox = false;
            this->Controls->Add(this->btn_GravarDespesa);
            this->Controls->Add(this->dtp_data);
            this->Controls->Add(this->btn_cancelar);
            this->Controls->Add(this->lbl_valor);
            this->Controls->Add(this->tbx_valor);
            this->Controls->Add(this->lbl_categoria);
            this->Controls->Add(this->cbx_categoria);
            this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ForeColor = System::Drawing::Color::Blue;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
            this->Location = System::Drawing::Point(22, 233);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"InserDespesas";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Inserção de Despesas";
            this->Load += gcnew System::EventHandler(this, &InserDespesas::InserDespesas_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void InserDespesas_Load(System::Object^ sender, System::EventArgs^ e) {
    DataTable^ dados = gcnew DataTable();
    String^ strComand = "SELECT idCategoria, categoria, tipoRecDesp FROM categoria WHERE tipoRecDesp = 0 ORDER BY categoria";
    dados = DB::execDataReaderDB(strComand);
    cbx_categoria->Items->Clear(); // Text = dados->Rows[0]["categoria"];
    cbx_categoria->DataSource = dados;
    cbx_categoria->DisplayMember = "categoria";
    cbx_categoria->ValueMember = "idCategoria";
    tbx_valor->Clear();
}
private: System::Void btn_GravarDespesa_Click(System::Object^ sender, System::EventArgs^ e) {
    string id_cats;
    MarshalString((cbx_categoria->SelectedValue->ToString()), id_cats);
    int id_cat = std::stoi(id_cats);

    String^ strComand = "INSERT INTO transacao(idCategoria, valor, date) VALUES("
        + id_cat + ","
        + tbx_valor->Text + ",'"
        + dtp_data->Text->ToString() + "')";

    DB::execComandNQDB(strComand);
    ContDepDomestica::InserDespesas::tbx_valor->Text = "";
    ContDepDomestica::InserDespesas::cbx_categoria->Focus();
    dtp_data->ResetText();
}
};
}
