// Restaurant.cpp : main project file.

#include "stdafx.h"
#include "Login.h"
#include "NewCustomer1.h"
#include "ChangePass.h"
using namespace Restaurant;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Login());
	return 0;
}

System::Void NewCustomer::showLogin(){
	Login^ form = gcnew Login();
	form->Show();
}

System::Void ChangePass::showLogin(){
	Login^ form = gcnew Login();
	form->Show();
}


