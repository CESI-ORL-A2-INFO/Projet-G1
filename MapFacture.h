#pragma once

using namespace System;

namespace NS_Comp {
	ref class MapFacture {

	private:
		int IdFacture;
		String^ dernierPaiementEnDate;
		int numClient;
		String^ reference;
		int idMoyPaiement;
		String^ sSql;

	public:
		String^ Select();
		String^ Insert();
		String^ Delete();
		String^ Update();
		String^ SelectWithFact();

		void setIdFacture(int);
		void setDernierPaiementEnDate(String^);
		void setNumClient(int);
		void setReference(String^);
		void setIdMoyPaiement(int);
		
		int getIdFacture();
		String^ getDernierPaiementEnDate();
		int getNumClient();
		String^ getReference();
		int getIdMoyPaiement();
	};
}
