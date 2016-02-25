#pragma once
#include <locale>
namespace Restaurant {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for employeeEdit
	/// </summary>
	public ref class employeeEdit : public System::Windows::Forms::Form
	{
	public:
		String^ userName;
		employeeEdit(String^ s)
		{
			InitializeComponent();
			userName = s;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~employeeEdit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox2;
	protected: 
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label6;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(110, 199);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(214, 20);
			this->textBox2->TabIndex = 22;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 235);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Phone Number";
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Waiter", L"Chef", L"Manager"});
			this->comboBox1->Location = System::Drawing::Point(110, 60);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(214, 21);
			this->comboBox1->TabIndex = 20;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(93, 308);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 41);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Edit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &employeeEdit::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Location = System::Drawing::Point(110, 96);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(214, 87);
			this->richTextBox1->TabIndex = 18;
			this->richTextBox1->Text = L"";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(110, 228);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(214, 20);
			this->textBox3->TabIndex = 17;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(110, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(214, 20);
			this->textBox1->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Salary";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Address";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Post";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Name";
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Location = System::Drawing::Point(110, 264);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(214, 20);
			this->textBox4->TabIndex = 24;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 271);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 13);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Password";
			// 
			// employeeEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 361);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"employeeEdit";
			this->Text = L"employeeEdit";
			this->Load += gcnew System::EventHandler(this, &employeeEdit::employeeEdit_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 String^ pass;
		String^ usName;
		public: System::Void mainshow();
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e){
					 if(textBox1->Text != "" && textBox3->Text != "" && comboBox1->Text != "" && richTextBox1->Text != "" && textBox2->Text != "" && is_number(textBox2->Text) && is_number(textBox3->Text) && textBox3->Text->Length == 10){
						 if(MessageBox::Show("Are you sure you wan't to edit the entry to the database?","Edit Entry",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes){
							 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
							 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
							 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("UPDATE `restaurant`.`employee` SET `EmployeeName`='"+textBox1->Text+"',`EmployeePost`='"+comboBox1->Text+"',`EmployeeAddress`='"+richTextBox1->Text+"',`EmployeePay`="+System::Convert::ToInt32(textBox2->Text)+",`EmployeeNum`="+System::Convert::ToInt32(textBox3->Text)+",`Password`='"+pass+"' WHERE `UserName` = '"+usName+"';",conDatabase);
							 MySqlDataReader^ myReader;
							 try{
								 conDatabase->Open();
								 myReader = cmdDatabase->ExecuteReader();
							 }
							 catch(Exception^ ex){
								 MessageBox::Show(ex->Message);
							 }
							 conDatabase->Close();
							 cmdDatabase = gcnew MySqlCommand("UPDATE restaurant.employee_id SET name = '"+textBox1->Text+"', designation = '"+comboBox1->Text+"',password = '"+pass+"' WHERE `username` = '"+usName+"';",conDatabase);
								 try{
									 conDatabase->Open();
									 myReader = cmdDatabase->ExecuteReader();
							 }
							 catch(Exception^ ex){
								 MessageBox::Show(ex->Message);
							 }
							 conDatabase->Close();
							mainshow();
							 this->Close();

						 }
					 }
				 }

		private: System::Boolean is_number(String^ s)
				 {
					 char it = s[0];
					 int num=0;
					 while (num != s->Length){
						 it = s[num];
						 if(!isdigit(it)){
							 break;
						 }
						 num++;
					 }

					 return !(s == "") && num == s->Length ;
				 }
	private: System::Void employeeEdit_Load(System::Object^  sender, System::EventArgs^  e) {
				 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
				 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT * FROM `restaurant`.`employee` WHERE `UserName` = '"+userName+"';",conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						 textBox1->Text = myReader->GetString(1);
						 comboBox1->Text = myReader->GetString(2);
						 richTextBox1->Text = myReader->GetString(3);
						 textBox2->Text = myReader->GetString(4);
						 textBox3->Text = myReader->GetString(5);
						 pass = myReader->GetString(7);
						 usName = myReader->GetString(6);
					 }
				 }
					 catch(Exception^ ex){
						 MessageBox::Show(ex->Message);
					 }
					 conDatabase->Close();
			 
			 }

};
}
