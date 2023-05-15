#include "LoadingForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    UserInterfaceForm::LoadingForm entryPointForm;
    Application::Run(% entryPointForm);


    // Checking if any warning errors are caused during running Project
    return 0;

}
