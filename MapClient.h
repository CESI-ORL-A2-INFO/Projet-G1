#pragma once
namespace NS_Comp {											//Ici, nous allons créer un "groupe de classe" que nous appelons "namespace"
	ref class Client {										//Dedans, nous allons créer une classe (ici, Client) pour gérer les clients de l'entreprise
	private:												//Chaque classe possède des attributs et méthodes qui peuvent avoir 3 niveaux de protection (privé, public et protégé)
															//Ici, chaque attribut est "privé", donc accessible SEULEMENT par cette classe
															//Ensuite, nous allons donner chaque attribut que la classe doit posséder

		int Numero_client;									//Le numéro d'un client de l'entreprise
		int Id_Adresse_Livrer;								//L'adresse de livraison
		int Id_Adresse;										//L'adresse de facturation
		System::String^ Date_naissance;						//La date de naissance
		System::String^ Date_premiere_commande;				//La date de la première commande
		System::String^ Nom_client;							//Le nom
		System::String^ Prenom_client;						//Le prénom
		System::String^ sSql;

	public:													//Ici, chaque méthode créée est "publique", donc accessible par l'entièreté des autres classes
		System::String^ Select();							//La méthode SELECT (base de données) pour sélectionner une ou plusieures adresse(s)
		System::String^ Insert();							//La méthode INSERT (base de données) pour insérer une nouvelle adresse
		System::String^ Delete();							//La méthode DELETE (base de données) pour supprimer une adresse
		System::String^ Update();							//La méthode UPDATE (base de données) pour mettre à jour les informations d'une adresse
		System::String^ UpdForAdress();						//La méthode pour mettre à jour la/les adresse(s) d'un client
		System::String^ SelectWithID();						//La méthode pour sélectionner un client via son ID
		System::String^ UpdCommande();						//La méthode pour mettre à jour une commande d'un client

		void setNumeroClient(int);							//La méthode pour entrer le numéro de client d'un client
		void setAdresseLivraison(int);						//La méthode pour entrer l'adresse de livraison
		void setAdressePaiement(int);						//La méthode pour entrer l'adresse de paiement
		void setDateDeNaissance(System::String^);			//La méthode pour entrer la date de naissance
		void setDatePremiereCommande(System::String^);		//La méthode pour entrer la date de la première commande
		void setNomClient(System::String^);					//La méthode pour entrer le nom
		void setPrenomClient(System::String^);				//La méthode pour entrer le prénom

		int getNumeroClient(void);							//La méthode pour récupérer (afficher) le numéro de client d'un client
		int getAdresseLivraison(void);						//La méthode pour récupérer (afficher) l'adresse de livraison
		int getAdressePaiement(void);						//La méthode pour récupérer (afficher) l'adresse de paiement
		System::String^ getDateDeNaissance(void);			//La méthode pour récupérer (afficher) la date de naissance
		System::String^ getDatePremiereCommande(void);		//La méthode pour récupérer (afficher) la date de la première commande
		System::String^ getNomClient(void);					//La méthode pour récupérer (afficher) le nom
		System::String^ getPrenomClient(void);				//La méthode pour récupérer (afficher) le prénom
	};
}