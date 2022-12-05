#pragma once
#include "MapFacture.h"
#include "Cad.h"
namespace NS_Serv {
	ref class ServiceFacture {
	public:
		NS_Comp_Data::Cad^ fCad;
		NS_Comp::MapFacture^ mapFact;
	public:
		ServiceFacture();
		void addFact(System::String^, System::String^, int);
		void updFact(int, System::String^, System::String^, int);
		void delFact(int);
		System::Data::DataSet^ selectAllFacture(System::String^);
		System::Data::DataSet^ selectUneFacture(System::String^, int);
	};
}
