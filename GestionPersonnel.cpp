#include "GestionPersonnel.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void MainPers(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOO::GestionPersonnel monFormulaire4;
	Application::Run(% monFormulaire4);
}