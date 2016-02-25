#pragma once
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
	/// Summary for CustomerList
	/// </summary>
	public ref class CustomerList : public System::Windows::Forms::Form
	{
	public:
		CustomerList(void)
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
		~CustomerList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected: 
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  guideToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ListView^  listView2;


	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::ColumnHeader^  columnHeader10;
	private: System::Windows::Forms::ColumnHeader^  columnHeader11;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(12, 37);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(836, 125);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &CustomerList::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Customer Id";
			this->columnHeader1->Width = 162;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Name";
			this->columnHeader2->Width = 161;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Last Visited";
			this->columnHeader3->Width = 177;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Frequency";
			this->columnHeader4->Width = 168;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Birthday";
			this->columnHeader5->Width = 147;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->homeToolStripMenuItem, 
				this->helpToolStripMenuItem, this->quitToolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(2, 3);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(146, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->homeToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->homeToolStripMenuItem->Text = L"&Home";
			this->homeToolStripMenuItem->Click += gcnew System::EventHandler(this, &CustomerList::homeToolStripMenuItem_Click);
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
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &CustomerList::aboutToolStripMenuItem_Click);
			// 
			// guideToolStripMenuItem
			// 
			this->guideToolStripMenuItem->Name = L"guideToolStripMenuItem";
			this->guideToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->guideToolStripMenuItem->Text = L"Guide";
			// 
			// quitToolStripMenuItem1
			// 
			this->quitToolStripMenuItem1->Name = L"quitToolStripMenuItem1";
			this->quitToolStripMenuItem1->Size = System::Drawing::Size(42, 20);
			this->quitToolStripMenuItem1->Text = L"Quit";
			this->quitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CustomerList::quitToolStripMenuItem1_Click);
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(383, 181);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 20);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Past Orders";
			// 
			// listView2
			// 
			this->listView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader8, this->columnHeader9, 
				this->columnHeader10, this->columnHeader11});
			this->listView2->FullRowSelect = true;
			this->listView2->GridLines = true;
			this->listView2->Location = System::Drawing::Point(12, 217);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(836, 125);
			this->listView2->TabIndex = 34;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Date";
			this->columnHeader8->Width = 126;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Time";
			this->columnHeader9->Width = 131;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Items";
			this->columnHeader10->Width = 468;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Amount";
			this->columnHeader11->Width = 97;
			// 
			// CustomerList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 410);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->listView1);
			this->Name = L"CustomerList";
			this->Text = L"CustomerList";
			this->Load += gcnew System::EventHandler(this, &CustomerList::CustomerList_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CustomerList_Load(System::Object^  sender, System::EventArgs^  e) {
				 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
				 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT * FROM `restaurant`.`customer_id`;",conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
					 listView1->Items->Clear();
					 int i = 0;
					 while(myReader->Read()){
						 ListViewItem^ objName = listView1->Items->Add(myReader->GetString(0));
						 objName->SubItems->Add(myReader->GetString(1));
						 objName->SubItems->Add(myReader->GetString(3));
						 objName->SubItems->Add(myReader->GetString(4));
						 objName->SubItems->Add(myReader->GetString(5));
						 i++;
					 }
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();
			 }
private: System::Void homeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
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
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 ListViewItem^ objName = listView1->Items[listView1->FocusedItem->Index];
			 String^ itName = objName->SubItems[0]->Text;
			 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
			 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
			 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT * FROM `restaurant`.`order` WHERE `customer_id`="+System::Convert::ToInt32(itName)+";",conDatabase);
			 MySqlDataReader^ myReader; try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
			
				 listView2->Items->Clear();
				 String^ d="";
				 String^ t="";
				 String^ food="";
				 while(myReader->Read()){
					 if(d == myReader->GetString(3) && t == myReader->GetString(4)){
						 food = food + myReader->GetString(5) + "(" + System::Convert::ToString(myReader->GetString(6)) + ")" + ",";
					 }else{
						 if(food != ""){
							 food = food->Substring(0,food->Length-1);
							 ListViewItem^ objName1 = listView2->Items->Add(d);
							 objName1->SubItems->Add(t);
							 objName1->SubItems->Add(food);
						 }
						 food = myReader->GetString(5) + "(" + System::Convert::ToString(myReader->GetString(6)) + ")" + ",";
						 d = myReader->GetString(3);
						 t = myReader->GetString(4);
					 }

					 
				 }
				 food = food->Substring(0,food->Length-1);
				 ListViewItem^ objName1 = listView2->Items->Add(d);
				 objName1->SubItems->Add(t);
				 objName1->SubItems->Add(food);
			 
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 conDatabase->Close();
		 }
};
}
