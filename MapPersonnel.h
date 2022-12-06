#pragma once
namespace NS_Comp {									//Ici, nous allons cr�er un "groupe de classe" que nous appelons "namespace"
	ref class Personnel {							//Dedans, nous allons cr�er une classe (ici, Personnel) pour g�rer le personnel de l'entreprise
	private:										//Chaque classe poss�de des attributs et m�thodes qui peuvent avoir 3 niveaux de protection (priv�, public et prot�g�)
													//Ici, chaque attribut est "priv�", donc accessible SEULEMENT par cette classe
													//Ensuite, nous allons donner chaque attribut que la classe doit poss�der

		int Id_Personnel;							//L'identifiant d'un membre du personnel
		int Id_Superieur;							//L'identifiant d'un sup�rieur
		System::String^ Date_Embauche;				//La date d'embauche
		System::String^ Nom_Personnel;				//Le nom
		System::String^ Prenom_Personnel;			//Le pr�nom
		System::String^ Statut;						//Le statut (employ�/sup�rieur)
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