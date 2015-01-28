#pragma once

namespace AboutBox {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for AboutBox
	/// </summary>

	public ref class AboutBox : public System::Windows::Forms::Form
	{
	public:
		AboutBox(void)
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
		~AboutBox()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  aboutBoxText;
	private: System::Windows::Forms::Button^  closeBtn;
	private: System::Windows::Forms::PictureBox^  yahtzeeLogoImg;

	protected:

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
			this->aboutBoxText = (gcnew System::Windows::Forms::Label());
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->yahtzeeLogoImg = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yahtzeeLogoImg))->BeginInit();
			this->SuspendLayout();
			// 
			// aboutBoxText
			// 
			this->aboutBoxText->Location = System::Drawing::Point(12, 132);
			this->aboutBoxText->Name = L"aboutBoxText";
			this->aboutBoxText->Size = System::Drawing::Size(260, 91);
			this->aboutBoxText->TabIndex = 0;
			this->aboutBoxText->Text = L"Yatzee!\r\n\r\nversion 0.1devel1\r\n\r\nCreated by Matthew Bowker\r\n\r\nCS3060.001";
			this->aboutBoxText->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// closeBtn
			// 
			this->closeBtn->Location = System::Drawing::Point(12, 226);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(260, 23);
			this->closeBtn->TabIndex = 1;
			this->closeBtn->Text = L"Close window";
			this->closeBtn->UseVisualStyleBackColor = true;
			this->closeBtn->Click += gcnew System::EventHandler(this, &AboutBox::button1_Click);
			// 
			// yahtzeeLogoImg
			// 
			this->yahtzeeLogoImg->ImageLocation = L"F:\\GUI\\GUI\\Yahtzee_logo.png";
			this->yahtzeeLogoImg->Location = System::Drawing::Point(12, 13);
			this->yahtzeeLogoImg->Name = L"yahtzeeLogoImg";
			this->yahtzeeLogoImg->Size = System::Drawing::Size(260, 116);
			this->yahtzeeLogoImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->yahtzeeLogoImg->TabIndex = 2;
			this->yahtzeeLogoImg->TabStop = false;
			// 
			// AboutBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->ControlBox = false;
			this->Controls->Add(this->yahtzeeLogoImg);
			this->Controls->Add(this->closeBtn);
			this->Controls->Add(this->aboutBoxText);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximumSize = System::Drawing::Size(300, 300);
			this->MinimumSize = System::Drawing::Size(300, 300);
			this->Name = L"AboutBox";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"About - Yahtzee!";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yahtzeeLogoImg))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	};
}
