#include "Statistique.h"

CLStatistique::CLStatistique() {
	statCad = gcnew NS_Comp_Data::Cad();
}

System::Data::DataSet^ CLStatistique::panierMoy(System::String^ nomTable) {
	System::String^ sql;
	sql = "SELECT AVG(Total_TTC)AS 'Panier Moyen', Numero_Client AS 'Numero Client' FROM Commande GROUP BY Numero_Client;";
	return this->statCad->getRows(sql, nomTable);
}

System::Data::DataSet^ CLStatistique::chiffreAffairesMens(System::String^ nomTable) {
	System::String^ sql;
	sql = "SELECT YEAR(Date_Paiement) AS Année, MONTH(Date_Paiement) AS Mois, SUM(Total_TTC) AS 'Chiffres D Affaires' FROM Commande GROUP BY YEAR(Date_Paiement), MONTH(Date_Paiement) ORDER BY YEAR(Date_Paiement), MONTH(Date_Paiement)";
	return this->statCad->getRows(sql, nomTable);
}

System::Data::DataSet^ CLStatistique::reapprovisionnement(System::String^ nomTable) {
	System::String^ sql;
	sql =  "SELECT * FROM Article WHERE Quantite <= Seuil_Reapprovisionnement";
	return this->statCad->getRows(sql, nomTable);
}

System::Data::DataSet^ CLStatistique::achatClientTot(System::String^ nomTable) {
	System::String^ sql;
	sql =  "SELECT Reference, SUM(Total_TTC) AS 'Montant Total Par Client' FROM Commande GROUP BY Reference";
	return this->statCad->getRows(sql, nomTable);
}

System::Data::DataSet^ CLStatistique::plusVendu(System::String^ nomTable) {
	System::String^ sql;
	sql =  "SELECT SUM(Quantite)AS Produit, Id_Article FROM Alimenter GROUP BY Id_Article ORDER BY Id_Article";
	return this->statCad->getRows(sql, nomTable);
}

System::Data::DataSet^ CLStatistique::moinsVendu(System::String^ nomTable) {
	System::String^ sql;
	sql = "SELECT SUM(Quantite)AS Produit, Id_Article FROM Alimenter GROUP BY Id_Article ORDER BY Id_Article DESC";
	return this->statCad->getRows(sql, nomTable);
}

System::Data::DataSet^ CLStatistique::valComStock(System::String^ nomTable) {
	System::String^ sql;
	sql = "SELECT SUM(Prix_HT * Quantite) AS 'Valeur Commercial du Stock' FROM Article";
	return this->statCad->getRows(sql, nomTable);
}

System::Data::DataSet^ CLStatistique::simulationVarCom(System::String^ nomTable) {
	System::String^ sql;
	sql = "SELECT SUM((Prix_HT * Quantite)*" + this->TVA + "*" + this->margeCommerciale + "*" + this->demarqueInconnue + "/" + this->remiseCommerciale + " / 100) AS 'Valeur Commercial du Stock avec TVA, MargeCommerciale, RemiseCommerciale et DemarqueInconnue' FROM Article";
	return this->statCad->getRows(sql, nomTable);
}

void CLStatistique::setTVA(System::String^ TVA) {
	this->TVA = TVA;
}

void CLStatistique::setDemarque(System::String^ Demarque) {
	this->demarqueInconnue = Demarque;
}

void CLStatistique::setMarge(System::String^ marge) {
	this->margeCommerciale = marge;
}

void CLStatistique::setRemise(System::String^ remise) {
	this->remiseCommerciale = remise;
}
