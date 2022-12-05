#include "Statistique.h"


float CLStatistique::Statistique::panierMoy() {
	return "SELECT AVG(Total_TTC)AS 'Panier Moyen', Numero_Client AS 'Numero Client' FROM Commande GROUP BY Numero_Client;";
}

float CLStatistique::Statistique::chiffreAffairesMens() {
	return "SELECT YEAR(Date_Paiement) AS Année, MONTH(Date_Paiement) AS Mois, SUM(Total_TTC) AS 'Chiffres D Affaires' FROM Commande GROUP BY YEAR(Date_Paiement), MONTH(Date_Paiement) ORDER BY YEAR(Date_Paiement), MONTH(Date_Paiement)";
}

System::Data::DataSet^ CLStatistique::Statistique::reapprovisionnement() {
	return "SELECT * FROM Article WHERE Quantite <= Seuil_Reapprovisionnement";
}

float CLStatistique::Statistique::achatClientTot() {
	return "SELECT Reference, SUM(Total_TTC) AS 'Montant Total Par Client' FROM Commande GROUP BY Reference";
}

System::Data::DataSet^ CLStatistique::Statistique::plusVendu() {
	return "SELECT SUM(Quantite)AS Produit, Id_Article FROM Alimenter GROUP BY Id_Article ORDER BY Id_Article";
}

System::Data::DataSet^ CLStatistique::Statistique::moinsVendu() {
	return "SELECT SUM(Quantite)AS Produit, Id_Article FROM Alimenter GROUP BY Id_Article ORDER BY Id_Article DESC";
}

float CLStatistique::Statistique::valComStock() {
	return "SELECT SUM(Prix_HT * Quantite) AS 'Valeur Commercial du Stock' FROM Article";
}

float CLStatistique::Statistique::valAchatStock() {
	return "";
}

float CLStatistique::Statistique::simulationVarComTVA() {
	return "SELECT SUM((Prix_HT * Quantite)*" + this->TVA + " / 100) AS 'Valeur Commercial du Stock avec TVA' FROM Article";
}

float CLStatistique::Statistique::simulationVarComMargeCommerciale() {
	return "SELECT SUM((Prix_HT * Quantite)*" + this->margeCommerciale + " / 100) AS 'Valeur Commercial du Stock avec MargeCommerciale' FROM Article";
}

float CLStatistique::Statistique::simulationVarComRemiseCommerciale() {
	return "SELECT SUM((Prix_HT * Quantite)*" + this->remiseCommerciale + " / 100) AS 'Valeur Commercial du Stock avec RemiseCommerciale' FROM Article";
}

float CLStatistique::Statistique::simulationVarComDemarqueInconnue() {
	return "SELECT SUM((Prix_HT * Quantite)*" + this->demarqueInconnue + " / 100) AS 'Valeur Commercial du Stock avec DemarqueInconnue' FROM Article";
}
