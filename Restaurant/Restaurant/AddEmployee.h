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
	/// Summary for AddEmployee
	/// </summary>
	public ref class AddEmployee : public System::Windows::Forms::Form
	{
	public:
		AddEmployee(void)
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
		~AddEmployee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label5;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Post";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Address";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Salary";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(121, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(121, 201);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(152, 20);
			this->textBox3->TabIndex = 6;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Location = System::Drawing::Point(121, 104);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(152, 87);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(105, 271);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 41);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddEmployee::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Waiter", L"Chef", L"Manager"});
			this->comboBox1->Location = System::Drawing::Point(121, 68);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(152, 21);
			this->comboBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(121, 236);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(152, 20);
			this->textBox2->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 243);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Phone Number";
			// 
			// AddEmployee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 324);
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
			this->Name = L"AddEmployee";
			this->Text = L"AddEmployee";
			this->Load += gcnew System::EventHandler(this, &AddEmployee::AddEmployee_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: System::Void mainshow();
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
	private: System::Void AddEmployee_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 if(textBox1->Text != "" && textBox3->Text != "" && comboBox1->Text != "" && richTextBox1->Text != "" && textBox2->Text != "" && is_number(textBox2->Text) && is_number(textBox3->Text) && textBox2->Text->Length == 10){
					 if(MessageBox::Show("Are you sure you wan't to add the entry to the database?","Add Entry",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes){
						 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
						 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
						 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("INSERT INTO `restaurant`.`employee`(`EmployeeName`,`EmployeePost`,`EmployeeAddress`,`EmployeePay`,`EmployeeNum`,`UserName`,`Password`) VALUES ('" + textBox1->Text +"','"+ comboBox1->Text + "','"+ richTextBox1->Text + "',"+ System::Convert::ToInt32(textBox3->Text) +","+System::Convert::ToInt32(textBox2->Text)+",'"+textBox1->Text+textBox3->Text+"','a');",conDatabase);
						 MySqlDataReader^ myReader;
						 try{
							 conDatabase->Open();
							 myReader = cmdDatabase->ExecuteReader();
			
						 }
						 catch(Exception^ ex){
							 MessageBox::Show(ex->Message);
						 }
						 conDatabase->Close();
						 cmdDatabase = gcnew MySqlCommand("SELECT * FROM `restaurant`.`employee` WHERE `UserName` = '"+textBox1->Text+textBox3->Text+"';",conDatabase);
						String^ userN;
						int id;
						 try{
							 conDatabase->Open();
							 myReader = cmdDatabase->ExecuteReader();
							 while(myReader->Read()){
								 id = myReader->GetInt32(0);
								 userN = myReader->GetString(1)+myReader->GetString(0);
							 }
							 
						 }
						 catch(Exception^ ex){
							 MessageBox::Show(ex->Message);
						 }
						 conDatabase->Close();
						 cmdDatabase = gcnew MySqlCommand("UPDATE `restaurant`.`employee` SET `UserName` = '"+userN+"',Password = '"+userN+"' WHERE `idEmployee` = "+id+" ;",conDatabase);
						 try{
							 conDatabase->Open();
							 myReader = cmdDatabase->ExecuteReader();
							 }
						 catch(Exception^ ex){
							 MessageBox::Show(ex->Message);
						 }
						 conDatabase->Close();
						 cmdDatabase = gcnew MySqlCommand("INSERT INTO `restaurant`.`employee_id`(`username`,`name`,`designation`,`password`) VALUES ('"+userN+"','"+textBox1->Text+"','"+comboBox1->Text+"','"+userN+"');",conDatabase);
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
					 else
					 {
						 MessageBox::Show("Enter the fields correctly.\nNone of the fields should be empty.\nSalary and Phone Number should be positive integers.","Error");
					 }

						 
						 
					 
				 }
};
}
