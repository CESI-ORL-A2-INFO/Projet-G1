#include "MapAdresse.h"

System::String^ Adresse::Select(void)
{
	return "SELECT [Id_Adresse], [Numero_Rue], [Code_Postal], [Nom_rue], [Ville], [Type_Rue] FROM Adresse";
}
System::String^ Adresse::Insert(void)
{
	return "INSERT INTO Adresse (Id_Adresse, Numero_Rue, Code_Postal, Nom_rue, Ville, Type_Rue) VALUES('" + this->Id_Adresse + "', '" + this->Numero_Rue + "', '" + this->Code_Postal + "','" + this->Nom_rue + "','" + this->Ville + "','" + this->Type_Rue +"'); ";
}
System::String^ Adresse::Delete(void)
{
	return "DELETE FROM Adresse WHERE Adresse.Id_Adresse VALUES('" + this->Id_Adresse + "')";
}
System::String^ Adresse::Update(void)
{
	return "UPDATE Adresse SET Id_Adresse = '" + this->Id_Adresse + "', NumeroRue = '" + this->Numero_Rue + "', CodePostal = '" + this->Code_Postal + "', NomRue = '" + this->Nom_rue + "', Ville = '" + this->Ville + "', TypeRue = '" + this->Type_Rue)"; ";
}
void Adresse::setIDAdresse(int ID)
{
	this->Id_Adresse = ID;
}
void Adresse::setNumeroRue(int num)
{
	this->Numero_Rue = num;
}
void Adresse::setCodePostal(int cp)
{
	this->Code_Postal = cp;
}
void Adresse::setNomRue(System::String^ rue)
{
	this->Nom_rue = rue;
}
void Adresse::setVille(System::String^ ville)
{
	this->Ville = ville;
}
void Adresse::setTypeRue(System::String^ type)
{
	this->Type_Rue = type;
}
int Adresse::getIDAdresse(void) 
{ 
	return this->Id_Adresse; 
}
int Adresse::getNumeroRue(void)
{
	return this->Numero_Rue;
}
int Adresse::getCodePostal(void)
{
	return this->Code_Postal;
}
System::String^ Adresse::getNomRue(void)
{
	return this->Nom_rue;
}
System::String^ Adresse::getVille(void)
{
	return this->Ville;
}
System::String^ Adresse::getTypeRue(void)
{
	return this->TyperRue;
}