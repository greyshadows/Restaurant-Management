#pragma once
#include "Form1.h"
#include "Dummy.h"
namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dummy
	/// </summary>
	public ref class Dummy : public System::Windows::Forms::Form
	{
	public:
		Dummy(void)
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
		~Dummy()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// Dummy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Name = L"Dummy";
			this->Text = L"Dummy";
			this->Load += gcnew System::EventHandler(this, &Dummy::Dummy_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Dummy_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				Dummy::Hide();
				Form1^frm1=gcnew Form1;													//shows another form on clicking the button;
				frm1->Show(this);
			 }
	};
}
