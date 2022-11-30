#include "ServiceStock.h"


void CLServiceStock::ServiceStock::addCata(System::String^ designation, System::String^ nature_article, System::String^ couleur, int seuil_approvisionnement, int id_tva, float prixHT) {
	System::String^ sql;

	this->mapCata->setDesignation(designation);										// On associe la données entrée a la désignation d'un article
	this->mapCata->setNatureArticle(nature_article);								// On associe la données entrée a la nature d'un article
	this->mapCata->setCouleur(couleur);												// On associe la données entrée a la couleur d'un article
	this->mapCata->setSeuilApprovisionnement(seuil_approvisionnement);				// On associe la données entrée au seuil d'approvisionnement
	this->mapCata->setIDTVA(id_tva);												// On associe la données entrée a l'id de la tva du produit
	this->mapCata->setPrixHT(prixHT);												// On associe la données entrée au prix hors taxe du produit

	sql = this->mapCata->Insert();													// On insere les données dans la base de données 

	this->cataCad->actionRows(sql);
}


void CLServiceStock::ServiceStock::updateCata(int id_catalogue, System::String^ designation, System::String^ nature_article, System::String^ couleur, int seuil_approvisionnement, int id_tva, float prixHT) {
	System::String^ sql;

	this->mapCata->setIdCatalogue(id_catalogue);									// On associe la données entrée a l'ID du catalogue qu'on veut modifier
	this->mapCata->setDesignation(designation);										// On associe la données entrée a la désignation d'un article qu'on veut modifier
	this->mapCata->setNatureArticle(nature_article);								// On associe la données entrée a la nature d'un article qu'on veut modifier
	this->mapCata->setCouleur(couleur);												// On associe la données entrée a la couleur d'un article qu'on veut modifier
	this->mapCata->setSeuilApprovisionnement(seuil_approvisionnement);				// On associe la données entrée au seuil d'approvisionnement qu'on veut modifier
	this->mapCata->setIDTVA(id_tva);												// On associe la données entrée a l'id de la tva du produit qu'on veut modifier
	this->mapCata->setPrixHT(prixHT);												// On associe la données entrée au prix hors taxe du produit qu'on veut modifier

	sql = this->mapCata->Update();													// On met a jour les données dans la base de données 

	this->cataCad->actionRows(sql);
}


void CLServiceStock::ServiceStock::delCata(int id_catalogue) {
	System::String^ sql;

	this->mapCata->setIdCatalogue(id_catalogue);									// On associe la données entrée a l'ID du catalogue qu'on veut supprimer

	sql = this->mapCata->Delete();													// On supprime les données dans la base de données 

	this->cataCad->actionRows(sql);
}


System::Data::DataSet^ CLServiceStock::ServiceStock::selectAllCata(System::String^ nom_table) {
	System::String^ sql;

	sql = this->mapCata->Select();

	return this->cataCad->getRows(sql, nom_table);
}

System::Data::DataSet^ ServiceStock::selectCata(System::String^ nom_table, int id_catalogue) {
	System::String^ sql;

	sql = this->mapCata->Select();

	return this->cataCad->getRows(sql, nom_table);
}
