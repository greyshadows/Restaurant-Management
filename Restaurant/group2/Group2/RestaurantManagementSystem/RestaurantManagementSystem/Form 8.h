#pragma once
#include "stdafx.h"
#include "Form26.h"
#include "Form 8.h"
namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form8
	/// </summary>
	public ref class Form8 : public System::Windows::Forms::Form
	{
	public:
		Form8(void)
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
		~Form8()
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



	private: System::Windows::Forms::Label^  label1;









	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;






	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  Column4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button4;










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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(18, 443);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(378, 23);
			this->progressBar1->TabIndex = 15;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(624, 436);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Quit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form8::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(532, 436);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Next>";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form8::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(440, 436);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 8;
			this->button1->Text = L"<Previous";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form8::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 31);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Menu Details";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(44, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 22);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Cuisine";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(150, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 22);
			this->label3->TabIndex = 24;
			this->label3->Text = L":";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Column1, 
				this->Column2, this->Column3, this->Column4});
			this->dataGridView1->Location = System::Drawing::Point(48, 114);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(624, 302);
			this->dataGridView1->TabIndex = 49;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Food Item";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Price (in Rs.)";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Type";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Delete";
			this->Column4->Name = L"Column4";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"General"});
			this->comboBox1->Location = System::Drawing::Point(188, 71);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(170, 28);
			this->comboBox1->Sorted = true;
			this->comboBox1->TabIndex = 50;
			this->comboBox1->Text = L"General";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form8::comboBox1_SelectedIndexChanged_1);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(543, 54);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 45);
			this->button4->TabIndex = 51;
			this->button4->Text = L"Manage Another Cuisine";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form8::button4_Click);
			// 
			// Form8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(711, 495);
			this->ControlBox = false;
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"Form8";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Restaurant Management System - Installation";
			this->Load += gcnew System::EventHandler(this, &Form8::Form8_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form8_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 this->progressBar1->Value=70;
				 //button2->Visible=false;
				 System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Do you want to manage your menuitems?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				 if(System::Windows::Forms::DialogResult::No == result)
				 {
					dataGridView1->Visible=false;
					button4->Visible=false;
				 }
				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("SELECT cuisines FROM restman.restname;",conDataBase);

				 MySqlDataReader^ myReader;
				 try
				 {
					 conDataBase->Open();
					 myReader=cmdDataBase1->ExecuteReader();

					 String^ cuisineString;
					 while(myReader->Read())
					 {
						 cuisineString=myReader->GetString("cuisines");
					 }
					 String^ delimStr = ";";
					 array<Char>^ delimiter = delimStr->ToCharArray( );
					 array<String^>^ words;
					 words = cuisineString->Split( delimiter );

					 for (int word=0; word<words->Length; word++)
					 {
						 if(words[word]!="")
							 comboBox1->Items->Add(words[word]);
					 }

				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }	

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
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 System::Windows::Forms::DialogResult result = MessageBox::Show(this, "By clicking yes now whatever changes are not saved will be lost,so if any unsaved data click no and click Manage other cuisines.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			 if(System::Windows::Forms::DialogResult::Yes == result)
			 {
				 Form8::Hide();
				 Form26^frm=gcnew Form26;													//shows another form on clicking the button;
				 frm->Show(this);

			 }
					 
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		//	 this->Close();
		 }
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 String^ comboval=comboBox1->Text;
			 comboBox1->Enabled = false;
			 dataGridView1->ReadOnly=false;

			 String^ constring=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("CREATE TABLE IF NOT EXISTS restman.`"+comboval+"` (name varchar(200) NOT NULL PRIMARY KEY,price int(10) NOT NULL,type varchar(200));SELECT * FROM restman.`"+comboval+"`;",conDataBase);

			 MySqlDataReader^ myReader;
			 try
			 {
				 conDataBase->Open();
				 myReader=cmdDataBase1->ExecuteReader();
				 String^ name;
				 String^ price;
				 String^ type;
				 int x2=0;
				 while(myReader->Read())
				 {
					 price=myReader->GetString("price");
					 name=myReader->GetString("name");
					 type=myReader->GetString("type");
					 dataGridView1->Rows->Add();
					 dataGridView1->Rows[x2]->Cells[0]->Value = name;
					 dataGridView1->Rows[x2]->Cells[1]->Value = price;
					 dataGridView1->Rows[x2]->Cells[2]->Value = type;
					 x2++;
				 }
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
			 conDataBase->Close();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Do you want to further manage your menu items(after clicking yes you won't be able to edit them anymore here)?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			 if(System::Windows::Forms::DialogResult::No == result)
			 {
				 dataGridView1->Visible=false;
				 comboBox1->Enabled=false;
				 button4->Visible=false;
				 button4->Enabled=false;
			 }
			
			 int y=0,temp,flag=0;
			 String^ s1;
			 //String^ s2;
			 
			 for(y=0;y<dataGridView1->RowCount-1;y++)
			 {
				 if(dataGridView1->Rows[y]->Cells[1]->Value!=NULL)
					 s1=dataGridView1->Rows[y]->Cells[1]->Value->ToString();
				 //if(dataGridView1->Rows[y]->Cells[0]->Value!=NULL)
				 // s2=dataGridView1->Rows[y]->Cells[0]->Value->ToString();
				
				if(!(Int32::TryParse(s1,temp)))
				{
					 MessageBox::Show("The price of an item can only be an integer!");
					 dataGridView1->Rows[y]->Cells[1]->Value="";
					 flag=2;
					 break;
				}
			 }
			 
			 if(flag==0)
			 {
				comboBox1->Enabled=true;
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure you want to update these items?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(System::Windows::Forms::DialogResult::Yes == result)
				{
					String^ constring1=L"datasource=localhost;username=root;password=group2";
					MySqlConnection^ conDataBase1=gcnew MySqlConnection(constring1);
					MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("TRUNCATE restman.`"+comboBox1->Text+"`;",conDataBase1);
					MySqlDataReader^ myReader1;
					try
					{
						conDataBase1->Open();
						myReader1=cmdDataBase2->ExecuteReader();

						while(myReader1->Read())
						{

						}
					}
					catch(Exception^ex)
					{
						MessageBox::Show(ex->Message);
					}
					conDataBase1->Close();
					int x=0;
					while(x!=(dataGridView1->RowCount)-1)
					{
						if(!(dataGridView1->Rows[x]->Cells[3]->Value))
						{
							String^ constring=L"datasource=localhost;username=root;password=group2";
							MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
							MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("INSERT INTO restman.`"+comboBox1->Text+"` VALUES ('"+this->dataGridView1->Rows[x]->Cells[0]->Value+"','"+this->dataGridView1->Rows[x]->Cells[1]->Value+"','"+this->dataGridView1->Rows[x]->Cells[2]->Value+"') ;",conDataBase);

							MySqlDataReader^ myReader2;
							try
							{
								conDataBase->Open();
								myReader2=cmdDataBase1->ExecuteReader();

								while(myReader2->Read()){}
								
							}
							catch(Exception^ex)
							{
								MessageBox::Show(ex->Message);
							}
							conDataBase->Close();
						}
						x++;
					}
					
					
				 
				}
				dataGridView1->Rows->Clear();
			 }
		 }
};
}
