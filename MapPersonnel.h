#pragma once
namespace NS_Comp {
	ref class Personnel {
	private:
		int Id_Personnel;
		int Id_Superieur;
		System::String^ Date_Embauche;
		System::String^ Nom_Personnel;
		System::String^ Prenom_Personnel;
		System::String^ Statut;
		int Id_Adresse;
		System::String^ sSql;

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		System::String^ UpdForAdresse();
		System::String^ UpdForId();
		System::String^ SelectForID();

		void setIDPersonnel(int);
		void setIDSuperieur(int);
		void setDateEmbauche(System::String^);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setStatut(System::String^);
		void setAdresse(int);

		int getID(void);
		int getIDSuperieur(void);
		System::String^ getDateEmbauche(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getStatut(void);
		int getAdresse(void);
	};
}