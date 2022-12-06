#pragma once
#include "Cad.h"

ref class CLStatistique
{
private:
	NS_Comp_Data::Cad^ statCad;
	System::String^ TVA;
	System::String^ margeCommerciale;
	System::String^ remiseCommerciale;
	System::String^ demarqueInconnue;
public:
	CLStatistique();
	System::Data::DataSet^ panierMoy(System::String^);
	System::Data::DataSet^ chiffreAffairesMens(System::String^);
	System::Data::DataSet^ reapprovisionnement(System::String^);
	System::Data::DataSet^ achatClientTot(System::String^);
	System::Data::DataSet^ plusVendu(System::String^);
	System::Data::DataSet^ moinsVendu(System::String^);
	System::Data::DataSet^ valComStock(System::String^);
	System::Data::DataSet^ simulationVarCom(System::String^);
	void setTVA(System::String^);
	void setMarge(System::String^);
	void setRemise(System::String^);
	void setDemarque(System::String^);
};



