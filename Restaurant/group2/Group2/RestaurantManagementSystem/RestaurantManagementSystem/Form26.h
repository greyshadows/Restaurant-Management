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
	/// Summary for Form26
	/// </summary>
	public ref class Form26 : public System::Windows::Forms::Form
	{
	public:
		String^ servicecharge;String^ servicetax;
		Form26(void)
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
		~Form26()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label19;
	protected: 
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::Button^  button1;

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
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->BeginInit();
			this->SuspendLayout();
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(425, 161);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(15, 22);
			this->label19->TabIndex = 71;
			this->label19->Text = L":";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(10, 432);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(381, 23);
			this->progressBar1->TabIndex = 82;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(633, 426);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 81;
			this->button3->Text = L"Quit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form26::button3_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(205, 124);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(15, 22);
			this->label17->TabIndex = 69;
			this->label17->Text = L":";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(205, 25);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(15, 22);
			this->label15->TabIndex = 67;
			this->label15->Text = L":";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(498, 161);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(15, 22);
			this->label13->TabIndex = 66;
			this->label13->Text = L".";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(205, 76);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(15, 22);
			this->label16->TabIndex = 68;
			this->label16->Text = L":";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(541, 426);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 79;
			this->button2->Text = L"Next>";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form26::button2_Click);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown7->Location = System::Drawing::Point(519, 158);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(43, 27);
			this->numericUpDown7->TabIndex = 65;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(568, 161);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(26, 22);
			this->label14->TabIndex = 64;
			this->label14->Text = L"%";
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown8->Location = System::Drawing::Point(446, 158);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(43, 27);
			this->numericUpDown8->TabIndex = 63;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(498, 121);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 22);
			this->label11->TabIndex = 62;
			this->label11->Text = L".";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Enabled = false;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(35, 23);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(149, 26);
			this->checkBox1->TabIndex = 44;
			this->checkBox1->Text = L"Service charge";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form26::checkBox1_CheckedChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(446, 23);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(43, 27);
			this->numericUpDown1->TabIndex = 45;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(425, 123);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(15, 22);
			this->label18->TabIndex = 70;
			this->label18->Text = L":";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(568, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 22);
			this->label3->TabIndex = 46;
			this->label3->Text = L"%";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(519, 23);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(43, 27);
			this->numericUpDown2->TabIndex = 47;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(498, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 22);
			this->label4->TabIndex = 48;
			this->label4->Text = L".";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Enabled = false;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(35, 72);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(125, 26);
			this->checkBox2->TabIndex = 50;
			this->checkBox2->Text = L"Service Tax";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form26::checkBox2_CheckedChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(568, 75);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 22);
			this->label7->TabIndex = 52;
			this->label7->Text = L"%";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown3->Location = System::Drawing::Point(519, 72);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(43, 27);
			this->numericUpDown3->TabIndex = 53;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {94, 0, 0, 0});
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown4->Location = System::Drawing::Point(446, 72);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(43, 27);
			this->numericUpDown4->TabIndex = 51;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {4, 0, 0, 0});
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 31);
			this->label2->TabIndex = 77;
			this->label2->Text = L"Set Taxes";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(498, 75);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 22);
			this->label6->TabIndex = 54;
			this->label6->Text = L".";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->numericUpDown1);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->numericUpDown2);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->numericUpDown4);
			this->panel1->Controls->Add(this->numericUpDown7);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->numericUpDown3);
			this->panel1->Controls->Add(this->numericUpDown8);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->checkBox3);
			this->panel1->Controls->Add(this->numericUpDown5);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->numericUpDown6);
			this->panel1->Location = System::Drawing::Point(33, 81);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(603, 205);
			this->panel1->TabIndex = 78;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Enabled = false;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(35, 121);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(65, 26);
			this->checkBox3->TabIndex = 56;
			this->checkBox3->Text = L"VAT";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown5->Location = System::Drawing::Point(519, 118);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(43, 27);
			this->numericUpDown5->TabIndex = 61;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(251, 123);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 22);
			this->label9->TabIndex = 57;
			this->label9->Text = L"Food Items";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(568, 121);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(26, 22);
			this->label12->TabIndex = 60;
			this->label12->Text = L"%";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(251, 160);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(173, 22);
			this->label10->TabIndex = 58;
			this->label10->Text = L"Alcoholic Beverages";
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown6->Location = System::Drawing::Point(446, 118);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(43, 27);
			this->numericUpDown6->TabIndex = 59;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {14, 0, 0, 0});
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(449, 426);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 80;
			this->button1->Text = L"<Previous";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form26::button1_Click);
			// 
			// Form26
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 487);
			this->ControlBox = false;
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"Form26";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Restaurant Management System";
			this->Load += gcnew System::EventHandler(this, &Form26::Form26_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 numericUpDown1->Enabled=true;
				 numericUpDown2->Enabled=true;
				 /*if(servicecharge=="no")
					 servicecharge="yes";
				 else 
					 servicecharge="no";*/
			 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 numericUpDown3->Enabled=true;
			 numericUpDown4->Enabled=true;
			 /* if(servicetax=="no")
			 servicetax="yes";
			 else 
			 servicetax="no";*/
		 }
private: System::Void Form26_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
				this->progressBar1->Value=80;
				servicecharge="yes";
				servicetax="yes";
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {

			 String^ constring=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("UPDATE restman.restname SET servicetax='"+servicetax+"',servicecharge='"+servicecharge+"',servicechargevalue='"+this->numericUpDown1->Text+";"+this->numericUpDown2->Text+"',servicetaxvalue='"+this->numericUpDown4->Text+";"+this->numericUpDown3->Text+"',vat_fooditems='"+this->numericUpDown6->Text+";"+this->numericUpDown5->Text+"',vat_alcohol='"+this->numericUpDown8->Text+";"+this->numericUpDown7->Text+"';",conDataBase);

			 MySqlDataReader^ myReader;
			 try
			 {
				 conDataBase->Open();
				 myReader=cmdDataBase1->ExecuteReader();
				 
				 while(myReader->Read())
				 {
					 
				 }
				
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }	



			 Form26::Hide();
			 Form9^frm=gcnew Form9;													//shows another form on clicking the button;
			 frm->Show(this);

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
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
