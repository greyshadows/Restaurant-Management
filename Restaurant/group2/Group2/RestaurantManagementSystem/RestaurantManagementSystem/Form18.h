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
#include "Form14.h"
#include "Form19.h"
#include "Form20.h"
#include "Form21.h"
#include "Form22.h"
#include "Form24.h"
#include "form_header.h"
namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form18
	/// </summary>
	public ref class Form18 : public System::Windows::Forms::Form
	{
	public:
		Form18(void)
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
		~Form18()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton10;
	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logOutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  instructionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^  radioButton11;


















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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->instructionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(276, 31);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Super User Settings";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton11);
			this->groupBox1->Controls->Add(this->radioButton10);
			this->groupBox1->Controls->Add(this->radioButton9);
			this->groupBox1->Controls->Add(this->radioButton8);
			this->groupBox1->Controls->Add(this->radioButton7);
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(40, 58);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(366, 382);
			this->groupBox1->TabIndex = 28;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form18::groupBox1_Enter);
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Checked = true;
			this->radioButton10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton10->Location = System::Drawing::Point(26, 307);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(132, 24);
			this->radioButton10->TabIndex = 37;
			this->radioButton10->Text = L"Billing Records";
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &Form18::radioButton10_CheckedChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton9->Location = System::Drawing::Point(26, 275);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(160, 24);
			this->radioButton9->TabIndex = 36;
			this->radioButton9->Text = L"Customer Records";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &Form18::radioButton9_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton8->Location = System::Drawing::Point(26, 243);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(265, 24);
			this->radioButton8->TabIndex = 35;
			this->radioButton8->Text = L"Edit Special Offers and Discounts";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &Form18::radioButton8_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton7->Location = System::Drawing::Point(26, 211);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(246, 24);
			this->radioButton7->TabIndex = 34;
			this->radioButton7->Text = L"Edit Menu (Items/Prices/Taxes)";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Form18::radioButton7_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton6->Location = System::Drawing::Point(26, 179);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(160, 24);
			this->radioButton6->TabIndex = 33;
			this->radioButton6->Text = L"Restaurant Details\r\n";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Form18::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton5->Location = System::Drawing::Point(26, 147);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(181, 24);
			this->radioButton5->TabIndex = 32;
			this->radioButton5->Text = L"Add/Delete Employee";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form18::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton4->Location = System::Drawing::Point(26, 115);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(161, 24);
			this->radioButton4->TabIndex = 31;
			this->radioButton4->Text = L"Employee Records";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form18::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(26, 83);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(154, 24);
			this->radioButton3->TabIndex = 30;
			this->radioButton3->Text = L"Cuisines Available";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form18::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(26, 51);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(161, 24);
			this->radioButton2->TabIndex = 29;
			this->radioButton2->Text = L"Super User Details";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form18::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(26, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(213, 24);
			this->radioButton1->TabIndex = 28;
			this->radioButton1->Text = L"Change Restaurant Name\r\n";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form18::radioButton1_CheckedChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button4->Location = System::Drawing::Point(618, 428);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 38);
			this->button4->TabIndex = 38;
			this->button4->Text = L"Quit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form18::button4_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(51, 446);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 38);
			this->button1->TabIndex = 39;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form18::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->homeToolStripMenuItem, 
				this->optionsToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(718, 24);
			this->menuStrip1->TabIndex = 40;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->homeToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->homeToolStripMenuItem->Text = L"&Home";
			this->homeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form18::homeToolStripMenuItem_Click);
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
			this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form18::logOutToolStripMenuItem_Click);
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->quitToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->quitToolStripMenuItem->Text = L"&Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form18::quitToolStripMenuItem_Click);
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
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->aboutToolStripMenuItem->Text = L"&About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form18::aboutToolStripMenuItem_Click);
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton11->Location = System::Drawing::Point(26, 337);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(124, 24);
			this->radioButton11->TabIndex = 38;
			this->radioButton11->Text = L"Review Taxes";
			this->radioButton11->UseVisualStyleBackColor = true;
			this->radioButton11->CheckedChanged += gcnew System::EventHandler(this, &Form18::radioButton11_CheckedChanged);
			// 
			// Form18
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 487);
			this->ControlBox = false;
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form18";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Restaurant Management System";
			this->Load += gcnew System::EventHandler(this, &Form18::Form18_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int radio;
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void homeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
					System::Windows::Forms::DialogResult result = MessageBox::Show(this, " The data filled in this form will be lost.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if(System::Windows::Forms::DialogResult::Yes == result)
					{
						this->Close();
					}
			 }
private: System::Void logOutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
					System::Windows::Forms::DialogResult result = MessageBox::Show(this, " The data filled in this form will be lost.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if(System::Windows::Forms::DialogResult::Yes == result)
					{
						log_out=1;
						this->Close();
					}
		 }
private: System::Void quitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
					System::Windows::Forms::DialogResult result = MessageBox::Show(this, " The data filled in this form will be lost.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if(System::Windows::Forms::DialogResult::Yes == result)
					{
						Application::Exit();
					}
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
					Form14^frm2=gcnew Form14;													//shows another form on clicking the button;
					frm2->Show(this);
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
					System::Windows::Forms::DialogResult result = MessageBox::Show(this, " The data filled in this form will be lost.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if(System::Windows::Forms::DialogResult::Yes == result)
					{
						Application::Exit();
					}
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
					if(radioButton1->Checked==true)
					{
						radio=1;
					}
		 }
private: System::Void Form18_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
					if(radioButton2->Checked==true)
					{
						radio=2;
					}
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
					if(radioButton3->Checked==true)
					{
						radio=3;
					}
		 }
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
					if(radioButton4->Checked==true)
					{
						radio=4;
					}
		 }
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
					if(radioButton5->Checked==true)
					{
						radio=5;
					}
		 }
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
					if(radioButton6->Checked==true)
					{
						radio=6;
					}
		 }
private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
					if(radioButton7->Checked==true)
					{
						radio=7;
					}
		 }
private: System::Void radioButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
					if(radioButton8->Checked==true)
					{
						radio=8;
					}
		 }
private: System::Void radioButton9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
					if(radioButton9->Checked==true)
					{
						radio=9;
					}
		 }
private: System::Void radioButton10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
					if(radioButton10->Checked==true)
					{
						radio=10;
					}
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
					if(radio==1)
					{
						
						Form19^frm2=gcnew Form19;													//shows another form on clicking the button;
						frm2->Show(this);
					}
					if(radio==2)
					{
						Form18::Hide();
						Form24^frm2=gcnew Form24;													//shows another form on clicking the button;
						frm2->Show(this);
					}
					if(radio==3)
					{
					}
					if(radio==4)
					{
						Form18::Hide();
						Form20^frm2=gcnew Form20;													//shows another form on clicking the button;
						frm2->Show(this);
					}
					if(radio==5)
					{
					}
					if(radio==6)
					{
					}
					if(radio==7)
					{
					}
					if(radio==8)
					{
					}
					if(radio==9)
					{
						Form18::Hide();
						Form21^frm2=gcnew Form21;													//shows another form on clicking the button;
						frm2->Show(this);
					}
					if(radio==10 || radio==0)
					{
						Form18::Hide();
						Form22^frm2=gcnew Form22;													//shows another form on clicking the button;
						frm2->Show(this);
					}
		 }
private: System::Void radioButton11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
