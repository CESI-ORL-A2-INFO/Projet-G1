#include "MapPersonnel.h"
#include <string>
using namespace std;

string Personnel::Select(void)
{
	return "SELECT [IDPersonnel], [IDSuperieur], [DateEmbauche], [Nom], [Prenom], [Statut], [Adresse] FROM Personnel";
}
string Personnel::Insert(void)
{
	return "INSERT INTO Personnel (IDPersonnel, IDSuperieur, DateEmbauche, Nom, Prenom, Statut, Adresse) VALUES('" + this->IDPersonnel + "', '" + this->IDSuperieur + "', '" + this->DateEmbauche + "','" + this->Nom + "','" + this->Prenom + "','" + this->Statut + "','" + this->Adresse +"'); ";
}
string Personnel::Delete(void)
{
	return "DELETE FROM Personnel WHERE Personnel.IDPersonnel VALUES('" + this->IDPersonnel + "')";
}
string Personnel::Update(void)
{
	return "UPDATE Personnel SET IDPersonnel = '" + this->IDPersonnel + "', IDSuperieur = '" + this->IDSuperieur + "', DateEmbauche = '" + this->DateEmbauche + "', Nom = '" + this->Nom + "', Prenom = '" + this->Prenom + "', Statut = '" + this->Statut + "', Adresse = '" + this->Adresse + "'); ";
}
void Personnel::setIDPersonnel(int ID)
{
	this->IDPersonnel = ID;
}
void Personnel::setIDSuperieur(int IDSup)
{
	this->IDSuperieur = IDSup;
}
void Personnel::setDateEmbauche(int Embauche)
{
	this->DateEmbauche = Embauche;
}
void Personnel::setNom(string nom)
{
	this->Nom = nom;
}
void Personnel::setPrenom(string prenom)
{
	this->Prenom = prenom;
}
void Personnel::setStatut(string statut)
{
	this->Statut = statut;
}
void Personnel::setAdresse(int adresse)
{
	this->Adresse = adresse;
}
int Personnel::getID(void)
{
	return this->IDPersonnel;
}
int Personnel::getIDSuperieur(void)
{
	return this->IDSuperieur;
}
int Personnel::getDateEmbauche(void)
{
	return this->DateEmbauche;
}
string Personnel::getNom(void)
{
	return this->Nom;
}
string Personnel::getPrenom(void)
{
	return this->Prenom;
}
string Personnel::getStatut(void)
{
	return this->Statut;
}
int Personnel::getAdresse(void)
{
	return this->Adresse;
}