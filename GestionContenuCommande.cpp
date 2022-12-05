#include "GestionContenuCommande.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void MainCont(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOO::GestionContenuCommande monFormulaire9;
	Application::Run(% monFormulaire9);
}