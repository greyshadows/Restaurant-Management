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
	/// Summary for Form23
	/// </summary>
	public ref class Form23 : public System::Windows::Forms::Form
	{
	public:
		int num;
		String^ previousorder;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

	public: 
		String^ s;
		Form23(void)
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
		~Form23()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 

	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;













	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;





	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logOutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  instructionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  Column4;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->instructionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(271, 104);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(218, 29);
			this->textBox1->TabIndex = 35;
			this->textBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(231, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 24);
			this->label5->TabIndex = 32;
			this->label5->Text = L":";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 24);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Your Transaction No. ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 31);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Place Order";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button4->Location = System::Drawing::Point(620, 445);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 38);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Quit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form23::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 24);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Cuisines Available";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(231, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 24);
			this->label4->TabIndex = 37;
			this->label4->Text = L":";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"General"});
			this->comboBox1->Location = System::Drawing::Point(271, 160);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(218, 32);
			this->comboBox1->TabIndex = 38;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form23::comboBox1_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->Column1, 
				this->Column3, this->Column2, this->Column5, this->Column4});
			this->dataGridView1->Location = System::Drawing::Point(37, 216);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(643, 223);
			this->dataGridView1->TabIndex = 49;
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
			this->Column4->HeaderText = L"Add";
			this->Column4->Name = L"Column4";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(534, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 40);
			this->button1->TabIndex = 50;
			this->button1->Text = L"Select Another Cuisine";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form23::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->button2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button2->Location = System::Drawing::Point(285, 446);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 38);
			this->button2->TabIndex = 51;
			this->button2->Text = L"Submit Order";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form23::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->homeToolStripMenuItem, 
				this->optionsToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(718, 24);
			this->menuStrip1->TabIndex = 52;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->homeToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->homeToolStripMenuItem->Text = L"&Home";
			this->homeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form23::homeToolStripMenuItem_Click);
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
			this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form23::logOutToolStripMenuItem_Click);
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->quitToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->quitToolStripMenuItem->Text = L"&Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form23::quitToolStripMenuItem_Click);
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
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form23::aboutToolStripMenuItem_Click);
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(696, 47);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(10, 20);
			this->dateTimePicker->TabIndex = 53;
			this->dateTimePicker->Visible = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(534, 101);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 40);
			this->button3->TabIndex = 54;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form23::button3_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->button5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button5->Location = System::Drawing::Point(305, 446);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 38);
			this->button5->TabIndex = 55;
			this->button5->Text = L"Add Items";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form23::button5_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Indigo;
			this->label14->Location = System::Drawing::Point(395, 47);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(307, 26);
			this->label14->TabIndex = 95;
			this->label14->Text = L"You can set the quantity by clicking on it and typing \r\nbut the value entered mus" 
				L"t be an integer.";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(696, 85);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(10, 20);
			this->dateTimePicker1->TabIndex = 96;
			this->dateTimePicker1->Visible = false;
			// 
			// Form23
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 495);
			this->ControlBox = false;
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->MaximizeBox = false;
			this->Name = L"Form23";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Restaurant Management System";
			this->Load += gcnew System::EventHandler(this, &Form23::Form23_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 int maxsid;
				 System::Windows::Forms::DialogResult result = MessageBox::Show(this, " The data filled in this form will be lost.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(System::Windows::Forms::DialogResult::Yes == result)
				{
					
					String^ constring=L"datasource=localhost;username=root;password=group2";
					MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);

					MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("SELECT sid FROM restman.login;",conDataBase);//UPDATE restman.login SET logouttime='"+this->dateTimePicker1->Value+"' WHERE sid='"+useridlogin+"'

					MySqlDataReader^ myReader;
					try
					{
						conDataBase->Open();
						myReader=cmdDataBase1->ExecuteReader();
						while(myReader->Read() )
						{

						}

						maxsid=int::Parse(myReader->GetString("sid"));


					}
					catch(Exception^ex)
					{
						MessageBox::Show(ex->Message);
					}	



					String^ constring1221=L"datasource=localhost;username=root;password=group2";
					MySqlConnection^ conDataBase1221=gcnew MySqlConnection(constring1221);

					MySqlCommand^ cmdDataBase11221=gcnew MySqlCommand("UPDATE restman.login SET logouttime='"+this->dateTimePicker1->Value+"' WHERE sid='"+maxsid+"';",conDataBase1221);//

					MySqlDataReader^ myReader21;
					try
					{
						conDataBase1221->Open();
						myReader21=cmdDataBase11221->ExecuteReader();
						while(myReader21->Read())
						{

						}



					}
					catch(Exception^ex)
					{
						MessageBox::Show(ex->Message);
					}	
					Application::Exit();
				}
			 }
private: System::Void Form23_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 num=0;
			 if(add_item==0)
			 {
				 
				 if(tables==1)
				 {
					 String^ constring=L"datasource=localhost;username=root;password=group2";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("SELECT tablesavailable FROM restman.phasedecide;",conDataBase);

					 MySqlDataReader^ myReader;
					 try
					 {
						 conDataBase->Open();
						 myReader=cmdDataBase1->ExecuteReader();

						 String^ tempo;
						 while(myReader->Read())
						 {
							 tempo=myReader->GetString("tablesavailable");
							 if(tempo=="0")
							 {
								 tables=0;
								 System::Windows::Forms::DialogResult result = MessageBox::Show(this, " The data filled in this form will be lost.\nAre you sure?", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Question);
								 this->Close();
							 }
						 }
						

					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }	
				 }
				 textBox1->ReadOnly=true;
				 String^ datevalue = this->dateTimePicker->Value.ToString("yyMMdd");
				 textBox1->Text=datevalue + billno.ToString();
			 }
			 if(add_item==1)
			 {
				 add_item=0;
				 label1->Text="Add Items";
				 textBox1->ReadOnly=false;
				 button3->Visible=true;
				 button2->Visible=false;
				 button2->Enabled=false;
				 button1->Visible=false;
				 label3->Visible=false;
				 label4->Visible=false;
				 dataGridView1->Visible=false;
				 comboBox1->Visible=false;
				 button1->Enabled=false;		
				 comboBox1->Enabled=false;
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
private: System::Void homeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, " The data filled in this form will be lost.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(System::Windows::Forms::DialogResult::Yes == result)
				{
					tables=0;
					this->Close();
				}
		 }
private: System::Void logOutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, " The data filled in this form will be lost.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(System::Windows::Forms::DialogResult::Yes == result)
				{
					tables=0;
					log_out=1;
					this->Close();
				}
		 }
private: System::Void quitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, " The data filled in this form will be lost.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(System::Windows::Forms::DialogResult::Yes == result)
				{
					tables=0;
					Application::Exit();
				}
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //Form23::Hide();
			 Form14^frm=gcnew Form14;													//shows another form on clicking the button;
			 frm->Show(this);
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 
			 String^ comboval=comboBox1->Text;
			 comboBox1->Enabled = false;
			

			 String^ constring=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("SELECT * FROM restman.`"+comboval+"`;",conDataBase);

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
					 dataGridView1->Rows[x2]->Cells[1]->Value = type;
					 dataGridView1->Rows[x2]->Cells[2]->Value = price;
					 dataGridView1->Rows[x2]->Cells[3]->Value = "0";
					 x2++;
				 }
				  num=x2;
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
			 conDataBase->Close();
			}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(dataGridView1->RowCount!=0)
			 {
				 System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure you want to add these items to the order?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				 if(System::Windows::Forms::DialogResult::Yes == result)
				 {
					 comboBox1->Enabled=true;
					 int x=0;
					 while(x!=num)
					 {
						 if((dataGridView1->Rows[x]->Cells[4]->Value))
						 {
							 s=s+dataGridView1->Rows[x]->Cells[0]->Value+";"+dataGridView1->Rows[x]->Cells[1]->Value+";"+dataGridView1->Rows[x]->Cells[2]->Value+";"+dataGridView1->Rows[x]->Cells[3]->Value+";";
							 previousorder=previousorder+dataGridView1->Rows[x]->Cells[0]->Value+";"+dataGridView1->Rows[x]->Cells[1]->Value+";"+dataGridView1->Rows[x]->Cells[2]->Value+";"+dataGridView1->Rows[x]->Cells[3]->Value+";";
						 }
						 x++;
					 }
					 dataGridView1->Rows->Clear();
				 }
			 
			 }

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure you want to submit this order?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			 if(System::Windows::Forms::DialogResult::Yes == result)
			 {
				 if(dataGridView1->RowCount > 0)
				 {
					int x=0;
					 while(x!=num)
					 {
						 if((dataGridView1->Rows[x]->Cells[4]->Value))
						 {
							 s=s+dataGridView1->Rows[x]->Cells[0]->Value+";"+dataGridView1->Rows[x]->Cells[1]->Value+";"+dataGridView1->Rows[x]->Cells[2]->Value+";"+dataGridView1->Rows[x]->Cells[3]->Value+";";
						 }
						 x++;
					 }
				 }
				 String^ username;
				 String^ constring345=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase345=gcnew MySqlConnection(constring345);

				 MySqlCommand^ cmdDataBase1345=gcnew MySqlCommand("SELECT * FROM restman.login;",conDataBase345);//UPDATE restman.login SET logouttime='"+this->dateTimePicker1->Value+"' WHERE sid='"+useridlogin+"'

				 MySqlDataReader^ myReader345;
				 try
				 {
					 conDataBase345->Open();
					 myReader345=cmdDataBase1345->ExecuteReader();
					 while(myReader345->Read() )
					 {

					 }

					 username=myReader345->GetString("username");


				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }	



				 String^ constring34=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase321=gcnew MySqlConnection(constring34);
				 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("INSERT INTO restman.billrecords (transaction,fooditems,typeoforder,submittime,username) VALUES('"+this->textBox1->Text+"','"+s+"','"+tables+"','"+this->dateTimePicker->Value.ToString("HHmm")+"','"+username+"') ;",conDataBase321);

				 MySqlDataReader^ myReader2;
				 try
				 {
					 conDataBase321->Open();
					 myReader2=cmdDataBase1->ExecuteReader();

					 while(myReader2->Read())
					 {

					 }

				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				// conDataBase321->Close();
				 billno++;

				 String^ constring1=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase123=gcnew MySqlConnection(constring1);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("UPDATE restman.phasedecide SET customernoday='"+billno+"';",conDataBase123);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase123->Open();
					 myReader=cmdDataBase->ExecuteReader();

					 while(myReader->Read())
					 {
						 billno=int::Parse(myReader->GetString("customernoday"));
					 }

				 }catch(Exception^ex){

					 MessageBox::Show(ex->Message);
				 }
				 if(tables==1)
				 {
					 tables=0;
					 String^ constring=L"datasource=localhost;username=root;password=group2";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("UPDATE restman.phasedecide SET tablesavailable=tablesavailable - 1;",conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader=cmdDataBase->ExecuteReader();
						 while(myReader->Read()){}

					 }catch(Exception^ex){

						 MessageBox::Show(ex->Message);
					 }

				 }
				 tables=0;
				 this->Close();
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
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
					 textBox1->ReadOnly=true;
					 button3->Visible=false;
					// button2->Visible=true;
					 button1->Visible=true;
					 label3->Visible=true;
					 label4->Visible=true;
					 dataGridView1->Visible=true;
					 comboBox1->Visible=true;
					 button5->Visible=true;
					 button3->Visible=false;
					 // button2->Visible=true;
					 button1->Enabled=true;
					 label3->Enabled=true;
					 label4->Enabled=true;
					 dataGridView1->Enabled=true;
					 comboBox1->Enabled=true;
					 button5->Enabled=true;

					 previousorder=myReader->GetString("fooditems");
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
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure you want to submit this order?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			 if(System::Windows::Forms::DialogResult::Yes == result)
			 {
				 if(dataGridView1->RowCount > 0)
				 {
					 int x=0;
					 while(x!=num)
					 {
						 if((dataGridView1->Rows[x]->Cells[4]->Value))
						 {
							 previousorder=previousorder+dataGridView1->Rows[x]->Cells[0]->Value+";"+dataGridView1->Rows[x]->Cells[1]->Value+";"+dataGridView1->Rows[x]->Cells[2]->Value+";"+dataGridView1->Rows[x]->Cells[3]->Value+";";
						 }
						 x++;
					 }
				 }
				 String^ constring34=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase321=gcnew MySqlConnection(constring34);
				 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("CREATE TABLE IF NOT EXISTS restman.`billrecords` (transaction int(15) PRIMARY KEY,typeoforder int(1) NOT NULL,fooditems varchar(10000),amount int(10),username varchar(255),submittime varchar(100),bilgen varchar(3));"
										 "UPDATE restman.billrecords SET fooditems='"+previousorder+"' WHERE transaction='"+this->textBox1->Text+"';",conDataBase321);

				 MySqlDataReader^ myReader2;
				 try
				 {
					 conDataBase321->Open();
					 myReader2=cmdDataBase1->ExecuteReader();

					 while(myReader2->Read())
					 {

					 }

				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				 conDataBase321->Close();
				 
				 this->Close();
			 }
		 }
};
}
