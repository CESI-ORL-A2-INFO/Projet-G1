#include "ServiceCommande.h"

using namespace NS_Serv;

void ServiceCommande::addCommande(System::String^ reference, System::String^ nomSociete, float totalTTC, float montantRemise, int totalArticles, int ID_Facture, int numeroCLient, String^ dernierPaiement, String^ dateEmission, String^ datePaiement, String^ dateLivraison)
{

	System::String^ sql;

	this->mapCom->setReference(reference);
	this->mapCom->setNomSociete(nomSociete); // On associe la données entrée au nom de la société  d'une commande
	this->mapCom->setTotalTTC(totalTTC);
	this->mapCom->setMontantRemise(montantRemise);
	this->mapCom->setTotalArticles(totalArticles);
	this->mapCom->setIDFacture(ID_Facture);
	this->mapCom->setNumeroClient(numeroCLient);
	this->mapCom->setDernierPaiement(dernierPaiement);
	this->mapCom->setDateEmission(dateEmission);
	this->mapCom->setDatePaiement(datePaiement);
	this->mapCom->setDateLivraison(dateLivraison);

	sql = this->mapCom->Insert();  // On insere les données dans la base de données 

	this->cCad->actionRows(sql);

};

void ServiceCommande::updateCommande(System::String^ reference,System::String^ NomSociete, float TotalTTC, float MontantRemise, int TotalArticles, int ID_Facture, int NumeroCLient, String^ DernierPaiement, String^ DateEmission, String^ DatePaiement, String^ DateLivraison) {

	System::String^ sql;

	this->mapCom->setReference(reference);
	this->mapCom->setNomSociete(NomSociete);
	this->mapCom->setTotalTTC(TotalTTC);
	this->mapCom->setMontantRemise(MontantRemise);
	this->mapCom->setTotalArticles(TotalArticles);
	this->mapCom->setIDFacture(ID_Facture);
	this->mapCom->setNumeroClient(NumeroCLient);
	this->mapCom->setDernierPaiement(DernierPaiement);
	this->mapCom->setDateEmission(DateEmission);
	this->mapCom->setDatePaiement(DatePaiement);
	this->mapCom->setDateLivraison(DateLivraison);

	sql = this->mapCom->Update(); // On met a jour les données dans la base de données 

	this->cCad->actionRows(sql);

}

void ServiceCommande::delCommande(int totalArticles) {

	System::String^ sql;

	this->mapCom->setTotalArticles(totalArticles);

	sql = this->mapCom->Delete();

	this->cCad->actionRows(sql);
}


System::Data::DataSet^ ServiceCommande::selectAllCommande(System::String^ nom_table) {

	System::String^ sql;

	sql = this->mapCom->Select();

	return this->cCad->getRows(sql, nom_table );
}

//DataSet ServiceCommande::selectCom(System::String^ nom_table, int totalArticles) {
//
//	System::String^ sql;
//
//	sql = this->mapCom->Select();
//
//	return this->cCad->getRows(sql, nom_table);
//}

