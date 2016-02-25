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
#include "Form5.h"
namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form5
	/// </summary>
	public ref class Form5 : public System::Windows::Forms::Form
	{
	public:
		int clock;
		Form5(void)
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
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	protected: 



















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox6->Location = System::Drawing::Point(219, 383);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(441, 26);
			this->textBox6->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox5->Location = System::Drawing::Point(219, 325);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(441, 26);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"What is your favourite colour\?";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form5::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox4->Location = System::Drawing::Point(219, 260);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(441, 26);
			this->textBox4->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox3->Location = System::Drawing::Point(219, 151);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(441, 26);
			this->textBox3->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox2->Location = System::Drawing::Point(219, 209);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(441, 26);
			this->textBox2->TabIndex = 2;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label13->Location = System::Drawing::Point(195, 383);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 20);
			this->label13->TabIndex = 83;
			this->label13->Text = L":";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label12->Location = System::Drawing::Point(195, 325);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 20);
			this->label12->TabIndex = 82;
			this->label12->Text = L":";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label11->Location = System::Drawing::Point(195, 267);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 20);
			this->label11->TabIndex = 81;
			this->label11->Text = L":";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label10->Location = System::Drawing::Point(195, 209);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 20);
			this->label10->TabIndex = 80;
			this->label10->Text = L":";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->Location = System::Drawing::Point(195, 151);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 20);
			this->label9->TabIndex = 79;
			this->label9->Text = L":";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->Location = System::Drawing::Point(195, 93);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 20);
			this->label8->TabIndex = 78;
			this->label8->Text = L":";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(219, 93);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(441, 26);
			this->textBox1->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(13, 383);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 20);
			this->label7->TabIndex = 76;
			this->label7->Text = L"Answer";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(13, 325);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 20);
			this->label6->TabIndex = 75;
			this->label6->Text = L"Security Question";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(13, 267);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 20);
			this->label5->TabIndex = 74;
			this->label5->Text = L"Confirm Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(13, 209);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 20);
			this->label4->TabIndex = 73;
			this->label4->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(13, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 20);
			this->label3->TabIndex = 72;
			this->label3->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(13, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 20);
			this->label2->TabIndex = 71;
			this->label2->Text = L"Name ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(318, 436);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 33);
			this->button1->TabIndex = 6;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form5::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(415, 436);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 33);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form5::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 31);
			this->label1->TabIndex = 92;
			this->label1->Text = L"Add Employee";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(513, 436);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 33);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Add another employee";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form5::button3_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Green;
			this->label14->Location = System::Drawing::Point(468, 41);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(192, 13);
			this->label14->TabIndex = 93;
			this->label14->Text = L"The employee was successfully added.";
			this->label14->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form5::timer1_Tick);
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 490);
			this->ControlBox = false;
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Location = System::Drawing::Point(620, 100);
			this->MaximizeBox = false;
			this->Name = L"Form5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Restaurant Management System - Installation";
			this->Load += gcnew System::EventHandler(this, &Form5::Form5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(textBox2->Text==textBox4->Text)
				 {
					 if(textBox1->Text!="" && textBox2->Text!="" && textBox3->Text!="" && textBox4->Text!="" && textBox5->Text!="" && textBox6->Text!="" ) 
					 {
						 String^ constring=L"datasource=localhost;username=root;password=group2";
						 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
						 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Insert into restman.users (name,username,password,security,answer) values('"+this->textBox1->Text+"','"+this->textBox3->Text+"','"+this->textBox4->Text+"','"+this->textBox5->Text+"','"+this->textBox6->Text+"') ;",conDataBase);//(supername,username,password,security,answer) values('"+this->textBox1->Text+"',,'"+this->textBox4->Text+"','"+this->textBox5->Text+"','"+this->textBox6->Text+"')
						 MySqlDataReader^ myReader;
						 try{
							 conDataBase->Open();
							 myReader=cmdDataBase->ExecuteReader();

							 while(myReader->Read()){

							 }

						 }catch(Exception^ex){

							 MessageBox::Show(ex->Message);
						 } 
						 Form5::Hide();
						 //Form3^frm2=gcnew Form3;													//shows another form on clicking the button;
						 //frm2->Show(this);
					 }
					 else
					 {
						MessageBox::Show("No text field can be left vacant.","Error",MessageBoxButtons::OK);
						if(textBox1->Text=="")
						{
							textBox1->Select();
						}
						else
						{
							if(textBox3->Text=="")
							{
								textBox3->Select();
							}
							else
							{
								if(textBox2->Text=="")
								{
									textBox2->Select();
								}
								else
								{

									if(textBox4->Text=="")
									{
										textBox4->Select();
									}
									else
									{
										if(textBox5->Text=="")
										{
											textBox5->Select();
										}
										else
										{
											if(textBox6->Text=="")
											{
												textBox6->Select();
											}
										}
									}
								}				
							}
						}
			    	 }
				 }
				 else
				 {
						MessageBox::Show("Reconfirmed password does not match with the password.","Error",MessageBoxButtons::OK);
						textBox4->Text="";
						textBox4->Select();
				 }
			 }
private: System::Void Form5_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 textBox1->Select();
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
			 if(textBox2->Text==textBox4->Text)
			 {
				 if(textBox1->Text!="" && textBox2->Text!="" && textBox3->Text!="" && textBox4->Text!="" && textBox5->Text!="" && textBox6->Text!="" ) 
				 {
					 
					 String^ constring=L"datasource=localhost;username=root;password=group2";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Insert into restman.users (name,username,password,security,answer) values('"+this->textBox1->Text+"','"+this->textBox3->Text+"','"+this->textBox4->Text+"','"+this->textBox5->Text+"','"+this->textBox6->Text+"') ;",conDataBase);//(supername,username,password,security,answer) values('"+this->textBox1->Text+"',,'"+this->textBox4->Text+"','"+this->textBox5->Text+"','"+this->textBox6->Text+"')
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader=cmdDataBase->ExecuteReader();

						 while(myReader->Read()){

						 }

					 }catch(Exception^ex){

						 MessageBox::Show(ex->Message);
					 } 

					 textBox1->Text="";
					 textBox2->Text="";
					 textBox3->Text="";
					 textBox4->Text="";
					 textBox5->Text="What is your favourite colour?";
					 textBox6->Text="";
					 textBox1->Select();
					 label14->Visible="true";
					 clock=0;
				 }
				 else
				 {
					 MessageBox::Show("No text field can be left vacant.","Error",MessageBoxButtons::OK);
					 if(textBox1->Text=="")
					 {
						 textBox1->Select();
					 }
					 else
					 {
						 if(textBox3->Text=="")
						 {
							 textBox3->Select();
						 }
						 else
						 {
							 if(textBox2->Text=="")
							 {
								 textBox2->Select();
							 }
							 else
							 {

								 if(textBox4->Text=="")
								 {
									 textBox4->Select();
								 }
								 else
								 {
									 if(textBox5->Text=="")
									 {
										 textBox5->Select();
									 }
									 else
									 {
										 if(textBox6->Text=="")
										 {
											 textBox6->Select();
										 }
									 }
								 }
							 }				
						 }
					 }
				 }
			 }
			 else
			 {
				 MessageBox::Show("Reconfirmed password does not match with the password.","Error",MessageBoxButtons::OK);
				 textBox4->Text="";
				 textBox4->Select();
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Close();
		 }
		
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 clock++;
			 if(clock==2)
			 {
				 label14->Visible=false;
			 }
		 }
};
}
