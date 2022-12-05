#pragma once

using namespace System;

namespace NS_Comp {
	ref class MapCommande {
	private:
		String^ reference;
		String^ nomSociete;
		String^ TotalTTC;
		String^ MontantRemise;
		int TotalArticles;
		int IDFacture;
		int NumeroClient;
		String^ DernierPaiement;
		String^ DateEmission;
		String^ DatePaiement;
		String^ DateLivraison;
		int IDArticle;
		int Quantite;
		String^ sSql;
	public:
		String^ Select();
		String^ Insert();
		String^ Delete();
		String^ Update();
		String^ SelectUneCom();
		String^ DeleteCont();
		String^ DeleteFact();

		void setReference(String^);
		void setNomSociete(String^);
		void setTotalTTC(String^);
		void setMontantRemise(String^);
		void setTotalArticles(int);
		void setIDFacture(int);
		void setNumeroClient(int);
		void setDernierPaiement(String^);
		void setDateEmission(String^);
		void setDatePaiement(String^);
		void setDateLivraison(String^);
		void setIDArticle(int);
		void setQuantite(int);

		String^ getReference();
		String^ getNomSociete();
		String^ getTotalTTC();
		String^ getMontantRemise();
		int getTotalArticles();
		int getIDFacture();
		int getNumeroClient();
		String^ getDernierPaiement();
		String^ getDateEmission();
		String^ getDatePaiement();
		String^ getDateLivraison();
		int getIDArticle();
		int getQuantite();
	};
}
