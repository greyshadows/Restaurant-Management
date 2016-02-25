#pragma once
#include "about.h"
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
	/// Summary for menu
	/// </summary>
	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		menu(void)
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
		~menu()
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
	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  guideToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;






	protected: 




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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(12, 38);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(848, 163);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &menu::listView1_SelectedIndexChanged_2);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Name";
			this->columnHeader1->Width = 153;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Description";
			this->columnHeader2->Width = 524;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Price";
			this->columnHeader3->Width = 111;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Type";
			this->columnHeader4->Width = 110;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(12, 207);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(848, 41);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add New Item";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &menu::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(534, 304);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 147);
			this->listBox1->TabIndex = 12;
			this->listBox1->Visible = false;
			// 
			// listBox2
			// 
			this->listBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(740, 304);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(120, 147);
			this->listBox2->TabIndex = 13;
			this->listBox2->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(107, 314);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(286, 20);
			this->textBox1->TabIndex = 15;
			this->textBox1->Visible = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->richTextBox1->Location = System::Drawing::Point(107, 354);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(286, 70);
			this->richTextBox1->TabIndex = 16;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Location = System::Drawing::Point(107, 516);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(91, 20);
			this->textBox2->TabIndex = 17;
			this->textBox2->Text = L"0";
			this->textBox2->Visible = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &menu::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 314);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Name";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 367);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 20);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Description";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(439, 367);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 20);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Ingredients";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(8, 448);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 20);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Ingredient ";
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &menu::label4_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(26, 516);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 20);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Price";
			this->label5->Visible = false;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Location = System::Drawing::Point(660, 358);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 40);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &menu::button2_Click);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(26, 468);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 20);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Price ";
			this->label6->Visible = false;
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Location = System::Drawing::Point(660, 411);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(71, 40);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Remove";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &menu::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->Location = System::Drawing::Point(660, 332);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(71, 20);
			this->textBox3->TabIndex = 26;
			this->textBox3->Text = L"0";
			this->textBox3->Visible = false;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(672, 314);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Amount";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(104, 455);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 18);
			this->label8->TabIndex = 28;
			this->label8->Text = L"label8";
			this->label8->Visible = false;
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->Location = System::Drawing::Point(333, 537);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(262, 31);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Add to Menu List";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &menu::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->Location = System::Drawing::Point(484, 537);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(152, 31);
			this->button5->TabIndex = 30;
			this->button5->Text = L"Edit";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &menu::button5_Click);
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(12, 272);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(23, 20);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Id";
			this->label10->Visible = false;
			this->label10->Click += gcnew System::EventHandler(this, &menu::label10_Click);
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(104, 274);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 18);
			this->label9->TabIndex = 33;
			this->label9->Text = L"Id";
			this->label9->Visible = false;
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->Location = System::Drawing::Point(333, 537);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(145, 31);
			this->button6->TabIndex = 34;
			this->button6->Text = L"Delete";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &menu::button6_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->homeToolStripMenuItem, 
				this->helpToolStripMenuItem, this->quitToolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(2, 2);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(146, 24);
			this->menuStrip1->TabIndex = 35;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->homeToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->homeToolStripMenuItem->Text = L"&Home";
			this->homeToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::homeToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->aboutToolStripMenuItem, 
				this->guideToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::helpToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::aboutToolStripMenuItem_Click);
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
			this->quitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &menu::quitToolStripMenuItem1_Click);
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(485, 477);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 20);
			this->label11->TabIndex = 36;
			this->label11->Text = L"Type";
			this->label11->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Starters", L"Beverages", L"Main Course", L"Dessert", 
				L"Special Offer"});
			this->comboBox1->Location = System::Drawing::Point(534, 479);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(187, 21);
			this->comboBox1->TabIndex = 37;
			this->comboBox1->Visible = false;
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(872, 580);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Name = L"menu";
			this->Text = L"menu";
			this->Load += gcnew System::EventHandler(this, &menu::menu_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Boolean is_number(String^ s)
				 {
					 char it = s[0];
					 int num=0;
					 int decPoint = 0;
					 while (num != s->Length){
						 it = s[num];
						 if(it == '.' && decPoint == 0){
							 decPoint = 1;
							 num++;
							 continue;
						 }
						 if(!isdigit(it)){
							 break;
						 }
						 num++;
					 }
					 return !(s == "") && num == s->Length ;
				 }

	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
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
						 objName->SubItems->Add(myReader->GetString(4));
						 i++;
					 }
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 conDatabase->Close();
			 
			}
	private: System::Void menu_Load(System::Object^  sender, System::EventArgs^  e) {
				 fillList();
			 }
			 
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private:System::Void fillForm(){
				String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
				MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT `itemName` FROM `restaurant`.`stock`;",conDatabase);
				MySqlDataReader^ myReader;
				try{
					conDatabase->Open();
					myReader = cmdDatabase->ExecuteReader();
					listBox1->Items->Clear();
					listBox2->Items->Clear();
					while(myReader->Read()){
						listBox1->Items->Add(myReader->GetString(0));
					}
					if(listBox1->Items->Count != 0){
						listBox1->SelectedIndex = 0;
					}
				}
				catch(Exception^ ex){
					MessageBox::Show(ex->Message);
				}
				conDatabase->Close();
			}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 fillForm();
				 label8->Text = "0";
				 label1->Visible = true;
				 label2->Visible = true;
				 label3->Visible = true;
				 label4->Visible = true;
				 label5->Visible = true;
				 label6->Visible = true;
				 label7->Visible = true;
				 label8->Visible = true;
				 label9->Visible = false;
				 label10->Visible = false;
				 textBox1->Visible = true;
				 textBox2->Visible = true;
				 textBox3->Visible = true;
				 richTextBox1->Visible = true;
				 listBox1->Visible = true;
				 listBox2->Visible = true;
				 button2->Visible = true;
				 button3->Visible = true;
				 button4->Visible = true;
				 button5->Visible = false;
				 button6->Visible=false;
				 textBox3->Text = "0";
				 textBox1->Text = "";
				 textBox2->Text = "0";
				 richTextBox1->Text = "";
				 comboBox1->Text = "";
				label11->Visible = true;
				comboBox1->Visible = true;
			
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(!is_number(textBox3->Text) || textBox3->Text == "0"){
				 MessageBox::Show("Amount can only be a Positive Number","Error");
				 textBox3->Text = "0";
			 }else{
				 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
				 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT `pricePer` FROM `restaurant`.`stock` WHERE `stock`.`itemName` = '"+listBox1->Text+"';",conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						 label8->Text = System::Convert::ToString(System::Convert::ToDouble(label8->Text) +  System::Convert::ToDouble(textBox3->Text)*myReader->GetInt32(0));
					 }

					 listBox2->Items->Add(listBox1->Text + "("+textBox3->Text+")");
					 if(listBox2->Items->Count != 0){
						 listBox2->SelectedIndex = 0;
					 }
					 listBox1->Items->Remove(listBox1->Text);
					 textBox3->Text = "0";
					 conDatabase->Close();
				 }
				 catch(Exception^ ex){
					 MessageBox::Show("Error Connecting to Database","Error");
				 }
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ temp = listBox2->Text;
			 String^ num;
			 int i = 0;
			 int j = 0;
			 while(temp[i] != '('){
				 i++;
			 }
			 while(temp[j] != ')'){
				 j++;
			 }
			 num = temp->Substring(i+1,j-i-1);
			 temp = temp->Substring(0,i);
			 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
			 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
			 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT `pricePer` FROM `restaurant`.`stock` WHERE `stock`.`itemName` = '"+temp+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 label8->Text = System::Convert::ToString(System::Convert::ToDouble(label8->Text) - System::Convert::ToDouble(num)*myReader->GetInt32(0));
				 }
			 listBox1->Items->Add(temp);
			 if(listBox1->Items->Count != 0){
				 listBox1->SelectedIndex = 0;
			 }
			 listBox2->Items->Remove(listBox2->Text);
			 conDatabase->Close();
			 }
			 catch(Exception^ ex){
				 MessageBox::Show("Error Connecting to Database","Error");
			 }
			 
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(MessageBox::Show("Are you sure you wan't to add" + textBox1->Text +" to the menu?","Add to Menu",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes){
				if(textBox1->Text=="" || textBox2->Text=="" || richTextBox1->Text == "" || !is_number(textBox2->Text) || listBox2->Items->Count == 0 || textBox2->Text == "0" || comboBox1->Text == ""){
				if(textBox1->Text == ""){
					MessageBox::Show("Enter a Name for the dish","Error");
				}
				if(textBox2->Text == ""){
					MessageBox::Show("Enter the Price for the dish","Error");
				}
				if(richTextBox1->Text == ""){
					MessageBox::Show("Enter a Description for the dish","Error");
				}
				if(!is_number(textBox2->Text)){
					MessageBox::Show("The Price Should be a Positive Number","Error");
				}
				if(textBox2->Text == "0"){
					MessageBox::Show("The Price Should be a Positive Number","Error");
				}
				if(listBox2->Items->Count == 0){
					MessageBox::Show("Select the ingredients required. If not present add the ingredients in the stock section.","Error");
				}
				if(comboBox1->Text == ""){
					MessageBox::Show("Enter the type of the dish.","Error");
				}
					
			 }else{
				 String^ des="";
				 int k=0;
				 while(k<listBox2->Items->Count){
					 if(k!=listBox2->Items->Count - 1){
						des = des + listBox2->Items[k]->ToString() + ",";
					 }else{
						 des = des + listBox2->Items[k]->ToString() ;
					 }
					 k++;
				 }
				 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
				 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("INSERT INTO `restaurant`.`menu` (`itemName`,`itemDesc`,`itemPrice`, `itemIng`,`basicCost`) VALUES ('"+textBox1->Text+"','"+richTextBox1->Text+"',"+System::Convert::ToDouble(textBox2->Text)+",'"+des+"',"+System::Convert::ToDouble(label8->Text)+");",conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader = cmdDatabase->ExecuteReader();
					 conDatabase->Close();
					 fillList();
				 }
				 catch(Exception^ ex){
					 MessageBox::Show("Error Connecting to Database","Error");
				 }
			 }
			 }
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox2->Text == ""){
				 textBox2->Text = "0";
			 }
		 }

private: System::Void listView1_SelectedIndexChanged_2(System::Object^  sender, System::EventArgs^  e) {
			 label1->Visible = true;
			 label2->Visible = true;
			 label3->Visible = true;
			 label4->Visible = true;
			 label5->Visible = true;
			 label6->Visible = true;
			 label7->Visible = true;
			 label8->Visible = true;
			 label9->Visible = true;
			 label10->Visible = true;
			 textBox1->Visible = true;
			 textBox2->Visible = true;
			 textBox3->Visible = true;
			 richTextBox1->Visible = true;
			 listBox1->Visible = true;
			 listBox2->Visible = true;
			 button2->Visible = true;
			 button3->Visible = true;
			 button4->Visible = false;
			 button5->Visible = true;
			 button6->Visible = true;
			 label11->Visible = true;
			 comboBox1->Visible = true;
			 ListViewItem^ objName = listView1->Items[listView1->FocusedItem->Index];
			 String^ itName = objName->SubItems[0]->Text;
			 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
			 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
			 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT * FROM `restaurant`.`menu` WHERE `menu`.`itemName` = '"+itName+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 label9->Text = myReader->GetString(0);
				 textBox1->Text = myReader->GetString(1);
				 richTextBox1->Text = myReader->GetString(2);
				 label8->Text = myReader->GetString(6);
				 textBox2->Text = myReader->GetString(3);
				 int j=0;
				 String^ des = myReader->GetString(5);
				 comboBox1->Text = myReader->GetString(4);
				 fillForm();
				 for(int i=0;i<(des->Length);i++){
					 if(des[i] == '('){
						 String^ temp = des->Substring(j,i-j);
						 listBox1->Items->Remove(temp);
					 }
					 if(des[i] == ')'){
						 String^ temp = des->Substring(j,i+1-j);
						 listBox2->Items->Add(temp);
						 
						 j=i+2;
					 }
				 }
			 }
				 conDatabase->Close();
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message,"Error");
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(MessageBox::Show("Are you sure you wan't to edit " + textBox1->Text +" ?","Edit to Menu",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes){
				 if(textBox1->Text=="" || textBox2->Text=="" || richTextBox1->Text == "" || !is_number(textBox2->Text) || listBox2->Items->Count == 0 || textBox2->Text == "0"){
					 if(textBox1->Text == ""){
						 MessageBox::Show("Enter a Name for the dish","Error");
					 }
					 if(textBox2->Text == ""){
						 MessageBox::Show("Enter the Price for the dish","Error");
					 }
					 if(richTextBox1->Text == ""){
						 MessageBox::Show("Enter a Description for the dish","Error");
					 }
					 if(!is_number(textBox2->Text)){
						 MessageBox::Show("The Price Should be a Positive Number","Error");
					 }
					 if(textBox2->Text == "0"){
						 MessageBox::Show("The Price Should be a Positive Number","Error");
					 }
					 if(listBox2->Items->Count == 0){
						 MessageBox::Show("Select the ingredients required. If not present add the ingredients in the stock section.","Error");
					 }

				 }else{
					 String^ des="";
					 int k=0;
					 while(k<listBox2->Items->Count){
						 if(k!=listBox2->Items->Count - 1){
							 des = des + listBox2->Items[k]->ToString() + ",";
						 }else{
							 des = des + listBox2->Items[k]->ToString() ;
						 }
						 k++;
					 }
					 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
					 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
					 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("UPDATE `restaurant`.`menu` SET `itemName`='"+textBox1->Text+"',`itemDesc`='"+richTextBox1->Text+"',`itemPrice`= "+System::Convert::ToDouble(textBox2->Text)+",`item_type`='"+comboBox1->Text+"', `itemIng` = '"+des+"' ,`basicCost` = "+System::Convert::ToDouble(label8->Text)+" WHERE `menu`.`idItem` = "+System::Convert::ToInt32(label9->Text)+";",conDatabase);
					 MySqlDataReader^ myReader;
					 try{
						 conDatabase->Open();
						 myReader = cmdDatabase->ExecuteReader();
						 conDatabase->Close();
						 fillList();
					 }
					 catch(Exception^ ex){
						 MessageBox::Show(ex->Message,"Error");
					 }
				 }
			 }
		 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(MessageBox::Show("Are you sure you wan't to delete " + textBox1->Text +" ?","Delete from Menu",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes){
			 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
			 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
			 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("DELETE FROM `restaurant`.`menu` WHERE `menu`.`idItem` = "+System::Convert::ToInt32(label9->Text)+";",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
				 conDatabase->Close();
				 fillList();
				 label1->Visible = false;
				 label2->Visible = false;
				 label3->Visible = false;
				 label4->Visible = false;
				 label5->Visible = false;
				 label6->Visible = false;
				 label7->Visible = false;
				 label8->Visible = false;
				 label9->Visible = false;
				 label10->Visible = false;
				 textBox1->Visible = false;
				 textBox2->Visible = false;
				 textBox3->Visible = false;
				 richTextBox1->Visible = false;
				 listBox1->Visible = false;
				 listBox2->Visible = false;
				 button2->Visible = false;
				 button3->Visible = false;
				 button4->Visible = false;
				 button5->Visible = false;
				 button6->Visible = false;
				 
			 }
				 catch(Exception^ ex){
				 MessageBox::Show(ex->Message,"Error");
			 }
			  }

		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 about^ form = gcnew about();
			 form->Show();
		 }
private: System::Void homeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void quitToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure you want to quit?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			 if(System::Windows::Forms::DialogResult::Yes == result){
				 Application::Exit();
			 }
		 }
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
