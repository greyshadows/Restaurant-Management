#pragma once
#include "stdafx.h"
#include "NewCustomer1.h"
#include "ChangePass.h"
#include "MenuCard.h"
#include "Form1.h"
#include "chef.h"
namespace Restaurant {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			password_txt->PasswordChar='*';
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^  cngpass_link;
	protected: 
	private: System::Windows::Forms::LinkLabel^  newuser_link;
	private: System::Windows::Forms::ComboBox^  designation_list;
	private: System::Windows::Forms::Label^  designation_lbl;
	private: System::Windows::Forms::Label^  password_lbl;
	private: System::Windows::Forms::Label^  username_lbl;
	private: System::Windows::Forms::TextBox^  password_txt;
	private: System::Windows::Forms::TextBox^  username_txt;
	private: System::Windows::Forms::Button^  Login_button;

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
			this->cngpass_link = (gcnew System::Windows::Forms::LinkLabel());
			this->newuser_link = (gcnew System::Windows::Forms::LinkLabel());
			this->designation_list = (gcnew System::Windows::Forms::ComboBox());
			this->designation_lbl = (gcnew System::Windows::Forms::Label());
			this->password_lbl = (gcnew System::Windows::Forms::Label());
			this->username_lbl = (gcnew System::Windows::Forms::Label());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->username_txt = (gcnew System::Windows::Forms::TextBox());
			this->Login_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// cngpass_link
			// 
			this->cngpass_link->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cngpass_link->AutoSize = true;
			this->cngpass_link->Location = System::Drawing::Point(47, 193);
			this->cngpass_link->Name = L"cngpass_link";
			this->cngpass_link->Size = System::Drawing::Size(176, 13);
			this->cngpass_link->TabIndex = 17;
			this->cngpass_link->TabStop = true;
			this->cngpass_link->Text = L"Click here to change your password";
			this->cngpass_link->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::cngpass_link_LinkClicked);
			// 
			// newuser_link
			// 
			this->newuser_link->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->newuser_link->AutoSize = true;
			this->newuser_link->Location = System::Drawing::Point(47, 171);
			this->newuser_link->Name = L"newuser_link";
			this->newuser_link->Size = System::Drawing::Size(181, 13);
			this->newuser_link->TabIndex = 16;
			this->newuser_link->TabStop = true;
			this->newuser_link->Text = L"New Customer...Click here to sign up";
			this->newuser_link->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::newuser_link_LinkClicked);
			// 
			// designation_list
			// 
			this->designation_list->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->designation_list->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->designation_list->FormattingEnabled = true;
			this->designation_list->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Manager", L"Chef", L"Customer"});
			this->designation_list->Location = System::Drawing::Point(116, 106);
			this->designation_list->Name = L"designation_list";
			this->designation_list->Size = System::Drawing::Size(121, 21);
			this->designation_list->TabIndex = 15;
			// 
			// designation_lbl
			// 
			this->designation_lbl->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->designation_lbl->AutoSize = true;
			this->designation_lbl->Location = System::Drawing::Point(47, 106);
			this->designation_lbl->Name = L"designation_lbl";
			this->designation_lbl->Size = System::Drawing::Size(63, 13);
			this->designation_lbl->TabIndex = 14;
			this->designation_lbl->Text = L"Designation";
			// 
			// password_lbl
			// 
			this->password_lbl->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->password_lbl->AutoSize = true;
			this->password_lbl->Location = System::Drawing::Point(57, 80);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(53, 13);
			this->password_lbl->TabIndex = 13;
			this->password_lbl->Text = L"Password";
			// 
			// username_lbl
			// 
			this->username_lbl->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->username_lbl->AutoSize = true;
			this->username_lbl->Location = System::Drawing::Point(55, 54);
			this->username_lbl->Name = L"username_lbl";
			this->username_lbl->Size = System::Drawing::Size(55, 13);
			this->username_lbl->TabIndex = 12;
			this->username_lbl->Text = L"Username";
			// 
			// password_txt
			// 
			this->password_txt->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->password_txt->Location = System::Drawing::Point(116, 80);
			this->password_txt->Name = L"password_txt";
			this->password_txt->Size = System::Drawing::Size(121, 20);
			this->password_txt->TabIndex = 11;
			// 
			// username_txt
			// 
			this->username_txt->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->username_txt->Location = System::Drawing::Point(116, 54);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(121, 20);
			this->username_txt->TabIndex = 10;
			// 
			// Login_button
			// 
			this->Login_button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Login_button->Location = System::Drawing::Point(98, 145);
			this->Login_button->Name = L"Login_button";
			this->Login_button->Size = System::Drawing::Size(75, 23);
			this->Login_button->TabIndex = 9;
			this->Login_button->Text = L"Login";
			this->Login_button->UseVisualStyleBackColor = true;
			this->Login_button->Click += gcnew System::EventHandler(this, &Login::Login_button_Click);
			// 
			// Login
			// 
			this->AcceptButton = this->Login_button;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->cngpass_link);
			this->Controls->Add(this->newuser_link);
			this->Controls->Add(this->designation_list);
			this->Controls->Add(this->designation_lbl);
			this->Controls->Add(this->password_lbl);
			this->Controls->Add(this->username_lbl);
			this->Controls->Add(this->password_txt);
			this->Controls->Add(this->username_txt);
			this->Controls->Add(this->Login_button);
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
				private: System::Void Login_button_Click(System::Object^  sender, System::EventArgs^  e) {
							 String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
							 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
							 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from restaurant.employee_id where username='"+this->username_txt->Text+"' and password='"+this->password_txt->Text+"' and designation='"+this->designation_list->Text+"' ;",conDataBase);
							 MySqlDataReader^ myReader;
							 try{
								 conDataBase->Open();
								 myReader=cmdDataBase->ExecuteReader();
								 int count=0;
								 while(myReader->Read()){
									 count=count+1;
								 }
								 if (count==1){
									 if(designation_list->Text=="Manager"){
										 Form1^ form = gcnew Form1();
										 form->Show();
										 this->Hide();
										 }
									 else if(designation_list->Text=="Chef"){
										 chef^ form = gcnew chef();
										 form->Show();
										 this->Hide();}
									 else
									 {String^ username=username_txt->Text;

									 MenuCard^ f5=gcnew MenuCard(username);
									 f5->Show();
									 this->Hide();
									 }


								 }
								 else  MessageBox::Show("Details entered are not correct.....Try Again");


							 }catch(Exception^ex){

								 MessageBox::Show(ex->Message);
							 }
							 conDataBase->Close();

						 }
	private: System::Void newuser_link_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 this->Hide();
				 NewCustomer^ f4 = gcnew NewCustomer();
				 f4->Show();
			 }
	private: System::Void cngpass_link_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 this->Hide();
				 ChangePass^ f3 = gcnew ChangePass();
				 f3->Show();
			 }

};
}
