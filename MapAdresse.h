#pragma once
#include <string>
using namespace std;

class Adresse {
private:
	int IDAdresse;
	int NumeroRue;
	int CodePostal;
	string NomRue;
	string Ville;
	string TypeRue;
	string sSql;
public:
	string Select(void);
	string Insert(void);
	string Delete(void);
	string Update(void);

	void setIDAdresse(int);
	void setNumeroRue(int);
	void setCodePostal(int);
	void setNomRue(string);
	void setVille(string);
	void setTypeRue(string);

	int getIDAdresse(void);
	int getNumeroRue(void);
	int getCodePostal(void);
	string getNomRue(void);
	string getVille(void);
	string getTypeRue(void);
};