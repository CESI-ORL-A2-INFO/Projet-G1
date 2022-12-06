#pragma once
namespace NS_Comp {									//Ici, nous allons créer un "groupe de classe" que nous appelons "namespace"
	ref class Personnel {							//Dedans, nous allons créer une classe (ici, Personnel) pour gérer le personnel de l'entreprise
	private:										//Chaque classe possède des attributs et méthodes qui peuvent avoir 3 niveaux de protection (privé, public et protégé)
													//Ici, chaque attribut est "privé", donc accessible SEULEMENT par cette classe
													//Ensuite, nous allons donner chaque attribut que la classe doit posséder

		int Id_Personnel;							//L'identifiant d'un membre du personnel
		int Id_Superieur;							//L'identifiant d'un supérieur
		System::String^ Date_Embauche;				//La date d'embauche
		System::String^ Nom_Personnel;				//Le nom
		System::String^ Prenom_Personnel;			//Le prénom
		System::String^ Statut;						//Le statut (employé/supérieur)
		int Id_Adresse;								//L'adresse
		System::String^ sSql;

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		System::String^ UpdForAdresse();
		System::String^ UpdForId();
		System::String^ SelectForID();

		void setIDPersonnel(int);
		void setIDSuperieur(int);
		void setDateEmbauche(System::String^);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setStatut(System::String^);
		void setAdresse(int);

		int getID(void);
		int getIDSuperieur(void);
		System::String^ getDateEmbauche(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getStatut(void);
		int getAdresse(void);
	};
}