#pragma once
#include "Cad.h"
#include "MapPersonnel.h"
namespace NS_Serv
{
	ref class ServicePersonnel
	{
	private:
		NS_Comp_Data::Cad^ pCad;
		NS_Comp::Personnel^ mapPers;

	public:
		ServicePersonnel();
		void addPers(System::String^, System::String^, System::String^, System::String^, int, int);				// Fonction qui permet d'ajouter un personnel dans la base de données
		void updatePers(int, System::String^, System::String^, System::String^, System::String^, int, int);						// Fonction qui permet de modifier les données d'un personnel
		void delPers(int);																					// Fonction qui permet de supprimer un personnel
		System::Data::DataSet^ selectAllPers(System::String^);																// Fonction qui permet de selectionner tout le personnel 
		void updPersForAdress(int);
		void updPersForID(int);
		System::Data::DataSet^ selectUnPersonnel(System::String^, int);
	};

}

