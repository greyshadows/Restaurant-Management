#pragma once
#include "genbill.h"
namespace Restaurant {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for MenuCard
	/// </summary>
	public ref class MenuCard : public System::Windows::Forms::Form
	{
	public:
		String^ userName;			//username is the unique id passed from login form
		int number;					//bill number
		MenuCard(String^ s)
		{
			InitializeComponent();
			number=getbillno() + 1;//get bill number will get the last bill number
			userName = s;
			uid=0;
			fillcombo2();	//fills the combobox2 with integers to choose
			bill=0;
			comboBox3->Items->Add("Packed"); 
			comboBox3->Items->Add("Not Packed");  // options of paced or not made available in combox 3
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuCard()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  burger;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  cart;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  beverages;
	private: System::Windows::Forms::Label^  desserts;
	private: System::Windows::Forms::Label^  special;
	private: System::Windows::Forms::Label^  label5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuCard::typeid));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->burger = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cart = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->beverages = (gcnew System::Windows::Forms::Label());
			this->desserts = (gcnew System::Windows::Forms::Label());
			this->special = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(49, 227);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(113, 18);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Packing Status";
			// 
			// burger
			// 
			this->burger->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->burger->AutoSize = true;
			this->burger->BackColor = System::Drawing::Color::Transparent;
			this->burger->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->burger->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->burger->Location = System::Drawing::Point(96, 13);
			this->burger->Name = L"burger";
			this->burger->Size = System::Drawing::Size(90, 21);
			this->burger->TabIndex = 7;
			this->burger->Text = L"Starters";
			this->burger->Click += gcnew System::EventHandler(this, &MenuCard::burger_Click);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(38, 185);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(124, 18);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Number of Items";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(59, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 18);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Price in RS.";
			// 
			// comboBox3
			// 
			this->comboBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(187, 227);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 16;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->AutoSize = true;
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->cart);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Enabled = false;
			this->groupBox1->Location = System::Drawing::Point(117, 121);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(614, 424);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MenuCard::groupBox1_Enter_1);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(502, 309);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Order";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MenuCard::button2_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(187, 181);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(421, 309);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Remove";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuCard::button1_Click);
			// 
			// cart
			// 
			this->cart->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cart->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cart->Location = System::Drawing::Point(116, 266);
			this->cart->Name = L"cart";
			this->cart->Size = System::Drawing::Size(111, 23);
			this->cart->TabIndex = 11;
			this->cart->Text = L"Add To Cart";
			this->cart->UseVisualStyleBackColor = true;
			this->cart->Click += gcnew System::EventHandler(this, &MenuCard::cart_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(147, 309);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 18);
			this->label4->TabIndex = 10;
			this->label4->Text = L"0";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(58, 307);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 18);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Total bill :";
			// 
			// listBox1
			// 
			this->listBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(371, 59);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(206, 208);
			this->listBox1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(167, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 18);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Price in RS.";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(112, 108);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 19);
			this->label1->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(59, 31);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(126, 26);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MenuCard::comboBox1_SelectedIndexChanged);
			// 
			// beverages
			// 
			this->beverages->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->beverages->AutoSize = true;
			this->beverages->BackColor = System::Drawing::Color::Transparent;
			this->beverages->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->beverages->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->beverages->Location = System::Drawing::Point(373, 11);
			this->beverages->Name = L"beverages";
			this->beverages->Size = System::Drawing::Size(107, 21);
			this->beverages->TabIndex = 8;
			this->beverages->Text = L"Beverages";
			this->beverages->Click += gcnew System::EventHandler(this, &MenuCard::beverages_Click);
			// 
			// desserts
			// 
			this->desserts->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->desserts->AutoSize = true;
			this->desserts->BackColor = System::Drawing::Color::Transparent;
			this->desserts->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->desserts->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->desserts->Location = System::Drawing::Point(614, 11);
			this->desserts->Name = L"desserts";
			this->desserts->Size = System::Drawing::Size(91, 21);
			this->desserts->TabIndex = 9;
			this->desserts->Text = L"Desserts";
			this->desserts->Click += gcnew System::EventHandler(this, &MenuCard::desserts_Click);
			// 
			// special
			// 
			this->special->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->special->AutoSize = true;
			this->special->BackColor = System::Drawing::Color::Transparent;
			this->special->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->special->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->special->Location = System::Drawing::Point(200, 69);
			this->special->Name = L"special";
			this->special->Size = System::Drawing::Size(141, 21);
			this->special->TabIndex = 10;
			this->special->Text = L"Special offers";
			this->special->Click += gcnew System::EventHandler(this, &MenuCard::special_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label5->Location = System::Drawing::Point(426, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 21);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Main Course";
			this->label5->Click += gcnew System::EventHandler(this, &MenuCard::label5_Click);
			// 
			// MenuCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(786, 556);
			this->Controls->Add(this->burger);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->beverages);
			this->Controls->Add(this->desserts);
			this->Controls->Add(this->special);
			this->Controls->Add(this->label5);
			this->Name = L"MenuCard";
			this->Text = L"MenuCard";
			this->Load += gcnew System::EventHandler(this, &MenuCard::MenuCard_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuCard_Load(System::Object^  sender, System::EventArgs^  e) {
				 delete_outdated_customers1();//delete the orders of the previous day from the orders table
				 delete_outdated_customers();//delete the customers that have not been there in 30 days
			 }

	//when any of the menu items is clicked the groupbox appears with all its control
	private: System::Void burger_Click(System::Object^  sender, System::EventArgs^  e) {
	/*********************************************/
				
				 comboBox1->Text="";        
				 comboBox1->Items->Clear();
				 comboBox2->Items->Clear();  //all the values are made reset
				 label2->Text = "";
				 comboBox3->Text = "";
				
				 label4->Text = "0";
				 groupBox1->Visible=true;
				 groupBox1->Enabled=true;
				 fillcombo(burger->Text);     //menu of that type is loaded in the combobox
/***********************************************/
				

				
			 }

//whenever an item is selected from the dropbox its price appears in the labelbox
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ comboval=comboBox1->Text;
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from restaurant.menu where itemName='"+comboval+"';",conDataBase); //menu table is searched for getting price of the corresponding item
			 MySqlDataReader^ myreader;


			 try{

				 conDataBase->Open();
				 myreader=cmdDataBase->ExecuteReader();
				 while(myreader->Read())


				 {
					 label2->Text=myreader->GetDouble("itemPrice").ToString();// it appers in the label2
				 }


			 }

			 catch(Exception^ex)
			 {
				 MessageBox ::Show(ex->Message);
			 }
			  conDataBase->Close();
/*****************/		 }
private: double bill;
/*****************/

//depending on the number of stocks the number of items you can order in the combobox appears
private: void fillcombo(String^ xyz){
			 comboBox1->Items->Clear();
			 comboBox2->Items->Clear();
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from restaurant.menu where item_Type='"+xyz+"';",conDataBase);
			 MySqlDataReader^ myreader;
			 try{

				 conDataBase->Open();
				 myreader=cmdDataBase->ExecuteReader();
				 int zero=0;
				 int minPoss = 11;
				 while(myreader->Read())
				 {
					 String^ des;
					 des = myreader->GetString(5);
					 int i=0;
					 int j=0;
					 double amt=0;
					 String^ ingName;
					 int found = 0;
					 minPoss = 11;
					 for(i=0;i<des->Length;i++){
						 found = 0;
						 if(des[i] == '('){
							 ingName = des->Substring(j,i-j);
							 j=i+1;
						 }
						 if(des[i] == ')'){
							 amt = System::Convert::ToDouble(des->Substring(j,i-j));
							 j=i+2;
							 found = 1;
						 }
						 
						 if(found == 1){
							 String^ constring1=L"datasource=localhost;port=3306;username=root;password=abc123";
							 MySqlConnection^ conDataBase1=gcnew MySqlConnection(constring1);
							 //check the number of stocks available
							 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("select itemRem from restaurant.stock where itemName='"+ingName+"';",conDataBase1);
							 MySqlDataReader^ myreader1;
							 try{
								 conDataBase1->Open();
								 myreader1 = cmdDataBase1->ExecuteReader();
								 while(myreader1->Read()){
									 int possNum = 0;
									 double stockLeft = myreader1->GetDouble("itemRem");
									 
									 //calculate the number of items that can be ordered
									 while(stockLeft >= 0){
										 if(stockLeft - amt >= 0){
											 possNum++;
										 }
										 stockLeft = stockLeft - amt;
										
									 }
									 if(possNum < minPoss){
										 minPoss = possNum;
										
									 }

								 }
							 }
							 catch(Exception^ ex){
								 MessageBox::Show(ex->Message,"Error");
							 }
							  conDataBase1->Close();
						 }
						
					 }
					 
					 comboBox2->Items->Clear();
					 if(minPoss != 0){
					 
					 comboBox1->Items->Add( myreader->GetString("itemName"));
					 if(minPoss < 10){
						 for(int e = 1;e<=minPoss;e++){
							 comboBox2->Items->Add(System::Convert::ToString(e));
						 }
					 }else {
						 for(int e = 1;e<=10;e++){
							 comboBox2->Items->Add(System::Convert::ToString(e));
						 }
					 }

					 }
				 }


			 }

			 catch(Exception^ex)
			 {
				 MessageBox ::Show(ex->Message);
			 }
			  conDataBase->Close();

		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }


//each  time add to cart is clicked the item along with quantity is added to the listbox
//also your current bill is updated 
private: System::Void cart_Click(System::Object^  sender, System::EventArgs^  e) {
				
			 String^ str;
			 if(comboBox2->Text=="")
			 {
				  MessageBox ::Show("Please choose number of items");
				  return;
			 }
			 if(comboBox3->Text=="")
			 {
				 MessageBox ::Show("choose packing status please");
				 return;
			 }
			 

//the format in which the text is added in the text box is item_name-quantity-packing stautus-amount of that pack
			str=Convert::ToString(Convert::ToDouble(label2->Text) * Convert::ToDouble(comboBox2->Text));
			
				 listBox1->Items->Add(comboBox1->Text+"-"+  comboBox2->Text+"-"+ comboBox3->Text+"-"+str);
				 bill=bill +  System::Convert::ToDouble(comboBox2->Text) * System::Convert::ToDouble(label2->Text);
				label4->Text=System::Convert::ToString(bill);
		 }


//remove button 
//when this button is clicked the selected item in the list box is remoives from the orders
//and your current bill is updated
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ comboval=listBox1->Text;
			 /**********************************************/
			 String^ delimStr = "-";
			 array<Char>^ delimiter = delimStr->ToCharArray( );
			 array<String^>^ words;
			 words=comboval->Split(delimiter);
			 /***************************************************/
			 listBox1->Items->Remove(listBox1->Text);
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from restaurant.menu where itemName='"+words[0]+"';",conDataBase);
			 MySqlDataReader^ myreader;


			 try{

				 conDataBase->Open();
				 myreader=cmdDataBase->ExecuteReader();
				 while(myreader->Read())


				 {
					 bill= bill - System::Convert::ToDouble( myreader->GetDouble("itemPrice").ToString()) * System::Convert::ToDouble( words[1]);//substracting and updating bill after the item is removed

					 label4->Text=System::Convert::ToString(bill);
				 }


			 }

			 catch(Exception^ex)
			 {
				 MessageBox ::Show(ex->Message);
			 }
			  conDataBase->Close();
/********************************************************************************/

		 }

private: void fillcombo2()
		 {
			 
			 for(int i=1;i<=10;i++)
			 {
				 comboBox2->Items->Add(System::Convert::ToString(i));
			 }

		 }


// all these labels represent menu types 
// on clicking them the group box is activated with respective controls
// appropriate values are loaded in the comboboxes
/**************************************************************************/
private: System::Void beverages_Click(System::Object^  sender, System::EventArgs^  e) {
			// color("beverages");
			 comboBox1->Text="";
			 comboBox1->Items->Clear();
			 comboBox2->Items->Clear();
			 groupBox1->Visible=true;
			 groupBox1->Enabled=true;
			 label2->Text = "";
			 comboBox3->Text = "";
			
			 label4->Text = "0";
			 fillcombo(beverages->Text);
		 }
private: System::Void desserts_Click(System::Object^  sender, System::EventArgs^  e) {
			 //color("desserts");
			 comboBox1->Text="";
			 comboBox1->Items->Clear();
			 comboBox2->Items->Clear();
			 groupBox1->Visible=true;
			 groupBox1->Enabled=true;
			 label2->Text = "";
			 comboBox3->Text = "";
		
			 label4->Text = "0";
			 fillcombo(desserts->Text);
		 }
private: System::Void special_Click(System::Object^  sender, System::EventArgs^  e) {
			// color("special");
			 comboBox1->Text="";
			 comboBox1->Items->Clear();
			 comboBox2->Items->Clear();
			 groupBox1->Visible=true;
			 groupBox1->Enabled=true;
			 label2->Text = "";
			 comboBox3->Text = "";
			 label4->Text = "0";
			 fillcombo(special->Text);
		 }

/*****************************************************************/


		 private: int uid;


  //this is the order button 
  //when this button is clicked all the items in the list box are added to the order database
  // and the bill appears on the screen with the discount details 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(listBox1->Items->Count != 0){
				 if(MessageBox::Show("Are you sure you wan't to place this order?","Place Order",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes){
			 /*****************************/
			 String^ table_number="21";
			 System::DateTime^ now = System::DateTime::Now;
			
			 /****************************/
			
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			/**************************************************/
			
			 /***************************************/
			 String^ delimStr = "-";
			 array<Char>^ delimiter = delimStr->ToCharArray( );
			 array<String^>^ words;
			 String^ xyz;
			 /************************************/
			  int x=listBox1->Items->Count;
			  conDataBase->Open();
			  MySqlDataReader^ myreader2;
			  DateTime^ cdate = DateTime::Now;
			  String^ sqldate = System::Convert::ToString(cdate->Year) + "-" + System::Convert::ToString(cdate->Month) + "-" + System::Convert::ToString(cdate->Day);
			  MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("Select bill_no from restaurant.order Where Date = CURDATE() Order By bill_no Desc Limit 1;",conDataBase);
			  myreader2 = cmdDataBase2->ExecuteReader();
			  int bill_num = 1;
			  while(myreader2->Read()){
				  //reads the previous bill number and increment it
				  bill_num = myreader2->GetInt32(0) + 1;
			  }
			  conDataBase->Close();
			  
			  for(int i=0; i<x; i++)
			  {
				 //items are added to the orders table by iterating over the listbox
				xyz=System::Convert::ToString(listBox1->Items[i]);
				words=xyz->Split(delimiter);
				String^ status="not_delivered";
				MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("insert into restaurant.order (customer_id,bill_no,Date,Time,items,quantity,packing,status) values('"+System::Convert::ToInt32(userName)+"',"+bill_num+",'"+sqldate+"',CURTIME(),'"+words[0]+"','"+words[1]+"','"+words[2]+"','"+status+"');",conDataBase);
				
			   

			 try{
				 conDataBase->Open();
				 myreader2=cmdDataBase2->ExecuteReader();
			 }

			 catch(Exception^ex)
			 {
				 MessageBox ::Show(ex->Message);
			 }
			 myreader2->Close();
			 conDataBase->Close();
			 String^ des;
			 cmdDataBase2 = gcnew MySqlCommand("Select itemIng from restaurant.menu where itemName = '"+words[0]+"';",conDataBase);
			 try{
			 conDataBase->Open();
			 myreader2=cmdDataBase2->ExecuteReader();
			 while(myreader2->Read()){
				 des = myreader2->GetString(0);
			 }
			 int i=0;
			 int j=0;
			 double amt=0;
			 String^ ingName;
			 int found = 0;
			 
			 for(i=0;i<des->Length;i++){
				 found = 0;
				 if(des[i] == '('){
					 ingName = des->Substring(j,i-j);
					 j=i+1;
				 }
				 if(des[i] == ')'){
					 amt = System::Convert::ToDouble(des->Substring(j,i-j));
					 j=i+2;
					 found = 1;
				 }
				 if(found == 1){
					 //update stock avalable in the stock table
				  amt = (amt * System::Convert::ToDouble(words[1]));
				  String^ constring1=L"datasource=localhost;port=3306;username=root;password=abc123";
				  MySqlConnection^ conDataBase1=gcnew MySqlConnection(constring1);
				  MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("UPDATE `restaurant`.`stock` SET `itemRem` = `itemRem` - "+amt+",`itemUsed` = `itemUsed` + "+amt+",`totalUsed` = `totalUsed` + "+amt+" WHERE `stock`.`itemName` = '"+ingName+"';",conDataBase1 );
				  MySqlDataReader^ myreader3;
				  try{
					  conDataBase1->Open();
					  myreader3 = cmdDataBase3->ExecuteReader();
				  }
				  catch(Exception^ ex){
					  MessageBox::Show(ex->Message,"Error");
				  }
				  conDataBase1->Close();
				}
			 }
			} 
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message,"Error");
			 }
			 conDataBase->Close();
			  }
			listBox1->Items->Clear();
			/************STOCK REDUCTION*****************************/
			
			
			

			/************GIVING DISCOUNT*****************************/
			double b=System::Convert::ToDouble(label4->Text);
			//int birthdaydisc=0;
			double c=b;
			System::DateTime^ no = System::DateTime::Now;
			String^ date=System::Convert::ToString(no->Month) + "/" + System::Convert::ToString(no->Day);
			

			int freq=give_frequency(); //finding frequency of a customer to check wheter to give discount or not
			int bd=0;
			int ap=0;
			int st=0;
			int vt=0;
			int fq = 0;
			int q = 0;
			DateTime^ birth=get_birthday(); //get the birthday of the customer to check for birthday discount
			String^ des="";
			for(q = 0; q<listBox1->Items->Count ; q++){
				des = des + listBox1->Items[q]->ToString() + ",";
			}
			String^ fgh=System::Convert::ToString(birth->Month) + "/" + System::Convert::ToString(birth->Day);
					
			if(date==fgh) // if the birthday === todays date give discount
			{
				bd=getbirthdaydisc();
				b=b-(bd*b/100);
			}
			fq = b;
			b=getfreqdisc(freq,b,c); //giving discount based on frequency
			fq = fq - b;
			if(comboBox3->Text=="Packed")
			{
				ap=after_packing(b);
				b=b-ap;
			}
			
			st=(c*serviceTax()/100); //applying service tax
			b=b+st;


			vt=(c*VAT()/100); // applying vat
			b=b+VAT();	


			

		
		//update the last visit time to current time for a customer
		cmdDataBase2 = gcnew MySqlCommand("UPDATE `restaurant`.`customer_id` SET last_visit = NOW(), frequency = frequency + 1 WHERE `idcustomer_id` = '"+System::Convert::ToInt32(userName)+"';",conDataBase);
		conDataBase->Open();
		myreader2 = cmdDataBase2->ExecuteReader();
		conDataBase->Close();
		groupBox1->Visible=false;
		groupBox1->Enabled=false;
		this->Hide();		
		genbill^ fff=gcnew genbill(c,userName,b,number,date,vt,st,bd,ap,fq);
		fff->ShowDialog();
		}
		}else{
			MessageBox::Show("Add an item to the cart","Error");
		 }
	}
	// this function will simply delete the customers not visisted from the past 1 month
	private: void delete_outdated_customers()
			 {
				 String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("DELETE FROM restaurant.customer_id WHERE last_visit < NOW() - INTERVAL 30 DAY;",conDataBase);// check for all the entries who have not been there in the last 30 days
				 MySqlDataReader^ myreader2;


				 try{

					 conDataBase->Open();
					 myreader2=cmdDataBase2->ExecuteReader();
					 while(myreader2->Read())


					 {

					 }


				 }

				 catch(Exception^ex)
				 {
					 MessageBox ::Show(ex->Message);
				 }
			 }


	//delete all the orders of the previous day so that the database size does not become full
 private: void delete_outdated_customers1()
				  {
					  String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
					  MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					  MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("DELETE FROM restaurant.order WHERE Date < CURDATE() - INTERVAL 1 DAY;",conDataBase);
					  MySqlDataReader^ myreader2;


					  try{

						  conDataBase->Open();
						  myreader2=cmdDataBase2->ExecuteReader();
						  while(myreader2->Read())


						  {

						  }


					  }

					  catch(Exception^ex)
					  {
						  MessageBox ::Show(ex->Message);
					  }
					   conDataBase->Close();
		  
		  }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
			 comboBox1->Text="";
			 comboBox1->Items->Clear();
			 groupBox1->Visible=true;
			 comboBox2->Items->Clear();
			 groupBox1->Enabled=true;
			 label2->Text = "";
			 comboBox3->Text = "";
			 label4->Text = "0";
			 fillcombo(label5->Text);
		 }
// returns the frequency of the a customer id =username
private:int  give_frequency(void)
				 {
					 int freq;
					// DateTime birth;
					 String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("select * from restaurant.customer_id where idcustomer_id="+System::Convert::ToInt32(userName)+";",conDataBase);
					 MySqlDataReader^ myreader2;


					 try{

						 conDataBase->Open();
						 myreader2=cmdDataBase2->ExecuteReader();
						 while(myreader2->Read())


						 {
							 freq=myreader2->GetInt32("frequency");
							 //birth=myreader2->GetDateTime("birthdate");
						 }


					 }

					 catch(Exception^ex)
					 {
						 MessageBox ::Show(ex->Message);
					 }
					 conDataBase->Close();
					 return freq;
				 }


		//get birthday of a customer with id username
private: DateTime^ get_birthday(void)
{
	//int freq;
	 DateTime^ birth;
	String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
	MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("select * from restaurant.customer_id where idcustomer_id="+System::Convert::ToInt32(userName)+";",conDataBase);
	MySqlDataReader^ myreader2;


	try{

		conDataBase->Open();
		myreader2=cmdDataBase2->ExecuteReader();
		while(myreader2->Read())


		{
			
			birth = myreader2->GetDateTime("birthdate");
			
		}


	}

	catch(Exception^ex)
	{
		MessageBox ::Show(ex->Message);
	}
	 conDataBase->Close();
	return birth;
}

		 //if the birthday of the customer is same as the current date yhen give the discount
		 //discount is taken from the discount table
private:int getbirthdaydisc()
		{
			int amount;
			String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
			MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("select * from restaurant.discount where name='Birthday';",conDataBase);
			MySqlDataReader^ myreader2;


			try{

				conDataBase->Open();
				myreader2=cmdDataBase2->ExecuteReader();
				while(myreader2->Read())


				{
				 amount=myreader2->GetInt32("amount");
				}


			}

			catch(Exception^ex)
			{
				MessageBox ::Show(ex->Message);
			}
			 conDataBase->Close();
			return amount;
		}


	// this function gives discount on the basis of the frequency of the customer 
	//the lower bound of the frequency is store by the manager in the discount table
		private:double getfreqdisc(int q,double r,double c)
				{
					int amount;
					double am;
					int number;
					String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
					MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("select * from restaurant.discount where name='Frequency';",conDataBase);
					MySqlDataReader^ myreader2;

					 
					try{

						conDataBase->Open();
						myreader2=cmdDataBase2->ExecuteReader();
						while(myreader2->Read())
						{
							amount=myreader2->GetInt32("amount");
							am=System::Convert::ToDouble(amount);
							number=myreader2->GetInt32("number");
						}


					}

					catch(Exception^ex)
					{
						MessageBox ::Show(ex->Message);
					}
					 conDataBase->Close();
					if(q>=number)
					{
						return (r-(amount*r/100));
					}
					else

					{
						return r;
					}
				}
				private:int VAT()
						{	int amount;
						String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
						MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
						MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("select * from restaurant.discount where name='VAT';",conDataBase);
						MySqlDataReader^ myreader2;


						try{

							conDataBase->Open();
							myreader2=cmdDataBase2->ExecuteReader();
							while(myreader2->Read())


							{
								amount=myreader2->GetInt32("amount");
								//am=System::Convert::ToDouble(amount);
								//number=myreader2->GetInt32("number");
							}


						}

						catch(Exception^ex)
						{
							MessageBox ::Show(ex->Message);
						}
						return amount;
						}


						private:int serviceTax()
								{	int amount;
								String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
								MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
								MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("select * from restaurant.discount where name='Service Tax';",conDataBase);
								MySqlDataReader^ myreader2;


								try{

									conDataBase->Open();
									myreader2=cmdDataBase2->ExecuteReader();
									while(myreader2->Read())


									{
										amount=myreader2->GetInt32("amount");
										
									}


								}

								catch(Exception^ex)
								{
									MessageBox ::Show(ex->Message);
								}
								return amount;
								}

		//if packing is chosen by the the customer then the cost of packing is added to the bill

//the cost of packing is set by the manager
private:double after_packing(double c)
		{	int amount;
			String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
			MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("select * from restaurant.discount where name='Packing';",conDataBase);
			MySqlDataReader^ myreader2;


			try{

				conDataBase->Open();
				myreader2=cmdDataBase2->ExecuteReader();
				while(myreader2->Read())


				{
					amount=myreader2->GetInt32("amount");
					
				}


			}

			catch(Exception^ex)
			{
				MessageBox ::Show(ex->Message);
			}
			 conDataBase->Close();
			return amount;
		}


		//this function checks for the maximum value of the bill in the orders placed
		private:int getbillno()
				{
					int bill;
					String^ constring=L"datasource=localhost;port=3306;username=root;password=abc123";
					MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("SELECT MAX(bill_no) FROM restaurant.order;",conDataBase);//sql query for selecting max value in bill no. column
					MySqlDataReader^ myreader2;


					try{

						conDataBase->Open();
						myreader2=cmdDataBase2->ExecuteReader();

						myreader2->Read();
						bill=myreader2->GetInt32(0);
						//MessageBox::Show(System::Convert::ToString(bill));


					}

					catch(Exception^ex)
					{
						MessageBox ::Show(ex->Message);
					}

					return bill;
				}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox1_Enter_1(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
