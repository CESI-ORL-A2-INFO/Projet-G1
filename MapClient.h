#pragma once
#include <string>
using namespace std;

class MapClient {
private:
	int NumeroClient;
	int AdresseLivraison;
	int AdressePaiement;
	string DateDeNaissance;
	string DatePremiereCommande;
	string NomClient;
	string PrenomClient;
	string sSql;

public:
	string Select(void);
	string Insert(void);
	string Delete(void);
	string Update(void);

	void setNumeroClient(int);
	void setAdresseLivraison(int);
	void setAdressePaiement(int);
	void setDateDeNaissance(string);
	void setDatePremiereCommande(string);
	void setNomClient(string);
	void setPrenomClient(string);
	
	int getNumeroClient(void);
	int getAdresseLivraison(void);
	int getAdressePaiement(void);
	string getDateDeNaissance(void);
	string getDatePremiereCommande(void);
	string NomClient(void);
	string PrenomClient(void);
};