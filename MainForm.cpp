#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args)
{

    // Running Main Form UI
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    UserInterfaceFormVersion2::MainForm entryPointForm;
    Application::Run(% entryPointForm);

    // Checking if any warning errors are caused during running project


}
