#include "GestionStock.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void MainStock(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOO::GestionStock monFormulaire5;
	Application::Run(% monFormulaire5);
}