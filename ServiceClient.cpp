#include "ServiceClient.h"



void ServiceClient::addClient(System::String^ datedenaissance, System::String^ ID_datepremierecommande, System::String^ nom_client, System::String^ prenom_client, int adresse_Livraison, int adresse_Paiement) {

	System::String^ sql;

	this->mapCli->setDateDeNaissance(datedenaissance); // On associe la données entrée au nom de la société  d'une commande
	this->mapCli->setID_DatePremiereCommande(ID_datepremierecommande);
	this->mapCli->setNom_client(nom_client);
	this->mapCli->setPrenom_client(prenom_client);
	this->mapCli->setAdresse_Livraison(adresse_Livraison);
	this->mapCli->setAdresse_Paiement(adresse_Paiement);

	

	sql = this->mapCli->Insert();  // On insere les données dans la base de données 

	this->clientCad->actionRows(sql);

}

void ServiceClient::udpdateClient(int numero_Client, System::String^ datedenaissance, System::String^ ID_datepremierecommande, System::String^ nom_client, System::String^ prenom_client, int adresse_Livraison, int adresse_Paiement) {

	System::String^ sql;

	this->mapCli->setNumero_Client(numero_Client);
	this->mapCli->setDateDeNaissance(datedenaissance); // On associe la données entrée au nom de la société  d'une commande
	this->mapCli->setID_DatePremiereCommande(ID_datepremierecommande);
	this->mapCli->setNom_client(nom_client);
	this->mapCli->setPrenom_client(prenom_client);
	this->mapCli->setAdresse_Livraison(adresse_Livraison);
	this->mapCli->setAdresse_Paiement(adresse_Paiement);



	sql = this->mapCli->Insert();  // On insere les données dans la base de données 

	this->clientCad->actionRows(sql);

}

void ServiceClient::delClient(int) {

	System::String^ sql;

	this->mapCli->setNumero_Client(numero_Client);

	sql = this->mapCli->Delete();

	this->clientCad->actionRowns(sql);

}

DataSet ServiceClient::selectAllCom(System::String^ nom_table) {

	System::String^ sql;

	sql = this->mapCli>Select();

	return this->clientCad->getRows(sql, nom_table);
}

DataSet ServiceClient::selectCom(System::String^ nom_table, int numero_Client) {

	System::String^ sql;

	sql = this->mapCli->Select();

	return this->clientCad->getRows(sql, nom_table);
}

