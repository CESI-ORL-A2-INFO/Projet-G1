#pragma once

#include "MapCommande.h"
#include "MapFacture.h"
#include "Cad.h"

namespace NS_Serv {
	ref class ServiceCommande {

	private:
		NS_Comp_Data::Cad^ cCad;
		NS_Comp::MapCommande^ mapCom;
		NS_Comp::MapFacture^ mapFact;

	public:
		ServiceCommande();
		void addCommande(System::String^, System::String^, System::String^, System::String^, int, int, System::String^, System::String^, System::String^);
		void updateCommande(System::String^, System::String^, System::String^, System::String^, int, int, System::String^, System::String^, System::String^);
		void delCommande(System::String^);
		void delCont(System::String^);
		void delFact(System::String^);
		System::Data::DataSet^ selectAllCommande(System::String^);
		System::Data::DataSet^ selectCommande(System::String^, System::String^);
	};
}
