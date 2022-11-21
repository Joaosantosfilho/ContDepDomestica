#ifndef CadCat_H
#define CadCat_H

#pragma once
#include "DataBase.h"
//#include "DataBase.cpp"
//#include "PagPrincipal.h"
using namespace System::Data;
using namespace System::Data::SqlServerCe;

namespace ContDepDomestica {

    using namespace std;
    using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CadCateg
	/// </summary>
	public ref class CadCateg : public System::Windows::Forms::Form
	{
	public:
		CadCateg(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
            this->tbx_categoria->Focus();
        }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CadCateg()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
    System::Windows::Forms::TextBox^ tbx_categoria;


	protected:

	protected:

	protected:

	private: System::Windows::Forms::Button^ btn_cancelar;
    private: System::Windows::Forms::Button^ btn_GravarCategoria;

    private: System::Windows::Forms::RadioButton^ rdb_despesa;
    private: System::Windows::Forms::RadioButton^ rdb_receita;

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
			System::Windows::Forms::Label^ lbl_Categoria;
			this->tbx_categoria = (gcnew System::Windows::Forms::TextBox());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->btn_GravarCategoria = (gcnew System::Windows::Forms::Button());
			this->rdb_despesa = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_receita = (gcnew System::Windows::Forms::RadioButton());
			lbl_Categoria = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_Categoria
			// 
			lbl_Categoria->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			lbl_Categoria->AutoSize = true;
			lbl_Categoria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			lbl_Categoria->Location = System::Drawing::Point(17, 43);
			lbl_Categoria->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			lbl_Categoria->Name = L"lbl_Categoria";
			lbl_Categoria->Size = System::Drawing::Size(66, 16);
			lbl_Categoria->TabIndex = 18;
			lbl_Categoria->Text = L"Categoria";
			// 
			// tbx_categoria
			// 
			this->tbx_categoria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx_categoria->Location = System::Drawing::Point(17, 71);
			this->tbx_categoria->Margin = System::Windows::Forms::Padding(5);
			this->tbx_categoria->Name = L"tbx_categoria";
			this->tbx_categoria->Size = System::Drawing::Size(459, 26);
			this->tbx_categoria->TabIndex = 0;
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_cancelar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar->ForeColor = System::Drawing::Color::Blue;
			this->btn_cancelar->Location = System::Drawing::Point(263, 201);
			this->btn_cancelar->Margin = System::Windows::Forms::Padding(5);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(213, 38);
			this->btn_cancelar->TabIndex = 4;
			this->btn_cancelar->Text = L"Sair";
			this->btn_cancelar->UseVisualStyleBackColor = true;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &CadCateg::btn_cancelar_Click);
			// 
			// btn_GravarCategoria
			// 
			this->btn_GravarCategoria->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_GravarCategoria->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_GravarCategoria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_GravarCategoria->ForeColor = System::Drawing::Color::Blue;
			this->btn_GravarCategoria->Location = System::Drawing::Point(13, 201);
			this->btn_GravarCategoria->Margin = System::Windows::Forms::Padding(5);
			this->btn_GravarCategoria->Name = L"btn_GravarCategoria";
			this->btn_GravarCategoria->Size = System::Drawing::Size(213, 38);
			this->btn_GravarCategoria->TabIndex = 3;
			this->btn_GravarCategoria->Text = L"Gravar";
			this->btn_GravarCategoria->UseVisualStyleBackColor = true;
			this->btn_GravarCategoria->Click += gcnew System::EventHandler(this, &CadCateg::btn_GravarCategoria_Click);
			// 
			// rdb_despesa
			// 
			this->rdb_despesa->AutoSize = true;
			this->rdb_despesa->Checked = true;
			this->rdb_despesa->Location = System::Drawing::Point(93, 143);
			this->rdb_despesa->Name = L"rdb_despesa";
			this->rdb_despesa->Size = System::Drawing::Size(81, 20);
			this->rdb_despesa->TabIndex = 1;
			this->rdb_despesa->TabStop = true;
			this->rdb_despesa->Text = L"Despesa";
			this->rdb_despesa->UseVisualStyleBackColor = true;
			// 
			// rdb_receita
			// 
			this->rdb_receita->AutoSize = true;
			this->rdb_receita->Location = System::Drawing::Point(333, 143);
			this->rdb_receita->Name = L"rdb_receita";
			this->rdb_receita->Size = System::Drawing::Size(72, 20);
			this->rdb_receita->TabIndex = 2;
			this->rdb_receita->TabStop = true;
			this->rdb_receita->Text = L"Receita";
			this->rdb_receita->UseVisualStyleBackColor = true;
			// 
			// CadCateg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(497, 312);
			this->ControlBox = false;
			this->Controls->Add(this->rdb_receita);
			this->Controls->Add(this->rdb_despesa);
			this->Controls->Add(this->tbx_categoria);
			this->Controls->Add(lbl_Categoria);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_GravarCategoria);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"CadCateg";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cadastro de Categorias";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btn_GravarCategoria_Click(System::Object^ sender, System::EventArgs^ e) {
    int recDesp = rdb_receita->Checked;
    String^ strComand = "INSERT INTO categoria(categoria, tipoRecDesp) VALUES("
        + "'" + ContDepDomestica::CadCateg::tbx_categoria->Text + "', "
        + recDesp + ")";
    
    DB::execComandNQDB(strComand);

    ContDepDomestica::CadCateg::tbx_categoria->Text = "";
    ContDepDomestica::CadCateg::tbx_categoria->Focus();
}
};
}

#endif // !CadCat_H

