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
#include "Form11.h"
#include "Form12.h"
#include "Form14.h"
#include "Form10.h"
namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form10
	/// </summary>
	public ref class Form10 : public System::Windows::Forms::Form
	{
	public:
		int flag;
		Form10(void)
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
		~Form10()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;

	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logOutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  instructionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form10::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->instructionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Name = L"label3";
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			// 
			// textBox2
			// 
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form10::button1_Click);
			// 
			// linkLabel1
			// 
			resources->ApplyResources(this->linkLabel1, L"linkLabel1");
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->TabStop = true;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form10::linkLabel1_LinkClicked);
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form10::button2_Click);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Name = L"label4";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Name = L"label5";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->homeToolStripMenuItem, 
				this->optionsToolStripMenuItem, this->helpToolStripMenuItem});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			resources->ApplyResources(this->homeToolStripMenuItem, L"homeToolStripMenuItem");
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->logOutToolStripMenuItem, 
				this->quitToolStripMenuItem});
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			resources->ApplyResources(this->optionsToolStripMenuItem, L"optionsToolStripMenuItem");
			// 
			// logOutToolStripMenuItem
			// 
			resources->ApplyResources(this->logOutToolStripMenuItem, L"logOutToolStripMenuItem");
			this->logOutToolStripMenuItem->Name = L"logOutToolStripMenuItem";
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			resources->ApplyResources(this->quitToolStripMenuItem, L"quitToolStripMenuItem");
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form10::quitToolStripMenuItem_Click_1);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->instructionsToolStripMenuItem, 
				this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			resources->ApplyResources(this->helpToolStripMenuItem, L"helpToolStripMenuItem");
			// 
			// instructionsToolStripMenuItem
			// 
			this->instructionsToolStripMenuItem->Name = L"instructionsToolStripMenuItem";
			resources->ApplyResources(this->instructionsToolStripMenuItem, L"instructionsToolStripMenuItem");
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			resources->ApplyResources(this->aboutToolStripMenuItem, L"aboutToolStripMenuItem");
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form10::aboutToolStripMenuItem_Click);
			// 
			// dateTimePicker1
			// 
			resources->ApplyResources(this->dateTimePicker1, L"dateTimePicker1");
			this->dateTimePicker1->Name = L"dateTimePicker1";
			// 
			// Form10
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ControlBox = false;
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"Form10";
			this->Load += gcnew System::EventHandler(this, &Form10::Form10_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form10_Load(System::Object^  sender, System::EventArgs^  e) {
				 flag=0;		//this is for superuser checking

				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT * FROM restman.restname;",conDataBase);
				 MySqlDataReader^ myReader;
				 try
				 {
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();
					 while(myReader->Read()){

						 label1->Text="Welcome to "+myReader->GetString("name");
					 }


				 }catch(Exception^ex){

					 MessageBox::Show(ex->Message);
				 }

			 }
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
			 {
				 //Form10::Hide();
				 Form11^frm=gcnew Form11;													//shows another form on clicking the button;
				 frm->Show(this);
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				 if(System::Windows::Forms::DialogResult::Yes == result)
				 {
					 Application::Exit();
				 }
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT * FROM restman.users WHERE username='"+this->textBox1->Text+"' and password='"+this->textBox2->Text+"' ;",conDataBase);
				 MySqlDataReader^ myReader;
				 try
				 {
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();
					 int count=0;
					 
					 while(myReader->Read()){
						 count++;
						 if(count==1){
							flag=int::Parse(myReader->GetString("userid"));
						 }
					 }	
					 if(count==1)
					 {
						 //MessageBox::Show(myReader->GetString("username")+":You are logging in...");

						 String^ constring=L"datasource=localhost;username=root;password=group2";
						 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
						 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("INSERT INTO restman.login (username,logintime) values('"+this->textBox1->Text+"','"+this->dateTimePicker1->Value+"');",conDataBase);
						 MySqlDataReader^ myReader;
						 try
						 {
							 conDataBase->Open();
							 myReader=cmdDataBase->ExecuteReader();
							 while(myReader->Read()){

								 useridlogin=int::Parse("sid");
							 }


						 }catch(Exception^ex){

							 MessageBox::Show(ex->Message);
						 }

						 String^ constringq=L"datasource=localhost;username=root;password=group2";
						 MySqlConnection^ conDataBaseq=gcnew MySqlConnection(constringq);
						 MySqlCommand^ cmdDataBaseq=gcnew MySqlCommand("SELECT userid FROM restman.users;",conDataBaseq);
						 MySqlDataReader^ myReader21q;
						 try
						 {
							 conDataBaseq->Open();
							 myReader21q=cmdDataBaseq->ExecuteReader();
							 while(myReader21q->Read())
							 {
								 if(flag>1)
								 {
									 superuser=0;
									 Form10::Hide();
									 Form12^frm=gcnew Form12;													//shows another form on clicking the button;
									 frm->Show(this);
									 textBox1->Text="";
									 textBox2->Text="";
									 log_out=0;
									 this->Show();
									 
								 }
								 if(flag==1)
								 {
									 superuser=1;
									 Form10::Hide();
									 Form12^frm=gcnew Form12;													//shows another form on clicking the button;
									 frm->Show(this);
									 textBox1->Text="";
									 textBox2->Text="";
									 log_out=0;
									 this->Show();
								 }
							 }

						 }catch(Exception^ex){

							 MessageBox::Show(ex->Message);
						 }

						
					 }
					 else
					 {
						 MessageBox::Show("Username or password doesn't match please check again");
					 }
				 }catch(Exception^ex){

					 MessageBox::Show(ex->Message);
				 }	
				

			 }
	private: System::Void quitToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) 
			 {
				 System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				 if(System::Windows::Forms::DialogResult::Yes == result)
				 {
					 Application::Exit();
				 }
			 }
	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				// Form10::Hide();
				 Form14^frm=gcnew Form14;													//shows another form on clicking the button;
				 frm->Show(this);
			 }
	};
}
