#include "MapClient.h"

System::String^ Client::Select(void)
{
	return "SELECT [Numero_client], [Date_naissance], [Date_premiere_commande], [Nom_client], [Prenom_client], [Id_Adresse], [Id_Adresse_Livrer] FROM Client";
}
System::String^ Client::Insert(void)
{
	return "INSERT INTO Client (Numero_client, Date_naissance, Date_premiere_commande, Nom_client, Prenom_client, Id_Adresse, Id_Adresse_Livrer) VALUES('" + this->Numero_client + "', '" + this->Date_naissance + "','" + this->Date_premiere_commande + "','" + this->Nom_client + "','" + this->Prenom_client + "','" + this->Id_Adresse + "','" + this->Id_Adresse_Livrer +"'); ";
}
System::String^ Client::Delete(void)
{
	return "DELETE FROM Client WHERE Client.Numero_client VALUES('" + this->Numero_client + "')";
}
System::String^ Client::Update(void)
{
	return "UPDATE Client SET Numero_client = '" + this->Numero_client + "', Date_naissance = '" + this->Date_naissance + "', Date_premiere_commande = '" + this->Date_premiere_commande + "', Nom_client = '" + this->Nom_client + "', Prenom_client = '" + this->Prenom_client + "', Id_Adresse = '" + this->Id_Adresse + "','" + this->Id_Adresse_Livrer"'); ";
}
void Client::setNumeroClient(int ID)
{
	this->Numero_client = ID;
}
void Client::setDateDeNaissance(System::String^ naissance)
{
	this->Date_naissance = naissance;
}
void Client::setDatePremiereCommande(System::String^ premcom)
{
	this->Date_premiere_commande = premcom;
}
void Client::setNomClient(System::String^ nom)
{
	this->Nom_client = nom;
}
void Client::setPrenomClient(System::String^ prenom)
{
	this->Prenom_client = prenom;
}
void Client::setAdresseLivraison(int AdLiv)
{
	this->Id_Adresse_Livrer = AdLiv;
}
void Client::setAdressePaiement(int AdPaie)
{
	this->Id_Adresse = AdPaie;
}
int Client::getNumeroClient(void)
{
	return this->Numero_client;
}
System::String^ Client::getDateDeNaissance(void)
{
	return this->Date_naissance;
}
System::String^ Client::getDatePremiereCommande(void)
{
	return this->Date_premiere_commande;
}
System::String^ Client::getNomClient(void)
{
	return this->Nom_client;
}
System::String^ Client::getPrenomClient(void)
{
	return this->Prenom_client;
}
int Client::getAdresseLivraison(void) 
{
	return this->Id_Adresse_Livrer;
}
int Client::getAdressePaiement(void)
{
	return this->Id_Adresse;
}