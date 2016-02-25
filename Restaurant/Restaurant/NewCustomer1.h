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
	/// Summary for NewCustomer
	/// </summary>
	public ref class NewCustomer : public System::Windows::Forms::Form
	{
	public:
		NewCustomer(void)
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
		~NewCustomer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	protected: 
	private: System::Windows::Forms::TextBox^  mobile_txt;
	private: System::Windows::Forms::TextBox^  name_txt;
	private: System::Windows::Forms::Button^  generate_button;
	private: System::Windows::Forms::Label^  dob_lbl;
	private: System::Windows::Forms::Label^  warning_lbl;
	private: System::Windows::Forms::Label^  number_lbl;
	private: System::Windows::Forms::Label^  name_lbl;

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
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->mobile_txt = (gcnew System::Windows::Forms::TextBox());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->generate_button = (gcnew System::Windows::Forms::Button());
			this->dob_lbl = (gcnew System::Windows::Forms::Label());
			this->warning_lbl = (gcnew System::Windows::Forms::Label());
			this->number_lbl = (gcnew System::Windows::Forms::Label());
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(126, 121);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(146, 20);
			this->dateTimePicker1->TabIndex = 15;
			// 
			// mobile_txt
			// 
			this->mobile_txt->Location = System::Drawing::Point(126, 87);
			this->mobile_txt->Name = L"mobile_txt";
			this->mobile_txt->Size = System::Drawing::Size(146, 20);
			this->mobile_txt->TabIndex = 14;
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(126, 60);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(146, 20);
			this->name_txt->TabIndex = 13;
			// 
			// generate_button
			// 
			this->generate_button->Location = System::Drawing::Point(88, 156);
			this->generate_button->Name = L"generate_button";
			this->generate_button->Size = System::Drawing::Size(147, 24);
			this->generate_button->TabIndex = 12;
			this->generate_button->Text = L"Generate Customer Card";
			this->generate_button->UseVisualStyleBackColor = true;
			this->generate_button->Click += gcnew System::EventHandler(this, &NewCustomer::generate_button_Click);
			// 
			// dob_lbl
			// 
			this->dob_lbl->AutoSize = true;
			this->dob_lbl->Location = System::Drawing::Point(52, 121);
			this->dob_lbl->Name = L"dob_lbl";
			this->dob_lbl->Size = System::Drawing::Size(68, 13);
			this->dob_lbl->TabIndex = 11;
			this->dob_lbl->Text = L"Date Of Birth";
			// 
			// warning_lbl
			// 
			this->warning_lbl->AutoSize = true;
			this->warning_lbl->Location = System::Drawing::Point(278, 90);
			this->warning_lbl->Name = L"warning_lbl";
			this->warning_lbl->Size = System::Drawing::Size(208, 13);
			this->warning_lbl->TabIndex = 10;
			this->warning_lbl->Text = L"mobile number should be a 10 digit number";
			// 
			// number_lbl
			// 
			this->number_lbl->AutoSize = true;
			this->number_lbl->Location = System::Drawing::Point(62, 94);
			this->number_lbl->Name = L"number_lbl";
			this->number_lbl->Size = System::Drawing::Size(58, 13);
			this->number_lbl->TabIndex = 9;
			this->number_lbl->Text = L"Mobile No.";
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->Location = System::Drawing::Point(85, 67);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(35, 13);
			this->name_lbl->TabIndex = 8;
			this->name_lbl->Text = L"Name";
			// 
			// NewCustomer
			// 
			this->AcceptButton = this->generate_button;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(504, 262);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->mobile_txt);
			this->Controls->Add(this->name_txt);
			this->Controls->Add(this->generate_button);
			this->Controls->Add(this->dob_lbl);
			this->Controls->Add(this->warning_lbl);
			this->Controls->Add(this->number_lbl);
			this->Controls->Add(this->name_lbl);
			this->Name = L"NewCustomer";
			this->Text = L"f";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &NewCustomer::NewCustomer_FormClosing);
			this->Load += gcnew System::EventHandler(this, &NewCustomer::NewCustomer_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: System::Void showLogin();

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
	private: System::Void generate_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 //String^ strVar_id;
				 int var_id=100000;int count=0;
				 String^ constring=L"datasource=localhost;username=root;password=abc123";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);			 
				 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("select max(idcustomer_id) as idcustomer_id from restaurant.customer_id;",conDataBase);
				 MySqlDataReader^ myReader1;
				 try{
					 conDataBase->Open();
					 myReader1=cmdDataBase1->ExecuteReader();
					 while(myReader1->Read()){
						 var_id=(myReader1->GetInt32(0))+1;}		
					 //strVar_id=System::Convert::ToString(var_id);				 
					 //MessageBox::Show(System::Convert::ToString(var_id));
				 }catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }	
				 conDataBase->Close();
				 DateTime^ curr = DateTime::Now;
				 String^ sqldate = System::Convert::ToString(dateTimePicker1->Value.Year) + "-" + System::Convert::ToString(dateTimePicker1->Value.Month) + "-" + System::Convert::ToString(dateTimePicker1->Value.Day);
				 String^ currdate = System::Convert::ToString(curr->Year) + "-" + System::Convert::ToString(curr->Month) + "-" + System::Convert::ToString(curr->Day) + " " + System::Convert::ToString(curr->Hour) + ":" + System::Convert::ToString(curr->Minute) + ":" + System::Convert::ToString(curr->Second);
				 if(mobile_txt->Text!="" && is_number(mobile_txt->Text) && mobile_txt->Text->Length == 10){
					 if(var_id!=100000){
						 MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("select * from restaurant.customer_id where mobile='"+this->mobile_txt->Text+"';",conDataBase);
						 MySqlDataReader^ myReader2;
						 try{
							 conDataBase->Open();
							 myReader2=cmdDataBase2->ExecuteReader();
							 while(myReader2->Read()){
								 count=count+1;
							 }
						 }catch(Exception^ex){

							 MessageBox::Show(ex->Message);
						 }
						 conDataBase->Close();}
					 if(count==0){
						 if(name_txt->Text!=""){
							 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("INSERT INTO restaurant.customer_id (idcustomer_id,name,mobile,birthdate,password,last_visit,frequency) values('"+var_id+"','"+this->name_txt->Text+"','"+this->mobile_txt->Text+"','"+sqldate+"','"+this->mobile_txt->Text+"','"+currdate+"','"+"0"+"') ;",conDataBase);
							 MySqlDataReader^ myReader;
							 try{
								 conDataBase->Open();
								 myReader=cmdDataBase->ExecuteReader();

							 }catch(Exception^ex){

								 MessageBox::Show(ex->Message);
							 }
							 conDataBase->Close();
							 cmdDataBase=gcnew MySqlCommand("INSERT INTO restaurant.employee_id (username,name,designation,password) values('"+System::Convert::ToString(var_id)+"','"+this->name_txt->Text+"','Customer','"+this->mobile_txt->Text+"') ;",conDataBase);
							 try{
								 conDataBase->Open();
								 myReader=cmdDataBase->ExecuteReader();

							 }catch(Exception^ex){

								 MessageBox::Show(ex->Message);
							 }
							 conDataBase->Close();
							 MessageBox::Show("Your username is : "+var_id+" and password is : "+mobile_txt->Text);
							 showLogin();
							 this->Hide();
						 }
						 else MessageBox::Show("Please enter a name");
					 }
					 else MessageBox::Show("You already have a registered mobile number.....Try Again");
				 }
				 else MessageBox::Show("Please enter a 10 digit mobile number");
			 }
	private: System::Void NewCustomer_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void NewCustomer_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 showLogin();
		 }
};
}
