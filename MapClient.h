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

	public:
		System::String^ Select();
		System::String^ Insert();
		System::String^ Delete();
		System::String^ Update();
		System::String^ UpdForAdress();
		System::String^ SelectWithID();
		System::String^ UpdCommande();

		void setNumeroClient(int);
		void setAdresseLivraison(int);
		void setAdressePaiement(int);
		void setDateDeNaissance(System::String^);
		void setDatePremiereCommande(System::String^);
		void setNomClient(System::String^);
		void setPrenomClient(System::String^);

		int getNumeroClient(void);
		int getAdresseLivraison(void);
		int getAdressePaiement(void);
		System::String^ getDateDeNaissance(void);
		System::String^ getDatePremiereCommande(void);
		System::String^ getNomClient(void);
		System::String^ getPrenomClient(void);
	};
}