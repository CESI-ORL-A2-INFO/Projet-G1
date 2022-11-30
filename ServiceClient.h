#pragma once

#include "MapClient.h"
#include "MapAdresse.h"
#include "Cad.h"
namespace NS_Serv {
	ref class ServiceClient
	{
	private:
		NS_Comp_Data::Cad^ clientCad;
		NS_Comp::Client^ mapClient;
		NS_Comp::Adresse^ adresseLivr;
		NS_Comp::Adresse^ adressePaiement;

	public:
		ServiceClient();
		void addClient(System::String^, System::String^, System::String^, System::String^, int, int);
		void udpdateClient(int, System::String^, System::String^, System::String^, System::String^, int, int);
		void delClient(int);
		System::Data::DataSet^ selectAllClient(System::String^);
		//System::Data::DataSet^ selectClient(System::String^, int);

	};
}

