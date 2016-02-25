#pragma once
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <fstream> // ofstream
#include <cstdlib> // exit

#using <System.dll>
#using <System.Windows.Forms.dll>
#using <System.Drawing.dll>


namespace Restaurnatbillgeneration {

	using namespace std;
	using namespace System;
	//using namespace System::String;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Drawing::Printing;
		using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for Form27
	/// </summary>
	public ref class Form27 : public System::Windows::Forms::Form
	{
	public:
		Form27(void)
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
		~Form27()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;

	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  Date;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::DataGridView^  dataGridView1;





	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Row1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Row2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Row3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;




















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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Row1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Row2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Row3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(203, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Rest_name";
			this->label1->Click += gcnew System::EventHandler(this, &Form27::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(246, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Rest_add";
			this->label2->Click += gcnew System::EventHandler(this, &Form27::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(231, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Rest_phone_no";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Order Type ";
			this->label4->Click += gcnew System::EventHandler(this, &Form27::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 181);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 18);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Customer Card";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 214);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 18);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Customer Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(131, 214);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(12, 18);
			this->label7->TabIndex = 6;
			this->label7->Text = L":";
			this->label7->Click += gcnew System::EventHandler(this, &Form27::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(131, 181);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(12, 18);
			this->label8->TabIndex = 7;
			this->label8->Text = L":";
			this->label8->Click += gcnew System::EventHandler(this, &Form27::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(131, 148);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(12, 18);
			this->label9->TabIndex = 8;
			this->label9->Text = L":";
			this->label9->Click += gcnew System::EventHandler(this, &Form27::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(158, 214);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 18);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Name";
			this->label10->Click += gcnew System::EventHandler(this, &Form27::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(158, 181);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(114, 18);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Customer_Card";
			this->label11->Click += gcnew System::EventHandler(this, &Form27::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(158, 148);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(86, 18);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Order_Type";
			this->label12->Click += gcnew System::EventHandler(this, &Form27::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(334, 148);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(114, 18);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Transaction No.";
			this->label13->Click += gcnew System::EventHandler(this, &Form27::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(334, 179);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(74, 18);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Employee";
			this->label14->Click += gcnew System::EventHandler(this, &Form27::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(454, 148);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(12, 18);
			this->label15->TabIndex = 14;
			this->label15->Text = L":";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(454, 179);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(12, 18);
			this->label16->TabIndex = 15;
			this->label16->Text = L":";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(479, 148);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(114, 18);
			this->label17->TabIndex = 16;
			this->label17->Text = L"Transaction_No";
			this->label17->Click += gcnew System::EventHandler(this, &Form27::label17_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(479, 179);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(74, 18);
			this->label18->TabIndex = 17;
			this->label18->Text = L"Employee";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(334, 244);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(90, 16);
			this->label20->TabIndex = 19;
			this->label20->Text = L"No. Of Guests";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(454, 244);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(11, 16);
			this->label21->TabIndex = 20;
			this->label21->Text = L":";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(158, 247);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(35, 16);
			this->label22->TabIndex = 21;
			this->label22->Text = L"date";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(131, 247);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(11, 16);
			this->label23->TabIndex = 22;
			this->label23->Text = L":";
			// 
			// Date
			// 
			this->Date->AutoSize = true;
			this->Date->BackColor = System::Drawing::Color::Transparent;
			this->Date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Date->Location = System::Drawing::Point(12, 247);
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(37, 16);
			this->Date->TabIndex = 23;
			this->Date->Text = L"Date";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(152, 577);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(41, 18);
			this->label24->TabIndex = 24;
			this->label24->Text = L"Total";
			this->label24->Click += gcnew System::EventHandler(this, &Form27::label24_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(152, 490);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(56, 18);
			this->label25->TabIndex = 25;
			this->label25->Text = L"Charge";
			this->label25->Click += gcnew System::EventHandler(this, &Form27::label25_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(152, 461);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(67, 18);
			this->label26->TabIndex = 26;
			this->label26->Text = L"Discount";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(121, 461);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(12, 18);
			this->label27->TabIndex = 27;
			this->label27->Text = L":";
			this->label27->Click += gcnew System::EventHandler(this, &Form27::label27_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(14, 461);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(67, 18);
			this->label28->TabIndex = 28;
			this->label28->Text = L"Discount";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(118, 490);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(12, 18);
			this->label29->TabIndex = 29;
			this->label29->Text = L":";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(14, 490);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(109, 18);
			this->label30->TabIndex = 30;
			this->label30->Text = L"Service Charge";
			this->label30->Click += gcnew System::EventHandler(this, &Form27::label30_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(121, 577);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(12, 18);
			this->label31->TabIndex = 31;
			this->label31->Text = L":";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(11, 577);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(86, 18);
			this->label32->TabIndex = 32;
			this->label32->Text = L"Grand Total";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(260, 590);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(105, 20);
			this->label33->TabIndex = 33;
			this->label33->Text = L"Thank You!!";
			this->label33->Click += gcnew System::EventHandler(this, &Form27::label33_Click);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(440, 439);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(72, 18);
			this->label34->TabIndex = 34;
			this->label34->Text = L"Total_Qty";
			this->label34->Click += gcnew System::EventHandler(this, &Form27::label34_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(518, 440);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(75, 18);
			this->label35->TabIndex = 35;
			this->label35->Text = L"Sub_Total";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(405, 440);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(12, 18);
			this->label36->TabIndex = 36;
			this->label36->Text = L":";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->Column1, 
				this->Row1, this->Row2, this->Column2, this->Row3});
			this->dataGridView1->Location = System::Drawing::Point(14, 286);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(596, 150);
			this->dataGridView1->TabIndex = 37;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form27::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Sr. No.";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 85;
			// 
			// Row1
			// 
			this->Row1->HeaderText = L"Food Items";
			this->Row1->Name = L"Row1";
			this->Row1->Width = 220;
			// 
			// Row2
			// 
			this->Row2->HeaderText = L"Rate";
			this->Row2->Name = L"Row2";
			this->Row2->Width = 80;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Quantity";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 65;
			// 
			// Row3
			// 
			this->Row3->HeaderText = L"Total Amount";
			this->Row3->Name = L"Row3";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(14, 519);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(85, 18);
			this->label37->TabIndex = 38;
			this->label37->Text = L"Service Tax";
			this->label37->Click += gcnew System::EventHandler(this, &Form27::label37_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(14, 548);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(35, 18);
			this->label38->TabIndex = 39;
			this->label38->Text = L"VAT";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(121, 519);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(12, 18);
			this->label39->TabIndex = 40;
			this->label39->Text = L":";
			this->label39->Click += gcnew System::EventHandler(this, &Form27::label39_Click);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(121, 548);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(12, 18);
			this->label40->TabIndex = 41;
			this->label40->Text = L":";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(152, 519);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(85, 18);
			this->label41->TabIndex = 42;
			this->label41->Text = L"Service Tax";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::Transparent;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(152, 548);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(35, 18);
			this->label42->TabIndex = 43;
			this->label42->Text = L"VAT";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::Transparent;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(319, 440);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(71, 18);
			this->label43->TabIndex = 44;
			this->label43->Text = L"Sub Total";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(482, 242);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(45, 22);
			this->numericUpDown1->TabIndex = 45;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(518, 483);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 63);
			this->button1->TabIndex = 46;
			this->button1->Text = L"Generate Text File";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form27::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(518, 552);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 63);
			this->button2->TabIndex = 47;
			this->button2->Text = L"Print the generated text file";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form27::button2_Click);
			// 
			// Form26
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 619);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->Date);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form27";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Restaurant Management System";
			this->Load += gcnew System::EventHandler(this, &Form27::Form27_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: StreamReader^ streamToPrint;
			System::Drawing::Font^ printFont;

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {


			 }
	private: System::Void Form27_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 String^ Rest_name="Restaurant Name";
				 label1->Text=Rest_name;
				 String^ Rest_add="Restaurant Address";
				 label2->Text=Rest_add;
				 String^ Rest_phone_no="Phone No.:9876543210";
				 label3->Text=Rest_phone_no;
				 String^ Order_Type="Dine In";
				 label12->Text=Order_Type;
				 String^ Customer_Card="Yes";
				 label11->Text=Customer_Card;
				 String^ Name="name";
				 label10->Text=Name;
				 String^ Transaction_No="Transaction_No";
				 label17->Text=Transaction_No;
				 String^ Employee="Employee";

				 label18->Text=Employee;


				 // label22->Text=DateTime::Now;
				 String^ Discount="Discount";
				 label28->Text=Discount;
				 String^ Charge="Charge";
				 label25->Text=Charge;
				 String^ Total="Total";
				 label24->Text=Total;
				 String^ Sub_Total="Sub_Total";
				 label35->Text=Sub_Total;
				 String^ Service_Tax="Service_Tax";
				 label41->Text=Service_Tax;
				 String^ VAT="VAT";
				 label42->Text=VAT;
				 String^ Total_Qty="Total_Qty";
				 label34->Text=Total_Qty;

				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT * FROM restman.restname;",conDataBase);

				 MySqlDataReader^ myReader;
				 try
				 {
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();

					 while(myReader->Read())
					 {
						 label1->Text=myReader->GetString("name");
						 
					 }

				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }


			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e)
			 {
			 }
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e)
			 {
			 }
	private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
	private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
	private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e)
			 {
			 }
	private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }

	private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
	private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e)
			 {
			 }
	private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
	private: System::Void label33_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }

	private: System::Void label30_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
	private: System::Void label25_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
	private: System::Void label24_Click(System::Object^  sender, System::EventArgs^  e)
			 {
			 }
	private: System::Void label34_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 }
	private: System::Void label39_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
	private: System::Void label37_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
	private: System::Void label27_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 int Count=0,flag=0;
				 String^ dir="BillsGenerated";					
				 char buffer[512];
				 sprintf(buffer, "%s", dir);

				 int returnValue = 0; 
				 if(Count==0)
				 {
					 returnValue = CreateDirectoryA (buffer,NULL);
				 }



				 String^ fileName ;



				 String^ Rest_name="Restaurant Name";

				 String^ Rest_add="Restaurant Address";

				 String^ Rest_phone_no="Phone No.:9876543210";

				 String^ Order_Type="Dine In";

				 String^ Customer_Card="Yes";

				 String^ Transaction_No="Transaction_No";
				 fileName = "BillsGenerated\\"+Transaction_No;

				 String^ Employee="Employee";

				 String^ Name="Name";


				 String^ Discount="Discount";

				 String^ Charge="Charge";

				 String^ Total="Total";

				 String^ Sub_Total="Sub_Total";

				 String^ Service_Tax="Service_Tax";

				 String^ VAT="VAT";

				 String^ Total_Qty="Total_Qty";


				 StreamWriter^ sw = gcnew StreamWriter(fileName);

				 sw->Write("\t\t\t\t");
				 sw->WriteLine(Rest_name);
				 sw->Write("\t\t\t\t");
				 sw->WriteLine(Rest_add);
				 sw->Write("\t\t\t\t");
				 sw->WriteLine(Rest_phone_no);
				 sw->WriteLine();
				 sw->WriteLine();
				 sw->Write("Order Type\t:");
				 sw->Write( Order_Type);
				 sw->Write("\t\t  \tTransaction No.:");
				 sw->WriteLine(Transaction_No);
				 sw->Write("Customer Card\t:");
				 sw->Write( Customer_Card);
				 sw->Write("\t\t\t\t Employee.\t:");
				 sw->WriteLine(Employee);
				 sw->Write("Customer Name\t:");
				 sw->WriteLine(Name);
				 sw->Write("Date\t\t:");
				 sw->Write( DateTime::Now);
				 sw->Write("\t\t No. of Guests\t:");
				 sw->WriteLine(numericUpDown1->Value);
				 sw->WriteLine("------------------------------------------------------------------------------------------------------");
				 sw->WriteLine("Sr. No.\t|Food Item\t|Rate\t|Quantity\t|Amount");
				 for(int x=0;x<this->dataGridView1->Rows->Count-1;x++)
				 {
					 sw->Write(dataGridView1->Rows[x]->Cells[0]->Value);
					 sw->Write("\t");
					 sw->Write(dataGridView1->Rows[x]->Cells[1]->Value);
					 sw->Write("\t");
					 sw->Write(dataGridView1->Rows[x]->Cells[2]->Value);
					 sw->Write("\t");
					 sw->Write(dataGridView1->Rows[x]->Cells[3]->Value);
					 sw->Write("\t");
					 sw->WriteLine(dataGridView1->Rows[x]->Cells[4]->Value);


				 }

				 sw->WriteLine("------------------------------------------------------------------------------------------------------");
				 sw->Write("Sub Total\t:");        

				 sw->Write("\tQty\t:");
				 sw->WriteLine(Total_Qty);

				 sw->Write("         \t \tAmount\t:");
				 sw->WriteLine(Sub_Total);
				 sw->WriteLine();
				 sw->WriteLine();

				 sw->Write("Discount\t:\tRs.");
				 sw->WriteLine(Discount);
				 sw->Write("Service Charge\t:\tRs.");
				 sw->WriteLine(Charge);
				 sw->Write("Service Tax\t:\tRs.");
				 sw->WriteLine(Service_Tax);
				 sw->Write("VAT\t\t:\tRs.");
				 sw->WriteLine(VAT);
				 sw->Write("Grand Total\t:\tRs.");
				 sw->WriteLine(Total);
				 sw->WriteLine("\t\t\t\tThank You!!");
				 sw->WriteLine();
				 sw->WriteLine();
				 sw->Close();

				 button2->Enabled=true;



				 //  char *line1 = "I am printing text to the printer!!!!!";

				 //  const char EJECT = 0x0c; // printer page eject command
				 //  ofstream print;
				 //  print.open("LPT1");
				 //  if( !print ){
				 //  //cerr << "File was not opened\n";
				 //label1->Text="File was not opened";
				 //  exit(1);
				 //  }

				 //  //cout << "Sending to lpt1\n";

				 //  print << line1 << '\n';
				 //  print << "Well, I am going to end printing now...\n";
				 //  print << "Bye\n";

				 //  print << EJECT;
				 //  print.close();





			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 try
				 {
					 String^ Transaction_No="Transaction_No";
					 String^ fileName = "BillsGenerated\\"+Transaction_No;
					 streamToPrint = gcnew StreamReader( fileName );
					 try
					 {
						 printFont = gcnew System::Drawing::Font( "Arial",10 );
						 PrintDocument^ pd = gcnew PrintDocument;
						 pd->PrintPage += gcnew PrintPageEventHandler( this, &Form27::pd_PrintPage );
						 pd->Print();
					 }
					 finally
					 {
						 streamToPrint->Close();
					 }

				 }
				 catch ( Exception^ ex ) 
				 {
					 MessageBox::Show( ex->Message );
				 }
			 }

			 // The PrintPage event is raised for each page to be printed. 
	public:   System::Void pd_PrintPage( System::Object^ /*sender*/, PrintPageEventArgs^ ev )
			  {
				  float linesPerPage = 0;
				  float yPos = 0;
				  int count = 0;
				  float leftMargin = (float)ev->MarginBounds.Left;
				  float topMargin = (float)ev->MarginBounds.Top;
				  String^ line = nullptr;

				  // Calculate the number of lines per page.
				  linesPerPage = ev->MarginBounds.Height / printFont->GetHeight( ev->Graphics );

				  // Print each line of the file. 
				  while ( count < linesPerPage && ((line = streamToPrint->ReadLine()) != nullptr) )
				  {
					  yPos = topMargin + (count * printFont->GetHeight( ev->Graphics ));
					  ev->Graphics->DrawString( line, printFont, Brushes::Black, leftMargin, yPos, gcnew StringFormat );
					  count++;
				  }


				  // If more lines exist, print another page. 
				  if ( line != nullptr )
					  ev->HasMorePages = true;
				  else
					  ev->HasMorePages = false;
			  }
	};
}
