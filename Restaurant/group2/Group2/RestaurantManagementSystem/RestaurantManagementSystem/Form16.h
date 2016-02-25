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
#include "form_header.h"
#include "Form14.h"

namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form16
	/// </summary>
	public ref class Form16 : public System::Windows::Forms::Form
	{
	public:
		int cancel12;
		String^ finalstring;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  Column4;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	public: 
		String^ previousorder;
		Form16(void)
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
		~Form16()
		{
			if (components)
			{
				delete components;
			}
		}
















	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
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
	private: System::Windows::Forms::DataGridView^  dataGridView1;





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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 31);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Delete Items";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(221, 115);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(143, 26);
			this->textBox1->TabIndex = 17;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form16::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(51, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 20);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Transaction Number  :";
			this->label2->Click += gcnew System::EventHandler(this, &Form16::label2_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->button4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button4->Location = System::Drawing::Point(467, 430);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(131, 29);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Delete Items";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form16::button4_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(613, 430);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 29);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Quit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form16::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->homeToolStripMenuItem, 
				this->optionsToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(718, 24);
			this->menuStrip1->TabIndex = 24;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->homeToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->homeToolStripMenuItem->Text = L"&Home";
			this->homeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form16::homeToolStripMenuItem_Click);
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
			this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form16::logOutToolStripMenuItem_Click_1);
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->quitToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->quitToolStripMenuItem->Text = L"&Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form16::quitToolStripMenuItem_Click_1);
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
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form16::aboutToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->Column1, 
				this->Column3, this->Column2, this->Column5, this->Column4});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Location = System::Drawing::Point(45, 166);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(643, 234);
			this->dataGridView1->TabIndex = 50;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Food Item";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Type";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Price (in Rs.)";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Quantity";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 60;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Delete";
			this->Column4->Name = L"Column4";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button2->Location = System::Drawing::Point(397, 115);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 26);
			this->button2->TabIndex = 51;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form16::button2_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Indigo;
			this->label14->Location = System::Drawing::Point(433, 59);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(255, 26);
			this->label14->TabIndex = 94;
			this->label14->Text = L"You can also change the quantity from here\r\nbut it should be a valid integer.";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(708, 27);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(10, 20);
			this->dateTimePicker1->TabIndex = 95;
			this->dateTimePicker1->Visible = false;
			// 
			// Form16
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 487);
			this->ControlBox = false;
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->MaximizeBox = false;
			this->Name = L"Form16";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Restaurant Management System";
			this->Load += gcnew System::EventHandler(this, &Form16::Form16_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form16_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 button4->Visible=false;
				 button4->Enabled=false;
				 button1->Enabled=false;
				 button1->Visible=false;
				 dataGridView1->Visible=false;
				 dataGridView1->Enabled=false;
				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("SELECT cancellation FROM restman.restname;",conDataBase);

				 MySqlDataReader^ myReader;
				 try
				 {
					 conDataBase->Open();
					 myReader=cmdDataBase1->ExecuteReader();
					 while(myReader->Read())
					 {
						 cancel12=int::Parse(myReader->GetString("cancellation"));
					 }
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }	
				 conDataBase->Close();
			 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, " The data filled in this form will be lost.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(System::Windows::Forms::DialogResult::Yes == result)
				{
					Application::Exit();
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
					this->Close();
				}
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //Form16::Hide();
			 Form14^frm=gcnew Form14;													//shows another form on clicking the button;
			 frm->Show(this);
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
			 int i=2;
			 
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
					 int initial=int::Parse(myReader->GetString("submittime"));
					 initial=initial%100+(int)(initial/100)*60;
					 int final=int::Parse(this->dateTimePicker1->Value.ToString("HHmm"));
					 final=final%100+(int)(final/100)*60;

					 if(final>=initial)
					 {
						if((final-initial)>cancel12)
						{
							MessageBox::Show("You can't cancel the order now.Cancellation time crossed!!");
							i=1;
							this->Close();
						}
						else
							 i=0;
					 }
					 else
					 {
						 initial=(24*60)-initial;
						 final=initial+final;
						 if(final>cancel12)
						 {
							 MessageBox::Show("You can't cancel the order now.Cancellation time crossed!!");
							 i=1;
							 this->Close();
						 }
						 else 
						 {
							 i=0;
						 }

					 }

					 if(i==0)
					 {

						 previousorder=myReader->GetString("fooditems");
						 textBox1->ReadOnly=true;
						 button2->Enabled=false;
						 button2->Visible=false;
						 button4->Visible=true;
						 button4->Enabled=true;
						 button1->Enabled=true;
						 button1->Visible=true;
						 dataGridView1->Enabled=true;

						 //delimiter separated string parsing...
						 String^ delimStr = ";";
						 array<Char>^ delimiter = delimStr->ToCharArray( );
						 array<String^>^ words;
						 words = previousorder->Split( delimiter );

						 for (int word=0; (word+3)<words->Length; word++)
						 {
							 int intword=word/4;
							 dataGridView1->Rows->Add();
							 if(words[word]!="" && words[word+2]!="" && words[word+3]!="")
							 {
								 dataGridView1->Rows[intword]->Cells[0]->Value=words[word];
								 dataGridView1->Rows[intword]->Cells[1]->Value=words[word+1];
								 dataGridView1->Rows[intword]->Cells[2]->Value=words[word+2];
								 dataGridView1->Rows[intword]->Cells[3]->Value=words[word+3];
							 }
							  word=word+3;
						 }

						 dataGridView1->Visible=true;
					 }
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
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure you want to proceed?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			 if(System::Windows::Forms::DialogResult::Yes == result)
			 {
				 finalstring="";
				 int x=0;
				 while(x!=(dataGridView1->RowCount))
				 {
					 if(!(dataGridView1->Rows[x]->Cells[4]->Value))
					 {
						 finalstring=finalstring+dataGridView1->Rows[x]->Cells[0]->Value+";"+dataGridView1->Rows[x]->Cells[1]->Value+";"+dataGridView1->Rows[x]->Cells[2]->Value+";"+dataGridView1->Rows[x]->Cells[3]->Value+";";
					 }
					 x++;
				 }

				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("UPDATE restman.billrecords SET fooditems='"+finalstring+"' WHERE transaction='"+this->textBox1->Text+"' ;",conDataBase);

				 MySqlDataReader^ myReader;
				 try
				 {
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();

					 while(myReader->Read())
					 {

					 }
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				 this->Close();
			 }
		 }
};
}
