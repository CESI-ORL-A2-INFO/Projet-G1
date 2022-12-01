#include "ServicePersonnel.h"

using namespace NS_Serv;

ServicePersonnel::ServicePersonnel() {
	pCad = gcnew NS_Comp_Data::Cad();
	mapPers = gcnew NS_Comp::Personnel();
}

void ServicePersonnel::addPers(System::String^ nom, System::String^ prenom, System::String^ statut,System::String^ dateEm, int adresse, int idSupp) {

	System::String^ sql;

	this->mapPers->setIDSuperieur(idSupp);
	this->mapPers->setNom(nom);						// On associe la donn�es entr�e au nom d'un personnel
	this->mapPers->setPrenom(prenom);				// On associe la donn�es entr�e au prenom d'un personnel
	this->mapPers->setStatut(statut);				// On associe la donn�es entr�e au statut d'un personnel
	this->mapPers->setDateEmbauche(dateEm);
	this->mapPers->setAdresse(adresse);				// On associe la donn�es entr�e a l'adresse d'un personnel

	sql = this->mapPers->Insert();					// On insere les donn�es dans la base de donn�es 

	this->pCad->actionRows(sql);
}


void ServicePersonnel::updatePers(int id_personnel, System::String^ nom, System::String^ prenom, System::String^ statut,System::String^ dateEm, int id_superieur,int idAd) {
	System::String^ sql;

	this->mapPers->setIDPersonnel(id_personnel);				// On associe la donn�es entr�e a l'ID du personnel dont on souhaite modifier les donn�es
	this->mapPers->setNom(nom);						// On associe la donn�es entr�e au nom du personnel dont on souhaite modifier les donn�es
	this->mapPers->setPrenom(prenom);				// On associe la donn�es entr�e au prenom du personnel dont on souhaite modifier les donn�es
	this->mapPers->setStatut(statut);				// On associe la donn�es entr�e au statut du personnel dont on souhaite modifier les donn�es
	this->mapPers->setIDSuperieur(id_superieur);	// On associe la donn�es entr�e a l'ID du superieur du personnel dont on souhaite modifier les donn�es
	this->mapPers->setAdresse(idAd);
	this->mapPers->setDateEmbauche(dateEm);
	sql = this->mapPers->Update();					// On met a jour les donn�es dans la base de donn�es 

	this->pCad->actionRows(sql);

}


void ServicePersonnel::delPers(int id_personnel) {
	System::String^ sql;

	this->mapPers->setIDPersonnel(id_personnel);				// On associe la donn�es entr�e a l'ID du personnel dont on souhaite supprimer les donn�es

	sql = this->mapPers->Delete();					// On met a jour les donn�es dans la base de donn�es

	this->pCad->actionRows(sql);
}


System::Data::DataSet^ ServicePersonnel::selectAllPers(System::String^ nom_table) {
	System::String^ sql;

	sql = this->mapPers->Select();

	return this->pCad->getRows(sql, nom_table);
}

void ServicePersonnel::updPersForAdress(int adresse) {
	System::String^ sql;

	this->mapPers->setAdresse(adresse);
	sql = this->mapPers->UpdForAdresse();

	this->pCad->actionRows(sql);
}

System::Data::DataSet^ ServicePersonnel::selectUnPersonnel(System::String^ nomTable, int id) {
	System::String^ sql;

	this->mapPers->setIDPersonnel(id);
	sql = this->mapPers->SelectForID();

	return this->pCad->getRows(sql, nomTable);
}

void ServicePersonnel::updPersForID(int id) {
	System::String^ sql;

	this->mapPers->setIDSuperieur(id);
	sql = this->mapPers->UpdForId();

	this->pCad->actionRows(sql);
}