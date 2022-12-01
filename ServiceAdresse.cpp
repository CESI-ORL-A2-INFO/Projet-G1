#include "ServiceAdresse.h"

using namespace NS_Serv;

ServiceAdresse::ServiceAdresse() {
	this->AdressCad = gcnew NS_Comp_Data::Cad();
	this->mapAdress = gcnew NS_Comp::Adresse();
}

void ServiceAdresse::addAdress(int numRue, int CP, System::String^ nomRue, System::String^ ville, System::String^ typeRue) {
	System::String^ sql;

	this->mapAdress->setNumeroRue(numRue);
	this->mapAdress->setCodePostal(CP);
	this->mapAdress->setNomRue(nomRue);
	this->mapAdress->setTypeRue(typeRue);
	this->mapAdress->setVille(ville);

	sql = this->mapAdress->Insert();
	this->AdressCad->actionRows(sql);
}

void ServiceAdresse::updAdress(int ID,int numRue, int CP, System::String^ nomRue, System::String^ ville, System::String^ typeRue) {
	System::String^ sql;

	this->mapAdress->setIDAdresse(ID);
	this->mapAdress->setNumeroRue(numRue);
	this->mapAdress->setCodePostal(CP);
	this->mapAdress->setNomRue(nomRue);
	this->mapAdress->setTypeRue(typeRue);
	this->mapAdress->setVille(ville);

	sql = this->mapAdress->Update();
	this->AdressCad->actionRows(sql);
}

void ServiceAdresse::delAdress(int id) {
	System::String^ sql;

	this->mapAdress->setIDAdresse(id);

	sql = this->mapAdress->Delete();
	this->AdressCad->actionRows(sql);
}

System::Data::DataSet^ ServiceAdresse::selectAllAdress(System::String^ nomTable) {
	System::String^ sql;
	sql = this->mapAdress->Select();
	return this->AdressCad->getRows(sql, nomTable);
}

System::Data::DataSet^ ServiceAdresse::selectAdressWithID(System::String^ nomTable, int id) {
	System::String^ sql;
	this->mapAdress->setIDAdresse(id);
	sql = this->mapAdress->SelectWithID();
	return this->AdressCad->getRows(sql, nomTable);
}