#pragma once

#include "workerList.h"
#include "stockData.h"
#include "menu.h"
#include "expenditure.h"
#include "sales.h"
#include "about.h"
#include "CustomerList.h"
#include "discount.h"
#include "profit.h"

namespace Restaurant {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  guideToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(50, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(412, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Workers List";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(50, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(412, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Stock Data";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(50, 148);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(412, 39);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Menu Items";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(50, 205);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(412, 39);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Sales";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button5->Location = System::Drawing::Point(50, 265);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(412, 39);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Customer List";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button6->Location = System::Drawing::Point(50, 326);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(412, 39);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Expenditure";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->homeToolStripMenuItem, 
				this->quitToolStripMenuItem, this->helpToolStripMenuItem, this->quitToolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(499, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->homeToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->homeToolStripMenuItem->Text = L"&Home";
			this->homeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::homeToolStripMenuItem_Click);
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->quitToolStripMenuItem->Text = L"Log Out";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::quitToolStripMenuItem_Click);
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
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
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
			this->quitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::quitToolStripMenuItem1_Click);
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button7->Location = System::Drawing::Point(50, 384);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(412, 39);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Discount and Tax Management";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button8->Location = System::Drawing::Point(50, 439);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(412, 39);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Profit Graph";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(499, 484);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Manager";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 workerList^ form = gcnew workerList();
				 form->Show();
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 checkSqlTable();
				 DateTime date = DateTime::Now;
				 String^ sqldate = System::Convert::ToString(date.Year)+"-"+System::Convert::ToString(date.Month)+"-"+System::Convert::ToString(date.Day)+" "+System::Convert::ToString(date.Hour)+":"+System::Convert::ToString(date.Minute)+":"+System::Convert::ToString(date.Second);
				 if(date.Day == 1){
				 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
				 MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM `restaurant`.`employee`;",conDatabase);
				 MySqlDataReader^ myReader;
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 
					 String^ connectString1=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
					 MySqlConnection^ conDatabase1= gcnew MySqlConnection(connectString1);
					 MySqlCommand^ cmdDatabase1= gcnew MySqlCommand("INSERT INTO `restaurant`.`expenses` (`type`,`to`,`amount`,`date`) VALUES ('Salary Payment','"+myReader->GetString(1)+"("+myReader->GetString(2)+")',-" + System::Convert::ToDouble(myReader->GetString(4)) + ",'" + sqldate + "');",conDatabase1);
					 MySqlDataReader^ myReader1;
					 conDatabase1->Open();
					 myReader1 = cmdDatabase1->ExecuteReader();
					 conDatabase1->Close();
					 myReader1->Close();
				 }
				 conDatabase->Close();
				 myReader->Close();
				 
				 
				 }
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 menu^ form = gcnew menu();
			 form->Show();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 stockData^ form = gcnew stockData();
			 form->Show();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 expenditure^ form = gcnew expenditure();
			 form->Show();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 sales^ form = gcnew sales();
			 form->Show();
		 }
private: System::Void homeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void quitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure you want to log out?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			 if(System::Windows::Forms::DialogResult::Yes == result){
				 this->Close();
			 }
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
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 CustomerList^ form = gcnew CustomerList();
			 form->Show();
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 discount^ form = gcnew discount();
			 form->Show();
		 }
private: System::Void checkSqlTable(){
			 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
			 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
			 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT * FROM information_schema.tables WHERE table_schema = 'restaurant' AND table_name = 'customer_id' LIMIT 1;",conDatabase);
			 MySqlDataReader^ myReader;
			 int c = 0;
			 try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 c=1;
				 }
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 conDatabase->Close();
			 if(c == 0){
				 cmdDatabase = gcnew MySqlCommand("CREATE TABLE `restaurant`.`customer_id` (`idcustomer_id` int(11) NOT NULL AUTO_INCREMENT,`name` varchar(45) DEFAULT NULL,`password` varchar(45) DEFAULT NULL,`last_visit` datetime DEFAULT NULL,`frequency` int(11) DEFAULT NULL,`birthdate` date DEFAULT NULL,`mobile` int(11) DEFAULT NULL,PRIMARY KEY (`idcustomer_id`),UNIQUE KEY `idcustomer_id_UNIQUE` (`idcustomer_id`),UNIQUE KEY `mobile_UNIQUE` (`mobile`) ) ENGINE=InnoDB AUTO_INCREMENT=100002 DEFAULT CHARSET=latin1;",conDatabase);
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
			 }

			 connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
			 conDatabase= gcnew MySqlConnection(connectString);
			 cmdDatabase= gcnew MySqlCommand("SELECT * FROM information_schema.tables WHERE table_schema = 'restaurant' AND table_name = 'discount' LIMIT 1;",conDatabase);
			 c = 0;
			 try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 c=1;
				 }
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 conDatabase->Close();
			 if(c == 0){
				
				 cmdDatabase = gcnew MySqlCommand("CREATE TABLE `restaurant`.`discount` (`iddiscount` int(11) NOT NULL,`name` varchar(45) DEFAULT NULL,`number` int(11) DEFAULT NULL,`amount` int(11) DEFAULT NULL,PRIMARY KEY (`iddiscount`) ) ENGINE=InnoDB DEFAULT CHARSET=latin1;",conDatabase);
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();
				 cmdDatabase = gcnew MySqlCommand("INSERT INTO `restaurant`.`discount` (`iddiscount`,`name`, `number`, `amount`) VALUES ('1','Frequency', '0', '0');",conDatabase);
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();
				 cmdDatabase = gcnew MySqlCommand("INSERT INTO `restaurant`.`discount` (`iddiscount`,`name`, `number`, `amount`) VALUES ('2','Birthday', '0', '0');",conDatabase);
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();
				 cmdDatabase = gcnew MySqlCommand("INSERT INTO `restaurant`.`discount` (`iddiscount`,`name`, `number`, `amount`) VALUES ('3','VAT', '0', '0');",conDatabase);
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();
				 cmdDatabase  = gcnew MySqlCommand("INSERT INTO `restaurant`.`discount` (`iddiscount`,`name`, `number`, `amount`) VALUES ('4','Service Tax', '0', '0');",conDatabase);
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();
				 cmdDatabase = gcnew MySqlCommand("INSERT INTO `restaurant`.`discount` (`iddiscount`,`name`, `number`, `amount`) VALUES ('5','Packing', '0', '0');",conDatabase);
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();

				 connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 conDatabase= gcnew MySqlConnection(connectString);
				 cmdDatabase= gcnew MySqlCommand("SELECT * FROM information_schema.tables WHERE table_schema = 'restaurant' AND table_name = 'employee' LIMIT 1;",conDatabase);
				 c = 0;
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						 c=1;
					 }
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();
				 if(c == 0){
					 cmdDatabase = gcnew MySqlCommand("CREATE TABLE `restaurant`.`employee` (`idEmployee` int(11) NOT NULL AUTO_INCREMENT,`EmployeeName` varchar(100) DEFAULT NULL,`EmployeePost` varchar(100) DEFAULT NULL,`EmployeeAddress` varchar(500) DEFAULT NULL,`EmployeePay` int(11) DEFAULT NULL,`EmployeeNum` int(11) DEFAULT NULL,`UserName` varchar(45) DEFAULT NULL,`Password` varchar(45) DEFAULT NULL,PRIMARY KEY (`idEmployee`) ) ENGINE=InnoDB AUTO_INCREMENT=12 DEFAULT CHARSET=latin1;",conDatabase);
					 try{
						 conDatabase->Open();
						 myReader = cmdDatabase->ExecuteReader();
					 }
					 catch(Exception^ ex){
						 MessageBox::Show(ex->Message);
					 }
					 conDatabase->Close();
				 }


				 connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 conDatabase= gcnew MySqlConnection(connectString);
				 cmdDatabase= gcnew MySqlCommand("SELECT * FROM information_schema.tables WHERE table_schema = 'restaurant' AND table_name = 'expenses' LIMIT 1;",conDatabase);
				 c = 0;
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						 c=1;
					 }
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();
				 if(c == 0){
					 cmdDatabase = gcnew MySqlCommand("CREATE TABLE `restaurant`.`expenses` (`num` int(11) NOT NULL AUTO_INCREMENT,`type` varchar(45) DEFAULT NULL,`to` varchar(45) DEFAULT NULL,`amount` decimal(11,5) DEFAULT NULL,`date` datetime DEFAULT NULL,PRIMARY KEY (`num`) ) ENGINE=InnoDB AUTO_INCREMENT=22 DEFAULT CHARSET=latin1;",conDatabase);
					 try{
						 conDatabase->Open();
						 myReader = cmdDatabase->ExecuteReader();
					 }
					 catch(Exception^ ex){
						 MessageBox::Show(ex->Message);
					 }
					 conDatabase->Close();
				 }


				 connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 conDatabase= gcnew MySqlConnection(connectString);
				 cmdDatabase= gcnew MySqlCommand("SELECT * FROM information_schema.tables WHERE table_schema = 'restaurant' AND table_name = 'menu' LIMIT 1;",conDatabase);
				 c = 0;
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						 c=1;
					 }
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();
				 if(c == 0){
					 cmdDatabase = gcnew MySqlCommand("CREATE TABLE `restaurant`.`menu` (`idItem` int(11) NOT NULL AUTO_INCREMENT,`itemName` varchar(45) DEFAULT NULL,`itemDesc` varchar(200) DEFAULT NULL,`itemPrice` decimal(11,5) DEFAULT NULL,`item_Type` varchar(45) DEFAULT NULL,`itemIng` varchar(200) DEFAULT NULL,`basicCost` decimal(11,5) DEFAULT NULL,PRIMARY KEY (`idItem`) ) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=latin1;",conDatabase);
					 try{
						 conDatabase->Open();
						 myReader = cmdDatabase->ExecuteReader();
					 }
					 catch(Exception^ ex){
						 MessageBox::Show(ex->Message);
					 }
					 conDatabase->Close();
				 }
				 

				 connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 conDatabase= gcnew MySqlConnection(connectString);
				 cmdDatabase= gcnew MySqlCommand("SELECT * FROM information_schema.tables WHERE table_schema = 'restaurant' AND table_name = 'order' LIMIT 1;",conDatabase);
				 c = 0;
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						 c=1;
					 }
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();
				 if(c == 0){
					 cmdDatabase = gcnew MySqlCommand("CREATE TABLE `restaurant`.`order` (`number` int(11) NOT NULL AUTO_INCREMENT,`customer_id` int(11) DEFAULT NULL,`bill_no` int(11) DEFAULT NULL,`Date` date DEFAULT NULL,`Time` time DEFAULT NULL,`items` varchar(200) DEFAULT NULL,`quantity` int(11) DEFAULT NULL,`packing` varchar(45) DEFAULT NULL,`status` varchar(45) DEFAULT NULL,PRIMARY KEY (`number`) ) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=latin1;",conDatabase);
					 try{
						 conDatabase->Open();
						 myReader = cmdDatabase->ExecuteReader();
					 }
					 catch(Exception^ ex){
						 MessageBox::Show(ex->Message);
					 }
					 conDatabase->Close();
				 }


				 connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 conDatabase= gcnew MySqlConnection(connectString);
				 cmdDatabase= gcnew MySqlCommand("SELECT * FROM information_schema.tables WHERE table_schema = 'restaurant' AND table_name = 'stock' LIMIT 1;",conDatabase);
				 c = 0;
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						 c=1;
					 }
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();
				 if(c == 0){
					 cmdDatabase = gcnew MySqlCommand("CREATE TABLE `restaurant`.`stock` (`itemCode` int(11) NOT NULL AUTO_INCREMENT,`itemName` varchar(100) DEFAULT NULL,`itemRem` decimal(11,5) DEFAULT '0.00000',`itemUsed` decimal(11,5) DEFAULT '0.00000',`totalUsed` decimal(11,5) DEFAULT NULL,`pricePer` decimal(11,5) DEFAULT NULL,PRIMARY KEY (`itemCode`),UNIQUE KEY `itemCode_UNIQUE` (`itemCode`) ) ENGINE=InnoDB AUTO_INCREMENT=13 DEFAULT CHARSET=latin1;",conDatabase);
					 try{
						 conDatabase->Open();
						 myReader = cmdDatabase->ExecuteReader();
					 }
					 catch(Exception^ ex){
						 MessageBox::Show(ex->Message);
					 }
					 conDatabase->Close();
				 }
			 }
		}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 profit^ form = gcnew profit();
			 form->Show();
		 }

};
}

