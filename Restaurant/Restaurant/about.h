#pragma once

namespace Restaurant {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for about
	/// </summary>
	public ref class about : public System::Windows::Forms::Form
	{
	public:
		about(void)
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
		~about()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(about::typeid));
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(269, 163);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(67, 13);
			this->label13->TabIndex = 27;
			this->label13->Text = L"(120101018)";
			this->label13->Click += gcnew System::EventHandler(this, &about::label13_Click);
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(269, 141);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(67, 13);
			this->label12->TabIndex = 26;
			this->label12->Text = L"(120101006)";
			this->label12->Click += gcnew System::EventHandler(this, &about::label12_Click);
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(269, 119);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"(120101017)";
			this->label11->Click += gcnew System::EventHandler(this, &about::label11_Click);
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(269, 97);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"(120101072)";
			this->label10->Click += gcnew System::EventHandler(this, &about::label10_Click);
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(269, 75);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"(120101069)";
			this->label9->Click += gcnew System::EventHandler(this, &about::label9_Click);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(150, 163);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Vinay Chandragiri";
			this->label7->Click += gcnew System::EventHandler(this, &about::label7_Click);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(150, 141);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Akriti Kumari";
			this->label6->Click += gcnew System::EventHandler(this, &about::label6_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(150, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Bharat Gupta";
			this->label5->Click += gcnew System::EventHandler(this, &about::label5_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(150, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Suraj Rautela";
			this->label4->Click += gcnew System::EventHandler(this, &about::label4_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(150, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Siddhesh Khandelwal ";
			this->label3->Click += gcnew System::EventHandler(this, &about::label3_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(203, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 15);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Developed By:";
			this->label2->Click += gcnew System::EventHandler(this, &about::label2_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(133, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(272, 20);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Restaurant Management System";
			this->label1->Click += gcnew System::EventHandler(this, &about::label1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->richTextBox1->Location = System::Drawing::Point(9, 190);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ShortcutsEnabled = false;
			this->richTextBox1->Size = System::Drawing::Size(497, 113);
			this->richTextBox1->TabIndex = 28;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &about::richTextBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(206, 309);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 33);
			this->button1->TabIndex = 29;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &about::button1_Click);
			// 
			// about
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(512, 348);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"about";
			this->Text = L"about";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}
