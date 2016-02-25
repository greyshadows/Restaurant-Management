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
	/// Summary for sales
	/// </summary>
	public ref class sales : public System::Windows::Forms::Form
	{
	public:
		sales(void)
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
		~sales()
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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::ToolStripMenuItem^  homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  guideToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;







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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(12, 65);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(848, 146);
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &sales::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Name";
			this->columnHeader1->Width = 124;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Description";
			this->columnHeader2->Width = 183;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Price";
			this->columnHeader3->Width = 122;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Amount Ordered";
			this->columnHeader4->Width = 143;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Total Earning";
			this->columnHeader5->Width = 132;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Type";
			this->columnHeader6->Width = 116;
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
			this->chart1->Location = System::Drawing::Point(157, 217);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Sales";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(637, 299);
			this->chart1->TabIndex = 3;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &sales::chart1_Click);
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->homeToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->homeToolStripMenuItem->Text = L"&Home";
			this->homeToolStripMenuItem->Click += gcnew System::EventHandler(this, &sales::homeToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->aboutToolStripMenuItem, 
				this->guideToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &sales::helpToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &sales::aboutToolStripMenuItem_Click);
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
			this->quitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &sales::quitToolStripMenuItem1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->homeToolStripMenuItem, 
				this->helpToolStripMenuItem, this->quitToolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(2, 3);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(146, 24);
			this->menuStrip1->TabIndex = 31;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &sales::menuStrip1_ItemClicked);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(12, 39);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(119, 20);
			this->dateTimePicker1->TabIndex = 32;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &sales::dateTimePicker1_ValueChanged);
			// 
			// sales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(886, 529);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->listView1);
			this->Name = L"sales";
			this->Text = L"sales";
			this->Load += gcnew System::EventHandler(this, &sales::sales_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void fillChart(){
				 this->chart1->Series["Sales"]->Points->Clear(); 
				 this->chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Zoomable = true;
				 this->chart1->ChartAreas["ChartArea1"]->AxisY->ScaleView->Zoomable = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorX->AutoScroll = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorY->AutoScroll = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorX->IsUserEnabled = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorY->IsUserEnabled = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorX->IsUserSelectionEnabled = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorY->IsUserSelectionEnabled = true;
				 int i = 0 ;
				 for(i=0;i<listView1->Items->Count;i++){
					 ListViewItem^ objName = listView1->Items[i];
					 this->chart1->Series["Sales"]->Points->AddXY(objName->SubItems[0]->Text,System::Convert::ToDouble(objName->SubItems[3]->Text));
					 this->chart1->Series["Sales"]->Points[i]->Label = objName->SubItems[4]->Text;
					 
				 }

			 }
	private: System::Void fillList(){
				 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
				 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT * FROM `restaurant`.`menu`;",conDatabase);
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
						 objName->SubItems->Add("0");
						 objName->SubItems->Add("0");
						 objName->SubItems->Add(myReader->GetString(4));
						 i++;
					 }
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 DateTime^ date = dateTimePicker1->Value.Date;
				 String^ sqldate = System::Convert::ToString(dateTimePicker1->Value.Year)+"-"+System::Convert::ToString(dateTimePicker1->Value.Month)+"-"+System::Convert::ToString(dateTimePicker1->Value.Day);
				 conDatabase->Close();
				 connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 conDatabase= gcnew MySqlConnection(connectString);
				 cmdDatabase= gcnew MySqlCommand("SELECT `items`,`quantity` FROM `restaurant`.`order` WHERE  `Date` = '"+sqldate+"';",conDatabase);
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						 for(int j=0;j<listView1->Items->Count;j++){
							 ListViewItem^ objName = listView1->Items[j];
							 String^ itName = objName->SubItems[0]->Text;
							 if(myReader->GetString(0) == itName){
								 objName->SubItems[3]->Text = System::Convert::ToString(System::Convert::ToInt32(objName->SubItems[3]->Text) + myReader->GetInt32(1));
								 objName->SubItems[4]->Text = System::Convert::ToString(System::Convert::ToDouble(objName->SubItems[3]->Text) * System::Convert::ToDouble(objName->SubItems[2]->Text)  );
							 }
						 }
					 }
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();
			 }
	private: System::Void sales_Load(System::Object^  sender, System::EventArgs^  e) {
				 fillList();
				 fillChart();
			 }
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 fillList();
			 fillChart();
		 }
};
}
