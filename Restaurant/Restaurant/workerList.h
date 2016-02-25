#pragma once
#include "AddEmployee.h"
#include "employeeEdit.h"
#include "about.h"
namespace Restaurant {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for workerList
	/// </summary>
	public ref class workerList : public System::Windows::Forms::Form
	{
	public:
		workerList(void)
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
		~workerList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 






	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  guideToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(7, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(626, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add Employee";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &workerList::button1_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(182, 291);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 7;
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(182, 320);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 8;
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(182, 352);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 9;
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(182, 382);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 10;
			this->label8->Visible = false;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 287);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Name";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 316);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Post";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(26, 348);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Address";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(26, 378);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Salary";
			this->label4->Visible = false;
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Location = System::Drawing::Point(138, 440);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 35);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Edit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &workerList::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->Location = System::Drawing::Point(380, 440);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(122, 35);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &workerList::button4_Click);
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->columnHeader1, this->columnHeader2});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(12, 44);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(615, 146);
			this->listView1->TabIndex = 13;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &workerList::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Name";
			this->columnHeader1->Width = 317;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Post";
			this->columnHeader2->Width = 208;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(26, 407);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(115, 20);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Phone Number";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(182, 412);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 15;
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(303, 291);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(85, 20);
			this->label11->TabIndex = 16;
			this->label11->Text = L"UserName";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(416, 293);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 13);
			this->label12->TabIndex = 17;
			this->label12->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->homeToolStripMenuItem, 
				this->helpToolStripMenuItem, this->quitToolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(2, 3);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(238, 24);
			this->menuStrip1->TabIndex = 36;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->homeToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->homeToolStripMenuItem->Text = L"&Home";
			this->homeToolStripMenuItem->Click += gcnew System::EventHandler(this, &workerList::homeToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->aboutToolStripMenuItem, 
				this->guideToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &workerList::aboutToolStripMenuItem_Click);
			// 
			// guideToolStripMenuItem
			// 
			this->guideToolStripMenuItem->Name = L"guideToolStripMenuItem";
			this->guideToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->guideToolStripMenuItem->Text = L"Guide";
			// 
			// quitToolStripMenuItem1
			// 
			this->quitToolStripMenuItem1->Name = L"quitToolStripMenuItem1";
			this->quitToolStripMenuItem1->Size = System::Drawing::Size(42, 20);
			this->quitToolStripMenuItem1->Text = L"Quit";
			this->quitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &workerList::quitToolStripMenuItem1_Click);
			// 
			// workerList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(642, 487);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"workerList";
			this->Text = L"workerList";
			this->Load += gcnew System::EventHandler(this, &workerList::workerList_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void database(){
				 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
				 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT `employee`.`EmployeeName`,`employee`.`EmployeePost` FROM `restaurant`.`employee`;",conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
					 listView1->Items->Clear();
					 while(myReader->Read()){
						 ListViewItem^ objName = listView1->Items->Add(myReader->GetString(0));
						 objName->SubItems->Add(myReader->GetString(1));
					 }
					
				 }

				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();

			 }
	private: System::Void workerList_Load(System::Object^  sender, System::EventArgs^  e) {
				database();
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				

			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 ListViewItem^ objName = listView1->Items[listView1->FocusedItem->Index];
			 String^ itName = objName->SubItems[0]->Text;
			 if(MessageBox::Show("Are you sure you wan't to remove " + itName + " from the database?","Delete Entry",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes){
			 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
				 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("DELETE FROM `restaurant`.`employee` WHERE `employee`.`UserName` = '" + label12->Text + "';",conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();

					
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }

				database();
				label1->Visible = false;
				label2->Visible = false;
				label3->Visible = false;
				label4->Visible = false;
				label5->Visible = false;
				label6->Visible = false;
				label7->Visible = false;
				label8->Visible = false;
				label9->Visible = false;
				label10->Visible = false;
				label11->Visible = false;
				label12->Visible = false;
				button3->Visible = false;
				button4->Visible = false;

		 }
			 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 employeeEdit^ form = gcnew employeeEdit(label12->Text);
			 form->Show();
			 this->Hide();
			 label1->Visible = false;
			 label2->Visible = false;
			 label3->Visible = false;
			 label4->Visible = false;
			 label5->Visible = false;
			 label6->Visible = false;
			 label7->Visible = false;
			 label8->Visible = false;
			 label9->Visible = false;
			 label10->Visible = false;
			 label11->Visible = false;
			 label12->Visible = false;
			 button3->Visible = false;
			 button4->Visible = false;

							 		 
		
}
private: System::Void homeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			     AddEmployee^ form = gcnew AddEmployee();
				  form->Show();
				  this->Hide();
				
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 label1->Visible = true;
			 label2->Visible = true;
			 label3->Visible = true;
			 label4->Visible = true;
			 label5->Visible = true;
			 label6->Visible = true;
			 label7->Visible = true;
			 label8->Visible = true;
			 label9->Visible = true;
			label10->Visible = true;
			 button3->Visible = true;
			 button4->Visible = true;
			 label11->Visible = true;
			 label12->Visible = true;
			 ListViewItem^ objName = listView1->Items[listView1->FocusedItem->Index];
			 String^ itName = objName->SubItems[0]->Text;
			 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
			 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
			 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT * FROM `restaurant`.`employee` WHERE `employee`.`EmployeeName` = '" + itName + "';",conDatabase);
			 MySqlDataReader^ myReader;
			 button4->Visible = true;
			 try{
			 conDatabase->Open();
			 myReader = cmdDatabase->ExecuteReader();

			 while(myReader->Read()){
				 label5->Text = (myReader->GetString(1));
				 label6->Text = (myReader->GetString(2));
				 label7->Text = (myReader->GetString(3));
				 label8->Text = (myReader->GetString(4));
				 label10->Text = myReader->GetString(5);
				 label12->Text = myReader->GetString(6);
			 }
			 }
			 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }		
			 conDatabase->Close();
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 about^ form = gcnew about();
			 form->Show();

		 }
private: System::Void quitToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure you want to quit?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			 if(System::Windows::Forms::DialogResult::Yes == result){
				 Application::Exit();
			 }
		 }
};
}
