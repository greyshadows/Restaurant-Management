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
#include "Form6.h"
#include "Form7.h"
//#include "Form4.h"


namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
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
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;




















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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(46, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(241, 31);
			this->label1->TabIndex = 42;
			this->label1->Text = L"Employee Details";
			this->label1->Click += gcnew System::EventHandler(this, &Form4::label1_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(13, 436);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(381, 23);
			this->progressBar1->TabIndex = 51;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(636, 430);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Quit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form4::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(544, 430);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Next>";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form4::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(452, 430);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"<Previous";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form4::button1_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(52, 117);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(135, 44);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Add Employee";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form4::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(52, 179);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(135, 44);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Remove Employee";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form4::button5_Click);
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 495);
			this->ControlBox = false;
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"Form4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Restaurant Management System - Installation";
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 //Form4::Hide();
				 Form5^frm=gcnew Form5;													//shows another form on clicking the button;
				 frm->Show(this);
			 }
private: System::Void Form4_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->progressBar1->Value=40;
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
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //Form3::Hide();
			 Form6^frm=gcnew Form6;													//shows another form on clicking the button;
			 frm->Show(this);
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Form4::Hide();
			 Form7^frm=gcnew Form7;													//shows another form on clicking the button;
			 frm->Show(this);
			//this->Show();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		//	 this->Close();
		 }
};
}
