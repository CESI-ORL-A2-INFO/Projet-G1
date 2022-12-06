#pragma once
namespace NS_Comp_Data {													//Ici, nous allons cr�er un "groupe de classe" que nous appelons "namespace"
	ref class Cad {															//Dedans, nous allons cr�er une classe (ici, Cad) pour g�rer le personnel de l'entreprise
	private:																//Chaque classe poss�de des attributs et m�thodes qui peuvent avoir 3 niveaux de protection (priv�, public et prot�g�)
																			//Ici, chaque attribut est "priv�", donc accessible SEULEMENT par cette classe
																			//Ensuite, nous allons donner chaque attribut que la classe doit poss�der

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