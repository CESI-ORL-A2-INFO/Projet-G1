#include "ServiceStock.h"

using namespace NS_Serv;

ServiceStock::ServiceStock() {
	this->mapStock = gcnew NS_Comp::MapArticle();
	this->sCad = gcnew NS_Comp_Data::Cad();
}

void ServiceStock::addStock(System::String^ designation, System::String^ nature_article, System::String^ couleur, int seuil_approvisionnement, int quantite, int id_tva, System::String^ prixHT) {
	System::String^ sql;

	this->mapStock->setDesignation(designation);										// On associe la données entrée a la désignation d'un article
	this->mapStock->setNatureArticle(nature_article);								// On associe la données entrée a la nature d'un article
	this->mapStock->setCouleur(couleur);												// On associe la données entrée a la couleur d'un article
	this->mapStock->setSeuilApprov(seuil_approvisionnement);				// On associe la données entrée au seuil d'approvisionnement
	this->mapStock->setIdTVA(id_tva);												// On associe la données entrée a l'id de la tva du produit
	this->mapStock->setPrixHT(prixHT);												// On associe la données entrée au prix hors taxe du produit
	this->mapStock->setQuantite(quantite);
	sql = this->mapStock->Insert();													// On insere les données dans la base de données 

	this->sCad->actionRows(sql);
}


void ServiceStock::updateStock(int id_catalogue, System::String^ designation, System::String^ nature_article, System::String^ couleur, int seuil_approvisionnement, int quantite, int id_tva, System::String^ prixHT) {
	System::String^ sql;

	this->mapStock->setIdCatalogue(id_catalogue);									// On associe la données entrée a l'ID du catalogue qu'on veut modifier
	this->mapStock->setDesignation(designation);										// On associe la données entrée a la désignation d'un article qu'on veut modifier
	this->mapStock->setNatureArticle(nature_article);								// On associe la données entrée a la nature d'un article qu'on veut modifier
	this->mapStock->setCouleur(couleur);												// On associe la données entrée a la couleur d'un article qu'on veut modifier
	this->mapStock->setSeuilApprov(seuil_approvisionnement);				// On associe la données entrée au seuil d'approvisionnement qu'on veut modifier
	this->mapStock->setIdTVA(id_tva);												// On associe la données entrée a l'id de la tva du produit qu'on veut modifier
	this->mapStock->setPrixHT(prixHT);												// On associe la données entrée au prix hors taxe du produit qu'on veut modifier
	this->mapStock->setQuantite(quantite);
	sql = this->mapStock->Update();													// On met a jour les données dans la base de données 

	this->sCad->actionRows(sql);
}


void ServiceStock::delStock(int id_catalogue) {
	System::String^ sql;

	this->mapStock->setIdCatalogue(id_catalogue);									// On associe la données entrée a l'ID du catalogue qu'on veut supprimer

	sql = this->mapStock->Delete();													// On supprime les données dans la base de données 

	this->sCad->actionRows(sql);
}


System::Data::DataSet^ ServiceStock::selectAllStock(System::String^ nom_table) {
	System::String^ sql;

	sql = this->mapStock->Select();

	return this->sCad->getRows(sql, nom_table);
}

System::Data::DataSet^ ServiceStock::selectStockWhitId(System::String^ nom_table, int id_catalogue) {
	System::String^ sql;

	this->mapStock->setIdCatalogue(id_catalogue);
	sql = this->mapStock->SelectWithID();

	return this->sCad->getRows(sql, nom_table);
}