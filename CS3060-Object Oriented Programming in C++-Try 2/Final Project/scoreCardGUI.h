#pragma once

namespace scoreCardGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for scoreCard
	/// </summary>
	public ref class scoreCardGUI : public System::Windows::Forms::Form
	{
	public:
		scoreCardGUI(void)
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
		~scoreCardGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  scoreCardBack;
	private: System::Windows::Forms::Label^  p1Aces;
	private: System::Windows::Forms::Label^  p1Twos;
	private: System::Windows::Forms::Label^  p1Threes;
	private: System::Windows::Forms::Label^  p1Fours;
	private: System::Windows::Forms::Label^  p1Fives;
	private: System::Windows::Forms::Label^  p1Sixes;
	private: System::Windows::Forms::Label^  p1UpperTotalPre;
	private: System::Windows::Forms::Label^  p1Bonus;
	private: System::Windows::Forms::Label^  p1UpperTotal;
	private: System::Windows::Forms::Label^  p1ThreeKind;
	private: System::Windows::Forms::Label^  p1FourKind;
	private: System::Windows::Forms::Label^  p1FullHouse;
	private: System::Windows::Forms::Label^  p1SmStraight;
	private: System::Windows::Forms::Label^  p1LgStraight;
	private: System::Windows::Forms::Label^  p1Yahtzee;
	private: System::Windows::Forms::Label^  p1Chance;
	private: System::Windows::Forms::Label^  p1LowerTotal;
	private: System::Windows::Forms::Label^  p1UpperTotalBtm;
	private: System::Windows::Forms::Label^  p1Total;
	private: System::Windows::Forms::Label^  p1YahtzeeBonus;
	private: System::Windows::Forms::Label^  p1YahtzeeBonusCheck1;
	private: System::Windows::Forms::Label^  p1YahtzeeBonusCheck2;
	private: System::Windows::Forms::Label^  p2YahtzeeBonusCheck2;

	private: System::Windows::Forms::Label^  p2YahtzeeBonusCheck1;
	private: System::Windows::Forms::Label^  p2YahtzeeBonus;
	private: System::Windows::Forms::Label^  p2Total;



	private: System::Windows::Forms::Label^  p2UpperTotalBtm;

	private: System::Windows::Forms::Label^  p2LowerTotal;

	private: System::Windows::Forms::Label^  p2Chance;

	private: System::Windows::Forms::Label^  p2Yahtzee;

	private: System::Windows::Forms::Label^  p2LgStraight;

	private: System::Windows::Forms::Label^  p2SmStraight;

	private: System::Windows::Forms::Label^  p2FullHouse;

	private: System::Windows::Forms::Label^  p2FourKind;

	private: System::Windows::Forms::Label^  p2ThreeKind;

	private: System::Windows::Forms::Label^  p2UpperTotal;

	private: System::Windows::Forms::Label^  p2Bonus;

	private: System::Windows::Forms::Label^  p2UpperTotalPre;

	private: System::Windows::Forms::Label^  p2Sixes;

	private: System::Windows::Forms::Label^  p2Fives;

	private: System::Windows::Forms::Label^  p2Fours;

	private: System::Windows::Forms::Label^  p2Threes;


	private: System::Windows::Forms::Label^  p2Twos;

	private: System::Windows::Forms::Label^  p2Aces;
	private: System::Windows::Forms::Label^  p3YahtzeeBonusCheck2;


	private: System::Windows::Forms::Label^  p3YahtzeeBonusCheck1;
	private: System::Windows::Forms::Label^  p3YahtzeeBonus;
	private: System::Windows::Forms::Label^  p3Total;



	private: System::Windows::Forms::Label^  p3UpperTotalBtm;

	private: System::Windows::Forms::Label^  p3LowerTotal;

	private: System::Windows::Forms::Label^  p3Chance;

	private: System::Windows::Forms::Label^  p3Yahtzee;

	private: System::Windows::Forms::Label^  p3LgStraight;

	private: System::Windows::Forms::Label^  p3SmStraight;

	private: System::Windows::Forms::Label^  p3FullHouse;

	private: System::Windows::Forms::Label^  p3FourKind;


	private: System::Windows::Forms::Label^  p3ThreeKind;

	private: System::Windows::Forms::Label^  p3UpperTotal;

	private: System::Windows::Forms::Label^  p3Bonus;

	private: System::Windows::Forms::Label^  p3UpperTotalPre;

	private: System::Windows::Forms::Label^  p3Sixes;

	private: System::Windows::Forms::Label^  p3Fives;

	private: System::Windows::Forms::Label^  p3Fours;

	private: System::Windows::Forms::Label^  p3Threes;

	private: System::Windows::Forms::Label^  p3Twos;


	private: System::Windows::Forms::Label^  p3Aces;
private: System::Windows::Forms::Label^  p6YahtzeeBonusCheck2;

private: System::Windows::Forms::Label^  p6YahtzeeBonusCheck1;
private: System::Windows::Forms::Label^  p6YahtzeeBonus;
private: System::Windows::Forms::Label^  p6Total;



private: System::Windows::Forms::Label^  p6UpperTotalBtm;

private: System::Windows::Forms::Label^  p6LowerTotal;

private: System::Windows::Forms::Label^  p6Chance;

private: System::Windows::Forms::Label^  p6Yahtzee;

private: System::Windows::Forms::Label^  p6LgStraight;

private: System::Windows::Forms::Label^  p6SmStraight;

private: System::Windows::Forms::Label^  p6FullHouse;

private: System::Windows::Forms::Label^  p6FourKind;

private: System::Windows::Forms::Label^  p6ThreeKind;

private: System::Windows::Forms::Label^  p6UpperTotal;

private: System::Windows::Forms::Label^  p6Bonus;

private: System::Windows::Forms::Label^  p6UpperTotalPre;

private: System::Windows::Forms::Label^  p6Sixes;

private: System::Windows::Forms::Label^  p6Fives;

private: System::Windows::Forms::Label^  p6Fours;

private: System::Windows::Forms::Label^  p6Threes;

private: System::Windows::Forms::Label^  p6Twos;

private: System::Windows::Forms::Label^  p6Aces;
private: System::Windows::Forms::Label^  p5YahtzeeBonusCheck2;


private: System::Windows::Forms::Label^  p5YahtzeeBonusCheck1;
private: System::Windows::Forms::Label^  p5YahtzeeBonus;
private: System::Windows::Forms::Label^  p5Total;



private: System::Windows::Forms::Label^  p5UpperTotalBtm;

private: System::Windows::Forms::Label^  p5LowerTotal;

private: System::Windows::Forms::Label^  p5Chance;

private: System::Windows::Forms::Label^  p5Yahtzee;

private: System::Windows::Forms::Label^  p5LgStraight;

private: System::Windows::Forms::Label^  p5SmStraight;

private: System::Windows::Forms::Label^  p5FullHouse;

private: System::Windows::Forms::Label^  p5FourKind;

private: System::Windows::Forms::Label^  p5ThreeKind;

private: System::Windows::Forms::Label^  p5UpperTotal;

private: System::Windows::Forms::Label^  p5Bonus;

private: System::Windows::Forms::Label^  p5UpperTotalPre;

private: System::Windows::Forms::Label^  p5Sixes;

private: System::Windows::Forms::Label^  p5Fives;

private: System::Windows::Forms::Label^  p5Fours;

private: System::Windows::Forms::Label^  p5Threes;

private: System::Windows::Forms::Label^  p5Twos;

private: System::Windows::Forms::Label^  p5Aces;
private: System::Windows::Forms::Label^  p4YahtzeeBonusCheck2;


private: System::Windows::Forms::Label^  p4YahtzeeBonusCheck1;
private: System::Windows::Forms::Label^  p4YahtzeeBonus;
private: System::Windows::Forms::Label^  p4Total;



private: System::Windows::Forms::Label^  p4UpperTotalBtm;

private: System::Windows::Forms::Label^  p4LowerTotal;

private: System::Windows::Forms::Label^  p4Chance;

private: System::Windows::Forms::Label^  p4Yahtzee;

private: System::Windows::Forms::Label^  p4LgStraight;

private: System::Windows::Forms::Label^  p4SmStraight;

private: System::Windows::Forms::Label^  p4FullHouse;

private: System::Windows::Forms::Label^  p4FourKind;

private: System::Windows::Forms::Label^  p4ThreeKind;

private: System::Windows::Forms::Label^  p4UpperTotal;


private: System::Windows::Forms::Label^  p4Bonus;

private: System::Windows::Forms::Label^  p4UpperTotalPre;

private: System::Windows::Forms::Label^  p4Sixes;

private: System::Windows::Forms::Label^  p4Fives;

private: System::Windows::Forms::Label^  p4Fours;

private: System::Windows::Forms::Label^  p4Threes;

private: System::Windows::Forms::Label^  p4Twos;

private: System::Windows::Forms::Label^  p4Aces;



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
			this->scoreCardBack = (gcnew System::Windows::Forms::PictureBox());
			this->p1Aces = (gcnew System::Windows::Forms::Label());
			this->p1Twos = (gcnew System::Windows::Forms::Label());
			this->p1Threes = (gcnew System::Windows::Forms::Label());
			this->p1Fours = (gcnew System::Windows::Forms::Label());
			this->p1Fives = (gcnew System::Windows::Forms::Label());
			this->p1Sixes = (gcnew System::Windows::Forms::Label());
			this->p1UpperTotalPre = (gcnew System::Windows::Forms::Label());
			this->p1Bonus = (gcnew System::Windows::Forms::Label());
			this->p1UpperTotal = (gcnew System::Windows::Forms::Label());
			this->p1ThreeKind = (gcnew System::Windows::Forms::Label());
			this->p1FourKind = (gcnew System::Windows::Forms::Label());
			this->p1FullHouse = (gcnew System::Windows::Forms::Label());
			this->p1SmStraight = (gcnew System::Windows::Forms::Label());
			this->p1LgStraight = (gcnew System::Windows::Forms::Label());
			this->p1Yahtzee = (gcnew System::Windows::Forms::Label());
			this->p1Chance = (gcnew System::Windows::Forms::Label());
			this->p1LowerTotal = (gcnew System::Windows::Forms::Label());
			this->p1UpperTotalBtm = (gcnew System::Windows::Forms::Label());
			this->p1Total = (gcnew System::Windows::Forms::Label());
			this->p1YahtzeeBonus = (gcnew System::Windows::Forms::Label());
			this->p1YahtzeeBonusCheck1 = (gcnew System::Windows::Forms::Label());
			this->p1YahtzeeBonusCheck2 = (gcnew System::Windows::Forms::Label());
			this->p2YahtzeeBonusCheck2 = (gcnew System::Windows::Forms::Label());
			this->p2YahtzeeBonusCheck1 = (gcnew System::Windows::Forms::Label());
			this->p2YahtzeeBonus = (gcnew System::Windows::Forms::Label());
			this->p2Total = (gcnew System::Windows::Forms::Label());
			this->p2UpperTotalBtm = (gcnew System::Windows::Forms::Label());
			this->p2LowerTotal = (gcnew System::Windows::Forms::Label());
			this->p2Chance = (gcnew System::Windows::Forms::Label());
			this->p2Yahtzee = (gcnew System::Windows::Forms::Label());
			this->p2LgStraight = (gcnew System::Windows::Forms::Label());
			this->p2SmStraight = (gcnew System::Windows::Forms::Label());
			this->p2FullHouse = (gcnew System::Windows::Forms::Label());
			this->p2FourKind = (gcnew System::Windows::Forms::Label());
			this->p2ThreeKind = (gcnew System::Windows::Forms::Label());
			this->p2UpperTotal = (gcnew System::Windows::Forms::Label());
			this->p2Bonus = (gcnew System::Windows::Forms::Label());
			this->p2UpperTotalPre = (gcnew System::Windows::Forms::Label());
			this->p2Sixes = (gcnew System::Windows::Forms::Label());
			this->p2Fives = (gcnew System::Windows::Forms::Label());
			this->p2Fours = (gcnew System::Windows::Forms::Label());
			this->p2Threes = (gcnew System::Windows::Forms::Label());
			this->p2Twos = (gcnew System::Windows::Forms::Label());
			this->p2Aces = (gcnew System::Windows::Forms::Label());
			this->p3YahtzeeBonusCheck2 = (gcnew System::Windows::Forms::Label());
			this->p3YahtzeeBonusCheck1 = (gcnew System::Windows::Forms::Label());
			this->p3YahtzeeBonus = (gcnew System::Windows::Forms::Label());
			this->p3Total = (gcnew System::Windows::Forms::Label());
			this->p3UpperTotalBtm = (gcnew System::Windows::Forms::Label());
			this->p3LowerTotal = (gcnew System::Windows::Forms::Label());
			this->p3Chance = (gcnew System::Windows::Forms::Label());
			this->p3Yahtzee = (gcnew System::Windows::Forms::Label());
			this->p3LgStraight = (gcnew System::Windows::Forms::Label());
			this->p3SmStraight = (gcnew System::Windows::Forms::Label());
			this->p3FullHouse = (gcnew System::Windows::Forms::Label());
			this->p3FourKind = (gcnew System::Windows::Forms::Label());
			this->p3ThreeKind = (gcnew System::Windows::Forms::Label());
			this->p3UpperTotal = (gcnew System::Windows::Forms::Label());
			this->p3Bonus = (gcnew System::Windows::Forms::Label());
			this->p3UpperTotalPre = (gcnew System::Windows::Forms::Label());
			this->p3Sixes = (gcnew System::Windows::Forms::Label());
			this->p3Fives = (gcnew System::Windows::Forms::Label());
			this->p3Fours = (gcnew System::Windows::Forms::Label());
			this->p3Threes = (gcnew System::Windows::Forms::Label());
			this->p3Twos = (gcnew System::Windows::Forms::Label());
			this->p3Aces = (gcnew System::Windows::Forms::Label());
			this->p6YahtzeeBonusCheck2 = (gcnew System::Windows::Forms::Label());
			this->p6YahtzeeBonusCheck1 = (gcnew System::Windows::Forms::Label());
			this->p6YahtzeeBonus = (gcnew System::Windows::Forms::Label());
			this->p6Total = (gcnew System::Windows::Forms::Label());
			this->p6UpperTotalBtm = (gcnew System::Windows::Forms::Label());
			this->p6LowerTotal = (gcnew System::Windows::Forms::Label());
			this->p6Chance = (gcnew System::Windows::Forms::Label());
			this->p6Yahtzee = (gcnew System::Windows::Forms::Label());
			this->p6LgStraight = (gcnew System::Windows::Forms::Label());
			this->p6SmStraight = (gcnew System::Windows::Forms::Label());
			this->p6FullHouse = (gcnew System::Windows::Forms::Label());
			this->p6FourKind = (gcnew System::Windows::Forms::Label());
			this->p6ThreeKind = (gcnew System::Windows::Forms::Label());
			this->p6UpperTotal = (gcnew System::Windows::Forms::Label());
			this->p6Bonus = (gcnew System::Windows::Forms::Label());
			this->p6UpperTotalPre = (gcnew System::Windows::Forms::Label());
			this->p6Sixes = (gcnew System::Windows::Forms::Label());
			this->p6Fives = (gcnew System::Windows::Forms::Label());
			this->p6Fours = (gcnew System::Windows::Forms::Label());
			this->p6Threes = (gcnew System::Windows::Forms::Label());
			this->p6Twos = (gcnew System::Windows::Forms::Label());
			this->p6Aces = (gcnew System::Windows::Forms::Label());
			this->p5YahtzeeBonusCheck2 = (gcnew System::Windows::Forms::Label());
			this->p5YahtzeeBonusCheck1 = (gcnew System::Windows::Forms::Label());
			this->p5YahtzeeBonus = (gcnew System::Windows::Forms::Label());
			this->p5Total = (gcnew System::Windows::Forms::Label());
			this->p5UpperTotalBtm = (gcnew System::Windows::Forms::Label());
			this->p5LowerTotal = (gcnew System::Windows::Forms::Label());
			this->p5Chance = (gcnew System::Windows::Forms::Label());
			this->p5Yahtzee = (gcnew System::Windows::Forms::Label());
			this->p5LgStraight = (gcnew System::Windows::Forms::Label());
			this->p5SmStraight = (gcnew System::Windows::Forms::Label());
			this->p5FullHouse = (gcnew System::Windows::Forms::Label());
			this->p5FourKind = (gcnew System::Windows::Forms::Label());
			this->p5ThreeKind = (gcnew System::Windows::Forms::Label());
			this->p5UpperTotal = (gcnew System::Windows::Forms::Label());
			this->p5Bonus = (gcnew System::Windows::Forms::Label());
			this->p5UpperTotalPre = (gcnew System::Windows::Forms::Label());
			this->p5Sixes = (gcnew System::Windows::Forms::Label());
			this->p5Fives = (gcnew System::Windows::Forms::Label());
			this->p5Fours = (gcnew System::Windows::Forms::Label());
			this->p5Threes = (gcnew System::Windows::Forms::Label());
			this->p5Twos = (gcnew System::Windows::Forms::Label());
			this->p5Aces = (gcnew System::Windows::Forms::Label());
			this->p4YahtzeeBonusCheck2 = (gcnew System::Windows::Forms::Label());
			this->p4YahtzeeBonusCheck1 = (gcnew System::Windows::Forms::Label());
			this->p4YahtzeeBonus = (gcnew System::Windows::Forms::Label());
			this->p4Total = (gcnew System::Windows::Forms::Label());
			this->p4UpperTotalBtm = (gcnew System::Windows::Forms::Label());
			this->p4LowerTotal = (gcnew System::Windows::Forms::Label());
			this->p4Chance = (gcnew System::Windows::Forms::Label());
			this->p4Yahtzee = (gcnew System::Windows::Forms::Label());
			this->p4LgStraight = (gcnew System::Windows::Forms::Label());
			this->p4SmStraight = (gcnew System::Windows::Forms::Label());
			this->p4FullHouse = (gcnew System::Windows::Forms::Label());
			this->p4FourKind = (gcnew System::Windows::Forms::Label());
			this->p4ThreeKind = (gcnew System::Windows::Forms::Label());
			this->p4UpperTotal = (gcnew System::Windows::Forms::Label());
			this->p4Bonus = (gcnew System::Windows::Forms::Label());
			this->p4UpperTotalPre = (gcnew System::Windows::Forms::Label());
			this->p4Sixes = (gcnew System::Windows::Forms::Label());
			this->p4Fives = (gcnew System::Windows::Forms::Label());
			this->p4Fours = (gcnew System::Windows::Forms::Label());
			this->p4Threes = (gcnew System::Windows::Forms::Label());
			this->p4Twos = (gcnew System::Windows::Forms::Label());
			this->p4Aces = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scoreCardBack))->BeginInit();
			this->SuspendLayout();
			// 
			// scoreCardBack
			// 
			this->scoreCardBack->Dock = System::Windows::Forms::DockStyle::Fill;
			this->scoreCardBack->ImageLocation = L"F:\\GUI\\GUI\\scorecard_rev.png";
			this->scoreCardBack->Location = System::Drawing::Point(0, 0);
			this->scoreCardBack->Name = L"scoreCardBack";
			this->scoreCardBack->Size = System::Drawing::Size(397, 599);
			this->scoreCardBack->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->scoreCardBack->TabIndex = 0;
			this->scoreCardBack->TabStop = false;
			// 
			// p1Aces
			// 
			this->p1Aces->BackColor = System::Drawing::Color::White;
			this->p1Aces->Location = System::Drawing::Point(183, 30);
			this->p1Aces->Name = L"p1Aces";
			this->p1Aces->Size = System::Drawing::Size(32, 26);
			this->p1Aces->TabIndex = 2;
			this->p1Aces->Text = L" ";
			this->p1Aces->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1Twos
			// 
			this->p1Twos->BackColor = System::Drawing::Color::White;
			this->p1Twos->Location = System::Drawing::Point(183, 58);
			this->p1Twos->Name = L"p1Twos";
			this->p1Twos->Size = System::Drawing::Size(32, 24);
			this->p1Twos->TabIndex = 3;
			this->p1Twos->Text = L" ";
			this->p1Twos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1Threes
			// 
			this->p1Threes->BackColor = System::Drawing::Color::White;
			this->p1Threes->Location = System::Drawing::Point(183, 84);
			this->p1Threes->Name = L"p1Threes";
			this->p1Threes->Size = System::Drawing::Size(32, 23);
			this->p1Threes->TabIndex = 4;
			this->p1Threes->Text = L" ";
			this->p1Threes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1Fours
			// 
			this->p1Fours->BackColor = System::Drawing::Color::White;
			this->p1Fours->Location = System::Drawing::Point(183, 109);
			this->p1Fours->Name = L"p1Fours";
			this->p1Fours->Size = System::Drawing::Size(32, 23);
			this->p1Fours->TabIndex = 5;
			this->p1Fours->Text = L" ";
			this->p1Fours->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1Fives
			// 
			this->p1Fives->BackColor = System::Drawing::Color::White;
			this->p1Fives->Location = System::Drawing::Point(183, 136);
			this->p1Fives->Name = L"p1Fives";
			this->p1Fives->Size = System::Drawing::Size(32, 22);
			this->p1Fives->TabIndex = 6;
			this->p1Fives->Text = L" ";
			this->p1Fives->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1Sixes
			// 
			this->p1Sixes->BackColor = System::Drawing::Color::White;
			this->p1Sixes->Location = System::Drawing::Point(183, 162);
			this->p1Sixes->Name = L"p1Sixes";
			this->p1Sixes->Size = System::Drawing::Size(32, 14);
			this->p1Sixes->TabIndex = 7;
			this->p1Sixes->Text = L" ";
			this->p1Sixes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1UpperTotalPre
			// 
			this->p1UpperTotalPre->BackColor = System::Drawing::Color::White;
			this->p1UpperTotalPre->Location = System::Drawing::Point(183, 190);
			this->p1UpperTotalPre->Name = L"p1UpperTotalPre";
			this->p1UpperTotalPre->Size = System::Drawing::Size(32, 18);
			this->p1UpperTotalPre->TabIndex = 8;
			this->p1UpperTotalPre->Text = L" ";
			this->p1UpperTotalPre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1Bonus
			// 
			this->p1Bonus->BackColor = System::Drawing::Color::White;
			this->p1Bonus->Location = System::Drawing::Point(183, 213);
			this->p1Bonus->Name = L"p1Bonus";
			this->p1Bonus->Size = System::Drawing::Size(32, 20);
			this->p1Bonus->TabIndex = 9;
			this->p1Bonus->Text = L" ";
			this->p1Bonus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1UpperTotal
			// 
			this->p1UpperTotal->BackColor = System::Drawing::Color::White;
			this->p1UpperTotal->Location = System::Drawing::Point(183, 238);
			this->p1UpperTotal->Name = L"p1UpperTotal";
			this->p1UpperTotal->Size = System::Drawing::Size(32, 14);
			this->p1UpperTotal->TabIndex = 10;
			this->p1UpperTotal->Text = L" ";
			this->p1UpperTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1ThreeKind
			// 
			this->p1ThreeKind->BackColor = System::Drawing::Color::White;
			this->p1ThreeKind->Location = System::Drawing::Point(183, 293);
			this->p1ThreeKind->Name = L"p1ThreeKind";
			this->p1ThreeKind->Size = System::Drawing::Size(32, 14);
			this->p1ThreeKind->TabIndex = 11;
			this->p1ThreeKind->Text = L" ";
			this->p1ThreeKind->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1FourKind
			// 
			this->p1FourKind->BackColor = System::Drawing::Color::White;
			this->p1FourKind->Location = System::Drawing::Point(183, 318);
			this->p1FourKind->Name = L"p1FourKind";
			this->p1FourKind->Size = System::Drawing::Size(32, 14);
			this->p1FourKind->TabIndex = 12;
			this->p1FourKind->Text = L" ";
			this->p1FourKind->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1FullHouse
			// 
			this->p1FullHouse->BackColor = System::Drawing::Color::White;
			this->p1FullHouse->Location = System::Drawing::Point(183, 343);
			this->p1FullHouse->Name = L"p1FullHouse";
			this->p1FullHouse->Size = System::Drawing::Size(32, 14);
			this->p1FullHouse->TabIndex = 13;
			this->p1FullHouse->Text = L" ";
			this->p1FullHouse->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1SmStraight
			// 
			this->p1SmStraight->BackColor = System::Drawing::Color::White;
			this->p1SmStraight->Location = System::Drawing::Point(183, 369);
			this->p1SmStraight->Name = L"p1SmStraight";
			this->p1SmStraight->Size = System::Drawing::Size(32, 14);
			this->p1SmStraight->TabIndex = 14;
			this->p1SmStraight->Text = L" ";
			this->p1SmStraight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1LgStraight
			// 
			this->p1LgStraight->BackColor = System::Drawing::Color::White;
			this->p1LgStraight->Location = System::Drawing::Point(183, 394);
			this->p1LgStraight->Name = L"p1LgStraight";
			this->p1LgStraight->Size = System::Drawing::Size(32, 14);
			this->p1LgStraight->TabIndex = 15;
			this->p1LgStraight->Text = L" ";
			this->p1LgStraight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1Yahtzee
			// 
			this->p1Yahtzee->BackColor = System::Drawing::Color::White;
			this->p1Yahtzee->Location = System::Drawing::Point(183, 419);
			this->p1Yahtzee->Name = L"p1Yahtzee";
			this->p1Yahtzee->Size = System::Drawing::Size(32, 14);
			this->p1Yahtzee->TabIndex = 16;
			this->p1Yahtzee->Text = L" ";
			this->p1Yahtzee->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1Chance
			// 
			this->p1Chance->BackColor = System::Drawing::Color::White;
			this->p1Chance->Location = System::Drawing::Point(183, 444);
			this->p1Chance->Name = L"p1Chance";
			this->p1Chance->Size = System::Drawing::Size(32, 14);
			this->p1Chance->TabIndex = 17;
			this->p1Chance->Text = L" ";
			this->p1Chance->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1LowerTotal
			// 
			this->p1LowerTotal->BackColor = System::Drawing::Color::White;
			this->p1LowerTotal->Location = System::Drawing::Point(183, 522);
			this->p1LowerTotal->Name = L"p1LowerTotal";
			this->p1LowerTotal->Size = System::Drawing::Size(32, 14);
			this->p1LowerTotal->TabIndex = 18;
			this->p1LowerTotal->Text = L" ";
			this->p1LowerTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1UpperTotalBtm
			// 
			this->p1UpperTotalBtm->BackColor = System::Drawing::Color::White;
			this->p1UpperTotalBtm->Location = System::Drawing::Point(183, 545);
			this->p1UpperTotalBtm->Name = L"p1UpperTotalBtm";
			this->p1UpperTotalBtm->Size = System::Drawing::Size(32, 14);
			this->p1UpperTotalBtm->TabIndex = 19;
			this->p1UpperTotalBtm->Text = L" ";
			this->p1UpperTotalBtm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1Total
			// 
			this->p1Total->BackColor = System::Drawing::Color::White;
			this->p1Total->Location = System::Drawing::Point(183, 569);
			this->p1Total->Name = L"p1Total";
			this->p1Total->Size = System::Drawing::Size(32, 14);
			this->p1Total->TabIndex = 20;
			this->p1Total->Text = L" ";
			this->p1Total->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1YahtzeeBonus
			// 
			this->p1YahtzeeBonus->BackColor = System::Drawing::Color::White;
			this->p1YahtzeeBonus->Location = System::Drawing::Point(183, 493);
			this->p1YahtzeeBonus->Name = L"p1YahtzeeBonus";
			this->p1YahtzeeBonus->Size = System::Drawing::Size(32, 14);
			this->p1YahtzeeBonus->TabIndex = 21;
			this->p1YahtzeeBonus->Text = L" ";
			this->p1YahtzeeBonus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1YahtzeeBonusCheck1
			// 
			this->p1YahtzeeBonusCheck1->BackColor = System::Drawing::Color::White;
			this->p1YahtzeeBonusCheck1->Location = System::Drawing::Point(183, 468);
			this->p1YahtzeeBonusCheck1->Name = L"p1YahtzeeBonusCheck1";
			this->p1YahtzeeBonusCheck1->Size = System::Drawing::Size(15, 14);
			this->p1YahtzeeBonusCheck1->TabIndex = 22;
			this->p1YahtzeeBonusCheck1->Text = L" ";
			this->p1YahtzeeBonusCheck1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1YahtzeeBonusCheck2
			// 
			this->p1YahtzeeBonusCheck2->BackColor = System::Drawing::Color::White;
			this->p1YahtzeeBonusCheck2->Location = System::Drawing::Point(200, 468);
			this->p1YahtzeeBonusCheck2->Name = L"p1YahtzeeBonusCheck2";
			this->p1YahtzeeBonusCheck2->Size = System::Drawing::Size(15, 14);
			this->p1YahtzeeBonusCheck2->TabIndex = 23;
			this->p1YahtzeeBonusCheck2->Text = L" ";
			this->p1YahtzeeBonusCheck2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2YahtzeeBonusCheck2
			// 
			this->p2YahtzeeBonusCheck2->BackColor = System::Drawing::Color::White;
			this->p2YahtzeeBonusCheck2->Location = System::Drawing::Point(235, 468);
			this->p2YahtzeeBonusCheck2->Name = L"p2YahtzeeBonusCheck2";
			this->p2YahtzeeBonusCheck2->Size = System::Drawing::Size(15, 14);
			this->p2YahtzeeBonusCheck2->TabIndex = 46;
			this->p2YahtzeeBonusCheck2->Text = L" ";
			this->p2YahtzeeBonusCheck2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2YahtzeeBonusCheck1
			// 
			this->p2YahtzeeBonusCheck1->BackColor = System::Drawing::Color::White;
			this->p2YahtzeeBonusCheck1->Location = System::Drawing::Point(218, 468);
			this->p2YahtzeeBonusCheck1->Name = L"p2YahtzeeBonusCheck1";
			this->p2YahtzeeBonusCheck1->Size = System::Drawing::Size(15, 14);
			this->p2YahtzeeBonusCheck1->TabIndex = 45;
			this->p2YahtzeeBonusCheck1->Text = L" ";
			this->p2YahtzeeBonusCheck1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2YahtzeeBonus
			// 
			this->p2YahtzeeBonus->BackColor = System::Drawing::Color::White;
			this->p2YahtzeeBonus->Location = System::Drawing::Point(218, 493);
			this->p2YahtzeeBonus->Name = L"p2YahtzeeBonus";
			this->p2YahtzeeBonus->Size = System::Drawing::Size(32, 14);
			this->p2YahtzeeBonus->TabIndex = 44;
			this->p2YahtzeeBonus->Text = L" ";
			this->p2YahtzeeBonus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2Total
			// 
			this->p2Total->BackColor = System::Drawing::Color::White;
			this->p2Total->Location = System::Drawing::Point(218, 569);
			this->p2Total->Name = L"p2Total";
			this->p2Total->Size = System::Drawing::Size(32, 14);
			this->p2Total->TabIndex = 43;
			this->p2Total->Text = L" ";
			this->p2Total->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2UpperTotalBtm
			// 
			this->p2UpperTotalBtm->BackColor = System::Drawing::Color::White;
			this->p2UpperTotalBtm->Location = System::Drawing::Point(218, 545);
			this->p2UpperTotalBtm->Name = L"p2UpperTotalBtm";
			this->p2UpperTotalBtm->Size = System::Drawing::Size(32, 14);
			this->p2UpperTotalBtm->TabIndex = 42;
			this->p2UpperTotalBtm->Text = L" ";
			this->p2UpperTotalBtm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2LowerTotal
			// 
			this->p2LowerTotal->BackColor = System::Drawing::Color::White;
			this->p2LowerTotal->Location = System::Drawing::Point(218, 522);
			this->p2LowerTotal->Name = L"p2LowerTotal";
			this->p2LowerTotal->Size = System::Drawing::Size(32, 14);
			this->p2LowerTotal->TabIndex = 41;
			this->p2LowerTotal->Text = L" ";
			this->p2LowerTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2Chance
			// 
			this->p2Chance->BackColor = System::Drawing::Color::White;
			this->p2Chance->Location = System::Drawing::Point(218, 444);
			this->p2Chance->Name = L"p2Chance";
			this->p2Chance->Size = System::Drawing::Size(32, 14);
			this->p2Chance->TabIndex = 40;
			this->p2Chance->Text = L" ";
			this->p2Chance->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2Yahtzee
			// 
			this->p2Yahtzee->BackColor = System::Drawing::Color::White;
			this->p2Yahtzee->Location = System::Drawing::Point(218, 419);
			this->p2Yahtzee->Name = L"p2Yahtzee";
			this->p2Yahtzee->Size = System::Drawing::Size(32, 14);
			this->p2Yahtzee->TabIndex = 39;
			this->p2Yahtzee->Text = L" ";
			this->p2Yahtzee->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2LgStraight
			// 
			this->p2LgStraight->BackColor = System::Drawing::Color::White;
			this->p2LgStraight->Location = System::Drawing::Point(218, 394);
			this->p2LgStraight->Name = L"p2LgStraight";
			this->p2LgStraight->Size = System::Drawing::Size(32, 14);
			this->p2LgStraight->TabIndex = 38;
			this->p2LgStraight->Text = L" ";
			this->p2LgStraight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2SmStraight
			// 
			this->p2SmStraight->BackColor = System::Drawing::Color::White;
			this->p2SmStraight->Location = System::Drawing::Point(218, 369);
			this->p2SmStraight->Name = L"p2SmStraight";
			this->p2SmStraight->Size = System::Drawing::Size(32, 14);
			this->p2SmStraight->TabIndex = 37;
			this->p2SmStraight->Text = L" ";
			this->p2SmStraight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2FullHouse
			// 
			this->p2FullHouse->BackColor = System::Drawing::Color::White;
			this->p2FullHouse->Location = System::Drawing::Point(218, 343);
			this->p2FullHouse->Name = L"p2FullHouse";
			this->p2FullHouse->Size = System::Drawing::Size(32, 14);
			this->p2FullHouse->TabIndex = 36;
			this->p2FullHouse->Text = L" ";
			this->p2FullHouse->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2FourKind
			// 
			this->p2FourKind->BackColor = System::Drawing::Color::White;
			this->p2FourKind->Location = System::Drawing::Point(218, 318);
			this->p2FourKind->Name = L"p2FourKind";
			this->p2FourKind->Size = System::Drawing::Size(32, 14);
			this->p2FourKind->TabIndex = 35;
			this->p2FourKind->Text = L" ";
			this->p2FourKind->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2ThreeKind
			// 
			this->p2ThreeKind->BackColor = System::Drawing::Color::White;
			this->p2ThreeKind->Location = System::Drawing::Point(218, 292);
			this->p2ThreeKind->Name = L"p2ThreeKind";
			this->p2ThreeKind->Size = System::Drawing::Size(32, 14);
			this->p2ThreeKind->TabIndex = 34;
			this->p2ThreeKind->Text = L" ";
			this->p2ThreeKind->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2UpperTotal
			// 
			this->p2UpperTotal->BackColor = System::Drawing::Color::White;
			this->p2UpperTotal->Location = System::Drawing::Point(218, 238);
			this->p2UpperTotal->Name = L"p2UpperTotal";
			this->p2UpperTotal->Size = System::Drawing::Size(32, 14);
			this->p2UpperTotal->TabIndex = 33;
			this->p2UpperTotal->Text = L" ";
			this->p2UpperTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2Bonus
			// 
			this->p2Bonus->BackColor = System::Drawing::Color::White;
			this->p2Bonus->Location = System::Drawing::Point(218, 213);
			this->p2Bonus->Name = L"p2Bonus";
			this->p2Bonus->Size = System::Drawing::Size(32, 20);
			this->p2Bonus->TabIndex = 32;
			this->p2Bonus->Text = L" ";
			this->p2Bonus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2UpperTotalPre
			// 
			this->p2UpperTotalPre->BackColor = System::Drawing::Color::White;
			this->p2UpperTotalPre->Location = System::Drawing::Point(218, 190);
			this->p2UpperTotalPre->Name = L"p2UpperTotalPre";
			this->p2UpperTotalPre->Size = System::Drawing::Size(32, 18);
			this->p2UpperTotalPre->TabIndex = 31;
			this->p2UpperTotalPre->Text = L" ";
			this->p2UpperTotalPre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2Sixes
			// 
			this->p2Sixes->BackColor = System::Drawing::Color::White;
			this->p2Sixes->Location = System::Drawing::Point(218, 162);
			this->p2Sixes->Name = L"p2Sixes";
			this->p2Sixes->Size = System::Drawing::Size(32, 14);
			this->p2Sixes->TabIndex = 30;
			this->p2Sixes->Text = L" ";
			this->p2Sixes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2Fives
			// 
			this->p2Fives->BackColor = System::Drawing::Color::White;
			this->p2Fives->Location = System::Drawing::Point(218, 136);
			this->p2Fives->Name = L"p2Fives";
			this->p2Fives->Size = System::Drawing::Size(32, 22);
			this->p2Fives->TabIndex = 29;
			this->p2Fives->Text = L" ";
			this->p2Fives->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2Fours
			// 
			this->p2Fours->BackColor = System::Drawing::Color::White;
			this->p2Fours->Location = System::Drawing::Point(218, 110);
			this->p2Fours->Name = L"p2Fours";
			this->p2Fours->Size = System::Drawing::Size(32, 23);
			this->p2Fours->TabIndex = 28;
			this->p2Fours->Text = L" ";
			this->p2Fours->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2Threes
			// 
			this->p2Threes->BackColor = System::Drawing::Color::White;
			this->p2Threes->Location = System::Drawing::Point(218, 84);
			this->p2Threes->Name = L"p2Threes";
			this->p2Threes->Size = System::Drawing::Size(32, 23);
			this->p2Threes->TabIndex = 27;
			this->p2Threes->Text = L" ";
			this->p2Threes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2Twos
			// 
			this->p2Twos->BackColor = System::Drawing::Color::White;
			this->p2Twos->Location = System::Drawing::Point(218, 58);
			this->p2Twos->Name = L"p2Twos";
			this->p2Twos->Size = System::Drawing::Size(32, 24);
			this->p2Twos->TabIndex = 26;
			this->p2Twos->Text = L" ";
			this->p2Twos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2Aces
			// 
			this->p2Aces->BackColor = System::Drawing::Color::White;
			this->p2Aces->Location = System::Drawing::Point(218, 30);
			this->p2Aces->Name = L"p2Aces";
			this->p2Aces->Size = System::Drawing::Size(32, 26);
			this->p2Aces->TabIndex = 25;
			this->p2Aces->Text = L" ";
			this->p2Aces->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3YahtzeeBonusCheck2
			// 
			this->p3YahtzeeBonusCheck2->BackColor = System::Drawing::Color::White;
			this->p3YahtzeeBonusCheck2->Location = System::Drawing::Point(271, 468);
			this->p3YahtzeeBonusCheck2->Name = L"p3YahtzeeBonusCheck2";
			this->p3YahtzeeBonusCheck2->Size = System::Drawing::Size(15, 14);
			this->p3YahtzeeBonusCheck2->TabIndex = 69;
			this->p3YahtzeeBonusCheck2->Text = L" ";
			this->p3YahtzeeBonusCheck2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3YahtzeeBonusCheck1
			// 
			this->p3YahtzeeBonusCheck1->BackColor = System::Drawing::Color::White;
			this->p3YahtzeeBonusCheck1->Location = System::Drawing::Point(253, 468);
			this->p3YahtzeeBonusCheck1->Name = L"p3YahtzeeBonusCheck1";
			this->p3YahtzeeBonusCheck1->Size = System::Drawing::Size(15, 14);
			this->p3YahtzeeBonusCheck1->TabIndex = 68;
			this->p3YahtzeeBonusCheck1->Text = L" ";
			this->p3YahtzeeBonusCheck1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3YahtzeeBonus
			// 
			this->p3YahtzeeBonus->BackColor = System::Drawing::Color::White;
			this->p3YahtzeeBonus->Location = System::Drawing::Point(254, 493);
			this->p3YahtzeeBonus->Name = L"p3YahtzeeBonus";
			this->p3YahtzeeBonus->Size = System::Drawing::Size(32, 14);
			this->p3YahtzeeBonus->TabIndex = 67;
			this->p3YahtzeeBonus->Text = L" ";
			this->p3YahtzeeBonus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3Total
			// 
			this->p3Total->BackColor = System::Drawing::Color::White;
			this->p3Total->Location = System::Drawing::Point(255, 569);
			this->p3Total->Name = L"p3Total";
			this->p3Total->Size = System::Drawing::Size(32, 14);
			this->p3Total->TabIndex = 66;
			this->p3Total->Text = L" ";
			this->p3Total->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3UpperTotalBtm
			// 
			this->p3UpperTotalBtm->BackColor = System::Drawing::Color::White;
			this->p3UpperTotalBtm->Location = System::Drawing::Point(255, 545);
			this->p3UpperTotalBtm->Name = L"p3UpperTotalBtm";
			this->p3UpperTotalBtm->Size = System::Drawing::Size(32, 14);
			this->p3UpperTotalBtm->TabIndex = 65;
			this->p3UpperTotalBtm->Text = L" ";
			this->p3UpperTotalBtm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3LowerTotal
			// 
			this->p3LowerTotal->BackColor = System::Drawing::Color::White;
			this->p3LowerTotal->Location = System::Drawing::Point(255, 522);
			this->p3LowerTotal->Name = L"p3LowerTotal";
			this->p3LowerTotal->Size = System::Drawing::Size(32, 14);
			this->p3LowerTotal->TabIndex = 64;
			this->p3LowerTotal->Text = L" ";
			this->p3LowerTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3Chance
			// 
			this->p3Chance->BackColor = System::Drawing::Color::White;
			this->p3Chance->Location = System::Drawing::Point(254, 444);
			this->p3Chance->Name = L"p3Chance";
			this->p3Chance->Size = System::Drawing::Size(32, 14);
			this->p3Chance->TabIndex = 63;
			this->p3Chance->Text = L" ";
			this->p3Chance->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3Yahtzee
			// 
			this->p3Yahtzee->BackColor = System::Drawing::Color::White;
			this->p3Yahtzee->Location = System::Drawing::Point(254, 419);
			this->p3Yahtzee->Name = L"p3Yahtzee";
			this->p3Yahtzee->Size = System::Drawing::Size(32, 14);
			this->p3Yahtzee->TabIndex = 62;
			this->p3Yahtzee->Text = L" ";
			this->p3Yahtzee->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3LgStraight
			// 
			this->p3LgStraight->BackColor = System::Drawing::Color::White;
			this->p3LgStraight->Location = System::Drawing::Point(254, 394);
			this->p3LgStraight->Name = L"p3LgStraight";
			this->p3LgStraight->Size = System::Drawing::Size(32, 14);
			this->p3LgStraight->TabIndex = 61;
			this->p3LgStraight->Text = L" ";
			this->p3LgStraight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3SmStraight
			// 
			this->p3SmStraight->BackColor = System::Drawing::Color::White;
			this->p3SmStraight->Location = System::Drawing::Point(254, 369);
			this->p3SmStraight->Name = L"p3SmStraight";
			this->p3SmStraight->Size = System::Drawing::Size(32, 14);
			this->p3SmStraight->TabIndex = 60;
			this->p3SmStraight->Text = L" ";
			this->p3SmStraight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3FullHouse
			// 
			this->p3FullHouse->BackColor = System::Drawing::Color::White;
			this->p3FullHouse->Location = System::Drawing::Point(254, 343);
			this->p3FullHouse->Name = L"p3FullHouse";
			this->p3FullHouse->Size = System::Drawing::Size(32, 14);
			this->p3FullHouse->TabIndex = 59;
			this->p3FullHouse->Text = L" ";
			this->p3FullHouse->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3FourKind
			// 
			this->p3FourKind->BackColor = System::Drawing::Color::White;
			this->p3FourKind->Location = System::Drawing::Point(254, 318);
			this->p3FourKind->Name = L"p3FourKind";
			this->p3FourKind->Size = System::Drawing::Size(32, 14);
			this->p3FourKind->TabIndex = 58;
			this->p3FourKind->Text = L" ";
			this->p3FourKind->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3ThreeKind
			// 
			this->p3ThreeKind->BackColor = System::Drawing::Color::White;
			this->p3ThreeKind->Location = System::Drawing::Point(254, 292);
			this->p3ThreeKind->Name = L"p3ThreeKind";
			this->p3ThreeKind->Size = System::Drawing::Size(32, 14);
			this->p3ThreeKind->TabIndex = 57;
			this->p3ThreeKind->Text = L" ";
			this->p3ThreeKind->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3UpperTotal
			// 
			this->p3UpperTotal->BackColor = System::Drawing::Color::White;
			this->p3UpperTotal->Location = System::Drawing::Point(254, 238);
			this->p3UpperTotal->Name = L"p3UpperTotal";
			this->p3UpperTotal->Size = System::Drawing::Size(32, 14);
			this->p3UpperTotal->TabIndex = 56;
			this->p3UpperTotal->Text = L" ";
			this->p3UpperTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3Bonus
			// 
			this->p3Bonus->BackColor = System::Drawing::Color::White;
			this->p3Bonus->Location = System::Drawing::Point(254, 213);
			this->p3Bonus->Name = L"p3Bonus";
			this->p3Bonus->Size = System::Drawing::Size(32, 20);
			this->p3Bonus->TabIndex = 55;
			this->p3Bonus->Text = L" ";
			this->p3Bonus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3UpperTotalPre
			// 
			this->p3UpperTotalPre->BackColor = System::Drawing::Color::White;
			this->p3UpperTotalPre->Location = System::Drawing::Point(254, 190);
			this->p3UpperTotalPre->Name = L"p3UpperTotalPre";
			this->p3UpperTotalPre->Size = System::Drawing::Size(32, 18);
			this->p3UpperTotalPre->TabIndex = 54;
			this->p3UpperTotalPre->Text = L" ";
			this->p3UpperTotalPre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3Sixes
			// 
			this->p3Sixes->BackColor = System::Drawing::Color::White;
			this->p3Sixes->Location = System::Drawing::Point(254, 162);
			this->p3Sixes->Name = L"p3Sixes";
			this->p3Sixes->Size = System::Drawing::Size(32, 14);
			this->p3Sixes->TabIndex = 53;
			this->p3Sixes->Text = L" ";
			this->p3Sixes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3Fives
			// 
			this->p3Fives->BackColor = System::Drawing::Color::White;
			this->p3Fives->Location = System::Drawing::Point(255, 136);
			this->p3Fives->Name = L"p3Fives";
			this->p3Fives->Size = System::Drawing::Size(32, 22);
			this->p3Fives->TabIndex = 52;
			this->p3Fives->Text = L" ";
			this->p3Fives->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3Fours
			// 
			this->p3Fours->BackColor = System::Drawing::Color::White;
			this->p3Fours->Location = System::Drawing::Point(255, 109);
			this->p3Fours->Name = L"p3Fours";
			this->p3Fours->Size = System::Drawing::Size(32, 23);
			this->p3Fours->TabIndex = 51;
			this->p3Fours->Text = L" ";
			this->p3Fours->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3Threes
			// 
			this->p3Threes->BackColor = System::Drawing::Color::White;
			this->p3Threes->Location = System::Drawing::Point(255, 84);
			this->p3Threes->Name = L"p3Threes";
			this->p3Threes->Size = System::Drawing::Size(32, 23);
			this->p3Threes->TabIndex = 50;
			this->p3Threes->Text = L" ";
			this->p3Threes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3Twos
			// 
			this->p3Twos->BackColor = System::Drawing::Color::White;
			this->p3Twos->Location = System::Drawing::Point(255, 58);
			this->p3Twos->Name = L"p3Twos";
			this->p3Twos->Size = System::Drawing::Size(32, 24);
			this->p3Twos->TabIndex = 49;
			this->p3Twos->Text = L" ";
			this->p3Twos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3Aces
			// 
			this->p3Aces->BackColor = System::Drawing::Color::White;
			this->p3Aces->Location = System::Drawing::Point(255, 30);
			this->p3Aces->Name = L"p3Aces";
			this->p3Aces->Size = System::Drawing::Size(32, 26);
			this->p3Aces->TabIndex = 48;
			this->p3Aces->Text = L" ";
			this->p3Aces->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6YahtzeeBonusCheck2
			// 
			this->p6YahtzeeBonusCheck2->BackColor = System::Drawing::Color::White;
			this->p6YahtzeeBonusCheck2->Location = System::Drawing::Point(376, 468);
			this->p6YahtzeeBonusCheck2->Name = L"p6YahtzeeBonusCheck2";
			this->p6YahtzeeBonusCheck2->Size = System::Drawing::Size(15, 14);
			this->p6YahtzeeBonusCheck2->TabIndex = 135;
			this->p6YahtzeeBonusCheck2->Text = L" ";
			this->p6YahtzeeBonusCheck2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6YahtzeeBonusCheck1
			// 
			this->p6YahtzeeBonusCheck1->BackColor = System::Drawing::Color::White;
			this->p6YahtzeeBonusCheck1->Location = System::Drawing::Point(359, 468);
			this->p6YahtzeeBonusCheck1->Name = L"p6YahtzeeBonusCheck1";
			this->p6YahtzeeBonusCheck1->Size = System::Drawing::Size(15, 14);
			this->p6YahtzeeBonusCheck1->TabIndex = 134;
			this->p6YahtzeeBonusCheck1->Text = L" ";
			this->p6YahtzeeBonusCheck1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6YahtzeeBonus
			// 
			this->p6YahtzeeBonus->BackColor = System::Drawing::Color::White;
			this->p6YahtzeeBonus->Location = System::Drawing::Point(359, 493);
			this->p6YahtzeeBonus->Name = L"p6YahtzeeBonus";
			this->p6YahtzeeBonus->Size = System::Drawing::Size(32, 14);
			this->p6YahtzeeBonus->TabIndex = 133;
			this->p6YahtzeeBonus->Text = L" ";
			this->p6YahtzeeBonus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6Total
			// 
			this->p6Total->BackColor = System::Drawing::Color::White;
			this->p6Total->Location = System::Drawing::Point(359, 569);
			this->p6Total->Name = L"p6Total";
			this->p6Total->Size = System::Drawing::Size(32, 14);
			this->p6Total->TabIndex = 132;
			this->p6Total->Text = L" ";
			this->p6Total->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6UpperTotalBtm
			// 
			this->p6UpperTotalBtm->BackColor = System::Drawing::Color::White;
			this->p6UpperTotalBtm->Location = System::Drawing::Point(359, 545);
			this->p6UpperTotalBtm->Name = L"p6UpperTotalBtm";
			this->p6UpperTotalBtm->Size = System::Drawing::Size(32, 14);
			this->p6UpperTotalBtm->TabIndex = 131;
			this->p6UpperTotalBtm->Text = L" ";
			this->p6UpperTotalBtm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6LowerTotal
			// 
			this->p6LowerTotal->BackColor = System::Drawing::Color::White;
			this->p6LowerTotal->Location = System::Drawing::Point(359, 522);
			this->p6LowerTotal->Name = L"p6LowerTotal";
			this->p6LowerTotal->Size = System::Drawing::Size(32, 14);
			this->p6LowerTotal->TabIndex = 130;
			this->p6LowerTotal->Text = L" ";
			this->p6LowerTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6Chance
			// 
			this->p6Chance->BackColor = System::Drawing::Color::White;
			this->p6Chance->Location = System::Drawing::Point(359, 444);
			this->p6Chance->Name = L"p6Chance";
			this->p6Chance->Size = System::Drawing::Size(32, 14);
			this->p6Chance->TabIndex = 129;
			this->p6Chance->Text = L" ";
			this->p6Chance->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6Yahtzee
			// 
			this->p6Yahtzee->BackColor = System::Drawing::Color::White;
			this->p6Yahtzee->Location = System::Drawing::Point(359, 419);
			this->p6Yahtzee->Name = L"p6Yahtzee";
			this->p6Yahtzee->Size = System::Drawing::Size(32, 14);
			this->p6Yahtzee->TabIndex = 128;
			this->p6Yahtzee->Text = L" ";
			this->p6Yahtzee->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6LgStraight
			// 
			this->p6LgStraight->BackColor = System::Drawing::Color::White;
			this->p6LgStraight->Location = System::Drawing::Point(359, 394);
			this->p6LgStraight->Name = L"p6LgStraight";
			this->p6LgStraight->Size = System::Drawing::Size(32, 14);
			this->p6LgStraight->TabIndex = 127;
			this->p6LgStraight->Text = L" ";
			this->p6LgStraight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6SmStraight
			// 
			this->p6SmStraight->BackColor = System::Drawing::Color::White;
			this->p6SmStraight->Location = System::Drawing::Point(359, 369);
			this->p6SmStraight->Name = L"p6SmStraight";
			this->p6SmStraight->Size = System::Drawing::Size(32, 14);
			this->p6SmStraight->TabIndex = 126;
			this->p6SmStraight->Text = L" ";
			this->p6SmStraight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6FullHouse
			// 
			this->p6FullHouse->BackColor = System::Drawing::Color::White;
			this->p6FullHouse->Location = System::Drawing::Point(359, 343);
			this->p6FullHouse->Name = L"p6FullHouse";
			this->p6FullHouse->Size = System::Drawing::Size(32, 14);
			this->p6FullHouse->TabIndex = 125;
			this->p6FullHouse->Text = L" ";
			this->p6FullHouse->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6FourKind
			// 
			this->p6FourKind->BackColor = System::Drawing::Color::White;
			this->p6FourKind->Location = System::Drawing::Point(359, 318);
			this->p6FourKind->Name = L"p6FourKind";
			this->p6FourKind->Size = System::Drawing::Size(32, 14);
			this->p6FourKind->TabIndex = 124;
			this->p6FourKind->Text = L" ";
			this->p6FourKind->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6ThreeKind
			// 
			this->p6ThreeKind->BackColor = System::Drawing::Color::White;
			this->p6ThreeKind->Location = System::Drawing::Point(359, 292);
			this->p6ThreeKind->Name = L"p6ThreeKind";
			this->p6ThreeKind->Size = System::Drawing::Size(32, 14);
			this->p6ThreeKind->TabIndex = 123;
			this->p6ThreeKind->Text = L" ";
			this->p6ThreeKind->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6UpperTotal
			// 
			this->p6UpperTotal->BackColor = System::Drawing::Color::White;
			this->p6UpperTotal->Location = System::Drawing::Point(359, 238);
			this->p6UpperTotal->Name = L"p6UpperTotal";
			this->p6UpperTotal->Size = System::Drawing::Size(32, 14);
			this->p6UpperTotal->TabIndex = 122;
			this->p6UpperTotal->Text = L" ";
			this->p6UpperTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6Bonus
			// 
			this->p6Bonus->BackColor = System::Drawing::Color::White;
			this->p6Bonus->Location = System::Drawing::Point(359, 213);
			this->p6Bonus->Name = L"p6Bonus";
			this->p6Bonus->Size = System::Drawing::Size(32, 20);
			this->p6Bonus->TabIndex = 121;
			this->p6Bonus->Text = L" ";
			this->p6Bonus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6UpperTotalPre
			// 
			this->p6UpperTotalPre->BackColor = System::Drawing::Color::White;
			this->p6UpperTotalPre->Location = System::Drawing::Point(359, 190);
			this->p6UpperTotalPre->Name = L"p6UpperTotalPre";
			this->p6UpperTotalPre->Size = System::Drawing::Size(32, 18);
			this->p6UpperTotalPre->TabIndex = 120;
			this->p6UpperTotalPre->Text = L" ";
			this->p6UpperTotalPre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6Sixes
			// 
			this->p6Sixes->BackColor = System::Drawing::Color::White;
			this->p6Sixes->Location = System::Drawing::Point(359, 162);
			this->p6Sixes->Name = L"p6Sixes";
			this->p6Sixes->Size = System::Drawing::Size(32, 14);
			this->p6Sixes->TabIndex = 119;
			this->p6Sixes->Text = L" ";
			this->p6Sixes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6Fives
			// 
			this->p6Fives->BackColor = System::Drawing::Color::White;
			this->p6Fives->Location = System::Drawing::Point(360, 136);
			this->p6Fives->Name = L"p6Fives";
			this->p6Fives->Size = System::Drawing::Size(32, 22);
			this->p6Fives->TabIndex = 118;
			this->p6Fives->Text = L" ";
			this->p6Fives->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6Fours
			// 
			this->p6Fours->BackColor = System::Drawing::Color::White;
			this->p6Fours->Location = System::Drawing::Point(360, 109);
			this->p6Fours->Name = L"p6Fours";
			this->p6Fours->Size = System::Drawing::Size(32, 23);
			this->p6Fours->TabIndex = 117;
			this->p6Fours->Text = L" ";
			this->p6Fours->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6Threes
			// 
			this->p6Threes->BackColor = System::Drawing::Color::White;
			this->p6Threes->Location = System::Drawing::Point(360, 84);
			this->p6Threes->Name = L"p6Threes";
			this->p6Threes->Size = System::Drawing::Size(32, 23);
			this->p6Threes->TabIndex = 116;
			this->p6Threes->Text = L" ";
			this->p6Threes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6Twos
			// 
			this->p6Twos->BackColor = System::Drawing::Color::White;
			this->p6Twos->Location = System::Drawing::Point(360, 58);
			this->p6Twos->Name = L"p6Twos";
			this->p6Twos->Size = System::Drawing::Size(32, 24);
			this->p6Twos->TabIndex = 115;
			this->p6Twos->Text = L" ";
			this->p6Twos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6Aces
			// 
			this->p6Aces->BackColor = System::Drawing::Color::White;
			this->p6Aces->Location = System::Drawing::Point(360, 30);
			this->p6Aces->Name = L"p6Aces";
			this->p6Aces->Size = System::Drawing::Size(32, 26);
			this->p6Aces->TabIndex = 114;
			this->p6Aces->Text = L" ";
			this->p6Aces->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5YahtzeeBonusCheck2
			// 
			this->p5YahtzeeBonusCheck2->BackColor = System::Drawing::Color::White;
			this->p5YahtzeeBonusCheck2->Location = System::Drawing::Point(341, 468);
			this->p5YahtzeeBonusCheck2->Name = L"p5YahtzeeBonusCheck2";
			this->p5YahtzeeBonusCheck2->Size = System::Drawing::Size(15, 14);
			this->p5YahtzeeBonusCheck2->TabIndex = 113;
			this->p5YahtzeeBonusCheck2->Text = L" ";
			this->p5YahtzeeBonusCheck2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5YahtzeeBonusCheck1
			// 
			this->p5YahtzeeBonusCheck1->BackColor = System::Drawing::Color::White;
			this->p5YahtzeeBonusCheck1->Location = System::Drawing::Point(324, 468);
			this->p5YahtzeeBonusCheck1->Name = L"p5YahtzeeBonusCheck1";
			this->p5YahtzeeBonusCheck1->Size = System::Drawing::Size(15, 14);
			this->p5YahtzeeBonusCheck1->TabIndex = 112;
			this->p5YahtzeeBonusCheck1->Text = L" ";
			this->p5YahtzeeBonusCheck1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5YahtzeeBonus
			// 
			this->p5YahtzeeBonus->BackColor = System::Drawing::Color::White;
			this->p5YahtzeeBonus->Location = System::Drawing::Point(324, 493);
			this->p5YahtzeeBonus->Name = L"p5YahtzeeBonus";
			this->p5YahtzeeBonus->Size = System::Drawing::Size(32, 14);
			this->p5YahtzeeBonus->TabIndex = 111;
			this->p5YahtzeeBonus->Text = L" ";
			this->p5YahtzeeBonus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5Total
			// 
			this->p5Total->BackColor = System::Drawing::Color::White;
			this->p5Total->Location = System::Drawing::Point(324, 569);
			this->p5Total->Name = L"p5Total";
			this->p5Total->Size = System::Drawing::Size(32, 14);
			this->p5Total->TabIndex = 110;
			this->p5Total->Text = L" ";
			this->p5Total->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5UpperTotalBtm
			// 
			this->p5UpperTotalBtm->BackColor = System::Drawing::Color::White;
			this->p5UpperTotalBtm->Location = System::Drawing::Point(324, 545);
			this->p5UpperTotalBtm->Name = L"p5UpperTotalBtm";
			this->p5UpperTotalBtm->Size = System::Drawing::Size(32, 14);
			this->p5UpperTotalBtm->TabIndex = 109;
			this->p5UpperTotalBtm->Text = L" ";
			this->p5UpperTotalBtm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5LowerTotal
			// 
			this->p5LowerTotal->BackColor = System::Drawing::Color::White;
			this->p5LowerTotal->Location = System::Drawing::Point(324, 522);
			this->p5LowerTotal->Name = L"p5LowerTotal";
			this->p5LowerTotal->Size = System::Drawing::Size(32, 14);
			this->p5LowerTotal->TabIndex = 108;
			this->p5LowerTotal->Text = L" ";
			this->p5LowerTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5Chance
			// 
			this->p5Chance->BackColor = System::Drawing::Color::White;
			this->p5Chance->Location = System::Drawing::Point(324, 444);
			this->p5Chance->Name = L"p5Chance";
			this->p5Chance->Size = System::Drawing::Size(32, 14);
			this->p5Chance->TabIndex = 107;
			this->p5Chance->Text = L" ";
			this->p5Chance->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5Yahtzee
			// 
			this->p5Yahtzee->BackColor = System::Drawing::Color::White;
			this->p5Yahtzee->Location = System::Drawing::Point(324, 419);
			this->p5Yahtzee->Name = L"p5Yahtzee";
			this->p5Yahtzee->Size = System::Drawing::Size(32, 14);
			this->p5Yahtzee->TabIndex = 106;
			this->p5Yahtzee->Text = L" ";
			this->p5Yahtzee->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5LgStraight
			// 
			this->p5LgStraight->BackColor = System::Drawing::Color::White;
			this->p5LgStraight->Location = System::Drawing::Point(324, 394);
			this->p5LgStraight->Name = L"p5LgStraight";
			this->p5LgStraight->Size = System::Drawing::Size(32, 14);
			this->p5LgStraight->TabIndex = 105;
			this->p5LgStraight->Text = L" ";
			this->p5LgStraight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5SmStraight
			// 
			this->p5SmStraight->BackColor = System::Drawing::Color::White;
			this->p5SmStraight->Location = System::Drawing::Point(324, 369);
			this->p5SmStraight->Name = L"p5SmStraight";
			this->p5SmStraight->Size = System::Drawing::Size(32, 14);
			this->p5SmStraight->TabIndex = 104;
			this->p5SmStraight->Text = L" ";
			this->p5SmStraight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5FullHouse
			// 
			this->p5FullHouse->BackColor = System::Drawing::Color::White;
			this->p5FullHouse->Location = System::Drawing::Point(324, 343);
			this->p5FullHouse->Name = L"p5FullHouse";
			this->p5FullHouse->Size = System::Drawing::Size(32, 14);
			this->p5FullHouse->TabIndex = 103;
			this->p5FullHouse->Text = L" ";
			this->p5FullHouse->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5FourKind
			// 
			this->p5FourKind->BackColor = System::Drawing::Color::White;
			this->p5FourKind->Location = System::Drawing::Point(324, 318);
			this->p5FourKind->Name = L"p5FourKind";
			this->p5FourKind->Size = System::Drawing::Size(32, 14);
			this->p5FourKind->TabIndex = 102;
			this->p5FourKind->Text = L" ";
			this->p5FourKind->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5ThreeKind
			// 
			this->p5ThreeKind->BackColor = System::Drawing::Color::White;
			this->p5ThreeKind->Location = System::Drawing::Point(324, 292);
			this->p5ThreeKind->Name = L"p5ThreeKind";
			this->p5ThreeKind->Size = System::Drawing::Size(32, 14);
			this->p5ThreeKind->TabIndex = 101;
			this->p5ThreeKind->Text = L" ";
			this->p5ThreeKind->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5UpperTotal
			// 
			this->p5UpperTotal->BackColor = System::Drawing::Color::White;
			this->p5UpperTotal->Location = System::Drawing::Point(324, 238);
			this->p5UpperTotal->Name = L"p5UpperTotal";
			this->p5UpperTotal->Size = System::Drawing::Size(32, 14);
			this->p5UpperTotal->TabIndex = 100;
			this->p5UpperTotal->Text = L" ";
			this->p5UpperTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5Bonus
			// 
			this->p5Bonus->BackColor = System::Drawing::Color::White;
			this->p5Bonus->Location = System::Drawing::Point(324, 213);
			this->p5Bonus->Name = L"p5Bonus";
			this->p5Bonus->Size = System::Drawing::Size(32, 20);
			this->p5Bonus->TabIndex = 99;
			this->p5Bonus->Text = L" ";
			this->p5Bonus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5UpperTotalPre
			// 
			this->p5UpperTotalPre->BackColor = System::Drawing::Color::White;
			this->p5UpperTotalPre->Location = System::Drawing::Point(324, 190);
			this->p5UpperTotalPre->Name = L"p5UpperTotalPre";
			this->p5UpperTotalPre->Size = System::Drawing::Size(32, 18);
			this->p5UpperTotalPre->TabIndex = 98;
			this->p5UpperTotalPre->Text = L" ";
			this->p5UpperTotalPre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5Sixes
			// 
			this->p5Sixes->BackColor = System::Drawing::Color::White;
			this->p5Sixes->Location = System::Drawing::Point(324, 162);
			this->p5Sixes->Name = L"p5Sixes";
			this->p5Sixes->Size = System::Drawing::Size(32, 14);
			this->p5Sixes->TabIndex = 97;
			this->p5Sixes->Text = L" ";
			this->p5Sixes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5Fives
			// 
			this->p5Fives->BackColor = System::Drawing::Color::White;
			this->p5Fives->Location = System::Drawing::Point(324, 136);
			this->p5Fives->Name = L"p5Fives";
			this->p5Fives->Size = System::Drawing::Size(32, 22);
			this->p5Fives->TabIndex = 96;
			this->p5Fives->Text = L" ";
			this->p5Fives->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5Fours
			// 
			this->p5Fours->BackColor = System::Drawing::Color::White;
			this->p5Fours->Location = System::Drawing::Point(324, 110);
			this->p5Fours->Name = L"p5Fours";
			this->p5Fours->Size = System::Drawing::Size(32, 23);
			this->p5Fours->TabIndex = 95;
			this->p5Fours->Text = L" ";
			this->p5Fours->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5Threes
			// 
			this->p5Threes->BackColor = System::Drawing::Color::White;
			this->p5Threes->Location = System::Drawing::Point(324, 84);
			this->p5Threes->Name = L"p5Threes";
			this->p5Threes->Size = System::Drawing::Size(32, 23);
			this->p5Threes->TabIndex = 94;
			this->p5Threes->Text = L" ";
			this->p5Threes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5Twos
			// 
			this->p5Twos->BackColor = System::Drawing::Color::White;
			this->p5Twos->Location = System::Drawing::Point(324, 58);
			this->p5Twos->Name = L"p5Twos";
			this->p5Twos->Size = System::Drawing::Size(32, 24);
			this->p5Twos->TabIndex = 93;
			this->p5Twos->Text = L" ";
			this->p5Twos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p5Aces
			// 
			this->p5Aces->BackColor = System::Drawing::Color::White;
			this->p5Aces->Location = System::Drawing::Point(324, 30);
			this->p5Aces->Name = L"p5Aces";
			this->p5Aces->Size = System::Drawing::Size(32, 26);
			this->p5Aces->TabIndex = 92;
			this->p5Aces->Text = L" ";
			this->p5Aces->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4YahtzeeBonusCheck2
			// 
			this->p4YahtzeeBonusCheck2->BackColor = System::Drawing::Color::White;
			this->p4YahtzeeBonusCheck2->Location = System::Drawing::Point(306, 468);
			this->p4YahtzeeBonusCheck2->Name = L"p4YahtzeeBonusCheck2";
			this->p4YahtzeeBonusCheck2->Size = System::Drawing::Size(15, 14);
			this->p4YahtzeeBonusCheck2->TabIndex = 91;
			this->p4YahtzeeBonusCheck2->Text = L" ";
			this->p4YahtzeeBonusCheck2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4YahtzeeBonusCheck1
			// 
			this->p4YahtzeeBonusCheck1->BackColor = System::Drawing::Color::White;
			this->p4YahtzeeBonusCheck1->Location = System::Drawing::Point(289, 468);
			this->p4YahtzeeBonusCheck1->Name = L"p4YahtzeeBonusCheck1";
			this->p4YahtzeeBonusCheck1->Size = System::Drawing::Size(15, 14);
			this->p4YahtzeeBonusCheck1->TabIndex = 90;
			this->p4YahtzeeBonusCheck1->Text = L" ";
			this->p4YahtzeeBonusCheck1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4YahtzeeBonus
			// 
			this->p4YahtzeeBonus->BackColor = System::Drawing::Color::White;
			this->p4YahtzeeBonus->Location = System::Drawing::Point(289, 493);
			this->p4YahtzeeBonus->Name = L"p4YahtzeeBonus";
			this->p4YahtzeeBonus->Size = System::Drawing::Size(32, 14);
			this->p4YahtzeeBonus->TabIndex = 89;
			this->p4YahtzeeBonus->Text = L" ";
			this->p4YahtzeeBonus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4Total
			// 
			this->p4Total->BackColor = System::Drawing::Color::White;
			this->p4Total->Location = System::Drawing::Point(289, 569);
			this->p4Total->Name = L"p4Total";
			this->p4Total->Size = System::Drawing::Size(32, 14);
			this->p4Total->TabIndex = 88;
			this->p4Total->Text = L" ";
			this->p4Total->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4UpperTotalBtm
			// 
			this->p4UpperTotalBtm->BackColor = System::Drawing::Color::White;
			this->p4UpperTotalBtm->Location = System::Drawing::Point(289, 545);
			this->p4UpperTotalBtm->Name = L"p4UpperTotalBtm";
			this->p4UpperTotalBtm->Size = System::Drawing::Size(32, 14);
			this->p4UpperTotalBtm->TabIndex = 87;
			this->p4UpperTotalBtm->Text = L" ";
			this->p4UpperTotalBtm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4LowerTotal
			// 
			this->p4LowerTotal->BackColor = System::Drawing::Color::White;
			this->p4LowerTotal->Location = System::Drawing::Point(289, 522);
			this->p4LowerTotal->Name = L"p4LowerTotal";
			this->p4LowerTotal->Size = System::Drawing::Size(32, 14);
			this->p4LowerTotal->TabIndex = 86;
			this->p4LowerTotal->Text = L" ";
			this->p4LowerTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4Chance
			// 
			this->p4Chance->BackColor = System::Drawing::Color::White;
			this->p4Chance->Location = System::Drawing::Point(289, 444);
			this->p4Chance->Name = L"p4Chance";
			this->p4Chance->Size = System::Drawing::Size(32, 14);
			this->p4Chance->TabIndex = 85;
			this->p4Chance->Text = L" ";
			this->p4Chance->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4Yahtzee
			// 
			this->p4Yahtzee->BackColor = System::Drawing::Color::White;
			this->p4Yahtzee->Location = System::Drawing::Point(289, 419);
			this->p4Yahtzee->Name = L"p4Yahtzee";
			this->p4Yahtzee->Size = System::Drawing::Size(32, 14);
			this->p4Yahtzee->TabIndex = 84;
			this->p4Yahtzee->Text = L" ";
			this->p4Yahtzee->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4LgStraight
			// 
			this->p4LgStraight->BackColor = System::Drawing::Color::White;
			this->p4LgStraight->Location = System::Drawing::Point(289, 394);
			this->p4LgStraight->Name = L"p4LgStraight";
			this->p4LgStraight->Size = System::Drawing::Size(32, 14);
			this->p4LgStraight->TabIndex = 83;
			this->p4LgStraight->Text = L" ";
			this->p4LgStraight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4SmStraight
			// 
			this->p4SmStraight->BackColor = System::Drawing::Color::White;
			this->p4SmStraight->Location = System::Drawing::Point(289, 369);
			this->p4SmStraight->Name = L"p4SmStraight";
			this->p4SmStraight->Size = System::Drawing::Size(32, 14);
			this->p4SmStraight->TabIndex = 82;
			this->p4SmStraight->Text = L" ";
			this->p4SmStraight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4FullHouse
			// 
			this->p4FullHouse->BackColor = System::Drawing::Color::White;
			this->p4FullHouse->Location = System::Drawing::Point(289, 343);
			this->p4FullHouse->Name = L"p4FullHouse";
			this->p4FullHouse->Size = System::Drawing::Size(32, 14);
			this->p4FullHouse->TabIndex = 81;
			this->p4FullHouse->Text = L" ";
			this->p4FullHouse->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4FourKind
			// 
			this->p4FourKind->BackColor = System::Drawing::Color::White;
			this->p4FourKind->Location = System::Drawing::Point(289, 318);
			this->p4FourKind->Name = L"p4FourKind";
			this->p4FourKind->Size = System::Drawing::Size(32, 14);
			this->p4FourKind->TabIndex = 80;
			this->p4FourKind->Text = L" ";
			this->p4FourKind->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4ThreeKind
			// 
			this->p4ThreeKind->BackColor = System::Drawing::Color::White;
			this->p4ThreeKind->Location = System::Drawing::Point(289, 292);
			this->p4ThreeKind->Name = L"p4ThreeKind";
			this->p4ThreeKind->Size = System::Drawing::Size(32, 14);
			this->p4ThreeKind->TabIndex = 79;
			this->p4ThreeKind->Text = L" ";
			this->p4ThreeKind->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4UpperTotal
			// 
			this->p4UpperTotal->BackColor = System::Drawing::Color::White;
			this->p4UpperTotal->Location = System::Drawing::Point(289, 238);
			this->p4UpperTotal->Name = L"p4UpperTotal";
			this->p4UpperTotal->Size = System::Drawing::Size(32, 14);
			this->p4UpperTotal->TabIndex = 78;
			this->p4UpperTotal->Text = L" ";
			this->p4UpperTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4Bonus
			// 
			this->p4Bonus->BackColor = System::Drawing::Color::White;
			this->p4Bonus->Location = System::Drawing::Point(289, 213);
			this->p4Bonus->Name = L"p4Bonus";
			this->p4Bonus->Size = System::Drawing::Size(32, 20);
			this->p4Bonus->TabIndex = 77;
			this->p4Bonus->Text = L" ";
			this->p4Bonus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4UpperTotalPre
			// 
			this->p4UpperTotalPre->BackColor = System::Drawing::Color::White;
			this->p4UpperTotalPre->Location = System::Drawing::Point(289, 190);
			this->p4UpperTotalPre->Name = L"p4UpperTotalPre";
			this->p4UpperTotalPre->Size = System::Drawing::Size(32, 18);
			this->p4UpperTotalPre->TabIndex = 76;
			this->p4UpperTotalPre->Text = L" ";
			this->p4UpperTotalPre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4Sixes
			// 
			this->p4Sixes->BackColor = System::Drawing::Color::White;
			this->p4Sixes->Location = System::Drawing::Point(289, 162);
			this->p4Sixes->Name = L"p4Sixes";
			this->p4Sixes->Size = System::Drawing::Size(32, 14);
			this->p4Sixes->TabIndex = 75;
			this->p4Sixes->Text = L" ";
			this->p4Sixes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4Fives
			// 
			this->p4Fives->BackColor = System::Drawing::Color::White;
			this->p4Fives->Location = System::Drawing::Point(289, 136);
			this->p4Fives->Name = L"p4Fives";
			this->p4Fives->Size = System::Drawing::Size(32, 22);
			this->p4Fives->TabIndex = 74;
			this->p4Fives->Text = L" ";
			this->p4Fives->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4Fours
			// 
			this->p4Fours->BackColor = System::Drawing::Color::White;
			this->p4Fours->Location = System::Drawing::Point(289, 109);
			this->p4Fours->Name = L"p4Fours";
			this->p4Fours->Size = System::Drawing::Size(32, 23);
			this->p4Fours->TabIndex = 73;
			this->p4Fours->Text = L" ";
			this->p4Fours->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4Threes
			// 
			this->p4Threes->BackColor = System::Drawing::Color::White;
			this->p4Threes->Location = System::Drawing::Point(289, 84);
			this->p4Threes->Name = L"p4Threes";
			this->p4Threes->Size = System::Drawing::Size(32, 23);
			this->p4Threes->TabIndex = 72;
			this->p4Threes->Text = L" ";
			this->p4Threes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4Twos
			// 
			this->p4Twos->BackColor = System::Drawing::Color::White;
			this->p4Twos->Location = System::Drawing::Point(289, 58);
			this->p4Twos->Name = L"p4Twos";
			this->p4Twos->Size = System::Drawing::Size(32, 24);
			this->p4Twos->TabIndex = 71;
			this->p4Twos->Text = L" ";
			this->p4Twos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4Aces
			// 
			this->p4Aces->BackColor = System::Drawing::Color::White;
			this->p4Aces->Location = System::Drawing::Point(289, 30);
			this->p4Aces->Name = L"p4Aces";
			this->p4Aces->Size = System::Drawing::Size(32, 26);
			this->p4Aces->TabIndex = 70;
			this->p4Aces->Text = L" ";
			this->p4Aces->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// scoreCardGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(397, 599);
			this->ControlBox = false;
			this->Controls->Add(this->p6YahtzeeBonusCheck2);
			this->Controls->Add(this->p6YahtzeeBonusCheck1);
			this->Controls->Add(this->p6YahtzeeBonus);
			this->Controls->Add(this->p6Total);
			this->Controls->Add(this->p6UpperTotalBtm);
			this->Controls->Add(this->p6LowerTotal);
			this->Controls->Add(this->p6Chance);
			this->Controls->Add(this->p6Yahtzee);
			this->Controls->Add(this->p6LgStraight);
			this->Controls->Add(this->p6SmStraight);
			this->Controls->Add(this->p6FullHouse);
			this->Controls->Add(this->p6FourKind);
			this->Controls->Add(this->p6ThreeKind);
			this->Controls->Add(this->p6UpperTotal);
			this->Controls->Add(this->p6Bonus);
			this->Controls->Add(this->p6UpperTotalPre);
			this->Controls->Add(this->p6Sixes);
			this->Controls->Add(this->p6Fives);
			this->Controls->Add(this->p6Fours);
			this->Controls->Add(this->p6Threes);
			this->Controls->Add(this->p6Twos);
			this->Controls->Add(this->p6Aces);
			this->Controls->Add(this->p5YahtzeeBonusCheck2);
			this->Controls->Add(this->p5YahtzeeBonusCheck1);
			this->Controls->Add(this->p5YahtzeeBonus);
			this->Controls->Add(this->p5Total);
			this->Controls->Add(this->p5UpperTotalBtm);
			this->Controls->Add(this->p5LowerTotal);
			this->Controls->Add(this->p5Chance);
			this->Controls->Add(this->p5Yahtzee);
			this->Controls->Add(this->p5LgStraight);
			this->Controls->Add(this->p5SmStraight);
			this->Controls->Add(this->p5FullHouse);
			this->Controls->Add(this->p5FourKind);
			this->Controls->Add(this->p5ThreeKind);
			this->Controls->Add(this->p5UpperTotal);
			this->Controls->Add(this->p5Bonus);
			this->Controls->Add(this->p5UpperTotalPre);
			this->Controls->Add(this->p5Sixes);
			this->Controls->Add(this->p5Fives);
			this->Controls->Add(this->p5Fours);
			this->Controls->Add(this->p5Threes);
			this->Controls->Add(this->p5Twos);
			this->Controls->Add(this->p5Aces);
			this->Controls->Add(this->p4YahtzeeBonusCheck2);
			this->Controls->Add(this->p4YahtzeeBonusCheck1);
			this->Controls->Add(this->p4YahtzeeBonus);
			this->Controls->Add(this->p4Total);
			this->Controls->Add(this->p4UpperTotalBtm);
			this->Controls->Add(this->p4LowerTotal);
			this->Controls->Add(this->p4Chance);
			this->Controls->Add(this->p4Yahtzee);
			this->Controls->Add(this->p4LgStraight);
			this->Controls->Add(this->p4SmStraight);
			this->Controls->Add(this->p4FullHouse);
			this->Controls->Add(this->p4FourKind);
			this->Controls->Add(this->p4ThreeKind);
			this->Controls->Add(this->p4UpperTotal);
			this->Controls->Add(this->p4Bonus);
			this->Controls->Add(this->p4UpperTotalPre);
			this->Controls->Add(this->p4Sixes);
			this->Controls->Add(this->p4Fives);
			this->Controls->Add(this->p4Fours);
			this->Controls->Add(this->p4Threes);
			this->Controls->Add(this->p4Twos);
			this->Controls->Add(this->p4Aces);
			this->Controls->Add(this->p3YahtzeeBonusCheck2);
			this->Controls->Add(this->p3YahtzeeBonusCheck1);
			this->Controls->Add(this->p3YahtzeeBonus);
			this->Controls->Add(this->p3Total);
			this->Controls->Add(this->p3UpperTotalBtm);
			this->Controls->Add(this->p3LowerTotal);
			this->Controls->Add(this->p3Chance);
			this->Controls->Add(this->p3Yahtzee);
			this->Controls->Add(this->p3LgStraight);
			this->Controls->Add(this->p3SmStraight);
			this->Controls->Add(this->p3FullHouse);
			this->Controls->Add(this->p3FourKind);
			this->Controls->Add(this->p3ThreeKind);
			this->Controls->Add(this->p3UpperTotal);
			this->Controls->Add(this->p3Bonus);
			this->Controls->Add(this->p3UpperTotalPre);
			this->Controls->Add(this->p3Sixes);
			this->Controls->Add(this->p3Fives);
			this->Controls->Add(this->p3Fours);
			this->Controls->Add(this->p3Threes);
			this->Controls->Add(this->p3Twos);
			this->Controls->Add(this->p3Aces);
			this->Controls->Add(this->p2YahtzeeBonusCheck2);
			this->Controls->Add(this->p2YahtzeeBonusCheck1);
			this->Controls->Add(this->p2YahtzeeBonus);
			this->Controls->Add(this->p2Total);
			this->Controls->Add(this->p2UpperTotalBtm);
			this->Controls->Add(this->p2LowerTotal);
			this->Controls->Add(this->p2Chance);
			this->Controls->Add(this->p2Yahtzee);
			this->Controls->Add(this->p2LgStraight);
			this->Controls->Add(this->p2SmStraight);
			this->Controls->Add(this->p2FullHouse);
			this->Controls->Add(this->p2FourKind);
			this->Controls->Add(this->p2ThreeKind);
			this->Controls->Add(this->p2UpperTotal);
			this->Controls->Add(this->p2Bonus);
			this->Controls->Add(this->p2UpperTotalPre);
			this->Controls->Add(this->p2Sixes);
			this->Controls->Add(this->p2Fives);
			this->Controls->Add(this->p2Fours);
			this->Controls->Add(this->p2Threes);
			this->Controls->Add(this->p2Twos);
			this->Controls->Add(this->p2Aces);
			this->Controls->Add(this->p1YahtzeeBonusCheck2);
			this->Controls->Add(this->p1YahtzeeBonusCheck1);
			this->Controls->Add(this->p1YahtzeeBonus);
			this->Controls->Add(this->p1Total);
			this->Controls->Add(this->p1UpperTotalBtm);
			this->Controls->Add(this->p1LowerTotal);
			this->Controls->Add(this->p1Chance);
			this->Controls->Add(this->p1Yahtzee);
			this->Controls->Add(this->p1LgStraight);
			this->Controls->Add(this->p1SmStraight);
			this->Controls->Add(this->p1FullHouse);
			this->Controls->Add(this->p1FourKind);
			this->Controls->Add(this->p1ThreeKind);
			this->Controls->Add(this->p1UpperTotal);
			this->Controls->Add(this->p1Bonus);
			this->Controls->Add(this->p1UpperTotalPre);
			this->Controls->Add(this->p1Sixes);
			this->Controls->Add(this->p1Fives);
			this->Controls->Add(this->p1Fours);
			this->Controls->Add(this->p1Threes);
			this->Controls->Add(this->p1Twos);
			this->Controls->Add(this->p1Aces);
			this->Controls->Add(this->scoreCardBack);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(413, 638);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(413, 638);
			this->Name = L"scoreCardGUI";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Score Card - Yahtzee!";
			this->Load += gcnew System::EventHandler(this, &scoreCardGUI::scoreCard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scoreCardBack))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: scoreCard * scoreCardPtr;
	public: System::Void pointerToScoreCard(scoreCard* sc){
		scoreCardPtr = sc;

	};

	private: System::Void scoreCard_Load(System::Object^  sender, System::EventArgs^  e) {
		updateScore();
	}

	private: void updateP1() {
		 // Update Player 1
	}

	private: void updateP2() {
		// Update Player 2
	}

	private: void updateP3() {
		// Update Player 3
	}

	private: void updateP4() {
		// Update Player 4
	}

	private: void updateP5() {
		// Update Player 5
	}

	private: void updateP6() {
		// Update Player 6
	}
	public: System::Void updateScore() {
		scoreCardPtr->calculateScore();

		// Update all the labels for Player 1

		if (!scoreCardPtr->canDo(1, 1)) {
			if (scoreCardPtr->isZeroed(1, 1)) {
				this->p1Aces->Text = L"0";
			}
			else {
				this->p1Aces->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getScore(1, 1));
			}
		}
		else {
			this->p1Aces->Text = L" ";
		}

		if (!scoreCardPtr->canDo(1, 2)) {
			if (scoreCardPtr->isZeroed(1, 2)) {
				this->p1Twos->Text = L"0";
			}
			else {
				this->p1Twos->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getScore(1, 2));
			}
		}
		else {
			this->p1Twos->Text = L" ";
		}

		if (!scoreCardPtr->canDo(1, 3)) {
			if (scoreCardPtr->isZeroed(1, 3)) {
				this->p1Threes->Text = L"0";
			}
			else {
				this->p1Threes->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getScore(1, 3));
			}
		}
		else {
			this->p1Threes->Text = L" ";
		}

		if (!scoreCardPtr->canDo(1, 4)) {
			if (scoreCardPtr->isZeroed(1, 4)) {
				this->p1Fours->Text = L"0";
			}
			else {
				this->p1Fours->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getScore(1, 4));
			}
		}
		else {
			this->p1Fours->Text = L" ";
		}

		if (!scoreCardPtr->canDo(1, 5)) {
			if (scoreCardPtr->isZeroed(1, 5)) {
				this->p1Fives->Text = L"0";
			}
			else {
				this->p1Fives->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getScore(1, 5));
			}
		}
		else {
			this->p1Fives->Text = L" ";
		}

		if (!scoreCardPtr->canDo(1, 6)) {
			if (scoreCardPtr->isZeroed(1, 6)) {
				this->p1Sixes->Text = L"0";
			}
			else {
				this->p1Sixes->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getScore(1, 6));
			}
		}
		else {
			this->p1Sixes->Text = L" ";
		}

		if (!scoreCardPtr->canDo(1, 7)) {
			if (scoreCardPtr->isZeroed(1, 7)) {
				this->p1ThreeKind->Text = L"0";
			}
			else {
				this->p1ThreeKind->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getScore(1, 7));
			}
		}
		else {
			this->p1ThreeKind->Text = L" ";
		}

		if (!scoreCardPtr->canDo(1, 8)) {
			if (scoreCardPtr->isZeroed(1, 8)) {
				this->p1FourKind->Text = L"0";
			}
			else {
				this->p1FourKind->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getScore(1, 8));
			}
		}
		else {
			this->p1FourKind->Text = L" ";
		}

		if (!scoreCardPtr->canDo(1, 9)) {
			if (scoreCardPtr->isZeroed(1, 9)) {
				this->p1FullHouse->Text = L"0";
			}
			else {
				this->p1FullHouse->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getScore(1, 9));
			}
		}
		else {
			this->p1FullHouse->Text = L" ";
		}

		if (!scoreCardPtr->canDo(1, 10)) {
			if (scoreCardPtr->isZeroed(1, 10)) {
				this->p1SmStraight->Text = L"0";
			}
			else {
				this->p1SmStraight->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getScore(1, 10));
			}
		}
		else {
			this->p1SmStraight->Text = L" ";
		}

		if (!scoreCardPtr->canDo(1, 11)) {
			if (scoreCardPtr->isZeroed(1, 11)) {
				this->p1LgStraight->Text = L"0";
			}
			else {
				this->p1LgStraight->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getScore(1, 11));
			}
		}
		else {
			this->p1LgStraight->Text = L" ";
		}

		if (!scoreCardPtr->canDo(1, 12)) {
			if (scoreCardPtr->isZeroed(1, 12)) {
				this->p1Yahtzee->Text = L"0";
			}
			else {
				this->p1Yahtzee->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getScore(1, 12));
			}
		}
		else {
			this->p1Yahtzee->Text = L" ";
		}

		if (!scoreCardPtr->canDo(1, 13)) {
			if (scoreCardPtr->isZeroed(1, 13)) {
				this->p1Chance->Text = L"0";
			}
			else {
				this->p1Chance->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getScore(1, 13));
			}
		}
		else {
			this->p1Chance->Text = L" ";
		}

		this->p1UpperTotalPre->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getUpperScorePre(1));
		this->p1UpperTotal->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getUpperScore(1));
		this->p1UpperTotalBtm->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getUpperScore(1));
		this->p1LowerTotal->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getLowerScore(1));
		this->p1Total->Text = msclr::interop::marshal_as< System::String^ >(scoreCardPtr->getGrand(1));

		if (scoreCardPtr->bonusApplied(1)) {
			this->p1Bonus->Text = L"35";
		}
		else {
			this->p1Bonus->Text = L" ";
		}

	};
};
}