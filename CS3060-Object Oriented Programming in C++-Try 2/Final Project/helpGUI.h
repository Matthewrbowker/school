#pragma once

namespace helpGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for help
	/// </summary>
	public ref class help : public System::Windows::Forms::Form
	{
	public:
		help(void)
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
		~help()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::WebBrowser^  helpBrowser;
	private: System::Windows::Forms::Button^  closeBtn;

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
			this->helpBrowser = (gcnew System::Windows::Forms::WebBrowser());
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// helpBrowser
			// 
			this->helpBrowser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->helpBrowser->Location = System::Drawing::Point(1, 1);
			this->helpBrowser->MinimumSize = System::Drawing::Size(20, 20);
			this->helpBrowser->Name = L"helpBrowser";
			this->helpBrowser->Size = System::Drawing::Size(280, 231);
			this->helpBrowser->TabIndex = 0;
			this->helpBrowser->Url = (gcnew System::Uri(L"http://grail.sourceforge.net/demo/yahtzee/rules.html", System::UriKind::Absolute));
			// 
			// closeBtn
			// 
			this->closeBtn->Location = System::Drawing::Point(1, 239);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(280, 23);
			this->closeBtn->TabIndex = 1;
			this->closeBtn->Text = L"Close";
			this->closeBtn->UseVisualStyleBackColor = true;
			this->closeBtn->Click += gcnew System::EventHandler(this, &help::closeBtn_Click);
			// 
			// help
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->closeBtn);
			this->Controls->Add(this->helpBrowser);
			this->Name = L"help";
			this->Text = L"help";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void closeBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	};
}
