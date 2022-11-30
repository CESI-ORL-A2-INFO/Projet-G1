#include "GestionClient.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void MainClient(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOO::GestionClient monFormulaire2;
	Application::Run(% monFormulaire2);
}