#pragma once
namespace NS_Comp_Data {													//Ici, nous allons créer un "groupe de classe" que nous appelons "namespace"
	ref class Cad {															//Dedans, nous allons créer une classe (ici, Cad) pour gérer le personnel de l'entreprise
	private:																//Chaque classe possède des attributs et méthodes qui peuvent avoir 3 niveaux de protection (privé, public et protégé)
																			//Ici, chaque attribut est "privé", donc accessible SEULEMENT par cette classe
																			//Ensuite, nous allons donner chaque attribut que la classe doit posséder

		System::String^ sSql;												//
		System::String^ sSql;
		System::String^ sSql;
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::DataSet^ oDs;
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
	};