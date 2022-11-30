#include "MapArticle.h"

using namespace NS_Comp;

String^ MapArticle::Select() {
	return "SELECT [Id_Article],[Seuil_Reapprovisionnement],[Prix_HT],[Nature],[Couleur],[Designation],[Id_TVA] FROM [Article]";
}

String^ MapArticle::Insert() {
	return "INSERT INTO [Article] (Seuil_Reapprovisionnement,Prix_HT,Nature,Couleur,Designation,Id_TVA) VALUES ('" + this->SeuilApprov + "','" + this->prixHT + "','" + this->natureArticle + "','" + this->couleur + "','" + this->designation + "','" + this->idTVA + "');";
}

String^ MapArticle::Update() {
	return "UPDATE [Article] SET [Seuil_Reapprovisionnement] = '" + this->SeuilApprov + "', [Prix_HT] = '" + this->prixHT + "', [Nature]='" + this->natureArticle + "', [Couleur]='" + this->couleur + "', [Designation]='" + this->designation + "', [Id_TVA]='" + this->idTVA + "' WHERE[Id_Article] = '" + this->idCatalogue + "'; ";
}

String^ MapArticle::Delete() {
	return "DELETE FROM [Article] WHERE [Id_Article] = '"+this->idCatalogue+"'";
}

void MapArticle::setIdCatalogue(int id) {
	this->idCatalogue = id;
}

void MapArticle::setDesignation(String^ nom) {
	this->designation = nom;
}

void MapArticle::setNatureArticle(String^ nature) {
	this->natureArticle = nature;
}

void MapArticle::setCouleur(String^ couleur) {
	this->couleur = couleur;
}

void MapArticle::setSeuilApprov(int seuil) {
	this->SeuilApprov = seuil;
}

void MapArticle::setPrixHT(float prix) {
	this->prixHT = prix;
}

void MapArticle::setIdTVA(int id) {
	this->idTVA = id;
}

int MapArticle::getIdCatalogue() {
	return this->idCatalogue;
}

String^ MapArticle::getDesignation() {
	return this->designation;
}

String^ MapArticle::getNatureArticle() {
	return this->natureArticle;
}

String^ MapArticle::getCouleur() {
	return this->couleur;
}

int MapArticle::getSeuilApprov() {
	return this->SeuilApprov;
}

float MapArticle::getPrixHT() {
	return this->prixHT;
}

int MapArticle::getIdTVA() {
	return this->idTVA;
}