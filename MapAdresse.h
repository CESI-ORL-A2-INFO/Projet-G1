#pragma once
namespace NS_Comp {								//Ici, nous allons créer un "groupe de classe" que nous appelons "namespace"
	ref class Adresse {							//Dedans, nous allons créer une classe (ici, Adresse) pour gérer les adresses
	private:									//Chaque classe possède des attributs et méthodes qui peuvent avoir 3 niveaux de protection (privé, public et protégé)
												//Ici, chaque attribut est "privé", donc accessible SEULEMENT par cette classe
												//Ensuite, nous allons donner chaque attribut que la classe doit posséder

		int IDAdresse;							//L'identifiant d'une adresse
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

		void setIDAdresse(int);					//La méthode pour entrer l'identifiant d'une adresse
		void setNumeroRue(int);					//La méthode pour entrer le numéro de rue
		void setCodePostal(int);				//La méthode pour entrer le code postal
		void setNomRue(System::String^);		//La méthode pour entrer le nom de la rue
		void setVille(System::String^);			//La méthode pour entrer le nom de la ville
		void setTypeRue(System::String^);		//La méthode pour entrer le type de rue

		int getIDAdresse(void);					//La méthode pour récupérer (afficher) l'identifiant d'une adresse
		int getNumeroRue(void);					//La méthode pour récupérer (afficher) le numéro de rue
		int getCodePostal(void);				//La méthode pour récupérer (afficher) le code postal
		System::String^ getNomRue(void);		//La méthode pour récupérer (afficher) le nom de la rue
		System::String^ getVille(void);			//La méthode pour récupérer (afficher) le nom de la ville
		System::String^ getTypeRue(void);		//La méthode pour récupérer (afficher) le type de rue
	};
}