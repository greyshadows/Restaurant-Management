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
	/// Summary for stockData
	/// </summary>
	public ref class stockData : public System::Windows::Forms::Form
	{
	public:
		stockData(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~stockData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  guideToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem1;

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
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Azure;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(67, 103);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(176, 180);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &stockData::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(2, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Search by Name";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(171, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(134, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &stockData::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(125, 545);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 34);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Order Item";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &stockData::button2_Click);
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
			this->chart1->Location = System::Drawing::Point(322, 19);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Stock Used";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Stock Remaining";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(682, 537);
			this->chart1->TabIndex = 5;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &stockData::chart1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(21, 426);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Item Remaining";
			this->label4->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(21, 396);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Item Used";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 364);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Item Name";
			this->label2->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(21, 335);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Item Code";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(21, 456);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Price Per kg";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(21, 486);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(148, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Units to be Ordered";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(21, 515);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 20);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Cost";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(179, 338);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 16);
			this->label9->TabIndex = 14;
			this->label9->Visible = false;
			this->label9->Click += gcnew System::EventHandler(this, &stockData::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(180, 459);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 16);
			this->label10->TabIndex = 15;
			this->label10->Visible = false;
			this->label10->Click += gcnew System::EventHandler(this, &stockData::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(180, 428);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 16);
			this->label11->TabIndex = 16;
			this->label11->Visible = false;
			this->label11->Click += gcnew System::EventHandler(this, &stockData::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(180, 395);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 16);
			this->label12->TabIndex = 17;
			this->label12->Visible = false;
			this->label12->Click += gcnew System::EventHandler(this, &stockData::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(180, 363);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 16);
			this->label13->TabIndex = 18;
			this->label13->Visible = false;
			this->label13->Click += gcnew System::EventHandler(this, &stockData::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(180, 514);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 16);
			this->label14->TabIndex = 20;
			this->label14->Visible = false;
			this->label14->Click += gcnew System::EventHandler(this, &stockData::label14_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(180, 486);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(52, 20);
			this->textBox2->TabIndex = 21;
			this->textBox2->Text = L"0";
			this->textBox2->Visible = false;
			this->textBox2->Click += gcnew System::EventHandler(this, &stockData::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &stockData::textBox2_TextChanged);
			this->textBox2->Leave += gcnew System::EventHandler(this, &stockData::textBox2_Leave);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(171, 288);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 34);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &stockData::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 34);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(293, 34);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Add New Item";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &stockData::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(180, 366);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(136, 20);
			this->textBox3->TabIndex = 24;
			this->textBox3->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(180, 455);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(136, 20);
			this->textBox4->TabIndex = 25;
			this->textBox4->Text = L"0";
			this->textBox4->Visible = false;
			this->textBox4->Click += gcnew System::EventHandler(this, &stockData::textBox4_Click);
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &stockData::textBox4_TextChanged);
			this->textBox4->Leave += gcnew System::EventHandler(this, &stockData::textBox4_Leave);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(125, 545);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(83, 34);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Add Item";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &stockData::button5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(180, 486);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(52, 20);
			this->textBox5->TabIndex = 27;
			this->textBox5->Text = L"0";
			this->textBox5->Visible = false;
			this->textBox5->Click += gcnew System::EventHandler(this, &stockData::textBox5_Click);
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &stockData::textBox5_TextChanged);
			this->textBox5->Leave += gcnew System::EventHandler(this, &stockData::textBox5_Leave);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(59, 289);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(83, 33);
			this->button6->TabIndex = 28;
			this->button6->Text = L"Update";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &stockData::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(125, 545);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(83, 34);
			this->button7->TabIndex = 29;
			this->button7->Text = L"Update";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &stockData::button7_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->homeToolStripMenuItem, 
				this->helpToolStripMenuItem, this->quitToolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(2, 2);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(146, 24);
			this->menuStrip1->TabIndex = 30;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->homeToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->homeToolStripMenuItem->Text = L"&Home";
			this->homeToolStripMenuItem->Click += gcnew System::EventHandler(this, &stockData::homeToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->aboutToolStripMenuItem, 
				this->guideToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &stockData::aboutToolStripMenuItem_Click);
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
			this->quitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &stockData::quitToolStripMenuItem1_Click);
			// 
			// stockData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1016, 582);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Name = L"stockData";
			this->Text = L"stockData";
			this->Load += gcnew System::EventHandler(this, &stockData::stockData_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void stockData_Load(System::Object^  sender, System::EventArgs^  e) {
				 int numData = 0;
			     try{
				 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
				 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT * FROM `restaurant`.`stock`;",conDatabase);
				 MySqlDataReader^ myReader;
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					numData++;
				 }
				database(textBox1->Text);
				chartDraw(textBox1->Text);
				 }
				 catch(Exception^ ex)
				 {
					 String^ q = ex->Message;
					 MessageBox::Show("Error Connecting to Database","Error");
				 }
			 }
	private: System::Void database(String^ str){
				 try{
				String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
				MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT * FROM `restaurant`.`stock` WHERE `stock`.`itemName` like '%" + str + "%' ;",conDatabase);
				MySqlDataReader^ myReader;
				conDatabase->Open();
				myReader = cmdDatabase->ExecuteReader();
				listBox1->Items->Clear();
				while(myReader->Read()){
					listBox1->Items->Add(myReader->GetString(1));
				}
				if(listBox1->Items->Count !=0){
					listBox1->SelectedIndex = 0;
				}
				conDatabase->Close();
				 }
				 catch(Exception^ ex)
				 {
					 String^ q = ex->Message;
					 MessageBox::Show("Error Connecting to Database","Error");
				 }
			}

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
	private: System::Void chartDraw(String^ str){
				this->chart1->Series["Stock Used"]->Points->Clear();
				this->chart1->Series["Stock Remaining"]->Points->Clear();
				this->chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Zoomable = true;
				this->chart1->ChartAreas["ChartArea1"]->AxisY->ScaleView->Zoomable = true;
				this->chart1->ChartAreas["ChartArea1"]->CursorX->AutoScroll = true;
				this->chart1->ChartAreas["ChartArea1"]->CursorY->AutoScroll = true;
				this->chart1->ChartAreas["ChartArea1"]->CursorX->IsUserEnabled = true;
				this->chart1->ChartAreas["ChartArea1"]->CursorY->IsUserEnabled = true;
				this->chart1->ChartAreas["ChartArea1"]->CursorX->IsUserSelectionEnabled = true;
				this->chart1->ChartAreas["ChartArea1"]->CursorY->IsUserSelectionEnabled = true;
				try{
				String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
				MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT * FROM `restaurant`.`stock` WHERE `stock`.`itemName` like '%" + str + "%' ;",conDatabase);
				MySqlDataReader^ myReader;
				conDatabase->Open();
				myReader = cmdDatabase->ExecuteReader();
				while(myReader->Read()){
					this->chart1->Series["Stock Used"]->Points->AddXY(myReader->GetString(1),myReader->GetString(3));
					this->chart1->Series["Stock Remaining"]->Points->AddXY(myReader->GetString(1),myReader->GetString(2));
				}
				}
				catch(Exception^ ex)
				{
					String^ q = ex->Message;
					MessageBox::Show("Error Connecting to Database","Error");
				}
			 }

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 database(textBox1->Text);
				 chartDraw(textBox1->Text);
			 }
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void fillForm(){
	try{
		String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
		MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
		MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT * FROM `restaurant`.`stock` WHERE `stock`.`itemName` = '" + listBox1->Text + "';",conDatabase);
		MySqlDataReader^ myReader;

		label2->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		label5->Visible = true;
		label6->Visible = true;
		label7->Visible = true;
		label8->Visible = true;
		label9->Visible = true;
		label10->Visible = true;
		label11->Visible = true;
		label12->Visible = true;
		label13->Visible = true;
		label14->Visible = true;
		textBox2->Visible = true;
		button2->Visible= true;
		button5->Visible = false;
		textBox3->Visible = false;
		textBox4->Visible = false;
		textBox5->Visible = false;
		 button7->Visible = false;
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();
		while(myReader->Read()){
			label9->Text = (myReader->GetString(0));
			label13->Text = (myReader->GetString(1));
			label12->Text = (myReader->GetString(3));
			label11->Text = (myReader->GetString(2));
			label10->Text = (myReader->GetString(5));
			textBox2->Text = "0";
		}
		conDatabase->Close();
		label14->Text = System::Convert::ToString(System::Convert::ToDouble(textBox2->Text) * System::Convert::ToDouble(label10->Text));
	}
	catch(Exception^ ex)
	{
		String^ q = ex->Message;
		MessageBox::Show("Error Connecting to Database","Error");
	}
}

private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 try{
				
			  label14->Text = System::Convert::ToString(System::Convert::ToDouble(textBox2->Text) * System::Convert::ToDouble(label10->Text));
			   
			 }
			 catch(Exception^ ex){
				 label14->Text = "Cost";
			 }
		 }
private: System::Void updateStock(){
			 try{
			 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
			 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
			 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("UPDATE `restaurant`.`stock` SET  `itemRem` = "+ (System::Convert::ToDouble(label11->Text) + System::Convert::ToDouble(textBox2->Text)) + " WHERE `itemCode` = " + System::Convert::ToDouble(label9->Text) + ";",conDatabase);
			 MySqlDataReader^ myReader;
			 conDatabase->Open();
			 myReader = cmdDatabase->ExecuteReader();
			 conDatabase->Close();
			 }
			 catch(Exception^ ex)
			 {
				 String^ q = ex->Message;
				 MessageBox::Show(q,"Error");
			 }
			 
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(is_number(textBox2->Text)){
			  if(MessageBox::Show("Are you sure you wan't to add " + textBox2->Text + " units of " + label13->Text + " to the stock?","Update Stock",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes){
				  try{
					  DateTime date = DateTime::Now;
					  String^ sqldate = System::Convert::ToString(date.Year)+"-"+System::Convert::ToString(date.Month)+"-"+System::Convert::ToString(date.Day)+" "+System::Convert::ToString(date.Hour)+":"+System::Convert::ToString(date.Minute)+":"+System::Convert::ToString(date.Second);
					  String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
					  MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
					  MySqlCommand^ cmdDatabase= gcnew MySqlCommand("INSERT INTO `restaurant`.`expenses` (`type`,`to`,`amount`,`date`) VALUES ('Stock Purchase','" + label13->Text + "',-" + System::Convert::ToDouble(label14->Text) + ",'" + sqldate + "');",conDatabase);
					  MySqlDataReader^ myReader;
					  conDatabase->Open();
					  myReader = cmdDatabase->ExecuteReader();
					  conDatabase->Close();
					  myReader->Close();

					  updateStock();
					  fillForm();
					  chartDraw(textBox1->Text);
				  }
				  catch(Exception^ ex)
				  {
					  String^ q = ex->Message;
					  MessageBox::Show("Error Connecting to Database","Error");
				  }
				}
			 }
			 else{
				 MessageBox::Show("Enter a Positive Integer Value","Error"); 
			 }
		
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 fillForm();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 label2->Visible = true;
			 label3->Visible = false;
			 label4->Visible = false;
			 label5->Visible = false;
			 label6->Visible = true;
			 label7->Visible = true;
			 label8->Visible = true;
			 label9->Visible = false;
			 label10->Visible = false;
			 label11->Visible = false;
			 label12->Visible = false;
			 label13->Visible = false;
			 label14->Visible = true;
			 textBox2->Visible = false;
			 button2->Visible= false;
			 button5->Visible = true;
			 textBox3->Visible = true;
			 textBox3->Text = "";
			 textBox4->Visible = true;
			 textBox4->Text = "0";
			 textBox5->Visible = true;
			 textBox5->Text = "0";
			  button7->Visible = false;
		 }

private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 if(textBox4->Text != ""){
					 if(!is_number(textBox4->Text)){
						 MessageBox::Show("Only Positive Integers are Allowed","Error");
						 textBox4->Text = (textBox4->Text)->Substring(0,textBox4->Text->Length - 1);
					 }
				 }
				 label14->Text = System::Convert::ToString(System::Convert::ToDouble(textBox5->Text) * System::Convert::ToDouble(textBox4->Text));
			 }
			 catch(Exception^ ex){
				 label14->Text = "Cost";
			 }
			
		 }
private: System::Void textBox4_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox4->SelectAll();
		 }
private: System::Void textBox4_Leave(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox4->Text == ""){
				 textBox4->Text = "0";
			 }
		 }
private: System::Void textBox2_Click(System::Object^  sender, System::EventArgs^  e) {
					  textBox2->SelectAll();
				  }
private: System::Void textBox2_Leave(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox2->Text == ""){
				 textBox2->Text = "0";
			 }
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 if(textBox5->Text != ""){
					 if(!is_number(textBox5->Text)){
						 MessageBox::Show("Only Positive Integers are Allowed","Error");
						 textBox5->Text = (textBox5->Text)->Substring(0,textBox5->Text->Length - 1);
					 }
				 }
			 label14->Text = System::Convert::ToString(System::Convert::ToDouble(textBox5->Text) * System::Convert::ToDouble(textBox4->Text));
			 }
			 catch(Exception^ ex){
				 label14->Text = "Cost";
			 }
		 }

private: System::Void textBox5_Click(System::Object^  sender, System::EventArgs^  e) {
					  textBox5->SelectAll();
				  }
private: System::Void textBox5_Leave(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox5->Text == ""){
				 textBox5->Text = "0";
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox3->Text!=""){
				 String^ connectString1=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDatabase1= gcnew MySqlConnection(connectString1);
				 MySqlCommand^ cmdDatabase1= gcnew MySqlCommand("SELECT * FROM `restaurant`.`stock` WHERE `itemName` = '"+textBox3->Text+"';",conDatabase1);
				 MySqlDataReader^ myReader1;
				 int c = 0;
				 try{
					 conDatabase1->Open();
					 myReader1 = cmdDatabase1->ExecuteReader();
					 while(myReader1->Read()){
						 c = 1;
					 }
				 }
				 catch(Exception^ ex)
				 {
					 String^ q = ex->Message;
					 MessageBox::Show("Error Connecting to Database","Error");
				 }
				 if(c == 0){
				 if(MessageBox::Show("Are you sure you wan't to add " + textBox5->Text + " units of " + textBox3->Text + " to the stock?","Add to Stock",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes){
					 try{
						 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
						 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
						 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("INSERT INTO `restaurant`.`stock` (`itemName`,`itemRem`,`itemUsed`,`totalUsed`,`pricePer`) VALUES ('"+textBox3->Text+"'," + System::Convert::ToDouble(textBox5->Text) + ",0,0," + System::Convert::ToDouble(textBox5->Text) + ");",conDatabase);
						 MySqlDataReader^ myReader;
						 conDatabase->Open();
						 myReader = cmdDatabase->ExecuteReader();
						 conDatabase->Close();
						 myReader->Close();

						 DateTime date = DateTime::Now;
						 String^ sqldate = System::Convert::ToString(date.Year)+"-"+System::Convert::ToString(date.Month)+"-"+System::Convert::ToString(date.Day)+" "+System::Convert::ToString(date.Hour)+":"+System::Convert::ToString(date.Minute)+":"+System::Convert::ToString(date.Second);
						 connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
						 conDatabase= gcnew MySqlConnection(connectString);
						 cmdDatabase= gcnew MySqlCommand("INSERT INTO `restaurant`.`expenses` (`type`,`to`,`amount`,`date`) VALUES ('Stock Purchase','" + textBox3->Text + "',-" + System::Convert::ToDouble(label14->Text) + ",'" + sqldate + "');",conDatabase);
						 conDatabase->Open();
						 myReader = cmdDatabase->ExecuteReader();
						 conDatabase->Close();
						 myReader->Close();

						 database(textBox1->Text);
						 chartDraw(textBox1->Text);
					 }
					 catch(Exception^ ex)
					 {
						 String^ q = ex->Message;
						 MessageBox::Show("Error Connecting to Database","Error");
					 }
				 }
				 }else{
					 MessageBox::Show("An item named "+textBox3->Text+" already exists","Error");
				 }
			 }else{
				 MessageBox::Show("Enter a Name for the Item","Error");
			 }
		 }		
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(listBox1->Items->Count != 0){
				 if(MessageBox::Show("Are you sure you wan't to delete " + listBox1->Text +" from the stock?","Delete from Stock",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes){
					 try{
						 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
						 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
						 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("DELETE FROM `restaurant`.`stock` WHERE `stock`.`itemName` = '"+listBox1->Text+"';",conDatabase);
						 MySqlDataReader^ myReader;
						 conDatabase->Open();
						 myReader = cmdDatabase->ExecuteReader();
						 conDatabase->Close();
						 
						 database(textBox1->Text);
						 chartDraw(textBox1->Text);
					 }
					 catch(Exception^ ex)
					 {
						 String^ q = ex->Message;
						 MessageBox::Show("Error Connecting to Database","Error");
					 }
				 }
			 }

		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		try{
			String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
			MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
			MySqlCommand^ cmdDatabase= gcnew MySqlCommand("SELECT * FROM `restaurant`.`stock` WHERE `stock`.`itemName` = '" + listBox1->Text + "';",conDatabase);
			MySqlDataReader^ myReader;
			 label2->Visible = true;
			 label3->Visible = true;
			 label4->Visible = true;
			 label5->Visible = true;
			 label6->Visible = true;
			 label7->Visible = false;
			 label8->Visible = false;
			 label9->Visible = true;
			 label10->Visible = true;
			 label11->Visible = true;
			 label12->Visible = true;
			 label13->Visible = true;
			 label14->Visible = false;
			 textBox2->Visible = false;
			 button2->Visible= false;
			 button5->Visible = false;
			 textBox3->Visible = false;
			 textBox4->Visible = true;
			 textBox5->Visible = false;
			 button7->Visible = true;
			 conDatabase->Open();
			 myReader = cmdDatabase->ExecuteReader();
			 while(myReader->Read()){
				 label9->Text = (myReader->GetString(0));
				 label13->Text = (myReader->GetString(1));
				 label12->Text = (myReader->GetString(3));
				 label11->Text = (myReader->GetString(2));
				 textBox4->Text = (myReader->GetString(5));
			 }
			conDatabase->Close();
		}
		catch(Exception^ ex)
		{
			String^ q = ex->Message;
			MessageBox::Show("Error Connecting to Database","Error");
		}
	}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 String^ connectString=L"datasource=127.0.0.1;port=3306;username=root;password=abc123";
				 MySqlConnection^ conDatabase= gcnew MySqlConnection(connectString);
				 MySqlCommand^ cmdDatabase= gcnew MySqlCommand("UPDATE `restaurant`.`stock` SET  `pricePer` = "+ System::Convert::ToDouble(textBox4->Text)+" WHERE `itemCode` = " + System::Convert::ToDouble(label9->Text) + ";",conDatabase);
				 MySqlDataReader^ myReader;
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
				 conDatabase->Close();
			 }
			 catch(Exception^ ex)
			 {
				 String^ q = ex->Message;
				 MessageBox::Show("Error Connecting to Database","Error");
			 }


		 }
private: System::Void homeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 about^ form = gcnew about();
			 form->Show();
		 }
private: System::Void quitToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure you want to quit?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			 if(System::Windows::Forms::DialogResult::Yes == result){
				 Application::Exit();
			 }
		 }
};
}
