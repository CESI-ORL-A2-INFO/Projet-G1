#pragma once

#include "GestionCommande.h"
#include "MapCommande.h"
#include "MapFacture.h"
#include "Cad.h"

namespace NS_Serv {
	ref class ServiceCommande {

	private:
		NS_Comp_Data::Cad^ cCad;
		NS_Comp::MapCommande^ mapCom;
		NS_Comp::MapFacture^ facture;

	public:
		void addCommande(System::String^, System::String^, float, float, int, int, int, System::String^, System::String^, System::String^, System::String^);
		void updateCommande(System::String^, System::String^, float, float, int, int, int, System::String^, System::String^, System::String^, System::String^);
		void delCommande(int);
		System::Data::DataSet^ selectAllCommande(System::String^);
		//System::Data::DataSet^ selectCommande(int);
	};
}
