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
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <fstream> // ofstream
#include <cstdlib> // exit
#include "form_header.h"

#using <System.dll>
#using <System.Windows.Forms.dll>
#using <System.Drawing.dll>
namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace std;
	//using namespace System;
	//using namespace System::String;
	//using namespace System::ComponentModel;
	//using namespace System::Collections;
	//using namespace System::Windows::Forms;
	//using namespace System::Data;
	//using namespace System::Drawing;
	using namespace System::IO;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Drawing::Printing;

	/// <summary>
	/// Summary for Form27
	/// </summary>
	public ref class Form27 : public System::Windows::Forms::Form
	{
	public:
		String^ transac;
		int extra1;
		int extra2;
		
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label44;
	public: 
		String^ yourorder;
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
	private: System::Windows::Forms::Button^  button2;
	protected: 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Row1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Row2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Row3;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  Date;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Row1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Row2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Row3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(520, 543);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 63);
			this->button2->TabIndex = 94;
			this->button2->Text = L"Print the generated text file";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form27::button2_Click);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Sr. No.";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 85;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->Column1, 
				this->Row1, this->Row2, this->Column2, this->Row3});
			this->dataGridView1->Location = System::Drawing::Point(16, 277);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(596, 150);
			this->dataGridView1->TabIndex = 84;
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
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(407, 431);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(12, 18);
			this->label36->TabIndex = 83;
			this->label36->Text = L":";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(535, 430);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(75, 18);
			this->label35->TabIndex = 82;
			this->label35->Text = L"Sub_Total";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(425, 430);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(72, 18);
			this->label34->TabIndex = 81;
			this->label34->Text = L"Total_Qty";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(262, 581);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(105, 20);
			this->label33->TabIndex = 80;
			this->label33->Text = L"Thank You!!";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(13, 568);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(86, 18);
			this->label32->TabIndex = 79;
			this->label32->Text = L"Grand Total";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(123, 568);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(12, 18);
			this->label31->TabIndex = 78;
			this->label31->Text = L":";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(16, 481);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(109, 18);
			this->label30->TabIndex = 77;
			this->label30->Text = L"Service Charge";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(120, 481);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(12, 18);
			this->label29->TabIndex = 76;
			this->label29->Text = L":";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(16, 452);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(67, 18);
			this->label28->TabIndex = 75;
			this->label28->Text = L"Discount";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(520, 474);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 63);
			this->button1->TabIndex = 93;
			this->button1->Text = L"Generate Text File";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form27::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(484, 233);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(45, 22);
			this->numericUpDown1->TabIndex = 92;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::Transparent;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(321, 431);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(71, 18);
			this->label43->TabIndex = 91;
			this->label43->Text = L"Sub Total";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::Transparent;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(154, 539);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(35, 18);
			this->label42->TabIndex = 90;
			this->label42->Text = L"VAT";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(154, 510);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(85, 18);
			this->label41->TabIndex = 89;
			this->label41->Text = L"Service Tax";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(123, 539);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(12, 18);
			this->label40->TabIndex = 88;
			this->label40->Text = L":";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(123, 510);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(12, 18);
			this->label39->TabIndex = 87;
			this->label39->Text = L":";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(16, 539);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(35, 18);
			this->label38->TabIndex = 86;
			this->label38->Text = L"VAT";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(16, 510);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(85, 18);
			this->label37->TabIndex = 85;
			this->label37->Text = L"Service Tax";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(123, 452);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(12, 18);
			this->label27->TabIndex = 74;
			this->label27->Text = L":";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(154, 452);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(67, 18);
			this->label26->TabIndex = 73;
			this->label26->Text = L"Discount";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(154, 481);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(56, 18);
			this->label25->TabIndex = 72;
			this->label25->Text = L"Charge";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(154, 568);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(41, 18);
			this->label24->TabIndex = 71;
			this->label24->Text = L"Total";
			// 
			// Date
			// 
			this->Date->AutoSize = true;
			this->Date->BackColor = System::Drawing::Color::Transparent;
			this->Date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Date->Location = System::Drawing::Point(14, 238);
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(97, 16);
			this->Date->TabIndex = 70;
			this->Date->Text = L"Date and Time";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(133, 238);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(11, 16);
			this->label23->TabIndex = 69;
			this->label23->Text = L":";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(160, 238);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(35, 16);
			this->label22->TabIndex = 68;
			this->label22->Text = L"date";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(456, 235);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(11, 16);
			this->label21->TabIndex = 67;
			this->label21->Text = L":";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(336, 235);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(90, 16);
			this->label20->TabIndex = 66;
			this->label20->Text = L"No. Of Guests";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(481, 170);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(74, 18);
			this->label18->TabIndex = 65;
			this->label18->Text = L"Employee";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(481, 139);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(114, 18);
			this->label17->TabIndex = 64;
			this->label17->Text = L"Transaction_No";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(456, 170);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(12, 18);
			this->label16->TabIndex = 63;
			this->label16->Text = L":";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(456, 139);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(12, 18);
			this->label15->TabIndex = 62;
			this->label15->Text = L":";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(336, 170);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(74, 18);
			this->label14->TabIndex = 61;
			this->label14->Text = L"Employee";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(336, 139);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(114, 18);
			this->label13->TabIndex = 60;
			this->label13->Text = L"Transaction No.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(160, 139);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(86, 18);
			this->label12->TabIndex = 59;
			this->label12->Text = L"Order_Type";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(160, 172);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(114, 18);
			this->label11->TabIndex = 58;
			this->label11->Text = L"Customer_Card";
			this->label11->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(160, 205);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 18);
			this->label10->TabIndex = 57;
			this->label10->Text = L"Name";
			this->label10->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(133, 139);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(12, 18);
			this->label9->TabIndex = 56;
			this->label9->Text = L":";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(133, 172);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(12, 18);
			this->label8->TabIndex = 55;
			this->label8->Text = L":";
			this->label8->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(133, 205);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(12, 18);
			this->label7->TabIndex = 54;
			this->label7->Text = L":";
			this->label7->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(14, 205);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 18);
			this->label6->TabIndex = 53;
			this->label6->Text = L"Customer Name";
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(14, 172);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 18);
			this->label5->TabIndex = 52;
			this->label5->Text = L"Customer Card";
			this->label5->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 18);
			this->label4->TabIndex = 51;
			this->label4->Text = L"Order Type ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(233, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 16);
			this->label3->TabIndex = 50;
			this->label3->Text = L"Rest_phone_no";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(248, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 16);
			this->label2->TabIndex = 49;
			this->label2->Text = L"Rest_add";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(205, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 31);
			this->label1->TabIndex = 48;
			this->label1->Text = L"Rest_name";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(614, 12);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(10, 20);
			this->dateTimePicker1->TabIndex = 95;
			this->dateTimePicker1->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(506, 434);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(23, 13);
			this->label19->TabIndex = 96;
			this->label19->Text = L"Rs.";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(263, 510);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(111, 13);
			this->label44->TabIndex = 97;
			this->label44->Text = L"All these values in Rs.";
			// 
			// Form27
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 619);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button2);
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
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label37);
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
			this->MaximizeBox = false;
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




				 String^ Customer_Card="Yes";


				 fileName = "BillsGenerated\\"+label17->Text+".txt";

				 String^ Employee="Employee";

				 String^ Name="Name";




				 StreamWriter^ sw = gcnew StreamWriter(fileName);

				 sw->Write("  \t\t\t\t");
				 sw->WriteLine(label1->Text);
				 sw->Write("  \t\t\t\t");
				 sw->WriteLine(label2->Text);
				 //sw->Write("\t\t\t\t");
				 // sw->WriteLine(Rest_phone_no);
				 sw->WriteLine();
				 sw->WriteLine();
				 sw->Write("  Order Type\t:  ");
				 sw->Write(  label12->Text);
				 sw->Write("\t\t    \t\tTransaction No.:  ");
				 sw->WriteLine(label17->Text);
				 // sw->Write("Customer Card\t:");
				 //sw->Write( Customer_Card);
				 //sw->Write("\t\t\t\t Employee.\t:");
				 //sw->WriteLine(Employee);
				 // sw->Write("Customer Name\t:");
				 // sw->WriteLine(Name);
				 sw->Write("Date  \t\t:");
				 sw->Write( label22->Text);
				 sw->Write("\t\t   No. of Guests  \t:");
				 sw->WriteLine(numericUpDown1->Value);
				 sw->WriteLine("------------------------------------------------------------------------------------------------------");
				 sw->WriteLine("Sr. No.\t  |Food Item\t  |Rate\t  |Quantity\t  |Amount");
				 for(int x=0;x<this->dataGridView1->Rows->Count;x++)
				 {
					 sw->Write(dataGridView1->Rows[x]->Cells[0]->Value);
					 sw->Write("  \t");
					 sw->Write(dataGridView1->Rows[x]->Cells[1]->Value);
					 sw->Write("  \t");
					 sw->Write(dataGridView1->Rows[x]->Cells[2]->Value);
					 sw->Write("  \t");
					 sw->Write(dataGridView1->Rows[x]->Cells[3]->Value);
					 sw->Write("  \t");
					 sw->WriteLine(dataGridView1->Rows[x]->Cells[4]->Value);


				 }

				 sw->WriteLine("------------------------------------------------------------------------------------------------------");
				 sw->Write("Sub Total\t:");        

				 sw->Write("\tQty\t:");
				 sw->WriteLine( label34->Text);

				 sw->Write("\t \tAmount\t:");
				 sw->WriteLine(label35->Text);
				 sw->WriteLine();
				 sw->WriteLine();

				 sw->Write("Discount\t\t:\tRs.");
				 sw->WriteLine(label26->Text);
				 sw->Write("Service Charge\t:\tRs.");
				 sw->WriteLine( label25->Text);
				 sw->Write("Service Tax\t:\tRs.");
				 sw->WriteLine(label41->Text);
				 sw->Write("VAT\t\t:\tRs.");
				 sw->WriteLine(label42->Text);
				 sw->Write("Grand Total\t:\tRs.");
				 sw->WriteLine(label24->Text);
				 sw->WriteLine("\t\t\t\tThank You!!");
				 sw->WriteLine();
				 sw->WriteLine();
				 sw->Close();

				 button2->Enabled=true; }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		
		 {
				 try
				 {
					 String^ fileName = "BillsGenerated\\"+label17->Text+".txt";
					 
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
		 
private: System::Void Form27_Load(System::Object^  sender, System::EventArgs^  e) {
			 float vat_alcohol;
			 float vat_food;
			 float servicetaxvalue;
			 float servicechargevalue;
			 extra1=0;
			 extra2=0;
			
			 String^ constring1221=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase1221=gcnew MySqlConnection(constring1221);
			 MySqlCommand^ cmdDataBase11221=gcnew MySqlCommand("SELECT * FROM restman.restname;",conDataBase1221);

			 MySqlDataReader^ myReader21;
			 try
			 {
				 conDataBase1221->Open();
				 myReader21=cmdDataBase11221->ExecuteReader();

				 while(myReader21->Read())
				 {
				 }

				 label1->Text=myReader21->GetString("name");
				 label2->Text=myReader21->GetString("address");
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }

			 label22->Text=dateTimePicker1->Value.ToString("dd/MM/yy & HH:mm");


			 String^ constring122123=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase122123=gcnew MySqlConnection(constring122123);
			 MySqlCommand^ cmdDataBase1122123=gcnew MySqlCommand("SELECT * FROM restman.transactionid;",conDataBase122123);//

			 MySqlDataReader^ myReader2123;
			 try
			 {
				 conDataBase122123->Open();
				 myReader2123=cmdDataBase1122123->ExecuteReader();
					
				 while(myReader2123->Read()){}
				 
				 transac=myReader2123->GetString("transaction_no");

				 label17->Text=this->transac;

			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
			 int maxsid;
			 String^ constring111221=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase11221=gcnew MySqlConnection(constring111221);
			 MySqlCommand^ cmdDataBase111221=gcnew MySqlCommand("SELECT * FROM restman.login;",conDataBase11221);

			 MySqlDataReader^ myReader121;
			 try
			 {
				 conDataBase11221->Open();
				 myReader121=cmdDataBase111221->ExecuteReader();

				 while(myReader121->Read())
				 {
				 }

				 label18->Text=myReader121->GetString("username");
				 maxsid=int::Parse(myReader121->GetString("sid"));
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }

			 String^ onstring111221=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ onDataBase11221=gcnew MySqlConnection(onstring111221);
			 MySqlCommand^ mdDataBase111221=gcnew MySqlCommand("UPDATE restman.login SET billsgenerated=billsgenerated+'"+1+"'  WHERE sid='"+maxsid+"';",onDataBase11221);

			 MySqlDataReader^ yReader121;
			 try
			 {
				 onDataBase11221->Open();
				 yReader121=mdDataBase111221->ExecuteReader();

				 while(yReader121->Read())
				 {
				 }
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
			 //getting taxes from the table restname
			 String^ servicecharge;
			 String^ servicetax;
			 String^ vatfood;
			 String^ vatalcohol;

			 String^ constring4=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase4=gcnew MySqlConnection(constring4);
			 MySqlCommand^ cmdDataBase4=gcnew MySqlCommand("SELECT * FROM restman.restname;",conDataBase4);

			 MySqlDataReader^ myReader4;
			 try
			 {
				 conDataBase4->Open();
				 myReader4=cmdDataBase4->ExecuteReader();

				 while(myReader4->Read())
				 {
					 if(!(myReader4->GetString("servicecharge")!="yes"))
					 {
						 String^ delimSt2r = ";";
						 array<Char>^ delimite2r = delimSt2r->ToCharArray( );
						 array<String^>^ word2s;
						 word2s = myReader4->GetString("servicechargevalue")->Split( delimite2r );

						 servicecharge=word2s[0]+"."+word2s[1];
						 servicechargevalue=float::Parse(servicecharge);
					 }
					 if(!(myReader4->GetString("servicetax")!="yes"))
					 {
						 String^ delimStr3 = ";";
						 array<Char>^ delimiter2 = delimStr3->ToCharArray( );
						 array<String^>^ words1;
						 words1 = myReader4->GetString("servicetaxvalue")->Split( delimiter2 );

						 servicetax=words1[0]+"."+words1[1];
						 servicetaxvalue=float::Parse(servicetax);
					 }

					  String^ delimStr31 = ";";
					 array<Char>^ delimiter21 = delimStr31->ToCharArray( );
					 array<String^>^ words11;
					 words11 = myReader4->GetString("vat_fooditems")->Split( delimiter21 );

					 vatfood=words11[0]+"."+words11[1];
					 vat_food=float::Parse(vatfood);

					 String^ delimStr32 = ";";
					 array<Char>^ delimiter22 = delimStr32->ToCharArray( );
					 array<String^>^ words12;
					 words12 = myReader4->GetString("vat_alcohol")->Split( delimiter22 );

					 vatalcohol=words12[0]+"."+words12[1];
					 vat_alcohol=float::Parse(vatalcohol);

				 }

			/*	 String^ delimSt1r = ";";
				 array<Char>^ delimite1r = delimSt1r->ToCharArray( );
				 array<String^>^ word1s;
				 word1s = yourorder->Split( delimite1r );*/
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }

			 String^ ordertempo;
			 String^ constring=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 //String^ cardno=this->dateTimePicker2->Value.ToString("yyMMddHHmmss");

			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT * FROM restman.billrecords WHERE transaction="+transac+";",conDataBase);
			 MySqlDataReader^ myReader;
			 try{
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();

				 while(myReader->Read())
				 {
					 //	 billno=int::Parse(myReader->GetString("customernoday"));
				 }
				 
				 if(myReader->GetString("typeoforder")=="1"){
					 label12->Text="Dine In";
					 String^ con1string=L"datasource=localhost;username=root;password=group2";
					 MySqlConnection^ con1DataBase=gcnew MySqlConnection(con1string);
					 MySqlCommand^ cmd1DataBase1=gcnew MySqlCommand("UPDATE restman.phasedecide SET tablesavailable=tablesavailable+'"+1+"';",con1DataBase);

					 MySqlDataReader^ myR1eader;
					 try
					 {
						 con1DataBase->Open();
						 myR1eader=cmd1DataBase1->ExecuteReader();

						 String^ tempo;
						 while(myR1eader->Read())
						 {
							 
						 }


					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }	
				 }
				 else if(myReader->GetString("typeoforder")=="2"){
					 label12->Text="Take out";
					 String^ con1string=L"datasource=localhost;username=root;password=group2";
					 MySqlConnection^ con1DataBase=gcnew MySqlConnection(con1string);
					 MySqlCommand^ cmd1DataBase1=gcnew MySqlCommand("SELECT takeoutcharge FROM restman.restname;",con1DataBase);

					 MySqlDataReader^ myR1eader;
					 try
					 {
						 con1DataBase->Open();
						 myR1eader=cmd1DataBase1->ExecuteReader();

						 String^ tempo;
						 while(myR1eader->Read())
						 {
						 }
						 String^ delimStr = ";";
						 array<Char>^ delimiter = delimStr->ToCharArray( );
						 array<String^>^ words;
						 words = myR1eader->GetString("takeoutcharge")->Split( delimiter );

						 if(words[1]=="%")
						 {
							 extra1=int::Parse(words[0]);
						 }
						 else
						 {
							 extra2=int::Parse(words[0]);
						 }


					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }	
				 }
				 else if(myReader->GetString("typeoforder")=="3"){
					 label12->Text="Home delivery";
					 String^ con1string=L"datasource=localhost;username=root;password=group2";
					 MySqlConnection^ con1DataBase=gcnew MySqlConnection(con1string);
					 MySqlCommand^ cmd1DataBase1=gcnew MySqlCommand("SELECT deliverycharge FROM restman.restname;",con1DataBase);

					 MySqlDataReader^ myR1eader;
					 try
					 {
						 con1DataBase->Open();
						 myR1eader=cmd1DataBase1->ExecuteReader();

						 String^ tempo;
						 while(myR1eader->Read())
						 {
						 }
						 String^ delimStr = ";";
						 array<Char>^ delimiter = delimStr->ToCharArray( );
						 array<String^>^ words;
						 words = myR1eader->GetString("deliverycharge")->Split( delimiter );

						 if(words[1]=="%")
						 {
							 extra1=int::Parse(words[0]);
						 }
						 else
						 {
							 extra2=int::Parse(words[0]);
						 }
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }	
				 }
				 yourorder=myReader->GetString("fooditems");
				 ordertempo=myReader->GetString("ordertemp");
				 String^ delimStr = ";";
				 array<Char>^ delimiter = delimStr->ToCharArray( );
				 array<String^>^ words;
				 words = yourorder->Split( delimiter );
				 int price;
				 int qty;
				 int totqty;
				 float amt1=0,amt2=0;
				 float amount;
				 totqty=0;
				 for (int word=0; (word+3)<words->Length; word++)
				 {
					 int intword=word/4;
					 dataGridView1->Rows->Add();
					 if(words[word]!="" && words[word+2]!="" && words[word+3]!="")
					 {
						 dataGridView1->Rows[intword]->Cells[0]->Value=intword+1;
						 dataGridView1->Rows[intword]->Cells[1]->Value=words[word];
						 dataGridView1->Rows[intword]->Cells[2]->Value=words[word+2];
						 dataGridView1->Rows[intword]->Cells[3]->Value=words[word+3];
						 price=int::Parse(words[word+2]);
						 qty=int::Parse(words[word+3]);
						 totqty=totqty+qty;
						 //amount=price*qty;
						 if(words[word+1]=="alcohol")
						 {
							 //amount=amount+(amount*(vat_alcohol))/100;
							 amt2+=price*qty;
						 }
						 else
						 {
							  amt1+=price*qty;
						 }
						 dataGridView1->Rows[intword]->Cells[4]->Value=(price*qty).ToString();
					 }
					 word=word+3;
				 }
				 dataGridView1->ReadOnly=true;
				 amount=amt1+amt2;
				 label35->Text=amount.ToString();
				 label34->Text=totqty.ToString();
				 amt1=amt1-(amt1*luckyamt)/100;
				 amt1=amt1-(amt1*frequentamt)/100;
				 amt1=amt1-(amt1*anniversaryamt)/100;
				 amt1=amt1-(amt1*instituteamt)/100;
				 amt1=amt1-(amt1*birthdayamt)/100;
				 amt1=amt1-(amt1*customeramt)/100;
				 amt1=amt1-(amt1*vipamt)/100;
				 amt1=amt1-(amt1*festivalamt)/100;


				 amt2=amt2-(amt2*luckyamt)/100;
				 amt2=amt2-(amt2*frequentamt)/100;
				 amt2=amt2-(amt2*anniversaryamt)/100;
				 amt2=amt2-(amt2*instituteamt)/100;
				 amt2=amt2-(amt2*birthdayamt)/100;
				 amt2=amt2-(amt2*customeramt)/100;
				 amt2=amt2-(amt2*vipamt)/100;
				 amt2=amt2-(amt2*festivalamt)/100;

				 luckyamt=0;
				 frequentamt=0;
				 anniversaryamt=0;
				 instituteamt=0;
				 birthdayamt=0;
				 vipamt=0;
				 customeramt=0;
				 festivalamt=0;

				 amount=amount-(amt1+amt2);
				 label26->Text=amount.ToString();

				 amount=(amt1*vat_food)/100+(amt2*vat_alcohol)/100;
				 amt1=amt1+(amt1*vat_food)/100;
				 amt2=amt2+(amt2*vat_alcohol)/100;
				 label42->Text=amount.ToString();

				 float tax;
				 amount=amt1+amt2;
				 label25->Text=((amount*servicechargevalue)/100).ToString();
				 tax=(amount*servicechargevalue)/100;
				 tax=(tax*servicetaxvalue)/100;
				 label41->Text=tax.ToString();
				 amount=amount+(amount*servicechargevalue)/100+(((amount*servicechargevalue)/100)*servicetaxvalue)/100;
				 amount=amount+extra2;
				 amount=amount+(extra1*amount)/100;
				 label24->Text=amount.ToString();
				 extra1=0;
				 extra2=0;
				 


			 }catch(Exception^ex){

				 MessageBox::Show(ex->Message);
			 }			 
		 

		 }
};
}
