#pragma once

namespace MyForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  chanceBtn;
	private: System::Windows::Forms::GroupBox^  diceGrpBox;


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  contentsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::Button^  yahtzeeBtn;

	private: System::Windows::Forms::Button^  fullHouseBtn;

	private: System::Windows::Forms::Button^  lgStraightBtn;

	private: System::Windows::Forms::Button^  smStraightBtn;

	private: System::Windows::Forms::Button^  fourKindBtn;

	private: System::Windows::Forms::Button^  threeKindBtn;

	private: System::Windows::Forms::Button^  sixesBtn;

	private: System::Windows::Forms::Button^  fivesBtn;

	private: System::Windows::Forms::Button^  foursBtn;

	private: System::Windows::Forms::Button^  threesBtn;


	private: System::Windows::Forms::Button^  twosBtn;

	private: System::Windows::Forms::Button^  acesBtn;
	private: System::Windows::Forms::GroupBox^  scoringGrpBox;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::CheckBox^  dice1Chk;
	private: System::Windows::Forms::CheckBox^  dice2Chk;
	private: System::Windows::Forms::PictureBox^  dice5Pic;
	private: System::Windows::Forms::CheckBox^  dice5Chk;
	private: System::Windows::Forms::PictureBox^  dice4Pic;
	private: System::Windows::Forms::CheckBox^  dice4Chk;
	private: System::Windows::Forms::PictureBox^  dice3Pic;
	private: System::Windows::Forms::CheckBox^  dice3Chk;
	private: System::Windows::Forms::PictureBox^  dice2Pic;
	private: System::Windows::Forms::PictureBox^  dice1Pic;






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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chanceBtn = (gcnew System::Windows::Forms::Button());
			this->diceGrpBox = (gcnew System::Windows::Forms::GroupBox());
			this->dice5Pic = (gcnew System::Windows::Forms::PictureBox());
			this->dice5Chk = (gcnew System::Windows::Forms::CheckBox());
			this->dice4Pic = (gcnew System::Windows::Forms::PictureBox());
			this->dice4Chk = (gcnew System::Windows::Forms::CheckBox());
			this->dice3Pic = (gcnew System::Windows::Forms::PictureBox());
			this->dice3Chk = (gcnew System::Windows::Forms::CheckBox());
			this->dice2Pic = (gcnew System::Windows::Forms::PictureBox());
			this->dice1Pic = (gcnew System::Windows::Forms::PictureBox());
			this->dice2Chk = (gcnew System::Windows::Forms::CheckBox());
			this->dice1Chk = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yahtzeeBtn = (gcnew System::Windows::Forms::Button());
			this->fullHouseBtn = (gcnew System::Windows::Forms::Button());
			this->lgStraightBtn = (gcnew System::Windows::Forms::Button());
			this->smStraightBtn = (gcnew System::Windows::Forms::Button());
			this->fourKindBtn = (gcnew System::Windows::Forms::Button());
			this->threeKindBtn = (gcnew System::Windows::Forms::Button());
			this->sixesBtn = (gcnew System::Windows::Forms::Button());
			this->fivesBtn = (gcnew System::Windows::Forms::Button());
			this->foursBtn = (gcnew System::Windows::Forms::Button());
			this->threesBtn = (gcnew System::Windows::Forms::Button());
			this->twosBtn = (gcnew System::Windows::Forms::Button());
			this->acesBtn = (gcnew System::Windows::Forms::Button());
			this->scoringGrpBox = (gcnew System::Windows::Forms::GroupBox());
			this->diceGrpBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice5Pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice4Pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice3Pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice2Pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice1Pic))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 493);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(269, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Reroll selected Dice!";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// chanceBtn
			// 
			this->chanceBtn->Location = System::Drawing::Point(298, 493);
			this->chanceBtn->Name = L"chanceBtn";
			this->chanceBtn->Size = System::Drawing::Size(269, 23);
			this->chanceBtn->TabIndex = 1;
			this->chanceBtn->Text = L"Chance";
			this->chanceBtn->UseVisualStyleBackColor = true;
			this->chanceBtn->Click += gcnew System::EventHandler(this, &MyForm::chanceBtn_Click);
			// 
			// diceGrpBox
			// 
			this->diceGrpBox->Controls->Add(this->dice5Pic);
			this->diceGrpBox->Controls->Add(this->dice5Chk);
			this->diceGrpBox->Controls->Add(this->dice4Pic);
			this->diceGrpBox->Controls->Add(this->dice4Chk);
			this->diceGrpBox->Controls->Add(this->dice3Pic);
			this->diceGrpBox->Controls->Add(this->dice3Chk);
			this->diceGrpBox->Controls->Add(this->dice2Pic);
			this->diceGrpBox->Controls->Add(this->dice1Pic);
			this->diceGrpBox->Controls->Add(this->dice2Chk);
			this->diceGrpBox->Controls->Add(this->dice1Chk);
			this->diceGrpBox->Location = System::Drawing::Point(12, 27);
			this->diceGrpBox->Name = L"diceGrpBox";
			this->diceGrpBox->Size = System::Drawing::Size(280, 502);
			this->diceGrpBox->TabIndex = 2;
			this->diceGrpBox->TabStop = false;
			this->diceGrpBox->Text = L"Dice";
			// 
			// dice5Pic
			// 
			this->dice5Pic->ImageLocation = L"F:\\GUI\\GUI\\Dice\\dieBlank.png";
			this->dice5Pic->Location = System::Drawing::Point(84, 273);
			this->dice5Pic->Name = L"dice5Pic";
			this->dice5Pic->Size = System::Drawing::Size(100, 100);
			this->dice5Pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dice5Pic->TabIndex = 23;
			this->dice5Pic->TabStop = false;
			// 
			// dice5Chk
			// 
			this->dice5Chk->AutoSize = true;
			this->dice5Chk->Location = System::Drawing::Point(84, 379);
			this->dice5Chk->Name = L"dice5Chk";
			this->dice5Chk->Size = System::Drawing::Size(15, 14);
			this->dice5Chk->TabIndex = 22;
			this->dice5Chk->UseVisualStyleBackColor = true;
			// 
			// dice4Pic
			// 
			this->dice4Pic->ImageLocation = L"F:\\GUI\\GUI\\Dice\\dieBlank.png";
			this->dice4Pic->Location = System::Drawing::Point(169, 145);
			this->dice4Pic->Name = L"dice4Pic";
			this->dice4Pic->Size = System::Drawing::Size(100, 100);
			this->dice4Pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dice4Pic->TabIndex = 21;
			this->dice4Pic->TabStop = false;
			// 
			// dice4Chk
			// 
			this->dice4Chk->AutoSize = true;
			this->dice4Chk->Location = System::Drawing::Point(169, 251);
			this->dice4Chk->Name = L"dice4Chk";
			this->dice4Chk->Size = System::Drawing::Size(15, 14);
			this->dice4Chk->TabIndex = 20;
			this->dice4Chk->UseVisualStyleBackColor = true;
			// 
			// dice3Pic
			// 
			this->dice3Pic->ImageLocation = L"F:\\GUI\\GUI\\Dice\\dieBlank.png";
			this->dice3Pic->Location = System::Drawing::Point(6, 145);
			this->dice3Pic->Name = L"dice3Pic";
			this->dice3Pic->Size = System::Drawing::Size(100, 100);
			this->dice3Pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dice3Pic->TabIndex = 19;
			this->dice3Pic->TabStop = false;
			// 
			// dice3Chk
			// 
			this->dice3Chk->AutoSize = true;
			this->dice3Chk->Location = System::Drawing::Point(6, 251);
			this->dice3Chk->Name = L"dice3Chk";
			this->dice3Chk->Size = System::Drawing::Size(15, 14);
			this->dice3Chk->TabIndex = 18;
			this->dice3Chk->UseVisualStyleBackColor = true;
			// 
			// dice2Pic
			// 
			this->dice2Pic->ImageLocation = L"F:\\GUI\\GUI\\Dice\\dieBlank.png";
			this->dice2Pic->Location = System::Drawing::Point(169, 19);
			this->dice2Pic->Name = L"dice2Pic";
			this->dice2Pic->Size = System::Drawing::Size(100, 100);
			this->dice2Pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dice2Pic->TabIndex = 17;
			this->dice2Pic->TabStop = false;
			// 
			// dice1Pic
			// 
			this->dice1Pic->ImageLocation = L"F:\\GUI\\GUI\\Dice\\dieBlank.png";
			this->dice1Pic->Location = System::Drawing::Point(6, 19);
			this->dice1Pic->Name = L"dice1Pic";
			this->dice1Pic->Size = System::Drawing::Size(100, 100);
			this->dice1Pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dice1Pic->TabIndex = 2;
			this->dice1Pic->TabStop = false;
			// 
			// dice2Chk
			// 
			this->dice2Chk->AutoSize = true;
			this->dice2Chk->Location = System::Drawing::Point(169, 125);
			this->dice2Chk->Name = L"dice2Chk";
			this->dice2Chk->Size = System::Drawing::Size(15, 14);
			this->dice2Chk->TabIndex = 1;
			this->dice2Chk->UseVisualStyleBackColor = true;
			// 
			// dice1Chk
			// 
			this->dice1Chk->AutoSize = true;
			this->dice1Chk->Location = System::Drawing::Point(6, 125);
			this->dice1Chk->Name = L"dice1Chk";
			this->dice1Chk->Size = System::Drawing::Size(15, 14);
			this->dice1Chk->TabIndex = 0;
			this->dice1Chk->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(584, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"mainMenu";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->contentsToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->ToolTipText = L"About this program";
			// 
			// contentsToolStripMenuItem
			// 
			this->contentsToolStripMenuItem->Name = L"contentsToolStripMenuItem";
			this->contentsToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->contentsToolStripMenuItem->Text = L"Contents";
			this->contentsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::contentsToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// yahtzeeBtn
			// 
			this->yahtzeeBtn->Location = System::Drawing::Point(298, 464);
			this->yahtzeeBtn->Name = L"yahtzeeBtn";
			this->yahtzeeBtn->Size = System::Drawing::Size(269, 23);
			this->yahtzeeBtn->TabIndex = 4;
			this->yahtzeeBtn->Text = L"Yahtzee";
			this->yahtzeeBtn->UseVisualStyleBackColor = true;
			this->yahtzeeBtn->Click += gcnew System::EventHandler(this, &MyForm::yahtzeeBtn_Click);
			// 
			// fullHouseBtn
			// 
			this->fullHouseBtn->Location = System::Drawing::Point(298, 377);
			this->fullHouseBtn->Name = L"fullHouseBtn";
			this->fullHouseBtn->Size = System::Drawing::Size(269, 23);
			this->fullHouseBtn->TabIndex = 5;
			this->fullHouseBtn->Text = L"Full House";
			this->fullHouseBtn->UseVisualStyleBackColor = true;
			this->fullHouseBtn->Click += gcnew System::EventHandler(this, &MyForm::fullHouseBtn_Click);
			// 
			// lgStraightBtn
			// 
			this->lgStraightBtn->Location = System::Drawing::Point(298, 435);
			this->lgStraightBtn->Name = L"lgStraightBtn";
			this->lgStraightBtn->Size = System::Drawing::Size(269, 23);
			this->lgStraightBtn->TabIndex = 6;
			this->lgStraightBtn->Text = L"Large Straight";
			this->lgStraightBtn->UseVisualStyleBackColor = true;
			this->lgStraightBtn->Click += gcnew System::EventHandler(this, &MyForm::lgStraightBtn_Click);
			// 
			// smStraightBtn
			// 
			this->smStraightBtn->Location = System::Drawing::Point(298, 406);
			this->smStraightBtn->Name = L"smStraightBtn";
			this->smStraightBtn->Size = System::Drawing::Size(269, 23);
			this->smStraightBtn->TabIndex = 7;
			this->smStraightBtn->Text = L"Small Straight";
			this->smStraightBtn->UseVisualStyleBackColor = true;
			this->smStraightBtn->Click += gcnew System::EventHandler(this, &MyForm::smStraightBtn_Click);
			// 
			// fourKindBtn
			// 
			this->fourKindBtn->Location = System::Drawing::Point(298, 348);
			this->fourKindBtn->Name = L"fourKindBtn";
			this->fourKindBtn->Size = System::Drawing::Size(269, 23);
			this->fourKindBtn->TabIndex = 8;
			this->fourKindBtn->Text = L"4 of a Kind";
			this->fourKindBtn->UseVisualStyleBackColor = true;
			this->fourKindBtn->Click += gcnew System::EventHandler(this, &MyForm::fourKindBtn_Click);
			// 
			// threeKindBtn
			// 
			this->threeKindBtn->Location = System::Drawing::Point(298, 319);
			this->threeKindBtn->Name = L"threeKindBtn";
			this->threeKindBtn->Size = System::Drawing::Size(269, 23);
			this->threeKindBtn->TabIndex = 9;
			this->threeKindBtn->Text = L"3 of a Kind";
			this->threeKindBtn->UseVisualStyleBackColor = true;
			this->threeKindBtn->Click += gcnew System::EventHandler(this, &MyForm::threeKindBtn_Click);
			// 
			// sixesBtn
			// 
			this->sixesBtn->Location = System::Drawing::Point(298, 290);
			this->sixesBtn->Name = L"sixesBtn";
			this->sixesBtn->Size = System::Drawing::Size(269, 23);
			this->sixesBtn->TabIndex = 10;
			this->sixesBtn->Text = L"Sixes";
			this->sixesBtn->UseVisualStyleBackColor = true;
			this->sixesBtn->Click += gcnew System::EventHandler(this, &MyForm::sixesBtn_Click);
			// 
			// fivesBtn
			// 
			this->fivesBtn->Location = System::Drawing::Point(298, 261);
			this->fivesBtn->Name = L"fivesBtn";
			this->fivesBtn->Size = System::Drawing::Size(269, 23);
			this->fivesBtn->TabIndex = 11;
			this->fivesBtn->Text = L"Fives";
			this->fivesBtn->UseVisualStyleBackColor = true;
			this->fivesBtn->Click += gcnew System::EventHandler(this, &MyForm::fivesBtn_Click);
			// 
			// foursBtn
			// 
			this->foursBtn->Location = System::Drawing::Point(298, 232);
			this->foursBtn->Name = L"foursBtn";
			this->foursBtn->Size = System::Drawing::Size(269, 23);
			this->foursBtn->TabIndex = 12;
			this->foursBtn->Text = L"Fours";
			this->foursBtn->UseVisualStyleBackColor = true;
			this->foursBtn->Click += gcnew System::EventHandler(this, &MyForm::foursBtn_Click);
			// 
			// threesBtn
			// 
			this->threesBtn->Location = System::Drawing::Point(298, 203);
			this->threesBtn->Name = L"threesBtn";
			this->threesBtn->Size = System::Drawing::Size(269, 23);
			this->threesBtn->TabIndex = 13;
			this->threesBtn->Text = L"Threes\r\n";
			this->threesBtn->UseVisualStyleBackColor = true;
			this->threesBtn->Click += gcnew System::EventHandler(this, &MyForm::threesBtn_Click);
			// 
			// twosBtn
			// 
			this->twosBtn->Location = System::Drawing::Point(298, 174);
			this->twosBtn->Name = L"twosBtn";
			this->twosBtn->Size = System::Drawing::Size(269, 23);
			this->twosBtn->TabIndex = 14;
			this->twosBtn->Text = L"Twos";
			this->twosBtn->UseVisualStyleBackColor = true;
			this->twosBtn->Click += gcnew System::EventHandler(this, &MyForm::twosBtn_Click);
			// 
			// acesBtn
			// 
			this->acesBtn->Location = System::Drawing::Point(298, 145);
			this->acesBtn->Name = L"acesBtn";
			this->acesBtn->Size = System::Drawing::Size(269, 23);
			this->acesBtn->TabIndex = 15;
			this->acesBtn->Text = L"Aces";
			this->acesBtn->UseVisualStyleBackColor = true;
			this->acesBtn->Click += gcnew System::EventHandler(this, &MyForm::acesBtn_Click);
			// 
			// scoringGrpBox
			// 
			this->scoringGrpBox->Location = System::Drawing::Point(287, 123);
			this->scoringGrpBox->Name = L"scoringGrpBox";
			this->scoringGrpBox->Size = System::Drawing::Size(292, 406);
			this->scoringGrpBox->TabIndex = 16;
			this->scoringGrpBox->TabStop = false;
			this->scoringGrpBox->Text = L"Scoring Controls";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->twosBtn);
			this->Controls->Add(this->acesBtn);
			this->Controls->Add(this->fullHouseBtn);
			this->Controls->Add(this->threesBtn);
			this->Controls->Add(this->foursBtn);
			this->Controls->Add(this->fivesBtn);
			this->Controls->Add(this->sixesBtn);
			this->Controls->Add(this->threeKindBtn);
			this->Controls->Add(this->fourKindBtn);
			this->Controls->Add(this->smStraightBtn);
			this->Controls->Add(this->lgStraightBtn);
			this->Controls->Add(this->yahtzeeBtn);
			this->Controls->Add(this->chanceBtn);
			this->Controls->Add(this->scoringGrpBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->diceGrpBox);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(600, 600);
			this->MinimumSize = System::Drawing::Size(600, 600);
			this->Name = L"MyForm";
			this->Text = L"Yahtzee!";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->diceGrpBox->ResumeLayout(false);
			this->diceGrpBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice5Pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice4Pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice3Pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice2Pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice1Pic))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: globals * gPtr;
	private: diceCup * diceCupPtr;
	private: scoreCard * scoreCardPtr;
	private: fileInterface * fiPtr;
	private: scoreCardGUI::scoreCardGUI^ scGUI;

	public: System::Void pointerToGlobals(globals* g){
		gPtr = g;

	}

	public: System::Void pointerToDiceCup(diceCup* dc){
		diceCupPtr = dc;
	}

	public: System::Void pointerToScoreCard(scoreCard* sc){
		scoreCardPtr = sc;

	}

	public: System::Void pointerToFileInterface(fileInterface* fi){
		fiPtr = fi;

	}
	
	private: System::Void errorState(string message) {
		MessageBox::Show(msclr::interop::marshal_as<System::String^>(message),
			"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	private: System::String^ diceImage(int value) {
		string retVal;
		switch (value) {
		case 1:
			retVal = "F:\\GUI\\GUI\\Dice\\die1.png";
			break;
		case 2:
			retVal = "F:\\GUI\\GUI\\Dice\\die2.png";
			break;
		case 3:
			retVal = "F:\\GUI\\GUI\\Dice\\die3.png";
			break;
		case 4:
			retVal = "F:\\GUI\\GUI\\Dice\\die4.png";
			break;
		case 5:
			retVal = "F:\\GUI\\GUI\\Dice\\die5.png";
			break;
		case 6:
			retVal = "F:\\GUI\\GUI\\Dice\\die6.png";
			break;
		default:
			retVal = "F:\\GUI\\GUI\\Dice\\dieBlank.png";
			errorState("Dice Value Invalid!");
			break;
		}

		return msclr::interop::marshal_as< System::String^ >(retVal);
	}

			private: System::Void changeDice(int whichDice, int value) {
				switch (whichDice) {
				case 1:
					this->dice1Pic->ImageLocation = diceImage(value);
					dice1Chk->Checked = false;
					break;
				case 2:
					this->dice2Pic->ImageLocation = diceImage(value);
					dice2Chk->Checked = false;
					break;
				case 3:
					this->dice3Pic->ImageLocation = diceImage(value);
					dice3Chk->Checked = false;
					break;
				case 4:
					this->dice4Pic->ImageLocation = diceImage(value);
					dice4Chk->Checked = false;
					break;
				case 5:
					this->dice5Pic->ImageLocation = diceImage(value);
					dice5Chk->Checked = false;
					break;
				default:
					errorState("An error occured when changing the dice image");
				}
			}
					 private: System::Void updateDice() {
						 int diceVal = diceCupPtr->returnDice();

						 int diceOne;
						 int diceTwo;
						 int diceThree;
						 int diceFour;

						 diceOne = diceVal / 10000;
						 diceVal = diceVal % 10000;
						 diceTwo = diceVal / 1000;
						 diceVal = diceVal % 1000;
						 diceThree = diceVal / 100;
						 diceVal = diceVal % 100;
						 diceFour = diceVal / 10;
						 diceVal = diceVal % 10;

						 changeDice(1, diceOne);
						 changeDice(2, diceTwo);
						 changeDice(3, diceThree);
						 changeDice(4, diceFour);
						 changeDice(5, diceVal);

						 scGUI->updateScore();

					 }

	private: System::Void newGame() {
		// Set up a new game here
	}

	private: System::Void updateButtons() {
		int diceVal = diceCupPtr->returnDice();

		int diceOne;
		int diceTwo;
		int diceThree;
		int diceFour;

		diceOne = diceVal / 10000;
		diceVal = diceVal % 10000;
		diceTwo = diceVal / 1000;
		diceVal = diceVal % 1000;
		diceThree = diceVal / 100;
		diceVal = diceVal % 100;
		diceFour = diceVal / 10;
		diceVal = diceVal % 10;

		// Aces
		if (!scoreCardPtr->canDo(gPtr->getCurrentPlayer(), 1)) {
			this->acesBtn->Text = L"Aces";
			this->acesBtn->Enabled = false;
		}
		else if (scoreCardPtr->willZero(1, diceOne, diceTwo, diceThree, diceFour, diceVal)) {
			this->acesBtn->Enabled = true;
			this->acesBtn->Text = L"Zero Aces";
		}
		else {
			this->acesBtn->Enabled = true;
			this->acesBtn->Text = L"Aces";
		}

		// Twos
		if (!scoreCardPtr->canDo(gPtr->getCurrentPlayer(), 2)) {
			this->twosBtn->Text = L"Twos";
			this->twosBtn->Enabled = false;
		}
		else if (scoreCardPtr->willZero(2, diceOne, diceTwo, diceThree, diceFour, diceVal)) {
			this->twosBtn->Enabled = true;
			this->twosBtn->Text = L"Zero Twos";
		}
		else {
			this->twosBtn->Enabled = true;
			this->twosBtn->Text = L"Twos";
		}

		// Threes
		if (!scoreCardPtr->canDo(gPtr->getCurrentPlayer(), 3)) {
			this->threesBtn->Text = L"Threes";
			this->threesBtn->Enabled = false;
		}
		else if (scoreCardPtr->willZero(3, diceOne, diceTwo, diceThree, diceFour, diceVal)) {
			this->threesBtn->Enabled = true;
			this->threesBtn->Text = L"Zero Threes";
		}
		else {
			this->threesBtn->Enabled = true;
			this->threesBtn->Text = L"Threes";
		}

		// Fours
		if (!scoreCardPtr->canDo(gPtr->getCurrentPlayer(), 4)) {
			this->foursBtn->Text = L"Fours";
			this->foursBtn->Enabled = false;
		}
		else if (scoreCardPtr->willZero(4, diceOne, diceTwo, diceThree, diceFour, diceVal)) {
			this->foursBtn->Enabled = true;
			this->foursBtn->Text = L"Zero Fours";
		}
		else {
			this->foursBtn->Enabled = true;
			this->foursBtn->Text = L"Fours";
		}

		// Fives
		if (!scoreCardPtr->canDo(gPtr->getCurrentPlayer(), 5)) {
			this->fivesBtn->Text = L"Fives";
			this->fivesBtn->Enabled = false;
		}
		else if (scoreCardPtr->willZero(5, diceOne, diceTwo, diceThree, diceFour, diceVal)) {
			this->fivesBtn->Enabled = true;
			this->fivesBtn->Text = L"Zero Fives";
		}
		else {
			this->fivesBtn->Enabled = true;
			this->fivesBtn->Text = L"Fives";
		}

		// Sixes
		if (!scoreCardPtr->canDo(gPtr->getCurrentPlayer(), 6)) {
			this->sixesBtn->Text = L"Sixes";
			this->sixesBtn->Enabled = false;
		}
		else if (scoreCardPtr->willZero(6, diceOne, diceTwo, diceFour, diceFour, diceVal)) {
			this->sixesBtn->Enabled = true;
			this->sixesBtn->Text = L"Zero Sixes";
		}
		else {
			this->sixesBtn->Enabled = true;
			this->sixesBtn->Text = L"Sixes";
		}

		// Three of a Kind
		if (!scoreCardPtr->canDo(gPtr->getCurrentPlayer(), 7)) {
			this->threeKindBtn->Text = L"Three of a Kind";
			this->threeKindBtn->Enabled = false;
		}
		else if (scoreCardPtr->willZero(7, diceOne, diceTwo, diceThree, diceFour, diceVal)) {
			this->threeKindBtn->Enabled = true;
			this->threeKindBtn->Text = L"Zero Three of a Kind";
		}
		else {
			this->threeKindBtn->Enabled = true;
			this->threeKindBtn->Text = L"Three of a Kind";
		}

		// Four of a Kind
		if (!scoreCardPtr->canDo(gPtr->getCurrentPlayer(), 8)) {
			this->fourKindBtn->Text = L"Four of a Kind";
			this->fourKindBtn->Enabled = false;
		}
		else if (scoreCardPtr->willZero(8, diceOne, diceTwo, diceFour, diceFour, diceVal)) {
			this->fourKindBtn->Enabled = true;
			this->fourKindBtn->Text = L"Zero Four of a Kind";
		}
		else {
			this->fourKindBtn->Enabled = true;
			this->fourKindBtn->Text = L"Four of a Kind";
		}

		// Full House
		if (!scoreCardPtr->canDo(gPtr->getCurrentPlayer(), 9)) {
			this->fullHouseBtn->Text = L"Full House";
			this->fullHouseBtn->Enabled = false;
		}
		else if (scoreCardPtr->willZero(9, diceOne, diceTwo, diceFour, diceFour, diceVal)) {
			this->fullHouseBtn->Enabled = true;
			this->fullHouseBtn->Text = L"Zero Full House";
		}
		else {
			this->fullHouseBtn->Enabled = true;
			this->fullHouseBtn->Text = L"Full House";
		}

		// Small Straight
		if (!scoreCardPtr->canDo(gPtr->getCurrentPlayer(), 10)) {
			this->smStraightBtn->Text = L"Small Straight";
			this->smStraightBtn->Enabled = false;
		}
		else if (scoreCardPtr->willZero(10, diceOne, diceTwo, diceFour, diceFour, diceVal)) {
			this->smStraightBtn->Enabled = true;
			this->smStraightBtn->Text = L"Zero Small Straight";
		}
		else {
			this->smStraightBtn->Enabled = true;
			this->smStraightBtn->Text = L"Small Straight";
		}

		// Large Straight
		if (!scoreCardPtr->canDo(gPtr->getCurrentPlayer(), 11)) {
			this->lgStraightBtn->Text = L"Large Straight";
			this->lgStraightBtn->Enabled = false;
		}
		else if (scoreCardPtr->willZero(11, diceOne, diceTwo, diceFour, diceFour, diceVal)) {
			this->lgStraightBtn->Enabled = true;
			this->lgStraightBtn->Text = L"Zero Large Straight";
		}
		else {
			this->lgStraightBtn->Enabled = true;
			this->lgStraightBtn->Text = L"Large Straight";
		}

		// Yahtzee
		if (!scoreCardPtr->canDo(gPtr->getCurrentPlayer(), 12)) {
			this->yahtzeeBtn->Text = L"Yahtzee";
			this->yahtzeeBtn->Enabled = false;
		}
		else if (scoreCardPtr->willZero(12, diceOne, diceTwo, diceFour, diceFour, diceVal)) {
			this->yahtzeeBtn->Enabled = true;
			this->yahtzeeBtn->Text = L"Zero Yahtzee";
		}
		else {
			this->yahtzeeBtn->Enabled = true;
			this->yahtzeeBtn->Text = L"Yahtzee";
		}

		// Chance
		if (!scoreCardPtr->canDo(gPtr->getCurrentPlayer(), 13)) {
			this->chanceBtn->Text = L"Chance";
			this->chanceBtn->Enabled = false;
		}
		else if (scoreCardPtr->willZero(13, diceOne, diceTwo, diceFour, diceFour, diceVal)) {
			this->chanceBtn->Enabled = true;
			this->chanceBtn->Text = L"Zero Chance";
		}
		else {
			this->chanceBtn->Enabled = true;
			this->chanceBtn->Text = L"Chance";
		}
	}
	/*
	private: checkCanReroll() {
		if (gPtr->canReRoll()) {

		}
	}*/

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		diceCupPtr->reroll(dice1Chk->Checked, dice2Chk->Checked, dice3Chk->Checked, dice4Chk->Checked, dice5Chk->Checked);
		gPtr->reRoll();
		updateDice();
		updateButtons();

		if (!gPtr->canReRoll()) {
			this->button1->Enabled = false;
		}
	}

private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AboutBox::AboutBox^ ab = gcnew AboutBox::AboutBox();
	ab->Show();
}

private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		scoreCardGUI::scoreCardGUI^ scG = gcnew scoreCardGUI::scoreCardGUI();
		scGUI = scG;
		scG->pointerToScoreCard(scoreCardPtr);
		scG->Show();

		updateDice();
		updateButtons();

		gPtr->resetRolls();

		this->button1->Enabled = true;
	}

	private: void checkEndGame() {
		if (this->acesBtn->Enabled == false &&
			this->twosBtn->Enabled == false &&
			this->threesBtn->Enabled == false &&
			this->foursBtn->Enabled == false &&
			this->fivesBtn->Enabled == false &&
			this->sixesBtn->Enabled == false &&
			this->threeKindBtn->Enabled == false &&
			this->fourKindBtn->Enabled == false &&
			this->fullHouseBtn->Enabled == false &&
			this->smStraightBtn->Enabled == false &&
			this->lgStraightBtn->Enabled == false &&
			this->yahtzeeBtn->Enabled == false &&
			this->chanceBtn->Enabled == false
			) {
			scoreCardPtr->calculateScore();
			MessageBox::Show("Your final score is: " + 
				msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getGrand(1)),
				"Game Finished!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Application::Exit();
		}
	}

private: System::Void score(int box) {
	int diceVal = diceCupPtr->returnDice();

	int diceOne;
	int diceTwo;
	int diceThree;
	int diceFour;

	diceOne = diceVal / 10000;
	diceVal = diceVal % 10000;
	diceTwo = diceVal / 1000;
	diceVal = diceVal % 1000;
	diceThree = diceVal / 100;
	diceVal = diceVal % 100;
	diceFour = diceVal / 10;
	diceVal = diceVal % 10;

	scoreCardPtr->doScore(gPtr->getCurrentPlayer(), box, diceOne, diceTwo, diceThree, diceFour, diceVal, scoreCardPtr->willZero(box, diceOne, diceTwo, diceThree, diceFour, diceVal));
	
	diceCupPtr->reroll(true, true, true, true, true);
	updateDice();

	gPtr->resetRolls();

	this->button1->Enabled = true;

	updateButtons();
	scGUI->updateScore();

	checkEndGame();
}

private: System::Void acesBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	score(1);
}

private: System::Void twosBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	score(2);
}

private: System::Void threesBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	score(3);
}

private: System::Void foursBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	score(4);
}

private: System::Void fivesBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	score(5);
}

private: System::Void sixesBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	score(6);
}

private: System::Void threeKindBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	score(7);
}

private: System::Void fourKindBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	score(8);
}

private: System::Void fullHouseBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	score(9);
}

private: System::Void smStraightBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	score(10);
}

private: System::Void lgStraightBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	score(11);
}

private: System::Void yahtzeeBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	score(12);
}

private: System::Void chanceBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	score(13);
}

private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//MessageBox::Show("New File, YAY ^.^");
	newGame();
}

private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::OpenFileDialog^ dlg = gcnew System::Windows::Forms::OpenFileDialog();
	dlg->Filter = "Yahtzee Games (*.ytz)|*.ytz|All files (*.*)|*.*";
	dlg->Title = "Open a game";

	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		fiPtr->openFile(msclr::interop::marshal_as< std::string >(dlg->FileName));
		updateButtons();
		scoreCardPtr->calculateScore();
		scGUI->updateScore();
	}
}

private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::SaveFileDialog^ dlg = gcnew System::Windows::Forms::SaveFileDialog();
	dlg->Filter = "Yahtzee Games (*.ytz)|*.ytz|All files (*.*)|*.*";
	dlg->Title = "Save your game!";

	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		fiPtr->saveFile(msclr::interop::marshal_as< std::string >(dlg->FileName));
	}
}
private: System::Void contentsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	helpGUI::help^ hlp = gcnew helpGUI::help();
	hlp->Show();
}
};
}