#pragma once

#include "Cad.h"
namespace CLStatistique
{
	class Statistique
	{
	private:
		NS_Comp_Data::Cad statCad;
		System::String^ TVA;
		System::String^ margeCommerciale;
		System::String^ remiseCommerciale;
		System::String^ demarqueInconnue;
	public:
		float panierMoy();
		float chiffreAffairesMens();
		System::Data::DataSet^ reapprovisionnement();
		float achatClientTot();
		System::Data::DataSet^ plusVendu();
		System::Data::DataSet^ moinsVendu();
		float valComStock();
		float valAchatStock();
		float simulationVarComTVA();
		float simulationVarComMargeCommerciale();
		float simulationVarComRemiseCommerciale();
		float simulationVarComDemarqueInconnue();
	};

}