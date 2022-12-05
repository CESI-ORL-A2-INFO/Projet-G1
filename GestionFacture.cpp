#include "GestionFacture.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void MainFact(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOO::GestionFacture monFormulaire8;
	Application::Run(% monFormulaire8);
}