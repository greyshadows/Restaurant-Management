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
#include "Form13.h"
#include "Form14.h"
#include "Form15.h"
#include "Form12.h"
#include "Form23.h"
#include "Form16.h"
#include "form_header.h"

namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Form12
	/// </summary>
	public ref class Form12 : public System::Windows::Forms::Form
	{
	public:
		String^ timetemp;
		int to,from,mid;
	private: System::Windows::Forms::Button^  button11;
	public: 
	private: System::Windows::Forms::Label^  label1;

	public: 


		Form12(void)
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
		~Form12()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 














	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logOutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  instructionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::ComponentModel::IContainer^  components;




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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->instructionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(31, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 63);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Place Order";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form12::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(31, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 63);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Change Order";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form12::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(31, 28);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 63);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Generate Bill";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form12::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button4->Location = System::Drawing::Point(404, 13);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 38);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Quit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form12::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(44, 153);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(77, 36);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Add Item";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form12::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(137, 153);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(77, 36);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Delete Item";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form12::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(44, 101);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(77, 36);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Dine In";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form12::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(137, 101);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(77, 36);
			this->button8->TabIndex = 16;
			this->button8->Text = L"Take Out";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form12::button8_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Location = System::Drawing::Point(1, 189);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(209, 306);
			this->panel1->TabIndex = 18;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(31, 197);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(126, 63);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Customer Card";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form12::button10_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button4);
			this->panel2->Location = System::Drawing::Point(216, 432);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(502, 63);
			this->panel2->TabIndex = 19;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->dateTimePicker1);
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button8);
			this->panel3->Location = System::Drawing::Point(216, 189);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(502, 237);
			this->panel3->TabIndex = 20;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(492, 9);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(10, 20);
			this->dateTimePicker1->TabIndex = 18;
			this->dateTimePicker1->Visible = false;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(231, 101);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(77, 36);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Home Delivery";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form12::button9_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(1, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(717, 165);
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form12::pictureBox1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->homeToolStripMenuItem, 
				this->optionsToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(718, 24);
			this->menuStrip1->TabIndex = 22;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->Enabled = false;
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->homeToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->homeToolStripMenuItem->Text = L"&Home";
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
			this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form12::logOutToolStripMenuItem_Click_1);
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->quitToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->quitToolStripMenuItem->Text = L"&Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form12::quitToolStripMenuItem_Click_1);
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
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form12::aboutToolStripMenuItem_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form12::timer1_Tick);
			// 
			// button11
			// 
			this->button11->Enabled = false;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold));
			this->button11->Location = System::Drawing::Point(32, 112);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(126, 47);
			this->button11->TabIndex = 23;
			this->button11->Text = L"Reinstall";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Visible = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form12::button11_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(178, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 16);
			this->label1->TabIndex = 24;
			this->label1->Text = L"<---BEWARE OF THIS BUTTON";
			this->label1->Visible = false;
			// 
			// Form12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 495);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form12";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Restaurant Management System";
			this->Activated += gcnew System::EventHandler(this, &Form12::Form12_Activated);
			this->Load += gcnew System::EventHandler(this, &Form12::Form12_Load);
			this->Shown += gcnew System::EventHandler(this, &Form12::Form12_Shown);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, " You will have to login again.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(System::Windows::Forms::DialogResult::Yes == result)
				{
					Application::Exit();
				}
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			  

			 Form12::Hide();
			 Form13^frm=gcnew Form13;													//shows another form on clicking the button;
			 frm->Show(this);
			  this->Show();
			  
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 button5->Visible="True";
			 button6->Visible="True";

			 button7->Visible=false;
			 button8->Visible=false;
			 button9->Visible=false;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 button7->Visible="True";
			 button8->Visible="True";
			 button9->Visible="True";

			 button5->Visible=false;
			 button6->Visible=false;
		 }
private: System::Void Form12_Load(System::Object^  sender, System::EventArgs^  e) 
		 {

			 if(superuser==1)
			 {
				 button11->Enabled=true;
				 button11->Visible=true;
				 label1->Visible=true;
				 superuser=0;
			 }

			 String^ constring=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT customernoday FROM restman.phasedecide;",conDataBase);
			 MySqlDataReader^ myReader;
			 try{
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
					
				 while(myReader->Read())
				 {
					billno=int::Parse(myReader->GetString("customernoday"));
				 }

			 }catch(Exception^ex){

				 MessageBox::Show(ex->Message);
			 }
			 String^ constring11=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase11=gcnew MySqlConnection(constring11);
			 MySqlCommand^ cmdDataBase11=gcnew MySqlCommand("SELECT timings FROM restman.restname;",conDataBase11);
			 MySqlDataReader^ myReader11;
			 try{
				 conDataBase11->Open();
				 myReader11=cmdDataBase11->ExecuteReader();

				 while(myReader11->Read()){}

				 timetemp=myReader11->GetString("timings");

				 String^ delimStr = ";";
				 array<Char>^ delimiter = delimStr->ToCharArray( );
				 array<String^>^ words;
				 words = timetemp->Split( delimiter );

				 to=int::Parse(words[1]);
				 from=int::Parse(words[0]);

				 
			 }catch(Exception^ex){

				 MessageBox::Show(ex->Message);
			 }

			 String^ constring34=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase321=gcnew MySqlConnection(constring34);
			 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("SELECT * FROM restman.restname ;",conDataBase321);

			 MySqlDataReader^ myReader2;
			 try
			 {
				 conDataBase321->Open();
				 myReader2=cmdDataBase1->ExecuteReader();

				 while(myReader2->Read())
				 {

				 }
				 if(myReader2->GetString("dinein")!="yes")
					 button7->Enabled=false;
				 if(myReader2->GetString("takeout")!="yes")
					 button8->Enabled=false;
				 if(myReader2->GetString("home")!="yes")
					 button9->Enabled=false;

			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int timecheck=timevalidity();
			 String^ constring11=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase11=gcnew MySqlConnection(constring11);
			 MySqlCommand^ cmdDataBase11=gcnew MySqlCommand("SELECT tablesavailable FROM restman.phasedecide;",conDataBase11);
			 MySqlDataReader^ myReader11;
			 int asdf;
			 try{
				 conDataBase11->Open();
				 myReader11=cmdDataBase11->ExecuteReader();


				 while(myReader11->Read()){

				 }
				 asdf=0;
				 if(int::Parse(myReader11->GetString("tablesavailable"))==0)
				 {
					 MessageBox::Show("Tables are all occupied, you can't select dinein!");
					 asdf=1;
				 }

			 }catch(Exception^ex){

				 MessageBox::Show(ex->Message);
			 }
			if(timecheck==1 && asdf!=1)
			 {
				 tables=1;
				 Form12::Hide();
				 Form23^frm=gcnew Form23;													//shows another form on clicking the button;
				 frm->Show(this);
				  this->Show();
			 }
			else if(timecheck==0)
				MessageBox::Show("The Restaurant is closed now.\nYou cannot place orders now!");

		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int timecheck=timevalidity();
			 if(timecheck==1)
			 {
				 tables=2;
				 Form12::Hide();
				 Form23^frm=gcnew Form23;													//shows another form on clicking the button;
				 frm->Show(this);
				 this->Show();
			 }
			 else
				 MessageBox::Show("The Restaurant is closed now.\nYou cannot place orders now!");
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 
			 int timecheck=timevalidity();
			 if(timecheck==1)
			 {
				 tables=3;
				 Form12::Hide();
				 Form23^frm=gcnew Form23;													//shows another form on clicking the button;
				 frm->Show(this);
				 this->Show();
			 }
			 else
				 MessageBox::Show("The Restaurant is closed now.\nYou cannot place orders now!");

		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
			 int timecheck=timevalidity();
			 if(timecheck==1)
			 {
				 add_item=1;
				 Form12::Hide();
				 Form23^frm=gcnew Form23;													//shows another form on clicking the button;
				 frm->Show(this);
				 this->Show();
			 }
			 else
				 MessageBox::Show("The Restaurant is closed now.\nYou cannot place orders now!");
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Form12::Hide();
			 Form16^frm=gcnew Form16;													//shows another form on clicking the button;
			 frm->Show(this);
			  this->Show();
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Form12::Hide();
			 Form15^frm=gcnew Form15;													//shows another form on clicking the button;
			 frm->Show(this);
			  this->Show();
		 }
private: System::Void logOutToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
				this->Close();
		 }
private: System::Void quitToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, " You will have to login again.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(System::Windows::Forms::DialogResult::Yes == result)
				{
					Application::Exit();
				}
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			// Form12::Hide();
			 Form14^frm=gcnew Form14;													//shows another form on clicking the button;
			 frm->Show(this);
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form12_Shown(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void Form12_Activated(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void label1_MouseHover(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(log_out==1)
			 {
				 log_out=0;
				 this->Close();
			 }
		 }
private: System::Int32 timevalidity()
		 {
			mid=int::Parse(dateTimePicker1->Value.ToString("HHmm"));
			if(from>=to){
				if(mid>=from || mid<=to){
					return 1;
				}
				else
					return 0;
			}
			if(from<=to){
				if(mid>=from && mid<=to){
					return 1;
				}
				else
					return 0;
			}

		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void button11_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 //reinstall

			 System::Windows::Forms::DialogResult result = MessageBox::Show(this, " Application will close now,you can install it again by opening it again.\nAre you sure?(Click no if you don't want to continue)", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			 if(System::Windows::Forms::DialogResult::Yes == result)
			 {
				 String^ constring11=L"datasource=localhost;username=root;password=group2;database=restman";
				 MySqlConnection^ conDataBase11=gcnew MySqlConnection(constring11);
				 MySqlCommand^ cmdDataBase11=gcnew MySqlCommand("UPDATE phasedecide SET installation='"+0+"',customernoday='"+1+"';DROP TABLE `restname`,`users`,`login`,`billrecords`,`customercard`,`transactionid`;",conDataBase11);
				 MySqlDataReader^ myReader11;
				 //int asdf;
				 try{
					 conDataBase11->Open();
					 myReader11=cmdDataBase11->ExecuteReader();


					 while(myReader11->Read()){}

				 }catch(Exception^ex){

					 MessageBox::Show(ex->Message);
				 }

				 Application::Exit();
			 }
		 }
};
}
