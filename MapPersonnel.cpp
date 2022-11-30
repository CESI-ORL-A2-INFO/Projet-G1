#include "MapPersonnel.h"

using namespace NS_Comp;

System::String^ Personnel::Select(void)
{
	return "SELECT [Id_Personnel], [Id_Superieur], [Date_Embauche], [Nom_Personnel], [Prenom_Personnel], [Statut], [Id_Adresse] FROM Personnel";
}
System::String^ Personnel::Insert(void)
{
	return "INSERT INTO Personnel (Id_Personnel, IDSuperieur, Date_Embauche, Nom_Personnel, Prenom_Personnel, Statut, Id_Adresse) VALUES('" + this->Id_Personnel + "', '" + this->Id_Superieur + "', '" + this->Date_Embauche + "','" + this->Nom_Personnel + "','" + this->Prenom_Personnel + "','" + this->Statut + "','" + this->Id_Adresse +"'); ";
}
System::String^ Personnel::Delete(void)
{
	return "DELETE FROM Personnel WHERE Personnel.Id_Personnel VALUES('" + this->Id_Personnel + "')";
}
System::String^ Personnel::Update(void)
{
	return "UPDATE Personnel SET Id_Personnel = '" + this->Id_Personnel + "', Id_Superieur = '" + this->Id_Superieur + "', Date_Embauche = '" + this->Date_Embauche + "', Nom_Personnel = '" + this->Nom_Personnel + "', Prenom_Personnel = '" + this->Prenom_Personnel + "', Statut = '" + this->Statut + "', Id_Adresse = '" + this->Id_Adresse + "'); ";
}
void Personnel::setIDPersonnel(int ID)
{
	this->Id_Personnel = ID;
}
void Personnel::setIDSuperieur(int IDSup)
{
	this->Id_Superieur = IDSup;
}
void Personnel::setDateEmbauche(int Embauche)
{
	this->Date_Embauche = Embauche;
}
void Personnel::setNom(System::String^ nom)
{
	this->Nom_Personnel = nom;
}
void Personnel::setPrenom(System::String^ prenom)
{
	this->Prenom_Personnel = prenom;
}
void Personnel::setStatut(System::String^ statut)
{
	this->Statut = statut;
}
void Personnel::setAdresse(int adresse)
{
	this->Id_Adresse = adresse;
}
int Personnel::getID(void)
{
	return this->Id_Personnel;
}
int Personnel::getIDSuperieur(void)
{
	return this->Id_Superieur;
}
int Personnel::getDateEmbauche(void)
{
	return this->Date_Embauche;
}
System::String^ Personnel::getNom(void)
{
	return this->Nom_Personnel;
}
System::String^ Personnel::getPrenom(void)
{
	return this->Prenom_Personnel;
}
System::String^ Personnel::getStatut(void)
{
	return this->Statut;
}
int Personnel::getAdresse(void)
{
	return this->Id_Adresse;
}