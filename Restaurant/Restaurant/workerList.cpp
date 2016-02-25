#include "StdAfx.h"
#include "workerList.h"
#include "employeeEdit.h"
#include "AddEmployee.h"
using namespace Restaurant;
System::Void employeeEdit::mainshow(){
	workerList^ form = gcnew workerList();
	form->Show();
}

System::Void AddEmployee::mainshow(){
	workerList^ form = gcnew workerList();
	form->Show();
}
	


