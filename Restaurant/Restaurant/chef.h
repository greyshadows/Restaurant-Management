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
	/// Summary for chef
	/// </summary>
	public ref class chef : public System::Windows::Forms::Form
	{
	public:
		chef(void)
		{
			InitializeComponent();
			Fillcombo();
			this->comboBox1->Text = "0";
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~chef()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(38, 57);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &chef::comboBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(55, 135);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"view orders";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &chef::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(295, 106);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(325, 150);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &chef::dataGridView1_CellContentClick);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(55, 223);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Deliver";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &chef::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(56, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Orders Placed";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(384, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"VIEW DETAILS";
			// 
			// chef
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(679, 317);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"chef";
			this->Text = L"chef";
			this->Load += gcnew System::EventHandler(this, &chef::chef_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void chef_Load(System::Object^  sender, System::EventArgs^  e) {
			 }


			 //this function fills the combo box with the distinct values of bill numbers in the orders table for chef which are not yet delivered
			 
	private :void Fillcombo(void){
				 MySqlDataReader^ myReader;
				 String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDataBase=gcnew  MySqlConnection (constring);


				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select DISTINCT bill_no from restaurant.order where status='not_delivered' ;", conDataBase);

				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read()){
						 String ^ name;
						 name=myReader->GetString("bill_no");
						 comboBox1->Items->Add(name);
					 }
				 }

				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }


			 }

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {



			 }

// this function shows all the pending orders of a bill number in the datagrid value 
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 MySqlDataReader^ myReader;
				 int b=System::Convert::ToInt32(this->comboBox1->Text);
				 String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDataBase=gcnew  MySqlConnection (constring);
				 
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select bill_no,`items`, `quantity`, `packing` from restaurant.order where bill_no ='"+this->comboBox1->Text+"';", conDataBase); //this bill number is there from the comobox number 1
				

				 try{
					 MySqlDataAdapter ^sda=gcnew MySqlDataAdapter();
					 sda->SelectCommand =cmdDataBase;
					 DataTable^ dbdataset = gcnew DataTable();
					 sda->Fill(dbdataset);
					 BindingSource^ bSource =gcnew BindingSource();

					 bSource->DataSource =dbdataset;
					 dataGridView1->DataSource =bSource;
					 sda->Update(dbdataset);


				 }

				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }


			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 }

	//update all the orders in the datagrid view from not_deliverd to delivered
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 MySqlDataReader^ myReader;
				 String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDataBase=gcnew  MySqlConnection (constring);
				 // '"+this->comboBox1->Text+"'
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("UPDATE restaurant.order SET status='delivered' where bill_no= '"+this->comboBox1->Text+"';", conDataBase);

				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 comboBox1->Items->Remove(this->comboBox1->Text);
					 this->dataGridView1->DataSource = "";





				 }

				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }


			 }












	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 }
	};
}