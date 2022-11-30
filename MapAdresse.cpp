#include "MapAdresse.h"
#include <string>
using namespace std;

string Adresse::Select(void)
{
	return "SELECT [IDAdresse], [NumeroRue], [CodePostal], [NomRue], [Ville], [TypeRue] FROM Adresse";
}
string Adresse::Insert(void)
{
	return "INSERT INTO Adresse (IDAdresse, NumeroRue, CodePostal, NomRue, Ville, TypeRue) VALUES('" + this->IDAdresse + "', '" + this->NumeroRue + "', '" + this->CodePostal + "','" + this->NomRue + "','" + this->Ville + "','" + this->TypeRue +"'); ";
}
string Adresse::Delete(void)
{
	return "DELETE FROM Adresse WHERE Adresse.IDAdresse VALUES('" + this->IDAdresse + "')";
}
string Adresse::Update(void)
{
	return "UPDATE Adresse SET IDAdresse = '" + this->IDAdresse + "', NumeroRue = '" + this->NumeroRue + "', CodePostal = '" + this->CodePostal + "', NomRue = '" + this->NomRue + "', Ville = '" + this->Ville + "', TypeRue = '" + this->TypeRue)"; ";
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
void Adresse::setNomRue(string rue)
{
	this->NomRue = rue;
}
void Adresse::setVille(string ville)
{
	this->Ville = ville;
}
void Adresse::setTypeRue(string type)
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
string Adresse::getNomRue(void)
{
	return this->NomRue;
}
string Adresse::getVille(void)
{
	return this->Ville;
}
string Adresse::getTypeRue(void)
{
	return this->TypeRue;
}