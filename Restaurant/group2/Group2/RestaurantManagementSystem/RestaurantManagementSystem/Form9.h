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
#include "Form10.h"
#include "Form9.h"


namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for Form9
	/// </summary>
	public ref class Form9 : public System::Windows::Forms::Form
	{
	public:
		//sachin 
		int a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 ;
	private: System::Windows::Forms::Label^  label11;
	public: 
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;

	public: 







			 Form9(void)
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
		~Form9()
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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::ComboBox^  comboBox8;
	private: System::Windows::Forms::ComboBox^  comboBox9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::ComboBox^  comboBox10;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::Label^  label2;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 447);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(381, 23);
			this->progressBar1->TabIndex = 19;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(632, 440);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Quit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form9::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(540, 440);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Finish";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form9::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(448, 440);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 9;
			this->button1->Text = L"<Previous";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form9::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 31);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Offers";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->numericUpDown9);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->numericUpDown7);
			this->groupBox1->Controls->Add(this->checkBox6);
			this->groupBox1->Controls->Add(this->numericUpDown6);
			this->groupBox1->Controls->Add(this->numericUpDown8);
			this->groupBox1->Controls->Add(this->numericUpDown5);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->numericUpDown4);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->checkBox8);
			this->groupBox1->Controls->Add(this->checkBox7);
			this->groupBox1->Controls->Add(this->checkBox5);
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 77);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(624, 350);
			this->groupBox1->TabIndex = 45;
			this->groupBox1->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(529, 302);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(21, 17);
			this->label11->TabIndex = 98;
			this->label11->Text = L"%";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(529, 270);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(21, 17);
			this->label10->TabIndex = 97;
			this->label10->Text = L"%";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(529, 233);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 17);
			this->label9->TabIndex = 96;
			this->label9->Text = L"%";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(529, 194);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 17);
			this->label8->TabIndex = 95;
			this->label8->Text = L"%";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(529, 151);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 17);
			this->label7->TabIndex = 94;
			this->label7->Text = L"%";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(529, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 17);
			this->label6->TabIndex = 93;
			this->label6->Text = L"%";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(529, 76);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 17);
			this->label5->TabIndex = 92;
			this->label5->Text = L"%";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(529, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 17);
			this->label4->TabIndex = 91;
			this->label4->Text = L"%";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Enabled = false;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(357, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 15);
			this->label3->TabIndex = 90;
			this->label3->Text = L"times";
			this->label3->Visible = false;
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Enabled = false;
			this->numericUpDown9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown9->Location = System::Drawing::Point(313, 107);
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(38, 21);
			this->numericUpDown9->TabIndex = 89;
			this->numericUpDown9->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Enabled = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(261, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 15);
			this->label2->TabIndex = 88;
			this->label2->Text = L": Above";
			this->label2->Visible = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(313, 185);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(102, 24);
			this->dateTimePicker1->TabIndex = 87;
			this->dateTimePicker1->Visible = false;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Enabled = false;
			this->numericUpDown7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown7->Location = System::Drawing::Point(468, 264);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(54, 24);
			this->numericUpDown7->TabIndex = 86;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->checkBox6->Location = System::Drawing::Point(19, 67);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(174, 22);
			this->checkBox6->TabIndex = 4;
			this->checkBox6->Text = L"Customer Card Offers";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Form9::checkBox6_CheckedChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Enabled = false;
			this->numericUpDown6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown6->Location = System::Drawing::Point(468, 69);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(54, 24);
			this->numericUpDown6->TabIndex = 81;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Enabled = false;
			this->numericUpDown8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown8->Location = System::Drawing::Point(468, 302);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(54, 24);
			this->numericUpDown8->TabIndex = 85;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Enabled = false;
			this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown5->Location = System::Drawing::Point(468, 230);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(54, 24);
			this->numericUpDown5->TabIndex = 82;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Enabled = false;
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown3->Location = System::Drawing::Point(468, 145);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(54, 24);
			this->numericUpDown3->TabIndex = 78;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Enabled = false;
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown4->Location = System::Drawing::Point(468, 191);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(54, 24);
			this->numericUpDown4->TabIndex = 77;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Enabled = false;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(468, 105);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(54, 24);
			this->numericUpDown2->TabIndex = 74;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Enabled = false;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(468, 30);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(54, 24);
			this->numericUpDown1->TabIndex = 73;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->checkBox8->Location = System::Drawing::Point(19, 302);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(94, 22);
			this->checkBox8->TabIndex = 7;
			this->checkBox8->Text = L"VIP Offers";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &Form9::checkBox8_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->checkBox7->Location = System::Drawing::Point(19, 263);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(122, 22);
			this->checkBox7->TabIndex = 5;
			this->checkBox7->Text = L"Institute Offers";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Form9::checkBox7_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->checkBox5->Location = System::Drawing::Point(19, 228);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(116, 22);
			this->checkBox5->TabIndex = 6;
			this->checkBox5->Text = L"Festive offers";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Form9::checkBox5_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->checkBox4->Location = System::Drawing::Point(19, 189);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(224, 22);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"Restaurant Anniversary Offers";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form9::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Enabled = false;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->checkBox3->Location = System::Drawing::Point(55, 143);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(195, 22);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Customer Birthday Offers";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form9::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Enabled = false;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->checkBox2->Location = System::Drawing::Point(55, 104);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(200, 22);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Frequent Customer Offers";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form9::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->checkBox1->Location = System::Drawing::Point(19, 29);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(204, 22);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Lucky Customer of the day";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form9::checkBox1_CheckedChanged);
			// 
			// comboBox8
			// 
			this->comboBox8->Enabled = false;
			this->comboBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Rs.", L"%"});
			this->comboBox8->Location = System::Drawing::Point(707, 341);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(10, 26);
			this->comboBox8->TabIndex = 83;
			this->comboBox8->Text = L"%";
			this->comboBox8->Visible = false;
			// 
			// comboBox9
			// 
			this->comboBox9->Enabled = false;
			this->comboBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Rs.", L"%"});
			this->comboBox9->Location = System::Drawing::Point(707, 380);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(10, 26);
			this->comboBox9->TabIndex = 84;
			this->comboBox9->Text = L"%";
			this->comboBox9->Visible = false;
			// 
			// comboBox7
			// 
			this->comboBox7->Enabled = false;
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Rs.", L"%"});
			this->comboBox7->Location = System::Drawing::Point(707, 145);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(10, 26);
			this->comboBox7->TabIndex = 80;
			this->comboBox7->Text = L"%";
			this->comboBox7->Visible = false;
			// 
			// comboBox6
			// 
			this->comboBox6->Enabled = false;
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Rs.", L"%"});
			this->comboBox6->Location = System::Drawing::Point(707, 306);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(10, 26);
			this->comboBox6->TabIndex = 79;
			this->comboBox6->Text = L"%";
			this->comboBox6->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->Enabled = false;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Rs.", L"%"});
			this->comboBox2->Location = System::Drawing::Point(707, 221);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(10, 26);
			this->comboBox2->TabIndex = 75;
			this->comboBox2->Text = L"%";
			this->comboBox2->Visible = false;
			// 
			// comboBox5
			// 
			this->comboBox5->Enabled = false;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Rs.", L"%"});
			this->comboBox5->Location = System::Drawing::Point(707, 267);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(10, 26);
			this->comboBox5->TabIndex = 76;
			this->comboBox5->Text = L"%";
			this->comboBox5->Visible = false;
			// 
			// comboBox3
			// 
			this->comboBox3->Enabled = false;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"%"});
			this->comboBox3->Location = System::Drawing::Point(707, 107);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(10, 26);
			this->comboBox3->TabIndex = 71;
			this->comboBox3->Text = L"%";
			this->comboBox3->Visible = false;
			// 
			// comboBox4
			// 
			this->comboBox4->Enabled = false;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Rs.", L"%"});
			this->comboBox4->Location = System::Drawing::Point(707, 182);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(10, 26);
			this->comboBox4->TabIndex = 72;
			this->comboBox4->Text = L"%";
			this->comboBox4->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"day"});
			this->comboBox1->Location = System::Drawing::Point(699, 64);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(18, 26);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->Text = L"day";
			this->comboBox1->Visible = false;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form9::comboBox1_SelectedIndexChanged);
			// 
			// comboBox10
			// 
			this->comboBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"day", L"week", L"month", L"year"});
			this->comboBox10->Location = System::Drawing::Point(289, 476);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(60, 23);
			this->comboBox10->TabIndex = 91;
			this->comboBox10->Visible = false;
			// 
			// Form9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 495);
			this->ControlBox = false;
			this->Controls->Add(this->comboBox10);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->comboBox8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox7);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox1);
			this->MaximizeBox = false;
			this->Name = L"Form9";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Restaurant Management System - Installation";
			this->Load += gcnew System::EventHandler(this, &Form9::Form9_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
private: System::Void Form9_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->progressBar1->Value=95;
			 a1=0;a2=0;a3=0;a4=0;a5=0;a6=0;a7=0;a8=0;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 this->progressBar1->Value=100;
			 //a1-lucky customer
			 if(a1==1)
			 {
				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update restman.restname Set lucky='"+"yes"+"',luckytype='"+this->comboBox1->Text+"',luckyamount='"+this->numericUpDown1->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();

				 }catch(Exception^ex){

					 MessageBox::Show(ex->Message);
				 }
			 }
			 //a2 frequent customer
			 if(a2==1)
			 {
				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update restman.restname Set frequent='"+"yes"+"',frequentabove='"+this->numericUpDown9->Text+"',frequentamount='"+this->numericUpDown2->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();

				 }catch(Exception^ex){

					 MessageBox::Show(ex->Message);
				 }
			 }
			 //a3-birthday
			 if(a3==1)
			 {
				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update restman.restname Set birthday='"+"yes"+"',birthdayamount='"+this->numericUpDown3->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();

				 }catch(Exception^ex){

					 MessageBox::Show(ex->Message);
				 }
			 }
			 //a4-anniversary
			 if(a4==1)
			 {
				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update restman.restname Set anniversary='"+"yes"+"',anniversarydate='"+this->dateTimePicker1->Value+"',anniversaryamount='"+this->numericUpDown4->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();

				 }catch(Exception^ex){

					 MessageBox::Show(ex->Message);
				 }
			 }
			 //a5-festival
			 if(a5==1)
			 {
				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update restman.restname Set festivaloffer='"+"yes"+"',festivalamount='"+this->numericUpDown5->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();

				 }catch(Exception^ex){

					 MessageBox::Show(ex->Message);
				 }
			 }
			 //a6-customer card
			 if(a6==1)
			 {
				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update restman.restname Set card='"+"yes"+"',cardamount='"+this->numericUpDown6->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();

				 }catch(Exception^ex){

					 MessageBox::Show(ex->Message);
				 }
			 }
			 //a7-institute
			 if(a7==1)
			 {
				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update restman.restname Set institute='"+"yes"+"',instituteamount='"+this->numericUpDown7->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();

				 }catch(Exception^ex){

					 MessageBox::Show(ex->Message);
				 }
			 }
			 //a8-vip offer
			 if(a8==1)
			 {
				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update restman.restname Set vipoffer='"+"yes"+"',vipamount='"+this->numericUpDown8->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();

				 }catch(Exception^ex){

					 MessageBox::Show(ex->Message);
				 }
			 }
			 MessageBox::Show("Installation is complete!");
			//updating phasedecide
			 String^ constring=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update restman.phasedecide Set installation='"+"1"+"';CREATE TABLE IF NOT EXISTS restman.`billrecords` (transaction int(15) PRIMARY KEY ,typeoforder int(1) NOT NULL DEFAULT '0',fooditems varchar(1000) DEFAULT '0',amount int(10) DEFAULT '0',username varchar(255) DEFAULT '0',submittime varchar(100) DEFAULT '0',ordertemp varchar(200) DEFAULT '0',bilgen varchar(3) DEFAULT '0');",conDataBase);
			 MySqlDataReader^ myReader;
			 try{
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();

			 }catch(Exception^ex){

				 MessageBox::Show(ex->Message);
			 }
			 //
			//

			 String^ constring4=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase4=gcnew MySqlConnection(constring4);
			 MySqlCommand^ cmdDataBase4=gcnew MySqlCommand("CREATE TABLE IF NOT EXISTS restman.`customercard` (cid varchar(40) PRIMARY KEY NOT NULL,name varchar(250) NOT NULL DEFAULT '0',phone varchar(10) UNIQUE DEFAULT '0',birthday varchar(40) DEFAULT '0',count int(10) NOT NULL DEFAULT '0') ;",conDataBase4);
			 MySqlDataReader^ myReader4;
			 try{
				 conDataBase4->Open();
				 myReader4=cmdDataBase4->ExecuteReader();

			 }catch(Exception^ex){

				 MessageBox::Show(ex->Message);
			 }

			 String^ constring5=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase5=gcnew MySqlConnection(constring5);
			 MySqlCommand^ cmdDataBase5=gcnew MySqlCommand( "CREATE TABLE IF NOT EXISTS restman.`login` (sid int(10) PRIMARY KEY AUTO_INCREMENT,username varchar(255),logintime varchar(100),logouttime varchar(100) DEFAULT '0',billsgenerated int(10) DEFAULT '0');",conDataBase5);
			 MySqlDataReader^ myReader5;
			 try{
				 conDataBase5->Open();
				 myReader5=cmdDataBase5->ExecuteReader();

			 }catch(Exception^ex){

				 MessageBox::Show(ex->Message);
			 }
			 Form9::Hide();
			 Form10^frm=gcnew Form10;													//shows another form on clicking the button;
			 frm->Show(this);
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 numericUpDown1->Enabled="True";
			 comboBox3->Enabled="True";
			 if(a1==0)
				 a1=1;
			 else
				 a1=0;
		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 numericUpDown2->Enabled="True";
			 comboBox4->Enabled="True";
			 if(a2==0)
				 a2=1;
			 else
				 a2=0;
		 }
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 numericUpDown3->Enabled="True";
			 comboBox2->Enabled="True";
			 if(a3==0)
				 a3=1;
			 else
				 a3=0;
		 }
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 numericUpDown4->Enabled="True";
			 comboBox5->Enabled="True";
			 if(a4==0)
				 a4=1;
			 else
				 a4=0;
		 }
private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 numericUpDown6->Enabled="True";
			 comboBox7->Enabled="True";
			 checkBox2->Enabled="True";
			 checkBox3->Enabled="True";
			 numericUpDown9->Enabled="True";

			 if(a6==0)
				 a6=1;
			 else
				 a6=0;
		 }
private: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 numericUpDown7->Enabled="True";
			 comboBox8->Enabled="True";
			 if(a7==0)
				 a7=1;
			 else
				 a7=0;
		 }
private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 numericUpDown5->Enabled="True";
			 comboBox6->Enabled="True";
			 if(a5==0)
				 a5=1;
			 else
				 a5=0;
		 }
private: System::Void checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 numericUpDown8->Enabled="True";
			 comboBox9->Enabled="True";
			 if(a8==0)
				 a8=1;
			 else
				 a8=0;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //this->Close();
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
