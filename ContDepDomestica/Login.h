#pragma once

namespace ContDepDomestica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbx_senha;
	protected:
	private: System::Windows::Forms::TextBox^ tbx_usuario;
	private: System::Windows::Forms::Label^ lbl_senha;
	private: System::Windows::Forms::Label^ lbl_Usuario;
	private: System::Windows::Forms::Button^ btn_cancelar;
	private: System::Windows::Forms::Button^ btn_Entrar;

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
			this->tbx_senha = (gcnew System::Windows::Forms::TextBox());
			this->tbx_usuario = (gcnew System::Windows::Forms::TextBox());
			this->lbl_senha = (gcnew System::Windows::Forms::Label());
			this->lbl_Usuario = (gcnew System::Windows::Forms::Label());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->btn_Entrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tbx_senha
			// 
			this->tbx_senha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx_senha->Location = System::Drawing::Point(19, 103);
			this->tbx_senha->Margin = System::Windows::Forms::Padding(4);
			this->tbx_senha->MaxLength = 20;
			this->tbx_senha->Name = L"tbx_senha";
			this->tbx_senha->Size = System::Drawing::Size(345, 26);
			this->tbx_senha->TabIndex = 22;
			// 
			// tbx_usuario
			// 
			this->tbx_usuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx_usuario->Location = System::Drawing::Point(19, 40);
			this->tbx_usuario->Margin = System::Windows::Forms::Padding(4);
			this->tbx_usuario->MaxLength = 20;
			this->tbx_usuario->Name = L"tbx_usuario";
			this->tbx_usuario->Size = System::Drawing::Size(345, 26);
			this->tbx_usuario->TabIndex = 21;
			// 
			// lbl_senha
			// 
			this->lbl_senha->AutoSize = true;
			this->lbl_senha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_senha->Location = System::Drawing::Point(19, 82);
			this->lbl_senha->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_senha->Name = L"lbl_senha";
			this->lbl_senha->Size = System::Drawing::Size(46, 16);
			this->lbl_senha->TabIndex = 19;
			this->lbl_senha->Text = L"Senha";
			// 
			// lbl_Usuario
			// 
			this->lbl_Usuario->AutoSize = true;
			this->lbl_Usuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Usuario->Location = System::Drawing::Point(19, 17);
			this->lbl_Usuario->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_Usuario->Name = L"lbl_Usuario";
			this->lbl_Usuario->Size = System::Drawing::Size(54, 16);
			this->lbl_Usuario->TabIndex = 18;
			this->lbl_Usuario->Text = L"Usuário";
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_cancelar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar->ForeColor = System::Drawing::Color::Blue;
			this->btn_cancelar->Location = System::Drawing::Point(206, 227);
			this->btn_cancelar->Margin = System::Windows::Forms::Padding(4);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(160, 31);
			this->btn_cancelar->TabIndex = 17;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = true;
			// 
			// btn_Entrar
			// 
			this->btn_Entrar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_Entrar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_Entrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Entrar->ForeColor = System::Drawing::Color::Blue;
			this->btn_Entrar->Location = System::Drawing::Point(19, 227);
			this->btn_Entrar->Margin = System::Windows::Forms::Padding(4);
			this->btn_Entrar->Name = L"btn_Entrar";
			this->btn_Entrar->Size = System::Drawing::Size(160, 31);
			this->btn_Entrar->TabIndex = 16;
			this->btn_Entrar->Text = L"Entrar";
			this->btn_Entrar->UseVisualStyleBackColor = true;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(380, 274);
			this->Controls->Add(this->tbx_senha);
			this->Controls->Add(this->tbx_usuario);
			this->Controls->Add(this->lbl_senha);
			this->Controls->Add(this->lbl_Usuario);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_Entrar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
