#include "MapFacture.h"

using namespace NS_Comp;

String^ MapFacture::SelectWithFact() {
	return "SELECT * FROM Facture WHERE Id_Facture = '" + this->IdFacture + "'";
}

String^ MapFacture::Select() {
	return "SELECT * FROM Facture";
}

String^ MapFacture::Insert() {
	return "INSERT INTO Facture (Dernier_Paiement_En_Date,Reference,Id_moyPaiement) VALUES ('" + this->dernierPaiementEnDate + "','" + this->reference + "','" + this->idMoyPaiement + "'); ";
}

String^ MapFacture::Update() {
	return "UPDATE Facture SET Dernier_Paiement_En_Date='"+this->dernierPaiementEnDate+"',Reference='" + this->reference + "',Id_moyPaiement='" + this->idMoyPaiement + "' WHERE Id_Facture = '"+this->IdFacture+"';";
}

String^ MapFacture::Delete() {
	return "DELETE FROM Facture WHERE Id_Facture = '"+this->IdFacture+"';";
}

void MapFacture::setIdFacture(int id) {
	this->IdFacture = id;
}

void MapFacture::setDernierPaiementEnDate(String^ last) {
	this->dernierPaiementEnDate = last;
}

void MapFacture::setNumClient(int num) {
	this->numClient = num;
}

void MapFacture::setReference(String^ ref) {
	this->reference = ref;
}

void MapFacture::setIdMoyPaiement(int idP) {
	this->idMoyPaiement = idP;
}

int MapFacture::getIdFacture() {
	return this->IdFacture;
}

int MapFacture::getNumClient() {
	return this->numClient;
}

int MapFacture::getIdMoyPaiement() {
	return this->idMoyPaiement;
}

String^ MapFacture::getDernierPaiementEnDate() {
	return this->dernierPaiementEnDate;
}

String^ MapFacture::getReference() {
	return this->reference;
}