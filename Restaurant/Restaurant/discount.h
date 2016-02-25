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
	/// Summary for discount
	/// </summary>
	public ref class discount : public System::Windows::Forms::Form
	{
	public:
		discount(void)
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
		~discount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label10;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::Label^  label12;

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
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			this->SuspendLayout();
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(74, 30);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 20);
			this->label10->TabIndex = 34;
			this->label10->Text = L"Frequency";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(74, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 20);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Birthday";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(74, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 20);
			this->label2->TabIndex = 36;
			this->label2->Text = L"VAT";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(74, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 20);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Service Tax";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(427, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 17);
			this->label6->TabIndex = 98;
			this->label6->Text = L"%";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(255, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 15);
			this->label4->TabIndex = 97;
			this->label4->Text = L"times";
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->numericUpDown9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown9->Location = System::Drawing::Point(211, 29);
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(38, 21);
			this->numericUpDown9->TabIndex = 96;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(159, 33);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 15);
			this->label5->TabIndex = 95;
			this->label5->Text = L": Above";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(367, 87);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(54, 24);
			this->numericUpDown2->TabIndex = 94;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(427, 90);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 17);
			this->label7->TabIndex = 100;
			this->label7->Text = L"%";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(367, 30);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(54, 24);
			this->numericUpDown1->TabIndex = 99;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(427, 146);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 17);
			this->label8->TabIndex = 102;
			this->label8->Text = L"%";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown3->Location = System::Drawing::Point(367, 141);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(54, 24);
			this->numericUpDown3->TabIndex = 101;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(427, 195);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 17);
			this->label9->TabIndex = 104;
			this->label9->Text = L"%";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown4->Location = System::Drawing::Point(367, 190);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(54, 24);
			this->numericUpDown4->TabIndex = 103;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(211, 298);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 55);
			this->button2->TabIndex = 106;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &discount::button2_Click);
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(74, 241);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 20);
			this->label11->TabIndex = 107;
			this->label11->Text = L"Packing";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown5->Location = System::Drawing::Point(367, 237);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(54, 24);
			this->numericUpDown5->TabIndex = 108;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(336, 241);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(25, 15);
			this->label12->TabIndex = 109;
			this->label12->Text = L"Rs.";
			// 
			// discount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(602, 365);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label10);
			this->Name = L"discount";
			this->Text = L"discount";
			this->Load += gcnew System::EventHandler(this, &discount::discount_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void discount_Load(System::Object^  sender, System::EventArgs^  e) {
				 
				 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
				 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT * FROM `restaurant`.`discount`;",conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
					 myReader->Read();
					 numericUpDown9->Text = myReader->GetString(2);
					 numericUpDown1->Text = myReader->GetString(3);
					 myReader->Read();
					 numericUpDown2->Text= myReader->GetString(3);
					 myReader->Read();
					 numericUpDown3->Text = myReader->GetString(3);
					 myReader->Read();
					 numericUpDown4->Text = myReader->GetString(3);
					 myReader->Read();
					 numericUpDown5->Text = myReader->GetString(3);
					 
				 }
				 catch(Exception^ ex)
				 {
					 String^ q = ex->Message;
					 MessageBox::Show(q,"Error");
				 }
				 conDatabase->Close();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(MessageBox::Show("Are you sure you wan't to edit the discounts and taxes?","Edit Entry",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes){
			 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
			 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
			 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("UPDATE `restaurant`.`discount` SET `number` = "+System::Convert::ToInt32(numericUpDown9->Text)+",`amount` = "+System::Convert::ToInt32(numericUpDown1->Text)+" WHERE `name` = 'Frequency';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
			 }
			 catch(Exception^ ex)
			 {
				 String^ q = ex->Message;
				 MessageBox::Show(q,"Error");
			 }
			 conDatabase->Close();
			 cmdDatabase= gcnew MySqlCommand("UPDATE `restaurant`.`discount` SET `amount` = "+System::Convert::ToInt32(numericUpDown2->Text)+" WHERE `name` = 'Birthday';",conDatabase);
			 try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
			 }
			 catch(Exception^ ex)
			 {
				 String^ q = ex->Message;
				 MessageBox::Show(q,"Error");
			 }
			 conDatabase->Close();
			 cmdDatabase= gcnew MySqlCommand("UPDATE `restaurant`.`discount` SET `amount` = "+System::Convert::ToInt32(numericUpDown3->Text)+" WHERE `name` = 'VAT';",conDatabase);
			 try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
			 }
			 catch(Exception^ ex)
			 {
				 String^ q = ex->Message;
				 MessageBox::Show(q,"Error");
			 }
			 conDatabase->Close();
			 cmdDatabase= gcnew MySqlCommand("UPDATE `restaurant`.`discount` SET `amount` = "+System::Convert::ToInt32(numericUpDown4->Text)+" WHERE `name` = 'Service Tax';",conDatabase);
			 try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
			 }
			 catch(Exception^ ex)
			 {
				 String^ q = ex->Message;
				 MessageBox::Show(q,"Error");
			 }
			 conDatabase->Close();
			 cmdDatabase= gcnew MySqlCommand("UPDATE `restaurant`.`discount` SET `amount` = "+System::Convert::ToInt32(numericUpDown5->Text)+" WHERE `name` = 'Packing';",conDatabase);
			 try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
			 }
			 catch(Exception^ ex)
			 {
				 String^ q = ex->Message;
				 MessageBox::Show(q,"Error");
			 }
			 conDatabase->Close();
			 this->Close();
		 }
			 }
};
}
