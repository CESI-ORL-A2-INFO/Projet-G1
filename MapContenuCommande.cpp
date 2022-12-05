#include "MapContenuCommande.h"

using namespace NS_Comp;

System::String^ MapContenuCommande::Select() {
	return "SELECT * FROM Alimenter";
}

System::String^ MapContenuCommande::Insert() {
	return "INSERT INTO Alimenter (Id_Article,Reference,Quantite) VALUES('" + this->IdArticle + "','" + this->ref + "','" + this->Quantite + "')";
}

System::String^ MapContenuCommande::Update() {
	return "UPDATE Alimenter SET Id_Article = '" + this->IdArticle + "', Reference = '" + this->ref + "', Quantite = '" + this->Quantite + "' WHERE Reference = '" + this->ref + "' AND Id_Article = '" + this->IdArticle + "'";
}

System::String^ MapContenuCommande::Delete() {
	return "DELETE FROM Alimenter WHERE Reference = '" + this->ref + "' AND Id_Article = '" + this->IdArticle + "' ";
}

void MapContenuCommande::setIdArticle(int id) {
	this->IdArticle = id;
}

void MapContenuCommande::setQuantite(int qte) {
	this->Quantite = qte;
}

void MapContenuCommande::setRef(System::String^ ref) {
	this->ref = ref;
}

int MapContenuCommande::getIdArticle() {
	return this->IdArticle;
}

int MapContenuCommande::getQuantite() {
	return this->Quantite;
}

System::String^ MapContenuCommande::getRef() {
	return this->ref;
}