#pragma once

#include "GestionCommande.h"
#include "MapCommande.h"
#include "MapFacture.h"

public ref class ServiceCommande {

	private: 
		cCad:CAD;
		mapCom:MapCommande;
		facture:MapFacture

	public:
		void addCommande(System::String^, System::String^, System::String^, float, float, int, int, int, System::String^, System::String^, System::String^, System::String^);
		void updateCommande(System::String^ ,System::String^, System::String^, float, float, int, int, int, System::String^, System::String^, System::String^, System::String^);
		void delCommande(int);
		System::Data::DataSet^ selectAllCommande();
		System::Data::DataSet^ selectCommande(int);
	};
