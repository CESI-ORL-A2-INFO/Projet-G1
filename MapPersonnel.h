#pragma once

class Personnel {
private:
	int Id_Personnel;
	int Id_Superieur;
	int Date_Embauche;
	System::String^ Nom_Personnel;
	System::String^ Prenom_Personnel;
	System::String^ Statut;
	int Id_Adresse;
	System::String^ sSql;

public:
	System::String^ Select(void);
	System::String^ Insert(void);
	System::String^ Delete(void);
	System::String^ Update(void);

	void setIDPersonnel(int);
	void setIDSuperieur(int);
	void setDateEmbauche(int);
	void setNom(System::String^);
	void setPrenom(System::String^);
	void setStatut(System::String^);
	void setAdresse(int);

	int getID(void);
	int getIDSuperieur(void);
	int getDateEmbauche(void);
	System::String^ getNom(void);
	System::String^ getPrenom(void);
	System::String^ getStatut(void);
	int getAdresse(void);
};