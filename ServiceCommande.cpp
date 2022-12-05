#include "ServiceCommande.h"

using namespace NS_Serv;

ServiceCommande::ServiceCommande() {
	this->cCad = gcnew NS_Comp_Data::Cad();
	this->mapCom = gcnew NS_Comp::MapCommande();
	this->mapFact = gcnew NS_Comp::MapFacture();
}

void ServiceCommande::addCommande(System::String^ ref, System::String^ nomSociete, System::String^ totalTTC, System::String^ montantRemise, int totalArticles, int numeroCLient, String^ dateEmission, String^ datePaiement, String^ dateLivraison)
{

	System::String^ sql;

	this->mapCom->setReference(ref);
	this->mapCom->setNomSociete(nomSociete); // On associe la données entrée au nom de la société  d'une commande
	this->mapCom->setTotalTTC(totalTTC);
	this->mapCom->setMontantRemise(montantRemise);
	this->mapCom->setTotalArticles(totalArticles);
	this->mapCom->setNumeroClient(numeroCLient);
	this->mapCom->setDateEmission(dateEmission);
	this->mapCom->setDatePaiement(datePaiement);
	this->mapCom->setDateLivraison(dateLivraison);

	sql = this->mapCom->Insert();  // On insere les données dans la base de données 

	this->cCad->actionRows(sql);

};

void ServiceCommande::updateCommande(System::String^ reference,System::String^ NomSociete, System::String^ TotalTTC, System::String^ MontantRemise, int TotalArticles, int NumeroCLient, String^ DateEmission, String^ DatePaiement, String^ DateLivraison) {

	System::String^ sql;

	this->mapCom->setReference(reference);
	this->mapCom->setNomSociete(NomSociete);
	this->mapCom->setTotalTTC(TotalTTC);
	this->mapCom->setMontantRemise(MontantRemise);
	this->mapCom->setTotalArticles(TotalArticles);
	this->mapCom->setNumeroClient(NumeroCLient);
	this->mapCom->setDateEmission(DateEmission);
	this->mapCom->setDatePaiement(DatePaiement);
	this->mapCom->setDateLivraison(DateLivraison);

	sql = this->mapCom->Update(); // On met a jour les données dans la base de données 

	this->cCad->actionRows(sql);

}

void ServiceCommande::delCommande(System::String^ ref) {

	System::String^ sql;

	this->mapCom->setReference(ref);

	sql = this->mapCom->Delete();

	this->cCad->actionRows(sql);
}

void ServiceCommande::delCont(System::String^ ref) {

	System::String^ sql;

	this->mapCom->setReference(ref);

	sql = this->mapCom->DeleteCont();

	this->cCad->actionRows(sql);
}

void ServiceCommande::delFact(System::String^ ref) {

	System::String^ sql;

	this->mapCom->setReference(ref);

	sql = this->mapCom->DeleteFact();

	this->cCad->actionRows(sql);
}

System::Data::DataSet^ ServiceCommande::selectAllCommande(System::String^ nom_table) {

	System::String^ sql;

	sql = this->mapCom->Select();

	return this->cCad->getRows(sql, nom_table );
}

System::Data::DataSet^ ServiceCommande::selectCommande(System::String^ nom_table, System::String^ ref) {

	System::String^ sql;

	this->mapCom->setReference(ref);
	sql = this->mapCom->SelectUneCom();

	return this->cCad->getRows(sql, nom_table);
}

