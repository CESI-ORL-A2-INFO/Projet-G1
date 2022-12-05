#pragma once

#include "MapClient.h"
#include "Cad.h"
namespace NS_Serv {
	ref class ServiceClient
	{
	private:
		NS_Comp_Data::Cad^ clientCad;
		NS_Comp::Client^ mapClient;

	public:
		ServiceClient();
		void addClient(System::String^, System::String^, System::String^, System::String^, int, int);
		void udpdateClient(int, System::String^, System::String^, System::String^, System::String^, int, int);
		void delClient(int);
		System::Data::DataSet^ selectClientWithID(System::String^, int);
		System::Data::DataSet^ selectAllClient(System::String^);
		void updClientForAdress(int);
		void updClientCommande(int);
	};
}

