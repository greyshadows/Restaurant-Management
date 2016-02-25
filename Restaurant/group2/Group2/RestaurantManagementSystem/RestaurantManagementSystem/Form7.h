/* Restaurant Management Sysytem
‘Restaurant Management System’ is a comprehensive software that helps operating
a restaurant from placing orders, automatically calculating discounts and taxes,
generating the bill all the way to maintaining customer records. This software
even has the bonus features of separate super user and employee login accounts
as well as adaptability for various kinds of restaurants.

B. Nitin Chandra 
Shubham Luhadia
Nishant Yadav
Sachin Aglave
Madhuri Tikhe
Mamidi Prashant
*/
#pragma once

#include "stdafx.h"
#include "Form 8.h"
#include "Form7.h"

namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form7
	/// </summary>
	public ref class Form7 : public System::Windows::Forms::Form
	{
	public:
		int g,h,d;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	public: 
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::Label^  label20;

	public: 

	public: 

			 Form7(void)
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
		~Form7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	protected: 
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;



	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;


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
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->BeginInit();
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(15, 443);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(381, 23);
			this->progressBar1->TabIndex = 15;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(635, 436);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Quit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form7::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(543, 436);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Next>";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form7::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(451, 436);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 8;
			this->button1->Text = L"<Previous";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form7::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(25, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 31);
			this->label1->TabIndex = 43;
			this->label1->Text = L"Restaurant Details";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(26, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 25);
			this->label2->TabIndex = 44;
			this->label2->Text = L"Timings of the Restaurant";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(26, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 25);
			this->label3->TabIndex = 45;
			this->label3->Text = L"No of Tables";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label4->Location = System::Drawing::Point(26, 257);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 25);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Facilities";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label5->Location = System::Drawing::Point(26, 394);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(194, 25);
			this->label5->TabIndex = 47;
			this->label5->Text = L"Cancellation Timings";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label6->Location = System::Drawing::Point(282, 87);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 22);
			this->label6->TabIndex = 49;
			this->label6->Text = L"From";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label7->Location = System::Drawing::Point(282, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 22);
			this->label7->TabIndex = 50;
			this->label7->Text = L"To";
			// 
			// comboBox1
			// 
			this->comboBox1->DisplayMember = L"lase";
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"a.m.", L"p.m."});
			this->comboBox1->Location = System::Drawing::Point(624, 157);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(64, 28);
			this->comboBox1->TabIndex = 54;
			this->comboBox1->Text = L"a.m.";
			this->comboBox1->Visible = false;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form7::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->DisplayMember = L"lase";
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"a.m.", L"p.m."});
			this->comboBox2->Location = System::Drawing::Point(624, 201);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(64, 28);
			this->comboBox2->TabIndex = 55;
			this->comboBox2->Text = L"p.m.";
			this->comboBox2->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label9->Location = System::Drawing::Point(262, 82);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 25);
			this->label9->TabIndex = 57;
			this->label9->Text = L":";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label10->Location = System::Drawing::Point(262, 200);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 25);
			this->label10->TabIndex = 58;
			this->label10->Text = L":";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label11->Location = System::Drawing::Point(262, 257);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(18, 25);
			this->label11->TabIndex = 59;
			this->label11->Text = L":";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label12->Location = System::Drawing::Point(262, 394);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(18, 25);
			this->label12->TabIndex = 60;
			this->label12->Text = L":";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label13->Location = System::Drawing::Point(380, 82);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(18, 25);
			this->label13->TabIndex = 61;
			this->label13->Text = L":";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label14->Location = System::Drawing::Point(380, 126);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(18, 25);
			this->label14->TabIndex = 62;
			this->label14->Text = L":";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label8->Location = System::Drawing::Point(348, 157);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 13);
			this->label8->TabIndex = 63;
			this->label8->Text = L"hrs";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label15->Location = System::Drawing::Point(448, 157);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(23, 13);
			this->label15->TabIndex = 64;
			this->label15->Text = L"min";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->textBox5->Location = System::Drawing::Point(286, 198);
			this->textBox5->MaxLength = 32;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(43, 27);
			this->textBox5->TabIndex = 65;
			this->textBox5->Text = L"25";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form7::textBox5_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(286, 257);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(361, 118);
			this->groupBox1->TabIndex = 66;
			this->groupBox1->TabStop = false;
			// 
			// comboBox3
			// 
			this->comboBox3->Enabled = false;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Rs.", L"%"});
			this->comboBox3->Location = System::Drawing::Point(304, 44);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(51, 21);
			this->comboBox3->TabIndex = 67;
			this->comboBox3->Text = L"Rs.";
			// 
			// comboBox4
			// 
			this->comboBox4->Enabled = false;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Rs.", L"%"});
			this->comboBox4->Location = System::Drawing::Point(304, 81);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(51, 21);
			this->comboBox4->TabIndex = 68;
			this->comboBox4->Text = L"Rs.";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Enabled = false;
			this->numericUpDown2->Location = System::Drawing::Point(244, 82);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(54, 20);
			this->numericUpDown2->TabIndex = 70;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Enabled = false;
			this->numericUpDown1->Location = System::Drawing::Point(244, 45);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(54, 20);
			this->numericUpDown1->TabIndex = 69;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Enabled = false;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label16->Location = System::Drawing::Point(176, 47);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(74, 13);
			this->label16->TabIndex = 67;
			this->label16->Text = L"Extra Charge :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Enabled = false;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label17->Location = System::Drawing::Point(176, 84);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(74, 13);
			this->label17->TabIndex = 68;
			this->label17->Text = L"Extra Charge :";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::Color::Transparent;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->checkBox3->Location = System::Drawing::Point(24, 84);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(124, 22);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Home Delivery";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form7::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->checkBox2->Location = System::Drawing::Point(24, 47);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(85, 22);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Take out";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form7::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->checkBox1->Location = System::Drawing::Point(24, 10);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(73, 22);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Dine-in";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form7::checkBox1_CheckedChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label18->Location = System::Drawing::Point(283, 398);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(60, 22);
			this->label18->TabIndex = 67;
			this->label18->Text = L"Within";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->textBox6->Location = System::Drawing::Point(349, 395);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(43, 27);
			this->textBox6->TabIndex = 68;
			this->textBox6->Text = L"15";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label19->Location = System::Drawing::Point(398, 398);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(231, 22);
			this->label19->TabIndex = 69;
			this->label19->Text = L"minutes of placing the order";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(329, 88);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {23, 0, 0, 0});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(54, 20);
			this->numericUpDown3->TabIndex = 71;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {9, 0, 0, 0});
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(402, 87);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(54, 20);
			this->numericUpDown4->TabIndex = 72;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(329, 131);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {23, 0, 0, 0});
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(54, 20);
			this->numericUpDown5->TabIndex = 73;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {23, 0, 0, 0});
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(402, 130);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(54, 20);
			this->numericUpDown6->TabIndex = 74;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(462, 87);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9, 0, 0, 0});
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(53, 20);
			this->numericUpDown7->TabIndex = 75;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(462, 130);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9, 0, 0, 0});
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(53, 20);
			this->numericUpDown8->TabIndex = 76;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(527, 111);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(101, 13);
			this->label20->TabIndex = 77;
			this->label20->Text = L"time in 24 hrs format";
			// 
			// Form7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 495);
			this->ControlBox = false;
			this->Controls->Add(this->label20);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"Form7";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Restaurant Management System - Installation";
			this->Load += gcnew System::EventHandler(this, &Form7::Form7_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form7_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				  this->progressBar1->Value=60;
				  g=0;
				  h=0;
				  d=1;
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 System::Windows::Forms::DialogResult result = MessageBox::Show(this, "If you quit you'll have to install again.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			 if(System::Windows::Forms::DialogResult::Yes == result)
			 {
				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("USE restman;DROP TABLE restname;DROP TABLE users;",conDataBase);

				 MySqlDataReader^ myReader1;

				 try{
					 conDataBase->Open();
					 myReader1=cmdDataBase1->ExecuteReader();

					 //while(myReader->Read()){}	

				 }catch(Exception^ex){

					 MessageBox::Show(ex->Message);
				 }
				 Application::Exit();
			 }
			 else
			 {

			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int temp;

			 if(comboBox1->Text!="a.m." && comboBox1->Text!="p.m." )
			 {
				 MessageBox::Show("The time can only be in a.m. or p.m.!");
				 comboBox1->Text="";
				 comboBox1->Select();
				 return;
			 }
			 else{
				 if(comboBox2->Text!="a.m." && comboBox2->Text!="p.m." )
				 {
					 MessageBox::Show("The time can only be in a.m. or p.m.!");
					 comboBox2->Text="";
					 comboBox2->Select();
					 return;
				 }
				 else{
					 if(comboBox3->Text!="Rs." && comboBox3->Text!="%" )
					 {
						 MessageBox::Show("The Extra Charges can only be in Rs or %!");
						 comboBox3->Text="";
						 comboBox3->Select();
						 return;
					 }
					 else{
						 if(comboBox4->Text!="Rs." && comboBox4->Text!="%" )
						 {
							 MessageBox::Show("The Extra Charges can only be in Rs or %!");
							 comboBox4->Text="";
							 comboBox4->Select();
							 return;
						 }
					 }
				 }
			 }
			 if(textBox5->Text!="" && textBox6->Text!=""  )
			 {

				 if(Int32::TryParse(textBox5->Text,temp))
				 {
					 if(Int32::TryParse(textBox6->Text,temp))
					 {

						 if(d==1)
						 {
							 String^ constring=L"datasource=localhost;username=root;password=group2";
							 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
							 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update restman.restname Set dinein='"+"yes"+"';",conDataBase);
							 MySqlDataReader^ myReader;
							 try{
								 conDataBase->Open();
								 myReader=cmdDataBase->ExecuteReader();

							 }catch(Exception^ex){

								 MessageBox::Show(ex->Message);
							 }
						 }

						 if(g==1)
						 {
							 String^ constring=L"datasource=localhost;username=root;password=group2";
							 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
							 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update restman.restname Set takeout='"+"yes"+"',takeoutcharge='"+this->numericUpDown1->Text+";"+this->comboBox3->Text+"';",conDataBase);
							 MySqlDataReader^ myReader;
							 try{
								 conDataBase->Open();
								 myReader=cmdDataBase->ExecuteReader();

							 }catch(Exception^ex){

								 MessageBox::Show(ex->Message);
							 }
						 }
						 if(h==1)
						 {
							 String^ constring=L"datasource=localhost;username=root;password=group2";
							 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
							 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update restman.restname Set home='"+"yes"+"',deliverycharge ='"+this->numericUpDown2->Text+";"+this->comboBox4->Text+"';",conDataBase);
							 MySqlDataReader^ myReader;
							 try{
								 conDataBase->Open();
								 myReader=cmdDataBase->ExecuteReader();

							 }catch(Exception^ex){

								 MessageBox::Show(ex->Message);
							 }
						 }
						 if(g==0 && h==0 && d==0)
						 {
							 //if all are 0's then "dinein" is selected by default
							 String^ constring=L"datasource=localhost;username=root;password=group2";
							 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
							 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update restman.restname Set dinein='"+"yes"+"';",conDataBase);
							 MySqlDataReader^ myReader;
							 try{
								 conDataBase->Open();
								 myReader=cmdDataBase->ExecuteReader();

							 }catch(Exception^ex){

								 MessageBox::Show(ex->Message);
							 }
						 }

						 //int g=0,h=0;
						 //if()

						 String^ s=numericUpDown3->Text+numericUpDown4->Text+numericUpDown7->Text+";"+numericUpDown5->Text+numericUpDown6->Text+numericUpDown8->Text;
							

						 String^ constring=L"datasource=localhost;username=root;password=group2";
						 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
						 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update restman.phasedecide Set tablesavailable='"+this->textBox5->Text+"';Update restman.restname Set timings='"+s+"', tables='"+this->textBox5->Text+"' ,cancellation='"+this->textBox6->Text+"';",conDataBase);
						 MySqlDataReader^ myReader;
						 try{
							 conDataBase->Open();
							 myReader=cmdDataBase->ExecuteReader();

						 }catch(Exception^ex){

							 MessageBox::Show(ex->Message);
						 }

						 //Form7::Hide();
						 //Form8^frm4=gcnew Form8;													//shows another form on clicking the button;
						 //frm4->Show(this);
						 Form7::Hide();
						 Form8^frm=gcnew Form8;													//shows another form on clicking the button;
						 frm->Show(this);
					 }
					 else
					 {
						 MessageBox::Show("The time has to be a number!");
						 textBox6->Text="";
						 textBox6->Select();
					 }
				 }
				 else
				 {
					 MessageBox::Show("The number of tables has to be a number!");
					 textBox5->Text="";
					 textBox5->Select();
				 }

			 }
			 else
			 {
				 MessageBox::Show("All entries are not answered!");
			 }

		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			
				 label16->Enabled="True";
				 numericUpDown1->Enabled="True";
				 comboBox3->Enabled="True";
				 if(g==0)
					 g=1;
				 else
					 g=0;

			
		 }
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {
		
				 label17->Enabled="True";
				 numericUpDown2->Enabled="True";
				 comboBox4->Enabled="True";
				 if(h==0)
					 h=1;
				 else
					 h=0;
				
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
//			 this->Close();
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(d==0)
				 d=1;
			 else
				 d=0;
		 }
};
}
