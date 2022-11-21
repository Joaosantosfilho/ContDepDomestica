#pragma once

namespace ContDepDomestica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AltSenha
	/// </summary>
	public ref class AltSenha : public System::Windows::Forms::Form
	{
	public:
		AltSenha(void)
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
		~AltSenha()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_Gravar;
	protected:
	private: System::Windows::Forms::Button^ btn_cancelar;
	private: System::Windows::Forms::Label^ lbl_Usuario;
	private: System::Windows::Forms::Label^ lbl_senha;
	private: System::Windows::Forms::Label^ lbl_repsenha;
	private: System::Windows::Forms::TextBox^ tbx_usuario;
	private: System::Windows::Forms::TextBox^ tbx_novaSenha;
	private: System::Windows::Forms::TextBox^ tbx_confNovaSenha;




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
			this->btn_Gravar = (gcnew System::Windows::Forms::Button());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->lbl_Usuario = (gcnew System::Windows::Forms::Label());
			this->lbl_senha = (gcnew System::Windows::Forms::Label());
			this->lbl_repsenha = (gcnew System::Windows::Forms::Label());
			this->tbx_usuario = (gcnew System::Windows::Forms::TextBox());
			this->tbx_novaSenha = (gcnew System::Windows::Forms::TextBox());
			this->tbx_confNovaSenha = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_Gravar
			// 
			this->btn_Gravar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_Gravar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_Gravar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Gravar->ForeColor = System::Drawing::Color::Blue;
			this->btn_Gravar->Location = System::Drawing::Point(16, 229);
			this->btn_Gravar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_Gravar->Name = L"btn_Gravar";
			this->btn_Gravar->Size = System::Drawing::Size(160, 31);
			this->btn_Gravar->TabIndex = 0;
			this->btn_Gravar->Text = L"Gravar";
			this->btn_Gravar->UseVisualStyleBackColor = true;
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_cancelar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar->ForeColor = System::Drawing::Color::Blue;
			this->btn_cancelar->Location = System::Drawing::Point(203, 229);
			this->btn_cancelar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(160, 31);
			this->btn_cancelar->TabIndex = 1;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = true;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &AltSenha::btn_cancelar_Click);
			// 
			// lbl_Usuario
			// 
			this->lbl_Usuario->AutoSize = true;
			this->lbl_Usuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Usuario->Location = System::Drawing::Point(16, 21);
			this->lbl_Usuario->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_Usuario->Name = L"lbl_Usuario";
			this->lbl_Usuario->Size = System::Drawing::Size(54, 16);
			this->lbl_Usuario->TabIndex = 2;
			this->lbl_Usuario->Text = L"Usuário";
			// 
			// lbl_senha
			// 
			this->lbl_senha->AutoSize = true;
			this->lbl_senha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_senha->Location = System::Drawing::Point(16, 87);
			this->lbl_senha->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_senha->Name = L"lbl_senha";
			this->lbl_senha->Size = System::Drawing::Size(82, 16);
			this->lbl_senha->TabIndex = 3;
			this->lbl_senha->Text = L"Nova Senha";
			// 
			// lbl_repsenha
			// 
			this->lbl_repsenha->AutoSize = true;
			this->lbl_repsenha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_repsenha->Location = System::Drawing::Point(12, 154);
			this->lbl_repsenha->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_repsenha->Name = L"lbl_repsenha";
			this->lbl_repsenha->Size = System::Drawing::Size(136, 16);
			this->lbl_repsenha->TabIndex = 4;
			this->lbl_repsenha->Text = L"Repita a Nova Senha";
			// 
			// tbx_usuario
			// 
			this->tbx_usuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx_usuario->Location = System::Drawing::Point(16, 42);
			this->tbx_usuario->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tbx_usuario->Name = L"tbx_usuario";
			this->tbx_usuario->Size = System::Drawing::Size(345, 26);
			this->tbx_usuario->TabIndex = 5;
			// 
			// tbx_novaSenha
			// 
			this->tbx_novaSenha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx_novaSenha->Location = System::Drawing::Point(16, 108);
			this->tbx_novaSenha->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tbx_novaSenha->Name = L"tbx_novaSenha";
			this->tbx_novaSenha->Size = System::Drawing::Size(345, 26);
			this->tbx_novaSenha->TabIndex = 6;
			// 
			// tbx_confNovaSenha
			// 
			this->tbx_confNovaSenha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx_confNovaSenha->Location = System::Drawing::Point(16, 177);
			this->tbx_confNovaSenha->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tbx_confNovaSenha->Name = L"tbx_confNovaSenha";
			this->tbx_confNovaSenha->Size = System::Drawing::Size(345, 26);
			this->tbx_confNovaSenha->TabIndex = 7;
			// 
			// AltSenha
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(379, 284);
			this->ControlBox = false;
			this->Controls->Add(this->tbx_confNovaSenha);
			this->Controls->Add(this->tbx_novaSenha);
			this->Controls->Add(this->tbx_usuario);
			this->Controls->Add(this->lbl_repsenha);
			this->Controls->Add(this->lbl_senha);
			this->Controls->Add(this->lbl_Usuario);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_Gravar);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"AltSenha";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alterar Senha";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
