#include "MapAdresse.h"

using namespace NS_Comp;


System::String^ Adresse::SelectWithID() {
	return "SELECT * FROM [Adresse] WHERE Id_Adresse = '" + this->IDAdresse + "'";
}
System::String^ Adresse::Select(void)
{
	return "SELECT [Id_Adresse], [Numero_Rue], [Code_Postal], [Nom_rue], [Ville], [Type_Rue] FROM Adresse";
}
System::String^ Adresse::Insert(void)
{
	return "INSERT INTO Adresse (Numero_Rue, Code_Postal, Nom_rue, Ville, Type_Rue) VALUES('" + this->NumeroRue + "', '" + this->CodePostal + "','" + this->NomRue + "','" + this->Ville + "','" + this->TypeRue +"'); ";
}
System::String^ Adresse::Delete(void)
{
	return "DELETE FROM Adresse WHERE Id_Adresse ='" + this->IDAdresse + "'";
}
System::String^ Adresse::Update(void)
{
	return "UPDATE Adresse SET Numero_Rue = '" + this->NumeroRue + "', Code_Postal = '" + this->CodePostal + "', Nom_rue = '" + this->NomRue + "', Ville = '" + this->Ville + "', Type_Rue = '" + this->TypeRue + "' WHERE Id_Adresse = '" + this->IDAdresse + "'";
}
void Adresse::setIDAdresse(int ID)
{
	this->IDAdresse = ID;
}
void Adresse::setNumeroRue(int num)
{
	this->NumeroRue = num;
}
void Adresse::setCodePostal(int cp)
{
	this->CodePostal = cp;
}
void Adresse::setNomRue(System::String^ rue)
{
	this->NomRue = rue;
}
void Adresse::setVille(System::String^ ville)
{
	this->Ville = ville;
}
void Adresse::setTypeRue(System::String^ type)
{
	this->TypeRue = type;
}
int Adresse::getIDAdresse(void) 
{ 
	return this->IDAdresse; 
}
int Adresse::getNumeroRue(void)
{
	return this->NumeroRue;
}
int Adresse::getCodePostal(void)
{
	return this->CodePostal;
}
System::String^ Adresse::getNomRue(void)
{
	return this->NomRue;
}
System::String^ Adresse::getVille(void)
{
	return this->Ville;
}
System::String^ Adresse::getTypeRue(void)
{
	return this->TypeRue;
}