#pragma once
namespace NS_Comp {
	ref class Client {
	private:
		int Numero_client;
		int Id_Adresse_Livrer;
		int Id_Adresse;
		System::String^ Date_naissance;
		System::String^ Date_premiere_commande;
		System::String^ Nom_client;
		System::String^ Prenom_client;
		System::String^ sSql;

	public:
		System::String^ Select();
		System::String^ Insert();
		System::String^ Delete();
		System::String^ Update();

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