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
#include "form_header.h"
namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form22
	/// </summary>
	public ref class Form22 : public System::Windows::Forms::Form
	{
	public:
		Form22(void)
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
		~Form22()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 









	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::Label^  label1;



	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logOutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  instructionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;





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
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->instructionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Amount";
			this->columnHeader6->Width = 64;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 31);
			this->label1->TabIndex = 50;
			this->label1->Text = L"Billing Records";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Employee ";
			this->columnHeader3->Width = 105;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Transaction no.";
			this->columnHeader2->Width = 147;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Sr No.";
			this->columnHeader1->Width = 45;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6});
			this->listView1->Location = System::Drawing::Point(27, 107);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(584, 368);
			this->listView1->TabIndex = 53;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Customer Card Holder";
			this->columnHeader4->Width = 115;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Order type (D/T/H)";
			this->columnHeader5->Width = 104;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button4->Location = System::Drawing::Point(617, 437);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 38);
			this->button4->TabIndex = 52;
			this->button4->Text = L"Quit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form22::button4_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->homeToolStripMenuItem, 
				this->optionsToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(718, 24);
			this->menuStrip1->TabIndex = 55;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->homeToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->homeToolStripMenuItem->Text = L"&Home";
			this->homeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form22::homeToolStripMenuItem_Click);
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
			this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form22::logOutToolStripMenuItem_Click);
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->quitToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->quitToolStripMenuItem->Text = L"&Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form22::quitToolStripMenuItem_Click);
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
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form22::aboutToolStripMenuItem_Click);
			// 
			// Form22
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 487);
			this->ControlBox = false;
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button4);
			this->Name = L"Form22";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Restaurant Management System";
			this->Load += gcnew System::EventHandler(this, &Form22::Form22_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
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
private: System::Void Form22_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
