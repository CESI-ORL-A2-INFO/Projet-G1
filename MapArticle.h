#pragma once

using namespace System;

namespace NS_Comp {
	ref class MapArticle {

	private:
		int idCatalogue;
		String^ designation;
		String^ natureArticle;
		String^ couleur;
		int SeuilApprov;
		String^ prixHT;
		int quantite;
		int idTVA;
		String^ sSql;

	public:
		String^ Select();
		String^ Insert();
		String^ Delete();
		String^ Update();
		String^ SelectWithID();
		String^ DeleteCont();

		void setIdCatalogue(int);
		void setDesignation(String^);
		void setNatureArticle(String^);
		void setCouleur(String^);
		void setSeuilApprov(int);
		void setPrixHT(String^);
		void setIdTVA(int);
		void setQuantite(int);

		int getIdCatalogue();
		String^ getDesignation();
		String^ getNatureArticle();
		String^ getCouleur();
		int getSeuilApprov();
		String^ getPrixHT();
		int getIdTVA();
		int getQuantite();
	};
}