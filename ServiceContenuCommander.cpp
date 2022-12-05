#include "ServiceContenuCommander.h"

using namespace NS_Serv;

ServiceContenuCommander::ServiceContenuCommander() {
	contCad = gcnew NS_Comp_Data::Cad();
	mapCont = gcnew NS_Comp::MapContenuCommande();
}

void ServiceContenuCommander::addContCommande(System::String^ ref, int idArticle, int quantite) {

	System::String^ sql;

	mapCont->setIdArticle(idArticle);
	mapCont->setQuantite(quantite);
	mapCont->setRef(ref);

	sql = mapCont->Insert();

	contCad->actionRows(sql);
}

void ServiceContenuCommander::updateContCommande(System::String^ ref, int idArticle, int quantite) {

	System::String^ sql;

	mapCont->setIdArticle(idArticle);
	mapCont->setQuantite(quantite);
	mapCont->setRef(ref);

	sql = mapCont->Update();

	contCad->actionRows(sql);
}

void ServiceContenuCommander::deleteContCommande(System::String^ ref, int idArt) {

	System::String^ sql;

	mapCont->setRef(ref);
	mapCont->setIdArticle(idArt);

	sql = mapCont->Delete();

	contCad->actionRows(sql);
}

System::Data::DataSet^ ServiceContenuCommander::SelectAllCont(System::String^ nomTable) {
	System::String^ sql;

	sql = this->mapCont->Select();

	return this->contCad->getRows(sql, nomTable);
}