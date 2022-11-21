#pragma once
#include "DataBase.h"

extern void MarshalString(String^, string&);

namespace ContDepDomestica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InserReceitas
	/// </summary>
	public ref class InserReceitas : public System::Windows::Forms::Form
	{
	public:
//        DataTable^ dados = gcnew DataTable();
        InserReceitas(void)
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
		~InserReceitas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dtp_data;
	protected:
	private: System::Windows::Forms::Button^ btn_cancelar;
	private: System::Windows::Forms::Button^ btn_GravarReceitas;

	private: System::Windows::Forms::Label^ lbl_data;
	private: System::Windows::Forms::Label^ lbl_valor;
	private: System::Windows::Forms::TextBox^ tbx_valor;
	private: System::Windows::Forms::Label^ lbl_categoria;
	private: System::Windows::Forms::ComboBox^ cbx_categoria;

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
            this->dtp_data = (gcnew System::Windows::Forms::DateTimePicker());
            this->btn_cancelar = (gcnew System::Windows::Forms::Button());
            this->btn_GravarReceitas = (gcnew System::Windows::Forms::Button());
            this->lbl_data = (gcnew System::Windows::Forms::Label());
            this->lbl_valor = (gcnew System::Windows::Forms::Label());
            this->tbx_valor = (gcnew System::Windows::Forms::TextBox());
            this->lbl_categoria = (gcnew System::Windows::Forms::Label());
            this->cbx_categoria = (gcnew System::Windows::Forms::ComboBox());
            this->SuspendLayout();
            // 
            // dtp_data
            // 
            this->dtp_data->CustomFormat = L"";
            this->dtp_data->Format = System::Windows::Forms::DateTimePickerFormat::Short;
            this->dtp_data->Location = System::Drawing::Point(14, 170);
            this->dtp_data->Name = L"dtp_data";
            this->dtp_data->Size = System::Drawing::Size(108, 20);
            this->dtp_data->TabIndex = 2;
            // 
            // btn_cancelar
            // 
            this->btn_cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->btn_cancelar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_cancelar->ForeColor = System::Drawing::Color::Blue;
            this->btn_cancelar->Location = System::Drawing::Point(264, 222);
            this->btn_cancelar->Margin = System::Windows::Forms::Padding(5);
            this->btn_cancelar->Name = L"btn_cancelar";
            this->btn_cancelar->Size = System::Drawing::Size(213, 38);
            this->btn_cancelar->TabIndex = 4;
            this->btn_cancelar->Text = L"Sair";
            this->btn_cancelar->UseVisualStyleBackColor = true;
            this->btn_cancelar->Click += gcnew System::EventHandler(this, &InserReceitas::btn_cancelar_Click);
            // 
            // btn_GravarReceitas
            // 
            this->btn_GravarReceitas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->btn_GravarReceitas->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btn_GravarReceitas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_GravarReceitas->ForeColor = System::Drawing::Color::Blue;
            this->btn_GravarReceitas->Location = System::Drawing::Point(14, 222);
            this->btn_GravarReceitas->Margin = System::Windows::Forms::Padding(5);
            this->btn_GravarReceitas->Name = L"btn_GravarReceitas";
            this->btn_GravarReceitas->Size = System::Drawing::Size(213, 38);
            this->btn_GravarReceitas->TabIndex = 3;
            this->btn_GravarReceitas->Text = L"Gravar";
            this->btn_GravarReceitas->UseVisualStyleBackColor = true;
            this->btn_GravarReceitas->Click += gcnew System::EventHandler(this, &InserReceitas::btn_GravarReceitas_Click);
            // 
            // lbl_data
            // 
            this->lbl_data->AutoSize = true;
            this->lbl_data->Location = System::Drawing::Point(14, 151);
            this->lbl_data->Name = L"lbl_data";
            this->lbl_data->Size = System::Drawing::Size(30, 13);
            this->lbl_data->TabIndex = 25;
            this->lbl_data->Text = L"Data";
            // 
            // lbl_valor
            // 
            this->lbl_valor->AutoSize = true;
            this->lbl_valor->Location = System::Drawing::Point(14, 72);
            this->lbl_valor->Name = L"lbl_valor";
            this->lbl_valor->Size = System::Drawing::Size(31, 13);
            this->lbl_valor->TabIndex = 24;
            this->lbl_valor->Text = L"Valor";
            // 
            // tbx_valor
            // 
            this->tbx_valor->Location = System::Drawing::Point(14, 91);
            this->tbx_valor->Name = L"tbx_valor";
            this->tbx_valor->Size = System::Drawing::Size(133, 20);
            this->tbx_valor->TabIndex = 1;
            // 
            // lbl_categoria
            // 
            this->lbl_categoria->AutoSize = true;
            this->lbl_categoria->Location = System::Drawing::Point(11, 9);
            this->lbl_categoria->Name = L"lbl_categoria";
            this->lbl_categoria->Size = System::Drawing::Size(52, 13);
            this->lbl_categoria->TabIndex = 22;
            this->lbl_categoria->Text = L"Categoria";
            // 
            // cbx_categoria
            // 
            this->cbx_categoria->FormattingEnabled = true;
            this->cbx_categoria->Location = System::Drawing::Point(14, 29);
            this->cbx_categoria->Margin = System::Windows::Forms::Padding(4);
            this->cbx_categoria->Name = L"cbx_categoria";
            this->cbx_categoria->Size = System::Drawing::Size(381, 21);
            this->cbx_categoria->TabIndex = 0;
            // 
            // InserReceitas
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::LightSteelBlue;
            this->ClientSize = System::Drawing::Size(494, 277);
            this->ControlBox = false;
            this->Controls->Add(this->dtp_data);
            this->Controls->Add(this->btn_cancelar);
            this->Controls->Add(this->btn_GravarReceitas);
            this->Controls->Add(this->lbl_data);
            this->Controls->Add(this->lbl_valor);
            this->Controls->Add(this->tbx_valor);
            this->Controls->Add(this->lbl_categoria);
            this->Controls->Add(this->cbx_categoria);
            this->Name = L"InserReceitas";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Inserção de Receitas";
            this->Load += gcnew System::EventHandler(this, &InserReceitas::InserReceitas_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void InserReceitas_Load(System::Object^ sender, System::EventArgs^ e) {
    DataTable^ dados = gcnew DataTable();
    String^ strComand = "SELECT idCategoria, categoria, tipoRecDesp FROM categoria WHERE tipoRecDesp = 1 ORDER BY categoria";
    dados = DB::execDataReaderDB(strComand);
    cbx_categoria->Items->Clear(); // Text = dados->Rows[0]["categoria"];
    cbx_categoria->DataSource = dados;
    cbx_categoria->DisplayMember = "categoria";
    cbx_categoria->ValueMember = "idCategoria";
    tbx_valor->Clear();
}
private: System::Void btn_GravarReceitas_Click(System::Object^ sender, System::EventArgs^ e) {
    string id_cats;
    MarshalString((cbx_categoria->SelectedValue->ToString()), id_cats);
    int id_cat = std::stoi(id_cats);

    String^ strComand = "INSERT INTO transacao(idCategoria, valor, date) VALUES("
        + id_cat + ","
        + tbx_valor->Text + ",'"
        + dtp_data->Text->ToString() + "')";

    DB::execComandNQDB(strComand);
    ContDepDomestica::InserReceitas::tbx_valor->Text = "";
    ContDepDomestica::InserReceitas::cbx_categoria->Focus();
    dtp_data->ResetText();
}
};
}
