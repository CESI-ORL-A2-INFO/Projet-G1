#pragma once
namespace NS_Comp {											//Ici, nous allons cr�er un "groupe de classe" que nous appelons "namespace"
	ref class Client {										//Dedans, nous allons cr�er une classe (ici, Client) pour g�rer les clients de l'entreprise
	private:												//Chaque classe poss�de des attributs et m�thodes qui peuvent avoir 3 niveaux de protection (priv�, public et prot�g�)
															//Ici, chaque attribut est "priv�", donc accessible SEULEMENT par cette classe
															//Ensuite, nous allons donner chaque attribut que la classe doit poss�der

		int Numero_client;									//Le num�ro d'un client de l'entreprise
		int Id_Adresse_Livrer;								//L'adresse de livraison
		int Id_Adresse;										//L'adresse de facturation
		System::String^ Date_naissance;						//La date de naissance
		System::String^ Date_premiere_commande;				//La date de la premi�re commande
		System::String^ Nom_client;							//Le nom
		System::String^ Prenom_client;						//Le pr�nom
		System::String^ sSql;

	public:													//Ici, chaque m�thode cr��e est "publique", donc accessible par l'enti�ret� des autres classes
		System::String^ Select();							//La m�thode SELECT (base de donn�es) pour s�lectionner une ou plusieures adresse(s)
		System::String^ Insert();							//La m�thode INSERT (base de donn�es) pour ins�rer une nouvelle adresse
		System::String^ Delete();							//La m�thode DELETE (base de donn�es) pour supprimer une adresse
		System::String^ Update();							//La m�thode UPDATE (base de donn�es) pour mettre � jour les informations d'une adresse
		System::String^ UpdForAdress();						//La m�thode pour mettre � jour la/les adresse(s) d'un client
		System::String^ SelectWithID();						//La m�thode pour s�lectionner un client via son ID
		System::String^ UpdCommande();						//La m�thode pour mettre � jour une commande d'un client

		void setNumeroClient(int);							//La m�thode pour entrer le num�ro de client d'un client
		void setAdresseLivraison(int);						//La m�thode pour entrer l'adresse de livraison
		void setAdressePaiement(int);						//La m�thode pour entrer l'adresse de paiement
		void setDateDeNaissance(System::String^);			//La m�thode pour entrer la date de naissance
		void setDatePremiereCommande(System::String^);		//La m�thode pour entrer la date de la premi�re commande
		void setNomClient(System::String^);					//La m�thode pour entrer le nom
		void setPrenomClient(System::String^);				//La m�thode pour entrer le pr�nom

		int getNumeroClient(void);							//La m�thode pour r�cup�rer (afficher) le num�ro de client d'un client
		int getAdresseLivraison(void);						//La m�thode pour r�cup�rer (afficher) l'adresse de livraison
		int getAdressePaiement(void);						//La m�thode pour r�cup�rer (afficher) l'adresse de paiement
		System::String^ getDateDeNaissance(void);			//La m�thode pour r�cup�rer (afficher) la date de naissance
		System::String^ getDatePremiereCommande(void);		//La m�thode pour r�cup�rer (afficher) la date de la premi�re commande
		System::String^ getNomClient(void);					//La m�thode pour r�cup�rer (afficher) le nom
		System::String^ getPrenomClient(void);				//La m�thode pour r�cup�rer (afficher) le pr�nom
	};
}