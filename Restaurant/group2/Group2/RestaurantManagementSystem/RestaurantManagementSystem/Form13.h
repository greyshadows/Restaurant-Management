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
#include "Form271.h"
#include "Form14.h"
//#include "Form15.h"
//#include "Form13.h"
//#include "Form23.h"
//#include "Form16.h"
#include "form_header.h"
namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form13
	/// </summary>
	public ref class Form13 : public System::Windows::Forms::Form
	{
	public:
		int custo;
		String^ order;
		String^ cid;
		Form13(void)
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
		~Form13()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 














	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logOutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  instructionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox8;




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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->instructionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(35, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 31);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Bill Generation";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Transaction No.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(37, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 20);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Offers Valid";
			this->label3->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(232, 116);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 26);
			this->textBox1->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(185, 116);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 20);
			this->label4->TabIndex = 15;
			this->label4->Text = L":";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(185, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 20);
			this->label5->TabIndex = 16;
			this->label5->Text = L":";
			this->label5->Visible = false;
			this->label5->Click += gcnew System::EventHandler(this, &Form13::label5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button4->Location = System::Drawing::Point(617, 430);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 38);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Quit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form13::button4_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(265, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 38);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Generate Bill";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form13::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(540, 190);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(152, 20);
			this->textBox2->TabIndex = 19;
			this->textBox2->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(417, 193);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(119, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Customer Card Number:";
			this->label6->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->homeToolStripMenuItem, 
				this->optionsToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(718, 24);
			this->menuStrip1->TabIndex = 23;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->homeToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->homeToolStripMenuItem->Text = L"&Home";
			this->homeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form13::homeToolStripMenuItem_Click);
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->logOutToolStripMenuItem, 
				this->quitToolStripMenuItem});
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->optionsToolStripMenuItem->Text = L"&Options";
			// 
			// logOutToolStripMenuItem
			// 
			this->logOutToolStripMenuItem->Name = L"logOutToolStripMenuItem";
			this->logOutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::L));
			this->logOutToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->logOutToolStripMenuItem->Text = L"&Log Out";
			this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form13::logOutToolStripMenuItem_Click_1);
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->quitToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->quitToolStripMenuItem->Text = L"&Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form13::quitToolStripMenuItem_Click_1);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->instructionsToolStripMenuItem, 
				this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"H&elp";
			// 
			// instructionsToolStripMenuItem
			// 
			this->instructionsToolStripMenuItem->Name = L"instructionsToolStripMenuItem";
			this->instructionsToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::I));
			this->instructionsToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->instructionsToolStripMenuItem->Text = L"&Instructions";
			this->instructionsToolStripMenuItem->Visible = false;
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->aboutToolStripMenuItem->Text = L"&About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form13::aboutToolStripMenuItem_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(473, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 23);
			this->button2->TabIndex = 24;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form13::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(569, 225);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 23);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Entered card number";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form13::button3_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->checkBox1->Location = System::Drawing::Point(232, 166);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(126, 21);
			this->checkBox1->TabIndex = 26;
			this->checkBox1->Text = L"Lucky customer";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Enabled = false;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->checkBox2->Location = System::Drawing::Point(232, 190);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(119, 21);
			this->checkBox2->TabIndex = 27;
			this->checkBox2->Text = L"Customer card";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->Visible = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form13::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Enabled = false;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->checkBox3->Location = System::Drawing::Point(232, 213);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(84, 21);
			this->checkBox3->TabIndex = 28;
			this->checkBox3->Text = L"Frequent";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->Visible = false;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Enabled = false;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->checkBox4->Location = System::Drawing::Point(232, 237);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(79, 21);
			this->checkBox4->TabIndex = 29;
			this->checkBox4->Text = L"Birthday";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->Visible = false;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Enabled = false;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->checkBox5->Location = System::Drawing::Point(232, 261);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(102, 21);
			this->checkBox5->TabIndex = 30;
			this->checkBox5->Text = L"Anniversary";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->Visible = false;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Enabled = false;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->checkBox6->Location = System::Drawing::Point(232, 285);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(76, 21);
			this->checkBox6->TabIndex = 31;
			this->checkBox6->Text = L"Institute";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->Visible = false;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Enabled = false;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->checkBox7->Location = System::Drawing::Point(232, 309);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(75, 21);
			this->checkBox7->TabIndex = 32;
			this->checkBox7->Text = L"Festival";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->Visible = false;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Enabled = false;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->checkBox8->Location = System::Drawing::Point(232, 333);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(98, 21);
			this->checkBox8->TabIndex = 33;
			this->checkBox8->Text = L"VIP OFFER";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->Visible = false;
			// 
			// Form13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 495);
			this->ControlBox = false;
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"Form13";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Restaurant Management System";
			this->Load += gcnew System::EventHandler(this, &Form13::Form13_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {


			 System::Windows::Forms::DialogResult result = MessageBox::Show(this, " Bill will be generated.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			 if(System::Windows::Forms::DialogResult::Yes == result)
			 {

			//	 transac=gcnew String^(this->textBox1->Text);
				 String^ constring0=L"datasource=localhost;username=root;password=group2;database=restman";
				 MySqlConnection^ conDataBase0=gcnew MySqlConnection(constring0);
				 MySqlCommand^ cmdDataBase0=gcnew MySqlCommand("SELECT * FROM restman.restname;",conDataBase0);
				 MySqlDataReader^ myReader0;
				 try
				 {
					 conDataBase0->Open();
					 myReader0=cmdDataBase0->ExecuteReader();

					 while(myReader0->Read())
					 {
						 order=order+cid+";";
						 if(checkBox1->Checked==true)
						 {
							order=order+"lucky"+";";
							luckyamt=int::Parse(myReader0->GetString("luckyamount"));
						 }
						 if(checkBox2->Checked==true)
						 {
							 order=order+"card"+";";
							customeramt=int::Parse(myReader0->GetString("cardamount"));
						 }
						 if(checkBox3->Checked==true)
						 {
							 order=order+"frequent"+";";
							frequentamt=int::Parse(myReader0->GetString("frequentamount"));
						 }
						 if(checkBox4->Checked==true)
						 {
							 order=order+"birthday"+";";
							birthdayamt=int::Parse(myReader0->GetString("birthdayamount"));
						 }
						 if(checkBox5->Checked==true)
						 {
							 order=order+"anniversary"+";";
							anniversaryamt=int::Parse(myReader0->GetString("anniversaryamount"));
						 }
						 if(checkBox6->Checked==true)
						 {
							 order=order+"institute"+";";
							instituteamt=int::Parse(myReader0->GetString("instituteamount"));
						 }
						 if(checkBox7->Checked==true)
						 {
							 order=order+"festivaloffer"+";";
							festivalamt=int::Parse(myReader0->GetString("festivalamount"));
						 }
						 if(checkBox8->Checked==true)
						 {
							 order=order+"vipoffer"+";";
							vipamt=int::Parse(myReader0->GetString("vipamount"));
						 }
					 }
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				 String^ constring1231=L"datasource=localhost;username=root;password=group2;database=restman";
				 MySqlConnection^ conDataBase1231=gcnew MySqlConnection(constring1231);
				 MySqlCommand^ cmdDataBase1231=gcnew MySqlCommand("CREATE TABLE IF NOT EXISTS `transactionid` (sid int(20) PRIMARY KEY AUTO_INCREMENT,transaction_no int(15) DEFAULT '0');"
															"Update billrecords Set ordertemp='"+order+"',bilgen='"+"yes"+"' WHERE transaction="+this->textBox1->Text+" ;"
															"INSERT INTO transactionid (transaction_no) values('"+this->textBox1->Text+"');",conDataBase1231);
				 MySqlDataReader^ myReader;
				 try
				 {
					 conDataBase1231->Open();
					 myReader=cmdDataBase1231->ExecuteReader();

					 while(myReader->Read()){

					 }

				 }
				 catch(Exception^ex)
				 {

					 MessageBox::Show(ex->Message);
				 }
				 Form13::Hide();
				 Form27^frm=gcnew Form27;													//shows another form on clicking the button;
				 frm->Show(this);
			 }
		 }
//private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
//		 {
//			 if(checkedListBox1->CheckedItems->Count != 0)
//			 {
//				 String^ s = "Customer Card";
//				 for(int y=0;y<checkedListBox1->CheckedItems->Count ;y++)
//				 {
//					 if(s==checkedListBox1->CheckedItems[y]->ToString())
//					 {
//						 label6->Visible="True";
//						 textBox2->Visible="True";
//						 button3->Visible="True";
//
//					 }
//
//				 }
//
//			 }
//		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, " The data filled in this form will be lost.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(System::Windows::Forms::DialogResult::Yes == result)
				{
					Application::Exit();
				}
		 }
private: System::Void homeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, " The data filled in this form will be lost.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(System::Windows::Forms::DialogResult::Yes == result)
				{
					
					this->Close();
				}
		 }
private: System::Void logOutToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, " The data filled in this form will be lost.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(System::Windows::Forms::DialogResult::Yes == result)
				{
					log_out=1;
					/*if(add_item==2)
					{
						label1->Text="Hello Brother!!";
					}*/
					//label1->Text=add_item;
					//textBox1->Text = ;
					this->Close();
				}
		 }
private: System::Void quitToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, " The data filled in this form will be lost.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(System::Windows::Forms::DialogResult::Yes == result)
				{
					Application::Exit();
				}
		 }
private: System::Void aboutToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //Form13::Hide();
			 Form14^frm=gcnew Form14;													//shows another form on clicking the button;
			 frm->Show(this);
		 }
private: System::Void Form13_Load(System::Object^  sender, System::EventArgs^  e) {
custo=0;order="";cid=" ";		 
			 String^ constring1231=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase1231=gcnew MySqlConnection(constring1231);
			 MySqlCommand^ cmdDataBase1231=gcnew MySqlCommand("SELECT * FROM restman.restname;",conDataBase1231);
			 MySqlDataReader^ myReader;
			 try
			 {
				 conDataBase1231->Open();
				 myReader=cmdDataBase1231->ExecuteReader();
				 
				 while(myReader->Read()){
					 if("yes"==myReader->GetString("lucky"))
						 checkBox1->Enabled=true;
					 if("yes"==myReader->GetString("card"))
						 checkBox2->Enabled=true;
					 if("yes"==myReader->GetString("frequent"))
						 checkBox3->Enabled=true;
					 if("yes"==myReader->GetString("birthday"))
						 checkBox4->Enabled=true;
					 if("yes"==myReader->GetString("anniversary"))
						 checkBox5->Enabled=true;
					 if("yes"==myReader->GetString("institute"))
						 checkBox6->Enabled=true;
					 if("yes"==myReader->GetString("festivaloffer"))
						 checkBox7->Enabled=true;
					 if("yes"==myReader->GetString("vipoffer"))
						 checkBox8->Enabled=true;
					 

				 }

			 }
			 catch(Exception^ex)
			 {

				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring1231=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase1231=gcnew MySqlConnection(constring1231);
			 MySqlCommand^ cmdDataBase1231=gcnew MySqlCommand("SELECT * FROM restman.billrecords WHERE transaction='"+this->textBox1->Text+"';",conDataBase1231);
			 MySqlDataReader^ myReader;
			 try
			 {
				 conDataBase1231->Open();
				 myReader=cmdDataBase1231->ExecuteReader();
				 int count=0;
				 while(myReader->Read()){
					 count++;
				 }
				 if(count==1)
				 {
					 label3->Visible=true;
					 label5->Visible=true;
					 //checkedListBox1->Visible=true;

					 button1->Visible=true;
					 checkBox1->Visible=true;
					 checkBox2->Visible=true;
					 checkBox3->Visible=true;
					 checkBox4->Visible=true;
					 checkBox5->Visible=true;
					 checkBox6->Visible=true;
					 checkBox7->Visible=true;
					 checkBox8->Visible=true;
					 button2->Enabled=false;
					 textBox1->ReadOnly=true;
					 order=myReader->GetString("transaction")+";";
				 }
				 else
				 {
					 MessageBox::Show("Invalid transaction number.Please check again");
				 }

			 }
			 catch(Exception^ex)
			 {

				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring1231=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase1231=gcnew MySqlConnection(constring1231);
			 MySqlCommand^ cmdDataBase1231=gcnew MySqlCommand("SELECT * FROM restman.customercard WHERE cid='"+this->textBox2->Text+"';",conDataBase1231);
			 MySqlDataReader^ myReader;
			 try
			 {
				 conDataBase1231->Open();
				 myReader=cmdDataBase1231->ExecuteReader();
				 int count=0;
				 while(myReader->Read()){
					 count++;
				 }
				 if(count==1)
				 {
					 cid=myReader->GetString("cid");
					 button3->Visible=false;
					 button3->Enabled=false;
				 }
				 else
				 {
					 MessageBox::Show("Invalid customercard number.Please check again");
				 }

			 }
			 catch(Exception^ex)
			 {

				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			label6->Visible=true;
			textBox2->Visible=true;
			button3->Visible=true;
			if(custo=0)
				custo=1;
			else
				custo=0;
		 }
};
}
