#pragma once
#include "Cad.h"
#include "MapContenuCommande.h"
namespace NS_Serv {
	ref class ServiceContenuCommander {
	private:
		NS_Comp_Data::Cad^ contCad;
		NS_Comp::MapContenuCommande^ mapCont;

	public:
		ServiceContenuCommander();
		void addContCommande(System::String^, int, int);
		void updateContCommande(System::String^, int, int);
		void deleteContCommande(System::String^);
		System::Data::DataSet^ SelectAllCont(System::String^);
	};
}
