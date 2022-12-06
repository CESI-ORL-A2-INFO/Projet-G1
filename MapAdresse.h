#pragma once
namespace NS_Comp {								//Ici, nous allons créer un "groupe de classe" que nous appelons "namespace"
	ref class Adresse {							//Dedans, nous allons créer une classe (ici, Adresse) pour gérer les adresses
	private:									//Chaque classe possède des attributs et méthodes qui peuvent avoir 3 niveaux de protection (privé, public et protégé)
												//Ici, chaque attribut est "privé", donc accessible SEULEMENT par cette classe
												//Ensuite, nous allons donner chaque attribut que la classe doit posséder

		int IDAdresse;							//L'identifiant de l'adresse
		int NumeroRue;							//Le numéro de rue
		int CodePostal;							//Le code postal
		System::String^ NomRue;					//Le nom de la rue
		System::String^ Ville;					//Le nom de la ville
		System::String^ TypeRue;				//Le type de rue (rue, avenue, impasse, etc.)
		System::String^ sSql;
	public:										//Ici, chaque méthode créée est "publique", donc accessible par l'entièreté des autres classes
		System::String^ Select(void);			//La méthode SELECT (base de données) pour sélectionner une ou plusieures adresse(s)
		System::String^ Insert(void);			//La méthode INSERT (base de données) pour insérer une nouvelle adresse
		System::String^ Delete(void);			//La méthode DELETE (base de données) pour supprimer une adresse
		System::String^ Update(void);			//La méthode UPDATE (base de données) pour mettre à jour les informations d'une adresse
		System::String^ SelectWithID();			//La méthode pour sélectionner une adresse via son ID

		void setIDAdresse(int);
		void setNumeroRue(int);
		void setCodePostal(int);
		void setNomRue(System::String^);
		void setVille(System::String^);
		void setTypeRue(System::String^);

		int getIDAdresse(void);
		int getNumeroRue(void);
		int getCodePostal(void);
		System::String^ getNomRue(void);
		System::String^ getVille(void);
		System::String^ getTypeRue(void);
	};
}