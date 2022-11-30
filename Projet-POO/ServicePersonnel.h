#pragma once
	

namespace CLServicePersonnel
{

	class ServicePersonnel
	{
	private:
		pCad  CAD;
		mapPers MapPersonnel;
		adresse MapAdresse;

	public:
		void addPers(System::String^, System::String^, System::String^, System::String^, int);				// Fonction qui permet d'ajouter un personnel dans la base de données
		void updatePers(int, System::String^, System::String^, System::String^, int);						// Fonction qui permet de modifier les données d'un personnel
		void delPers(int);																					// Fonction qui permet de supprimer un personnel
		DataSet selectAllPers(System::String^);																// Fonction qui permet de selectionner tout le personnel 
		DataSet selectPers(System::String^, int);															// Fonction qui permet de selectionner un seul personnel
	};

}