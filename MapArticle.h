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
		float prixHT;
		int idTVA;
		String^ sSql;

	public:
		String^ Select();
		String^ Insert();
		String^ Delete();
		String^ Update();

		void setIdCatalogue(int);
		void setDesignation(String^);
		void setNatureArticle(String^);
		void setCouleur(String^);
		void setSeuilApprov(int);
		void setPrixHT(float);
		void setIdTVA(int);

		int getIdCatalogue();
		String^ getDesignation();
		String^ getNatureArticle();
		String^ getCouleur();
		int getSeuilApprov();
		float getPrixHT();
		int getIdTVA();
	};
}