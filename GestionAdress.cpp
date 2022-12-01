#include "GestionAdress.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void MainAdresse(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOO::GestionAdress monFormulaire3;
	Application::Run(% monFormulaire3);
}