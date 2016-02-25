// RestaurantManagementSystem.cpp : main project file.

#include "stdafx.h"
#include "Form0.h"


using namespace RestaurantManagementSystem;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form0());
	return 0;
}
