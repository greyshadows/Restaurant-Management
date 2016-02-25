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
#include "Form4.h"
//#include "Form1.h"
//#include "Form3.h"

namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
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
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	protected: 
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Button^  button4;



	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;























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
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 437);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(381, 23);
			this->progressBar1->TabIndex = 39;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Form3::progressBar1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(635, 431);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Quit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form3::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(543, 431);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Next>";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(451, 431);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"<Previous";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(251, 31);
			this->label2->TabIndex = 41;
			this->label2->Text = L"Cuisines available";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"Select All", L"Punjabi", L"Bengali", L"Maharashtrian", 
				L"South Indian", L"Italian", L"Chinese", L"Deselect All"});
			this->checkedListBox1->Location = System::Drawing::Point(12, 91);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(201, 202);
			this->checkedListBox1->TabIndex = 42;
			this->checkedListBox1->ThreeDCheckBoxes = true;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form3::checkedListBox1_SelectedIndexChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 324);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Add More";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form3::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) {this->Column1});
			this->dataGridView1->Location = System::Drawing::Point(297, 91);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(343, 202);
			this->dataGridView1->TabIndex = 47;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form3::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Cuisine to be added";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 300;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 495);
			this->ControlBox = false;
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"Form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Restaurant Management System - Installation";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }
private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e)
		 {
			  this->progressBar1->Value=20;
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(checkedListBox1->CheckedItems->Count != 0)
			 {
				String^ s = "Select All";
				if(s==checkedListBox1->CheckedItems[0]->ToString())
				{
					for(int x=1;x<=checkedListBox1->Items->Count -2;x++)
					{
						//MessageBox::Show(s);
						checkedListBox1->SetItemChecked(x,true);
						//break;
					}
				}
				else
				{
					for(int y=0;y<checkedListBox1->CheckedItems->Count ;y++)
					{
							if(checkedListBox1->CheckedItems[y]->ToString()=="Deselect All")
							{
								for(int z=1;z<=checkedListBox1->Items->Count -2;z++)
								{
					
									checkedListBox1->SetItemChecked(z,false);
						
								}
							}
					}
				}
				
			 }
	

		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) \
		 {
			dataGridView1->Visible="True";
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		 String^ constring=L"datasource=localhost;username=root;password=group2";
		 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);

		 if(checkedListBox1->CheckedItems->Count >= 0)
		 {
			 String^ s="";
			 for(int x=0;x< checkedListBox1->CheckedItems->Count ;x++)
			 {

				 if("Select All" != checkedListBox1->CheckedItems[x]->ToString() && "Deselect All" != checkedListBox1->CheckedItems[x]->ToString())
				 {
					 s = s + checkedListBox1->CheckedItems[x]->ToString() + ";" ;
				 }
			 }
			 int x1=0;
			 while(x1<dataGridView1->Rows->Count)
			 {
				 s=s+(System::String^)this->dataGridView1->Rows[x1]->Cells[0]->Value+";";
				 x1++;
			 }

			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update restman.restname Set cuisines='"+s+"';",conDataBase);
			 MySqlDataReader^ myReader;
			 try
			 {
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();

				 while(myReader->Read()){}

			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }

		 }

		 Form3::Hide();
		 Form4^frm=gcnew Form4;													//shows another form on clicking the button;
		 frm->Show(this);
		 //this->Show();
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
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			// this->Close();
		 }
};
}
