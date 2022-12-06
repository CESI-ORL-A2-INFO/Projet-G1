#pragma once
namespace NS_Comp {								//Ici, nous allons cr�er un "groupe de classe" que nous appelons "namespace"
	ref class Adresse {							//Dedans, nous allons cr�er une classe (ici, Adresse) pour g�rer les adresses
	private:									//Chaque classe poss�de des attributs et m�thodes qui peuvent avoir 3 niveaux de protection (priv�, public et prot�g�)
												//Ici, chaque attribut est "priv�", donc accessible SEULEMENT par cette classe
												//Ensuite, nous allons donner chaque attribut que la classe doit poss�der

		int IDAdresse;							//L'identifiant de l'adresse
		int NumeroRue;							//Le num�ro de rue
		int CodePostal;							//Le code postal
		System::String^ NomRue;					//Le nom de la rue
		System::String^ Ville;					//Le nom de la ville
		System::String^ TypeRue;				//Le type de rue (rue, avenue, impasse, etc.)
		System::String^ sSql;
	public:										//Ici, chaque m�thode cr��e est "publique", donc accessible par l'enti�ret� des autres classes
		System::String^ Select(void);			//La m�thode SELECT (base de donn�es) pour s�lectionner une ou plusieures adresse(s)
		System::String^ Insert(void);			//La m�thode INSERT (base de donn�es) pour ins�rer une nouvelle adresse
		System::String^ Delete(void);			//La m�thode DELETE (base de donn�es) pour supprimer une adresse
		System::String^ Update(void);			//La m�thode UPDATE (base de donn�es) pour mettre � jour les informations d'une adresse
		System::String^ SelectWithID();			//La m�thode pour s�lectionner une adresse via son ID

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