#ifndef PagPrinc_H
#define PagPrinc_H

#pragma once

#include "Login.h"
#include "CadCateg.h"
#include "CadNovoUsu.h"
#include "AltSenha.h"
#include "InserDespesas.h"
#include "InserReceitas.h"
#include "ExibirTudo.h"
#include "ExDespesaCategoria.h"
#include "ExDespesaData.h"
#include "ExReceitaCategoria.h"
#include "ExReceitaData.h"
#include "ExReceitaMenosDespesa.h"
#include "DataBase.h"

#include <string>
#include <iostream>
using namespace std;

std::string conector;
std::string caminho;

namespace ContDepDomestica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PagPrincipal
	/// </summary>
	public ref class PagPrincipal : public System::Windows::Forms::Form
	{
	public:
		PagPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
//            Login^ Lg = gcnew Login;
//			Lg->ShowDialog();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PagPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ mst_menu;
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ tsm_cadastro;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_cadastrarCategoria;
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ tsm_insercao;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_insercDespesa;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_insercReceitas;

	private: System::Windows::Forms::ToolStripMenuItem^ tsm_cadastrarNovoUsuar;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_alteraSenha;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_sair;

	private: System::Windows::Forms::ToolStripMenuItem^ tsm_exibir;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_tudoToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_despesasPorCategoriaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_despesasPorDataToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_receitasPorCategoriaToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_receitaPorDataToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_receitasDespesasToolStripMenuItem;
//    private: System::Windows::Forms::Label^ label1;


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->mst_menu = (gcnew System::Windows::Forms::MenuStrip());
			this->tsm_cadastro = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_cadastrarCategoria = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_cadastrarNovoUsuar = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_alteraSenha = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_sair = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_insercao = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_insercDespesa = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_insercReceitas = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_exibir = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_tudoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_despesasPorCategoriaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_despesasPorDataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_receitasPorCategoriaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_receitaPorDataToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_receitasDespesasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mst_menu->SuspendLayout();
			this->SuspendLayout();
			// 
			// mst_menu
			// 
			this->mst_menu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->mst_menu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mst_menu->GripMargin = System::Windows::Forms::Padding(0);
			this->mst_menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->tsm_cadastro, this->tsm_insercao,
					this->tsm_exibir
			});
			this->mst_menu->Location = System::Drawing::Point(3, 0);
			this->mst_menu->Name = L"mst_menu";
			this->mst_menu->Padding = System::Windows::Forms::Padding(0);
			this->mst_menu->Size = System::Drawing::Size(578, 24);
			this->mst_menu->TabIndex = 1;
			this->mst_menu->Text = L"menuStrip1";
			// 
			// tsm_cadastro
			// 
			this->tsm_cadastro->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->tsm_cadastrarCategoria,
					this->tsm_cadastrarNovoUsuar, this->tsm_alteraSenha, this->tsm_sair
			});
			this->tsm_cadastro->Name = L"tsm_cadastro";
			this->tsm_cadastro->Size = System::Drawing::Size(73, 24);
			this->tsm_cadastro->Text = L"Cadastro";
			// 
			// tsm_cadastrarCategoria
			// 
			this->tsm_cadastrarCategoria->Name = L"tsm_cadastrarCategoria";
			this->tsm_cadastrarCategoria->Size = System::Drawing::Size(218, 22);
			this->tsm_cadastrarCategoria->Text = L"Cadastrar Categorias";
			this->tsm_cadastrarCategoria->Click += gcnew System::EventHandler(this, &PagPrincipal::tsm_cadastrarCategoria_Click);
			// 
			// tsm_cadastrarNovoUsuar
			// 
			this->tsm_cadastrarNovoUsuar->Name = L"tsm_cadastrarNovoUsuar";
			this->tsm_cadastrarNovoUsuar->Size = System::Drawing::Size(218, 22);
			this->tsm_cadastrarNovoUsuar->Text = L"Cadastrar Novo Usuário";
			this->tsm_cadastrarNovoUsuar->Click += gcnew System::EventHandler(this, &PagPrincipal::tsm_cadastrarNovoUsuar_Click);
			// 
			// tsm_alteraSenha
			// 
			this->tsm_alteraSenha->Name = L"tsm_alteraSenha";
			this->tsm_alteraSenha->Size = System::Drawing::Size(218, 22);
			this->tsm_alteraSenha->Text = L"Alterar Senha";
			this->tsm_alteraSenha->Click += gcnew System::EventHandler(this, &PagPrincipal::tsm_alteraSenh_Click);
			// 
			// tsm_sair
			// 
			this->tsm_sair->Name = L"tsm_sair";
			this->tsm_sair->Size = System::Drawing::Size(218, 22);
			this->tsm_sair->Text = L"Sair";
			this->tsm_sair->Click += gcnew System::EventHandler(this, &PagPrincipal::tsm_sair_Click);
			// 
			// tsm_insercao
			// 
			this->tsm_insercao->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tsm_insercDespesa,
					this->tsm_insercReceitas
			});
			this->tsm_insercao->Name = L"tsm_insercao";
			this->tsm_insercao->Size = System::Drawing::Size(75, 24);
			this->tsm_insercao->Text = L"Inserções";
			// 
			// tsm_insercDespesa
			// 
			this->tsm_insercDespesa->Name = L"tsm_insercDespesa";
			this->tsm_insercDespesa->Size = System::Drawing::Size(204, 22);
			this->tsm_insercDespesa->Text = L"Inserção de Despesas";
			this->tsm_insercDespesa->Click += gcnew System::EventHandler(this, &PagPrincipal::tsm_insercDespesa_Click);
			// 
			// tsm_insercReceitas
			// 
			this->tsm_insercReceitas->Name = L"tsm_insercReceitas";
			this->tsm_insercReceitas->Size = System::Drawing::Size(204, 22);
			this->tsm_insercReceitas->Text = L"inserção de Receitas";
			this->tsm_insercReceitas->Click += gcnew System::EventHandler(this, &PagPrincipal::tsm_insercReceitas_Click);
			// 
			// tsm_exibir
			// 
			this->tsm_exibir->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->tsm_tudoToolStripMenuItem1,
					this->tsm_despesasPorCategoriaToolStripMenuItem, this->tsm_despesasPorDataToolStripMenuItem, this->tsm_receitasPorCategoriaToolStripMenuItem1,
					this->tsm_receitaPorDataToolStripMenuItem1, this->tsm_receitasDespesasToolStripMenuItem
			});
			this->tsm_exibir->Name = L"tsm_exibir";
			this->tsm_exibir->Size = System::Drawing::Size(52, 24);
			this->tsm_exibir->Text = L"Exibir";
			// 
			// tsm_tudoToolStripMenuItem1
			// 
			this->tsm_tudoToolStripMenuItem1->Name = L"tsm_tudoToolStripMenuItem1";
			this->tsm_tudoToolStripMenuItem1->Size = System::Drawing::Size(218, 22);
			this->tsm_tudoToolStripMenuItem1->Text = L"Tudo";
			this->tsm_tudoToolStripMenuItem1->Click += gcnew System::EventHandler(this, &PagPrincipal::tsm_tudoToolStripMenuItem1_Click);
			// 
			// tsm_despesasPorCategoriaToolStripMenuItem
			// 
			this->tsm_despesasPorCategoriaToolStripMenuItem->Name = L"tsm_despesasPorCategoriaToolStripMenuItem";
			this->tsm_despesasPorCategoriaToolStripMenuItem->Size = System::Drawing::Size(218, 22);
			this->tsm_despesasPorCategoriaToolStripMenuItem->Text = L"Despesas por Categoria";
			this->tsm_despesasPorCategoriaToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagPrincipal::tsm_despesasPorCategoriaToolStripMenuItem_Click);
			// 
			// tsm_despesasPorDataToolStripMenuItem
			// 
			this->tsm_despesasPorDataToolStripMenuItem->Name = L"tsm_despesasPorDataToolStripMenuItem";
			this->tsm_despesasPorDataToolStripMenuItem->Size = System::Drawing::Size(218, 22);
			this->tsm_despesasPorDataToolStripMenuItem->Text = L"Despesas por Data";
			this->tsm_despesasPorDataToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagPrincipal::tsm_despesasPorDataToolStripMenuItem_Click);
			// 
			// tsm_receitasPorCategoriaToolStripMenuItem1
			// 
			this->tsm_receitasPorCategoriaToolStripMenuItem1->Name = L"tsm_receitasPorCategoriaToolStripMenuItem1";
			this->tsm_receitasPorCategoriaToolStripMenuItem1->Size = System::Drawing::Size(218, 22);
			this->tsm_receitasPorCategoriaToolStripMenuItem1->Text = L"Receitas por Categoria";
			this->tsm_receitasPorCategoriaToolStripMenuItem1->Click += gcnew System::EventHandler(this, &PagPrincipal::tsm_receitasPorCategoriaToolStripMenuItem1_Click);
			// 
			// tsm_receitaPorDataToolStripMenuItem1
			// 
			this->tsm_receitaPorDataToolStripMenuItem1->Name = L"tsm_receitaPorDataToolStripMenuItem1";
			this->tsm_receitaPorDataToolStripMenuItem1->Size = System::Drawing::Size(218, 22);
			this->tsm_receitaPorDataToolStripMenuItem1->Text = L"Receitas por Data";
			this->tsm_receitaPorDataToolStripMenuItem1->Click += gcnew System::EventHandler(this, &PagPrincipal::tsm_receitaPorDataToolStripMenuItem1_Click);
			// 
			// tsm_receitasDespesasToolStripMenuItem
			// 
			this->tsm_receitasDespesasToolStripMenuItem->Name = L"tsm_receitasDespesasToolStripMenuItem";
			this->tsm_receitasDespesasToolStripMenuItem->Size = System::Drawing::Size(218, 22);
			this->tsm_receitasDespesasToolStripMenuItem->Text = L"Receitas - Despesas";
			this->tsm_receitasDespesasToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagPrincipal::tsm_receitasDespesasToolStripMenuItem_Click);
			// 
			// PagPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->ControlBox = false;
			this->Controls->Add(this->mst_menu);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->mst_menu;
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"PagPrincipal";
			this->Padding = System::Windows::Forms::Padding(3, 0, 3, 6);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Controle de Despesa Domestica";
			this->mst_menu->ResumeLayout(false);
			this->mst_menu->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void PagPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	IsMdiContainer = true;
}
private: System::Void tsm_cadastrarCategoria_Click(System::Object^ sender, System::EventArgs^ e) {
//private: System::Void salvarToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
//	fileToolStripMenuItem->Enabled = false;
//	this->Hide();
	CadCateg^ Ccat = gcnew CadCateg();
	Ccat->ShowDialog();
//	Ccat->Show();
//	Ccat->MdiParent = this;
//	this->Show();
//	fileToolStripMenuItem->Enabled = true;
}
private: System::Void tsm_cadastrarNovoUsuar_Click(System::Object^ sender, System::EventArgs^ e) {
	CadNovoUsu^ Cnusu = gcnew	CadNovoUsu();
	Cnusu->ShowDialog();
}
private: System::Void tsm_alteraSenh_Click(System::Object^ sender, System::EventArgs^ e) {
	AltSenha^ AltSenh = gcnew AltSenha();
	AltSenh->ShowDialog();
}
private: System::Void tsm_insercDespesa_Click(System::Object^ sender, System::EventArgs^ e) {
	InserDespesas^ InserDesp = gcnew InserDespesas();
	InserDesp->ShowDialog();
}
private: System::Void tsm_insercReceitas_Click(System::Object^ sender, System::EventArgs^ e) {
	InserReceitas^ InserRec = gcnew InserReceitas();
	InserRec->ShowDialog();
}
private: System::Void tsm_tudoToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ExibirTudo^ ExibTudo = gcnew ExibirTudo();
	ExibTudo->ShowDialog();
}
private: System::Void tsm_despesasPorCategoriaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ExDespesaCategoria^ ExibDespCat = gcnew ExDespesaCategoria();
	ExibDespCat->ShowDialog();
}
private: System::Void tsm_despesasPorDataToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ExDespesaData^ ExibDespDat = gcnew ExDespesaData();
	ExibDespDat->ShowDialog();
}
private: System::Void tsm_receitasPorCategoriaToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ExReceitaCategoria^ ExRecCat = gcnew ExReceitaCategoria();
	ExRecCat->ShowDialog();
}
private: System::Void tsm_receitaPorDataToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ExReceitaData^ ExRecDat = gcnew ExReceitaData();
	ExRecDat->ShowDialog();
}
private: System::Void tsm_receitasDespesasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ExReceitaMenosDespesa^ ExRecMenosDesp = gcnew ExReceitaMenosDespesa();
	ExRecMenosDesp->ShowDialog();
}
private: System::Void tsm_sair_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
 
};

}
#endif // !PagPrinc_H
