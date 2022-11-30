#pragma once

class Adresse {
private:
	int IDAdresse;
	int NumeroRue;
	int CodePostal;
	System::String^ NomRue;
	System::String^ Ville;
	System::String^ TypeRue;
	System::String^ sSql;
public:
	System::String^ Select(void);
	System::String^ Insert(void);
	System::String^ Delete(void);
	System::String^ Update(void);

	void setIDAdresse(int);
	void setNumeroRue(int);
	void setCodePostal(int);
	void setNomRue(System::String^);
	void setVille(System::String^);
	void setTypeRue(System::String^);

	int getIDAdresse(void);
	int getNumeroRue(void);
	int getCodePostal(void);
	System::String^ getNomRue(void);
	System::String^ getVille(void);
	System::String^ getTypeRue(void);
};