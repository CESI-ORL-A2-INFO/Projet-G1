#pragma once
namespace NS_Comp {
	ref class MapContenuCommande {
	private:
		int IdArticle;
		System::String^ ref;
		int Quantite;
	public:
		System::String^ Select();
		System::String^ Insert();
		System::String^ Update();
		System::String^ Delete();

		void setIdArticle(int);
		void setRef(System::String^);
		void setQuantite(int);

		int getIdArticle();
		System::String^ getRef();
		int getQuantite();
	};
}
