#include "MapClient.h"
#include <string>
using namespace std;

string Client::Select(void)
{
	return "SELECT [NumeroClient], [AdresseLivraison], [AdressePaiement], [DateDeNaissance], [DatePremiereCommande], [NomClient], [PrenomClient] FROM Client";
}
string Client::Insert(void)
{
	return "INSERT INTO Client (NumeroClient, AdresseLivraison, AdressePaiement, DateDeNaissance, DatePremiereCommande, NomClient, PrenomClient) VALUES('" + this->NumeroClient + "', '" + this->AdresseLivraison + "', '" + this->AdressePaiement + "','" + this->DateDeNaissance + "','" + this->DatePremiereCommande + "','" + this->NomClient + "','" + this->PrenomClient + "'); ";
}
string Client::Delete(void)
{
	return "DELETE FROM Client WHERE Client.NumeroClient VALUES('" + this->NumeroClient + "')";
}
string Client::Update(void)
{
	return "UPDATE Client SET NumeroClient = '" + this->NumeroClient + "', AdresseLivraison = '" + this->AdresseLivraison + "', AdressePaiement = '" + this->AdressePaiement + "', DateDeNaissance = '" + this->DateDeNaissance + "', DatePremiereCommande = '" + this->DatePremiereCommande + "', NomClient = '" + this->NomClient + "', PrenomClient = '" + this->PrenomClient + "'); ";
}
void Client::setNumeroClient(int ID)
{
	this->NumeroClient = ID;
}
void Client::setAdresseLivraison(int AdLiv)
{
	this->AdresseLivraison = AdLiv;
}
void Client::setAdressePaiement(int AdPaie)
{
	this->AdressePaiement = AdPaie;
}
void Client::setDateDeNaissance(string naissance)
{
	this->DateDeNaissance = naissance;
}
void Client::setDatePremiereCommande(string premcom)
{
	this->DatePremiereCommande = premcom;
}
void Client::setNomClient(string nom)
{
	this->NomClient = nom;
}
void Client::setPrenomClient(string prenom)
{
	this->PrenomClient = prenom;
}
int Client::getNumeroClient(void)
{
	return this->NumeroClient;
}
int Client::getAdresseLivraison(void)
{
	return this->AdresseLivraison;
}
int Client::getAdressePaiement(void)
{
	return this->AdressePaiement;
}
string Client::getDateDeNaissance(void)
{
	return this->DateDeNaissance;
}
string Client::getDatePremiereCommande(void)
{
	return this->DatePremiereCommande;
}
string Client::getNomClient(void)
{
	return this->NomClient;
}
string Client::getPrenomClient(void)
{
	return this->PrenomClient;
}