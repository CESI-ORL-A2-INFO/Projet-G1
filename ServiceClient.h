#pragma once

#include "GestionClient.h"
#include "MapClient.h"
#include "MapAdresse.h"

ref class ServiceClient
{
	private:
		clientCad : CAD;
		mapClient:MapClient;
		adresseLivr:MapAdresse;
		adressePaiement:MapAdresse;
		recevoir:MapRecevoir;

	public : 
		void addClient(System::String^, System::String^, System::String^, System::String^, int, int);
		void udpdateClient(int, System::String^, System::String^, System::String^, System::String^, int, int);
		void delClient(int);
		DataSet selectAllClient(System::String^);
		DataSet selectClient(System::String^, int);

};

