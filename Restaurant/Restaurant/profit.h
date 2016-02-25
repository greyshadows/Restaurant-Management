#pragma once

namespace Restaurant {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for profit
	/// </summary>
	public ref class profit : public System::Windows::Forms::Form
	{
	public:
		profit(void)
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
		~profit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
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
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->IsValueShownAsLabel = true;
			series1->Legend = L"Legend1";
			series1->Name = L"Profit";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(815, 367);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &profit::chart1_Click);
			// 
			// profit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(839, 391);
			this->Controls->Add(this->chart1);
			this->Name = L"profit";
			this->Text = L"profit";
			this->Load += gcnew System::EventHandler(this, &profit::profit_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void profit_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->chart1->Series["Profit"]->Points->Clear(); 
				 this->chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Zoomable = true;
				 this->chart1->ChartAreas["ChartArea1"]->AxisY->ScaleView->Zoomable = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorX->AutoScroll = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorY->AutoScroll = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorX->IsUserEnabled = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorY->IsUserEnabled = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorX->IsUserSelectionEnabled = true;
				 this->chart1->ChartAreas["ChartArea1"]->CursorY->IsUserSelectionEnabled = true;
				 this->chart1->ChartAreas["ChartArea1"]->AxisX->Interval = 1;
				 int i = 0 ;
				 try{
					 DateTime^ tdate = DateTime::Now;
					 tdate = tdate->AddDays(3);
					 DateTime^ pmindate = tdate->AddDays(-15);
					do{ 
						 String^ mindate;
						 if(pmindate->Day < 10 && pmindate->Month >=10 ){
						 mindate = System::Convert::ToString(pmindate->Year) + "-" +  System::Convert::ToString(pmindate->Month) + "-0" + System::Convert::ToString(pmindate->Day);
						 }else if(pmindate->Month <10 && pmindate->Day >=10){
							mindate = System::Convert::ToString(pmindate->Year) + "-0" +  System::Convert::ToString(pmindate->Month) + "-" + System::Convert::ToString(pmindate->Day);
						 }else if(pmindate->Month <10 && pmindate->Day <10){
							 mindate = System::Convert::ToString(pmindate->Year) + "-0" +  System::Convert::ToString(pmindate->Month) + "-0" + System::Convert::ToString(pmindate->Day);
						 }else{
							 mindate = System::Convert::ToString(pmindate->Year) + "-" +  System::Convert::ToString(pmindate->Month) + "-" + System::Convert::ToString(pmindate->Day);
						 }
						 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
						  MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
						 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT `amount` FROM `restaurant`.`bill` WHERE `bill`.`date` LIKE '%"+mindate+"%';",conDatabase);
						 MySqlDataReader^ myReader;
						 conDatabase->Open();
						 myReader = cmdDatabase->ExecuteReader();
						 double prof = 0;
						 while(myReader->Read()){
							 prof = prof + myReader->GetDouble(0);
						 }
						 conDatabase->Close();
						cmdDatabase= gcnew MySqlCommand("SELECT `amount` FROM `restaurant`.`expenses` WHERE `expenses`.`date` LIKE '%"+mindate+"%';",conDatabase);
						conDatabase->Open();
						myReader = cmdDatabase->ExecuteReader();
						double loss = 0;
						while(myReader->Read()){
							loss = loss + myReader->GetDouble(0);
						}
						conDatabase->Close();
						this->chart1->Series["Profit"]->Points->AddXY(mindate,prof+loss);
						pmindate = pmindate->AddDays(1);
					 }while(pmindate->Day != tdate->Day || pmindate->Month != tdate->Month || pmindate->Year != tdate->Year );
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
			 }
	private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
