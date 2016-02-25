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
	/// Summary for ChangePass
	/// </summary>
	public ref class ChangePass : public System::Windows::Forms::Form
	{
	public:
		ChangePass(void)
		{
			InitializeComponent();
			oldpass_txt->PasswordChar='*';
			newpass_txt->PasswordChar='*';
			renewpass_txt->PasswordChar='*';
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ChangePass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  cngpass_txt;
	protected: 
	private: System::Windows::Forms::ComboBox^  design_list;
	private: System::Windows::Forms::TextBox^  renewpass_txt;
	private: System::Windows::Forms::TextBox^  newpass_txt;
	private: System::Windows::Forms::TextBox^  oldpass_txt;
	private: System::Windows::Forms::TextBox^  user_txt;
	private: System::Windows::Forms::Label^  Design_lbl;
	private: System::Windows::Forms::Label^  ReNewPass_lbl;
	private: System::Windows::Forms::Label^  NewPass_lbl;
	private: System::Windows::Forms::Label^  OldPass_lbl;
	private: System::Windows::Forms::Label^  user_lbl;

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
			this->cngpass_txt = (gcnew System::Windows::Forms::Button());
			this->design_list = (gcnew System::Windows::Forms::ComboBox());
			this->renewpass_txt = (gcnew System::Windows::Forms::TextBox());
			this->newpass_txt = (gcnew System::Windows::Forms::TextBox());
			this->oldpass_txt = (gcnew System::Windows::Forms::TextBox());
			this->user_txt = (gcnew System::Windows::Forms::TextBox());
			this->Design_lbl = (gcnew System::Windows::Forms::Label());
			this->ReNewPass_lbl = (gcnew System::Windows::Forms::Label());
			this->NewPass_lbl = (gcnew System::Windows::Forms::Label());
			this->OldPass_lbl = (gcnew System::Windows::Forms::Label());
			this->user_lbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cngpass_txt
			// 
			this->cngpass_txt->Location = System::Drawing::Point(73, 187);
			this->cngpass_txt->Name = L"cngpass_txt";
			this->cngpass_txt->Size = System::Drawing::Size(105, 23);
			this->cngpass_txt->TabIndex = 21;
			this->cngpass_txt->Text = L"Change Password";
			this->cngpass_txt->UseVisualStyleBackColor = true;
			this->cngpass_txt->Click += gcnew System::EventHandler(this, &ChangePass::cngpass_txt_Click);
			// 
			// design_list
			// 
			this->design_list->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->design_list->FormattingEnabled = true;
			this->design_list->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Manager", L"Chef", L"Customer"});
			this->design_list->Location = System::Drawing::Point(165, 149);
			this->design_list->Name = L"design_list";
			this->design_list->Size = System::Drawing::Size(100, 21);
			this->design_list->TabIndex = 20;
			// 
			// renewpass_txt
			// 
			this->renewpass_txt->Location = System::Drawing::Point(165, 123);
			this->renewpass_txt->Name = L"renewpass_txt";
			this->renewpass_txt->Size = System::Drawing::Size(100, 20);
			this->renewpass_txt->TabIndex = 19;
			// 
			// newpass_txt
			// 
			this->newpass_txt->Location = System::Drawing::Point(165, 97);
			this->newpass_txt->Name = L"newpass_txt";
			this->newpass_txt->Size = System::Drawing::Size(100, 20);
			this->newpass_txt->TabIndex = 18;
			// 
			// oldpass_txt
			// 
			this->oldpass_txt->Location = System::Drawing::Point(165, 71);
			this->oldpass_txt->Name = L"oldpass_txt";
			this->oldpass_txt->Size = System::Drawing::Size(100, 20);
			this->oldpass_txt->TabIndex = 17;
			// 
			// user_txt
			// 
			this->user_txt->Location = System::Drawing::Point(165, 45);
			this->user_txt->Name = L"user_txt";
			this->user_txt->Size = System::Drawing::Size(100, 20);
			this->user_txt->TabIndex = 16;
			// 
			// Design_lbl
			// 
			this->Design_lbl->AutoSize = true;
			this->Design_lbl->Location = System::Drawing::Point(70, 149);
			this->Design_lbl->Name = L"Design_lbl";
			this->Design_lbl->Size = System::Drawing::Size(63, 13);
			this->Design_lbl->TabIndex = 15;
			this->Design_lbl->Text = L"Designation";
			// 
			// ReNewPass_lbl
			// 
			this->ReNewPass_lbl->AutoSize = true;
			this->ReNewPass_lbl->Location = System::Drawing::Point(5, 123);
			this->ReNewPass_lbl->Name = L"ReNewPass_lbl";
			this->ReNewPass_lbl->Size = System::Drawing::Size(128, 13);
			this->ReNewPass_lbl->TabIndex = 14;
			this->ReNewPass_lbl->Text = L"Re-enter New Paassword";
			// 
			// NewPass_lbl
			// 
			this->NewPass_lbl->AutoSize = true;
			this->NewPass_lbl->Location = System::Drawing::Point(55, 97);
			this->NewPass_lbl->Name = L"NewPass_lbl";
			this->NewPass_lbl->Size = System::Drawing::Size(78, 13);
			this->NewPass_lbl->TabIndex = 13;
			this->NewPass_lbl->Text = L"New Password";
			// 
			// OldPass_lbl
			// 
			this->OldPass_lbl->AutoSize = true;
			this->OldPass_lbl->Location = System::Drawing::Point(61, 71);
			this->OldPass_lbl->Name = L"OldPass_lbl";
			this->OldPass_lbl->Size = System::Drawing::Size(72, 13);
			this->OldPass_lbl->TabIndex = 12;
			this->OldPass_lbl->Text = L"Old Password";
			// 
			// user_lbl
			// 
			this->user_lbl->AutoSize = true;
			this->user_lbl->Location = System::Drawing::Point(78, 45);
			this->user_lbl->Name = L"user_lbl";
			this->user_lbl->Size = System::Drawing::Size(55, 13);
			this->user_lbl->TabIndex = 11;
			this->user_lbl->Text = L"Username";
			// 
			// ChangePass
			// 
			this->AcceptButton = this->cngpass_txt;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->cngpass_txt);
			this->Controls->Add(this->design_list);
			this->Controls->Add(this->renewpass_txt);
			this->Controls->Add(this->newpass_txt);
			this->Controls->Add(this->oldpass_txt);
			this->Controls->Add(this->user_txt);
			this->Controls->Add(this->Design_lbl);
			this->Controls->Add(this->ReNewPass_lbl);
			this->Controls->Add(this->NewPass_lbl);
			this->Controls->Add(this->OldPass_lbl);
			this->Controls->Add(this->user_lbl);
			this->Name = L"ChangePass";
			this->Text = L"ChangePass";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ChangePass::Change_FormClosing);
			this->Load += gcnew System::EventHandler(this, &ChangePass::Change_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void showLogin();
	private: System::Void cngpass_txt_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(user_txt->Text==""||oldpass_txt->Text==""||newpass_txt->Text==""||renewpass_txt->Text==""){
					 MessageBox::Show("Please fill all the details....Try Again");
				 }
				 else if(newpass_txt->Text!=renewpass_txt->Text){
					 MessageBox::Show("Your New password and Re-enter New password do not match...Try Again ");}
				 else{
					 String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from restaurant.employee_id where username='"+this->user_txt->Text+"' and password='"+this->oldpass_txt->Text+"' and designation='"+this->design_list->Text+"' ;",conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader=cmdDataBase->ExecuteReader();
						 int count=0;
						 while(myReader->Read()){
							 count=count+1;
						 }
						 if (count==1){

							 MessageBox::Show("Your password is successfully changed");
							 conDataBase->Close();
							 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("update restaurant.employee_id set password='"+this->newpass_txt->Text+"'where username='"+this->user_txt->Text+"';",conDataBase);
							 MySqlDataReader^ myReader1;
							 try{
								 conDataBase->Open();
								 myReader1=cmdDataBase1->ExecuteReader();
							 }catch(Exception^ex){

								 MessageBox::Show(ex->Message);
							 }
							 conDataBase->Close();
							 cmdDataBase1=gcnew MySqlCommand("update restaurant.customer_id set password='"+this->newpass_txt->Text+"'where idcustomer_id="+System::Convert::ToInt32(this->user_txt->Text)+";",conDataBase);
							 try{
								 conDataBase->Open();
								 myReader1=cmdDataBase1->ExecuteReader();
							 }catch(Exception^ex){

								 MessageBox::Show(ex->Message);
							 }
							 conDataBase->Close();
							 showLogin();
							 this->Hide();

						 }
						 else  MessageBox::Show("Details entered are not correct.....Try Again");

					 }catch(Exception^ex){

						 MessageBox::Show(ex->Message);
					 }
					 conDataBase->Close();

				 }
			 }

private: System::Void Change_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 showLogin();
		 }
private: System::Void Change_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
