#include "ServicePersonnel.h"


void ServicePersonnel::addPers(System::String^ nom, System::String^ prenom, System::String^ statut, int adresse){
	
	System::String^ sql;

	this->mapPers->setNom(nom);						// On associe la données entrée au nom d'un personnel
	this->mapPers->setPrenom(prenom);				// On associe la données entrée au prenom d'un personnel
	this->mapPers->setStatut(statut);				// On associe la données entrée au statut d'un personnel
	this->mapPers->setAdresse(adresse);				// On associe la données entrée a l'adresse d'un personnel
	
	sql = this->mapPers->Insert();					// On insere les données dans la base de données 

	this->pCad->actionRows(sql);
}


void ServicePersonnel::updatePers(int id_personnel, System::String^ nom, System::String^ prenom, System::String^ statut, int id_superieur) {
	System::String^ sql;

	this->mapPers->setId(id_personnel);				// On associe la données entrée a l'ID du personnel dont on souhaite modifier les données
	this->mapPers->setNom(nom);						// On associe la données entrée au nom du personnel dont on souhaite modifier les données
	this->mapPers->setPrenom(prenom);				// On associe la données entrée au prenom du personnel dont on souhaite modifier les données
	this->mapPers->setStatut(statut);				// On associe la données entrée au statut du personnel dont on souhaite modifier les données
	this->mapPers->setIdSuperieur(id_superieur);	// On associe la données entrée a l'ID du superieur du personnel dont on souhaite modifier les données

	sql = this->mapPers->Update();					// On met a jour les données dans la base de données 

	this->pCad->actionRows(sql);

}


void ServicePersonnel::delPers(int id_personnel) {
	System::String^ sql;

	this->mapPers->setId(id_personnel);				// On associe la données entrée a l'ID du personnel dont on souhaite supprimer les données

	sql = this->mapPers->Delete();					// On met a jour les données dans la base de données

	this->pCad->actionRows(sql);
}


DataSet ServicePersonnel::selectAllPers(System::String^ nom_table) {
	System::String^ sql;

	sql = this->mapPers->Select();

	return this->pCad->getRows(sql, nom_table);
}

DataSet ServicePersonnel::selectPers(System::String^ nom_table, int id_personnel) {
	System::String^ sql;

	sql = this->mapPers->Select();

	return this->pCad->getRows(sql, nom_table);
}