#pragma once
class Statistique
{
private:
	servClient : ServiceClient; 
	servArticle : ServiceArticle;
	servCatalogue : ServiceCommande;
	servCom : ServiceCommande;
	servFact : ServiceFacture;
public:
	float panierMoy();
	float chiffreAffairesMens();
	array <String> reapprovisionnement();
	float achatClientTot();
	array <String> plusVendu();
	array <String> moinsVendu();
	float valComStock();
	float valAchatStock();
	float simulationVarCom();

};

