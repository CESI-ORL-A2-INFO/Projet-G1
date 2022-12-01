#pragma once

#include "MapAdresse.h"
#include "Cad.h"

namespace NS_Serv {
	ref class ServiceAdresse {
	private: 
		NS_Comp_Data::Cad^ AdressCad;
		NS_Comp::Adresse^ mapAdress;
	public:
		ServiceAdresse();
		void addAdress(int, int, System::String^, System::String^, System::String^);
		void updAdress(int, int, int, System::String^, System::String^, System::String^);
		void delAdress(int);
		System::Data::DataSet^ selectAllAdress(System::String^);
		System::Data::DataSet^ selectAdressWithID(System::String^, int);
	};
}
