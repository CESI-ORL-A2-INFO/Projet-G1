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

	public:											//Ici, chaque m�thode cr��e est "publique", donc accessible par l'enti�ret� des autres classes
		System::String^ Select(void);				//La m�thode SELECT (base de donn�es) pour s�lectionner une ou plusieures adresse(s)
		System::String^ Insert(void);				//La m�thode INSERT (base de donn�es) pour ins�rer une nouvelle adresse
		System::String^ Delete(void);				//La m�thode DELETE (base de donn�es) pour supprimer une adresse
		System::String^ Update(void);				//La m�thode UPDATE (base de donn�es) pour mettre � jour les informations d'une adresse
		System::String^ UpdForAdresse();			//La m�thode pour mettre � jour l'adresse d'un membre
		System::String^ UpdForId();					//La m�thode pour mettre � jour un identifiant via le membre correspondant
		System::String^ SelectForID();				//La m�thode pour s�lectionner un identifiant via le membre correspondant

		void setIDPersonnel(int);					//La m�thode pour entrer l'identifiant d'un membre
		void setIDSuperieur(int);					//La m�thode pour entrer l'identifiant d'un sup�rieur
		void setDateEmbauche(System::String^);		//la m�thode pour entrer la date d'embauche
		void setNom(System::String^);				//La m�thode pour entrer le nom
		void setPrenom(System::String^);			//La m�thode pour entrer le pr�nom
		void setStatut(System::String^);			//La m�thode pour entrer le statut
		void setAdresse(int);						//La m�thode pour entrer l'adresse

		int getID(void);							//La m�thode pour r�cup�rer (afficher) l'identifiant d'un membre
		int getIDSuperieur(void);					//La m�thode pour r�cup�rer (afficher) l'identifiant d'un sup�rieur
		System::String^ getDateEmbauche(void);		//La m�thode pour r�cup�rer (afficher) la date d'embauche
		System::String^ getNom(void);				//La m�thode pour r�cup�rer (afficher) le nom
		System::String^ getPrenom(void);			//La m�thode pour r�cup�rer (afficher) le pr�nom
		System::String^ getStatut(void);			//La m�thode pour r�cup�rer (afficher) le statut
		int getAdresse(void);						//La m�thode pour r�cup�rer (afficher) l'adresse
	};
}