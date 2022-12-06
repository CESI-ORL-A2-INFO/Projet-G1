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

	public:											//Ici, chaque méthode créée est "publique", donc accessible par l'entièreté des autres classes
		System::String^ Select(void);				//La méthode SELECT (base de données) pour sélectionner une ou plusieures adresse(s)
		System::String^ Insert(void);				//La méthode INSERT (base de données) pour insérer une nouvelle adresse
		System::String^ Delete(void);				//La méthode DELETE (base de données) pour supprimer une adresse
		System::String^ Update(void);				//La méthode UPDATE (base de données) pour mettre à jour les informations d'une adresse
		System::String^ UpdForAdresse();			//La méthode pour mettre à jour l'adresse d'un membre
		System::String^ UpdForId();					//La méthode pour mettre à jour un identifiant via le membre correspondant
		System::String^ SelectForID();				//La méthode pour sélectionner un identifiant via le membre correspondant

		void setIDPersonnel(int);					//La méthode pour entrer l'identifiant d'un membre
		void setIDSuperieur(int);					//La méthode pour entrer l'identifiant d'un supérieur
		void setDateEmbauche(System::String^);		//la méthode pour entrer la date d'embauche
		void setNom(System::String^);				//La méthode pour entrer le nom
		void setPrenom(System::String^);			//La méthode pour entrer le prénom
		void setStatut(System::String^);			//La méthode pour entrer le statut
		void setAdresse(int);						//La méthode pour entrer l'adresse

		int getID(void);							//La méthode pour récupérer (afficher) l'identifiant d'un membre
		int getIDSuperieur(void);					//La méthode pour récupérer (afficher) l'identifiant d'un supérieur
		System::String^ getDateEmbauche(void);		//La méthode pour récupérer (afficher) la date d'embauche
		System::String^ getNom(void);				//La méthode pour récupérer (afficher) le nom
		System::String^ getPrenom(void);			//La méthode pour récupérer (afficher) le prénom
		System::String^ getStatut(void);			//La méthode pour récupérer (afficher) le statut
		int getAdresse(void);						//La méthode pour récupérer (afficher) l'adresse
	};
}