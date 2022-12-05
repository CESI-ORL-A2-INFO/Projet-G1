#include "ServiceClient.h"
#include "MapClient.h"

using namespace NS_Serv;

ServiceClient::ServiceClient() {
	this->clientCad = gcnew NS_Comp_Data::Cad();
	this->mapClient = gcnew NS_Comp::Client();
}

void ServiceClient::addClient(System::String^ datedenaissance, System::String^ datepremierecommande, System::String^ nom_client, System::String^ prenom_client, int adresse_Livraison, int adresse_Paiement) {

	System::String^ sql;

	this->mapClient->setDateDeNaissance(datedenaissance); // On associe la données entrée au nom de la société  d'une commande
	this->mapClient->setDatePremiereCommande(datepremierecommande);
	this->mapClient->setNomClient(nom_client);
	this->mapClient->setPrenomClient(prenom_client);
	this->mapClient->setAdresseLivraison(adresse_Livraison);
	this->mapClient->setAdressePaiement(adresse_Paiement);

	sql = this->mapClient->Insert();  // On insere les données dans la base de données 
	this->clientCad->actionRows(sql);

}

void ServiceClient::udpdateClient(int numero_Client, System::String^ datedenaissance, System::String^ ID_datepremierecommande, System::String^ nom_client, System::String^ prenom_client, int adresse_Livraison, int adresse_Paiement) {

	System::String^ sql;

	this->mapClient->setNumeroClient(numero_Client);
	this->mapClient->setDateDeNaissance(datedenaissance); // On associe la données entrée au nom de la société  d'une commande
	this->mapClient->setDatePremiereCommande(ID_datepremierecommande);
	this->mapClient->setNomClient(nom_client);
	this->mapClient->setPrenomClient(prenom_client);
	this->mapClient->setAdresseLivraison(adresse_Livraison);
	this->mapClient->setAdressePaiement(adresse_Paiement);



	sql = this->mapClient->Update();  // On insere les données dans la base de données 
	this->clientCad->actionRows(sql);

}

void ServiceClient::delClient(int numClient) {

	System::String^ sql;
	this->mapClient->setNumeroClient(numClient);
	sql = this->mapClient->Delete();
	this->clientCad->actionRows(sql);

}

System::Data::DataSet^ ServiceClient::selectAllClient(System::String^ nom_table) {

	System::String^ sql;

	sql = this->mapClient->Select();

	return this->clientCad->getRows(sql, nom_table);
}

void ServiceClient::updClientForAdress(int idA) {

	System::String^ sql;
	this->mapClient->setAdressePaiement(idA);
	this->mapClient->setAdresseLivraison(idA);
	sql = this->mapClient->UpdForAdress();

	this->clientCad->actionRows(sql);
}

void ServiceClient::updClientCommande(int numClient) {

	System::String^ sql;
	this->mapClient->setNumeroClient(numClient);
	sql = this->mapClient->UpdCommande();

	this->clientCad->actionRows(sql);
}

System::Data::DataSet^ ServiceClient::selectClientWithID(System::String^ nomTable, int id) {
	System::String^ sql;
	this->mapClient->setNumeroClient(id);
	sql = this->mapClient->SelectWithID();
	return this->clientCad->getRows(sql, nomTable);
}


