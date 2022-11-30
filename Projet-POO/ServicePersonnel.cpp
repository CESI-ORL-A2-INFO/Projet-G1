#include "ServicePersonnel.h"


void ServicePersonnel::addPers(System::String^ nom, System::String^ prenom, System::String^ statut, int adresse){
	
	System::String^ sql;

	this->mapPers->setNom(nom);						// On associe la donn�es entr�e au nom d'un personnel
	this->mapPers->setPrenom(prenom);				// On associe la donn�es entr�e au prenom d'un personnel
	this->mapPers->setStatut(statut);				// On associe la donn�es entr�e au statut d'un personnel
	this->mapPers->setAdresse(adresse);				// On associe la donn�es entr�e a l'adresse d'un personnel
	
	sql = this->mapPers->Insert();					// On insere les donn�es dans la base de donn�es 

	this->pCad->actionRows(sql);
}


void ServicePersonnel::updatePers(int id_personnel, System::String^ nom, System::String^ prenom, System::String^ statut, int id_superieur) {
	System::String^ sql;

	this->mapPers->setId(id_personnel);				// On associe la donn�es entr�e a l'ID du personnel dont on souhaite modifier les donn�es
	this->mapPers->setNom(nom);						// On associe la donn�es entr�e au nom du personnel dont on souhaite modifier les donn�es
	this->mapPers->setPrenom(prenom);				// On associe la donn�es entr�e au prenom du personnel dont on souhaite modifier les donn�es
	this->mapPers->setStatut(statut);				// On associe la donn�es entr�e au statut du personnel dont on souhaite modifier les donn�es
	this->mapPers->setIdSuperieur(id_superieur);	// On associe la donn�es entr�e a l'ID du superieur du personnel dont on souhaite modifier les donn�es

	sql = this->mapPers->Update();					// On met a jour les donn�es dans la base de donn�es 

	this->pCad->actionRows(sql);

}


void ServicePersonnel::delPers(int id_personnel) {
	System::String^ sql;

	this->mapPers->setId(id_personnel);				// On associe la donn�es entr�e a l'ID du personnel dont on souhaite supprimer les donn�es

	sql = this->mapPers->Delete();					// On met a jour les donn�es dans la base de donn�es

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