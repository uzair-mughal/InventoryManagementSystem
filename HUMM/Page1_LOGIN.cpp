#include "Page1_LOGIN.h"
#include <mysql.h>
#include <iostream>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]

int main()	{
	

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	HUMM::Page1_LOGIN form;
	Application::Run(%form);
	return 0;
}
