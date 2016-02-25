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
	/// Summary for expenditure
	/// </summary>
	public ref class expenditure : public System::Windows::Forms::Form
	{
	public:
		expenditure(void)
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
		~expenditure()
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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  guideToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem1;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(29, 42);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(707, 112);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Type";
			this->columnHeader1->Width = 162;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Purchase";
			this->columnHeader2->Width = 161;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Amount";
			this->columnHeader3->Width = 177;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Date";
			this->columnHeader4->Width = 168;
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(76, 170);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Expenditure";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(635, 296);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->homeToolStripMenuItem, 
				this->helpToolStripMenuItem, this->quitToolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(146, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->homeToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->homeToolStripMenuItem->Text = L"&Home";
			this->homeToolStripMenuItem->Click += gcnew System::EventHandler(this, &expenditure::homeToolStripMenuItem_Click);
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
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &expenditure::aboutToolStripMenuItem_Click);
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
			this->quitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &expenditure::quitToolStripMenuItem1_Click);
			// 
			// expenditure
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(769, 497);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->listView1);
			this->Name = L"expenditure";
			this->Text = L"expenditure";
			this->Load += gcnew System::EventHandler(this, &expenditure::expenditure_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void fillForm(){
				 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
				 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT * FROM `restaurant`.`expenses`;",conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
					 listView1->Items->Clear();
					 int i = 0;
					 while(myReader->Read()){
						 ListViewItem^ objName = listView1->Items->Add(myReader->GetString(1));
						 objName->SubItems->Add(myReader->GetString(2));
						 objName->SubItems->Add(myReader->GetString(3));
						 objName->SubItems->Add(myReader->GetString(4));
						 i++;
					 }
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();
			 }

    private: System::Void fillChart(){

				 this->chart1->Series["Expenditure"]->Points->Clear();
				 this->chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Zoomable = true;
				 this->chart1->ChartAreas["ChartArea1"]->AxisY->ScaleView->Zoomable = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorX->AutoScroll = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorY->AutoScroll = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorX->IsUserEnabled = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorY->IsUserEnabled = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorX->IsUserSelectionEnabled = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorY->IsUserSelectionEnabled = true;
				 try{
					 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
					 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
					 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT * FROM `restaurant`.`expenses`;",conDatabase);
					 MySqlDataReader^ myReader;
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
					 myReader->Read();
					 double sum = 0;
					 sum = System::Convert::ToDouble(myReader->GetString(3));
					 String^ date = myReader->GetString(4);
					 int i=0;
					 while(date[i] != ' '){
						 i++;
					 }
					 date = date->Substring(0,i);
					
					 while(myReader->Read()){
						 double t = System::Convert::ToDouble(myReader->GetString(3));
						 String^ temp = myReader->GetString(4);
						 i=0;
						 while(temp[i] != ' '){
							 i++;
						 }
						 temp = temp->Substring(0,i);
						 if(temp == date){
							 sum = sum + t;
							 continue;
						 }
							 this->chart1->Series["Expenditure"]->Points->AddXY(date,-sum);
							 date = temp;
							 sum=t;
						 
					 }
					 this->chart1->Series["Expenditure"]->Points->AddXY(date,-sum);
				 }

				 catch(Exception^ ex)
				 {
					 String^ q = ex->Message;
					 MessageBox::Show(q,"Error");
				 }
			 }
	private: System::Void expenditure_Load(System::Object^  sender, System::EventArgs^  e) {
				 fillForm();
				 fillChart();
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
};
}
