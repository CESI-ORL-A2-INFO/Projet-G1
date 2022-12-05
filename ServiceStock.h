#pragma once
#include "Cad.h"
#include "MapArticle.h"
namespace NS_Serv
{

	ref class ServiceStock
	{
	private:
		NS_Comp_Data::Cad^ sCad;
		NS_Comp::MapArticle^ mapStock;

	public:
		ServiceStock();
		void addStock(System::String^, System::String^, System::String^, int, int, int, System::String^);						// Fonction qui permet d'ajouter un catalogue 
		void updateStock(int, System::String^, System::String^, System::String^, int, int, int, System::String^);				// Fonction qui permet de mettre a jour un catalogue
		void delCont(int);
		void delStock(int);																						// Fonction qui permet de supprimer un catalogue
		System::Data::DataSet^ selectAllStock(System::String^);																	// Fonction qui permet de selectionner tout les catalogue
		System::Data::DataSet^ selectStockWhitId(System::String^, int);																// Fonction qui permet de selectionner un catalogue
	};

}