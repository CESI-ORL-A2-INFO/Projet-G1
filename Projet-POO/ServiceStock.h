#pragma once
#include "MapArticle.h"
#include "MapCata.h"
#include "MapAlimente.h"


namespace CLServiceStock
{

	class ServiceStock
	{
	private:
		cataCad CAD;
		mapCata MapCata;
		servArt MapArticle;
		alimente MapAlimente;

	public:
		void addCata(System::String^, System::String^, System::String^, int, int, float);						// Fonction qui permet d'ajouter un catalogue 
		void updateCata(int, System::String^, System::String^, System::String^, int, int, float);				// Fonction qui permet de mettre a jour un catalogue
		void delCata(int);																						// Fonction qui permet de supprimer un catalogue
		DataSet selectAllCata(System::String^);																	// Fonction qui permet de selectionner tout les catalogue
		DataSet selectCata(System::String^, int);																// Fonction qui permet de selectionner un catalogue
	};

}