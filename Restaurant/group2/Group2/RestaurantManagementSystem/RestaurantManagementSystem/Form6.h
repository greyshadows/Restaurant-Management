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

namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form6
	/// </summary>
	public ref class Form6 : public System::Windows::Forms::Form
	{
	public:
		int num;
		Form6(void)
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
		~Form6()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  dataGridViewCheckBoxColumn1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewCheckBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 31);
			this->label1->TabIndex = 93;
			this->label1->Text = L"Remove Employee";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(367, 442);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 33);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form6::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(262, 442);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form6::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->dataGridViewTextBoxColumn1, 
				this->dataGridViewTextBoxColumn2, this->dataGridViewCheckBoxColumn1});
			this->dataGridView1->Location = System::Drawing::Point(32, 63);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(632, 356);
			this->dataGridView1->TabIndex = 94;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Name";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 270;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Employee";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewCheckBoxColumn1
			// 
			this->dataGridViewCheckBoxColumn1->HeaderText = L"Remove";
			this->dataGridViewCheckBoxColumn1->Name = L"dataGridViewCheckBoxColumn1";
			// 
			// Form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 490);
			this->ControlBox = false;
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Location = System::Drawing::Point(620, 100);
			this->MaximizeBox = false;
			this->Name = L"Form6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Restaurant Management System - Installation";
			this->Load += gcnew System::EventHandler(this, &Form6::Form6_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure you want to proceed?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				 if(System::Windows::Forms::DialogResult::Yes == result)
				 {
					 int x=0;
					 while(x!=num)
					 {
						 //String^ p;
						 if(dataGridView1->Rows[x]->Cells[2]->Value)
						 {
							 // p=dataGridView1->Rows[x]->Cells[1]->Value->ToString();

							 String^ constring=L"datasource=localhost;username=root;password=group2";
							 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
							 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("DELETE FROM restman.users WHERE username='"+this->dataGridView1->Rows[x]->Cells[1]->Value+"' ;",conDataBase);

							 MySqlDataReader^ myReader;
							 try
							 {
								 conDataBase->Open();
								 myReader=cmdDataBase->ExecuteReader();

								 while(myReader->Read())
								 {

								 }
								 // num=x2;	//num is now the number of employees
							 }
							 catch(Exception^ex)
							 {
								 MessageBox::Show(ex->Message);
							 }

						 }
						 x++;
					 }
					 Close();
				 }
			 }
private: System::Void Form6_Load(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("SELECT * FROM restman.users WHERE userid > 1;",conDataBase);

			 MySqlDataReader^ myReader;
			 try
			 {
				 conDataBase->Open();
				 myReader=cmdDataBase1->ExecuteReader();
				 String^ Employee_name;
				 String^ Employee_username;
				 int x2=0;
				 while(myReader->Read())
				 {
					 Employee_username=myReader->GetString("username");
					 Employee_name=myReader->GetString("name");
					 dataGridView1->Rows->Add();
					 dataGridView1->Rows[x2]->Cells[0]->Value = Employee_name;
					 dataGridView1->Rows[x2]->Cells[1]->Value = Employee_username;
					 x2++;
				 }
				 num=x2;
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }	
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
               Close();      
		 }
};
}
