#include "ServiceFacture.h"

using namespace NS_Serv;

ServiceFacture::ServiceFacture() {
	fCad = gcnew NS_Comp_Data::Cad();
	mapFact = gcnew NS_Comp::MapFacture();
}

void ServiceFacture::addFact(System::String^ ref, System::String^ dernierPai, int id) {
	System::String^ sql;

	mapFact->setDernierPaiementEnDate(dernierPai);
	mapFact->setIdMoyPaiement(id);
	mapFact->setReference(ref);

	sql = mapFact->Insert();
	fCad->actionRows(sql);
}

void ServiceFacture::updFact(int idfact, System::String^ ref, System::String^ dernierPai, int id) {
	System::String^ sql;

	mapFact->setIdFacture(idfact);
	mapFact->setDernierPaiementEnDate(dernierPai);
	mapFact->setIdMoyPaiement(id);
	mapFact->setReference(ref);

	sql = mapFact->Update();
	fCad->actionRows(sql);
}

void ServiceFacture::delFact(int id) {
	System::String^ sql;

	mapFact->setIdFacture(id);

	sql = mapFact->Delete();
	fCad->actionRows(sql);
}

System::Data::DataSet^ ServiceFacture::selectAllFacture(System::String^ nomTable) {
	System::String^ sql;

	sql = this->mapFact->Select();

	return this->fCad->getRows(sql, nomTable);
}

System::Data::DataSet^ ServiceFacture::selectUneFacture(System::String^ nomTable, int id) {
	System::String^ sql;

	mapFact->setIdFacture(id);
	sql = this->mapFact->SelectWithFact();

	return this->fCad->getRows(sql, nomTable);
}