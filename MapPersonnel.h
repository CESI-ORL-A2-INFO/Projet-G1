#pragma once
#include <string>
using namespace std;

class MapPersonnel {
private:
	int IDPersonnel;
	int IDSuperieur;
	int DateEmbauche;
	string Nom;
	string Prenom;
	string Statut;
	int Adresse;
	string sSql;

public:
	string Select(void);
	string Insert(void);
	string Delete(void);
	string Update(void);

	void SetIDPersonnel(int);
	void setIDSuperieur(int);
	void SetDateEmbauche(int);
	void setNom(string);
	void setPrenom(string);
	void setStatut(string);
	void setAdresse(int);

	int getID(void);
	int getIDSuperieur(void);
	int getDateEmbauche(void);
	string getNom(void);
	string getPrenom(void);
	string getStatut(void);
	int getAdresse(void);
};