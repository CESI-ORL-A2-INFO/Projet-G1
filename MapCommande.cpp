#include "MapCommande.h"

using namespace NS_Comp;

String^ MapCommande::Select() {
	return "SELECT * FROM Commande";
}

String^ MapCommande::Insert() {
	return "INSERT INTO Adresse (Nom_Societe,Total_TTC,Montant_Remise,Total_Articles,Date_Emission,Date_Paiement,Date_Livraison,Numero_Client,Id_Facture) VALUES ('" + this->nomSociete + "','" + this->TotalTTC + "','" + this->MontantRemise + "',,'" + this->TotalArticles + "','" + this->DateEmission + "','" + this->DatePaiement + "','" + this->DateLivraison + "','" + this->NumeroClient + "','" + this->IDFacture + "'); ";
}

String^ MapCommande::Update() {
	return "UPDATE Commande SET Nom_Societe='"+this->nomSociete+"',Total_TTC='" + this->TotalTTC + "',Montant_Remise='" + this->MontantRemise + "',Total_Articles='" + this->TotalArticles + "',Date_Emission='" + this->DateEmission + "',Date_Paiement='" + this->DatePaiement + "',Date_Livraison='" + this->DateLivraison + "',Numero_Client='" + this->NumeroClient + "',Id_Facture='" + this->IDFacture + "' WHERE Reference = '" + this->reference + "';";
}

String^ MapCommande::Delete() {
	return "DELETE FROM Commande WHERE Reference='" + this->reference + "';";
}

void MapCommande::setReference(String^ ref) {
	this->reference = ref;
}

void MapCommande::setNomSociete(String^ societe) {
	this->nomSociete = societe;
}

void MapCommande::setTotalTTC(float total) {
	this->TotalTTC = total;
}

void MapCommande::setMontantRemise(float remise) {
	this->MontantRemise = remise;
}

void MapCommande::setTotalArticles(int nbArticle) {
	this->TotalArticles = nbArticle;
}

void MapCommande::setIDFacture(int idfact) {
	this->IDFacture = idfact;
}

void MapCommande::setNumeroClient(int num) {
	this->NumeroClient = num;
}

void MapCommande::setDernierPaiement(String^ last) {
	this->DernierPaiement = last;
}

void MapCommande::setDateEmission(String^ emi) {
	this->DateEmission = emi;
}

void MapCommande::setDatePaiement(String^ paiement) {
	this->DatePaiement = paiement;
}

void MapCommande::setDateLivraison(String^ livraison) {
	this->DateLivraison = livraison;
}

void MapCommande::setIDArticle(int idart) {
	this->IDArticle = idart;
}

void MapCommande::setQuantite(int qte) {
	this->Quantite = qte;
}

String^ MapCommande::getReference() {
	return this->reference;
}

String^ MapCommande::getNomSociete() {
	return this->nomSociete;
}
float MapCommande::getTotalTTC() {
	return this->TotalTTC;
}
float MapCommande::getMontantRemise() {
	return this->MontantRemise;
}
int MapCommande::getTotalArticles() {
	return this->TotalArticles;
}
int MapCommande::getIDFacture() {
	return this->IDFacture;
}
int MapCommande::getNumeroClient() {
	return this->NumeroClient;
}
String^ MapCommande::getDernierPaiement() {
	return this->DernierPaiement;
}
String^ MapCommande::getDateEmission() {
	return this->DateEmission;
}
String^ MapCommande::getDatePaiement() {
	return this->DatePaiement;
}
String^ MapCommande::getDateLivraison() {
	return this->DateLivraison;
}
int MapCommande::getIDArticle() {
	return this->IDArticle;
}
int MapCommande::getQuantite() {
	return this->Quantite;
}