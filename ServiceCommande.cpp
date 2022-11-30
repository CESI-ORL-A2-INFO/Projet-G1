#include "ServiceCommande.h"

void ServiceCommande::addCommande(System::String^ reference, System::String^ nomSociete, float totalTTC, float montantRemise, int totalArticles, int ID_Facture, int numeroCLient, String^ dernierPaiement, String^ dateEmission, String^ datePaiement, String^ dateLivraison)
{

	System::String^ sql;

	this->mapCom->setReference(reference);
	this->mapCom->setNomSociete(nomSociete); // On associe la données entrée au nom de la société  d'une commande
	this->mapCom->setTotalTTC(totalTTC);
	this->mapCom->setMontantRemise(montantRemise);
	this->mapCom->setTotalArticles(totalArticles);
	this->mapCom->setID_Facture(ID_Facture);
	this->mapCom->setNumeroCLient(numeroCLient);
	this->mapCom->setDernierPaiement(dernierPaiement);
	this->mapCom->setDateEmission(dateEmission);
	this->mapCom->setDatePaiement(datePaiement);
	this->mapCom->setDateLivraison(dateLivraison);

	sql = this->mapCom->Insert();  // On insere les données dans la base de données 

	this->cCad->actionRows(sql);

};

void updateCommande::updateCommande(System::String^ NomSociete, float TotalTTC, float MontantRemise, int TotalArticles, int ID_Facture, int NumeroCLient, String^ DernierPaiement, String^ DateEmission, String^ DatePaiement, String^ DateLivraison) {

	System::String^ sql;

	this->mapCom->setReference(reference);
	this->mapCom->setNomSociete(nomSociete);
	this->mapCom->setTotalTTC(totalTTC);
	this->mapCom->setMontantRemise(montantRemise);
	this->mapCom->setTotalArticles(totalArticles);
	this->mapCom->setID_Facture(ID_Facture);
	this->mapCom->setNumeroCLient(numeroCLient);
	this->mapCom->setDernierPaiement(dernierPaiement);
	this->mapCom->setDateEmission(dateEmission);
	this->mapCom->setDatePaiement(datePaiement);
	this->mapCom->setDateLivraison(dateLivraison);

	sql = this->mapCom->Update(); // On met a jour les données dans la base de données 

	this->cCad->actionRows(sql);

}

void ServiceCommande::delCommande(int totalArticles) {

	System::String^ sql;

	this->mapCom->setTotalArticles(totalArticles);

	sql = this->mapCom->Delete();

	this->cCad->actionRowns(sql);
}


DataSet ServiceCommande::selectAllCom(System::String^ nom_table) {

	System::String^ sql;

	sql = this->mapCom->Select();

	return this->cCad->getRows(sql, nom_table );
}

DataSet ServiceCommande::selectCom(System::String^ nom_table, int totalArticles) {

	System::String^ sql;

	sql = this->mapCom->Select();

	return this->cCad->getRows(sql, nom_table);
}

