#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionCommande
	/// </summary>
	public ref class GestionCommande : public System::Windows::Forms::Form
	{
	public:
		GestionCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ TableCommande;
	private: System::Windows::Forms::Button^ deleteCommande;
	private: System::Windows::Forms::Button^ updateCommande;
	private: System::Windows::Forms::Button^ inserCommande;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ boxReference;
	private: System::Windows::Forms::TextBox^ boxNomSociete;
	private: System::Windows::Forms::TextBox^ boxTTC;
	private: System::Windows::Forms::TextBox^ boxMontantRemise;
	private: System::Windows::Forms::TextBox^ boxTotalArticles;
	private: System::Windows::Forms::TextBox^ boxDateEmission;
	private: System::Windows::Forms::TextBox^ boxDatePaiement;
	private: System::Windows::Forms::TextBox^ boxSateLivraison;
	private: System::Windows::Forms::TextBox^ boxNumClient;
	private: System::Windows::Forms::TextBox^ boxIDFacture;
	private: System::Windows::Forms::Button^ loadCommande;
	protected:




	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TableCommande = (gcnew System::Windows::Forms::DataGridView());
			this->deleteCommande = (gcnew System::Windows::Forms::Button());
			this->updateCommande = (gcnew System::Windows::Forms::Button());
			this->inserCommande = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->boxReference = (gcnew System::Windows::Forms::TextBox());
			this->boxNomSociete = (gcnew System::Windows::Forms::TextBox());
			this->boxTTC = (gcnew System::Windows::Forms::TextBox());
			this->boxMontantRemise = (gcnew System::Windows::Forms::TextBox());
			this->boxTotalArticles = (gcnew System::Windows::Forms::TextBox());
			this->boxDateEmission = (gcnew System::Windows::Forms::TextBox());
			this->boxDatePaiement = (gcnew System::Windows::Forms::TextBox());
			this->boxSateLivraison = (gcnew System::Windows::Forms::TextBox());
			this->boxNumClient = (gcnew System::Windows::Forms::TextBox());
			this->boxIDFacture = (gcnew System::Windows::Forms::TextBox());
			this->loadCommande = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableCommande))->BeginInit();
			this->SuspendLayout();
			// 
			// TableCommande
			// 
			this->TableCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TableCommande->Dock = System::Windows::Forms::DockStyle::Right;
			this->TableCommande->Location = System::Drawing::Point(430, 0);
			this->TableCommande->Name = L"TableCommande";
			this->TableCommande->RowHeadersWidth = 51;
			this->TableCommande->RowTemplate->Height = 24;
			this->TableCommande->Size = System::Drawing::Size(493, 585);
			this->TableCommande->TabIndex = 2;
			// 
			// deleteCommande
			// 
			this->deleteCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->deleteCommande->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->deleteCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteCommande->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->deleteCommande->Location = System::Drawing::Point(0, 428);
			this->deleteCommande->Name = L"deleteCommande";
			this->deleteCommande->Size = System::Drawing::Size(430, 54);
			this->deleteCommande->TabIndex = 9;
			this->deleteCommande->Text = L"Del";
			this->deleteCommande->UseVisualStyleBackColor = false;
			// 
			// updateCommande
			// 
			this->updateCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->updateCommande->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->updateCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateCommande->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->updateCommande->Location = System::Drawing::Point(0, 482);
			this->updateCommande->Name = L"updateCommande";
			this->updateCommande->Size = System::Drawing::Size(430, 51);
			this->updateCommande->TabIndex = 8;
			this->updateCommande->Text = L"Upd";
			this->updateCommande->UseVisualStyleBackColor = false;
			// 
			// inserCommande
			// 
			this->inserCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->inserCommande->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->inserCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inserCommande->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->inserCommande->Location = System::Drawing::Point(0, 533);
			this->inserCommande->Name = L"inserCommande";
			this->inserCommande->Size = System::Drawing::Size(430, 52);
			this->inserCommande->TabIndex = 7;
			this->inserCommande->Text = L"Ins";
			this->inserCommande->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Reference :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label2->Location = System::Drawing::Point(12, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Nom Société :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label4->Location = System::Drawing::Point(12, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 20);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Total TTC :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label5->Location = System::Drawing::Point(12, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 20);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Montant remise :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label6->Location = System::Drawing::Point(12, 144);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Total Articles :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label7->Location = System::Drawing::Point(12, 181);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(129, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Date Emission :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label8->Location = System::Drawing::Point(12, 221);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 20);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Date Paiement :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label9->Location = System::Drawing::Point(12, 260);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(128, 20);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Date Livraison :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label10->Location = System::Drawing::Point(12, 299);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(126, 20);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Numéro Client :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label11->Location = System::Drawing::Point(12, 338);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(98, 20);
			this->label11->TabIndex = 16;
			this->label11->Text = L"ID Facture :";
			// 
			// boxReference
			// 
			this->boxReference->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxReference->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxReference->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxReference->Location = System::Drawing::Point(186, 9);
			this->boxReference->Name = L"boxReference";
			this->boxReference->Size = System::Drawing::Size(238, 22);
			this->boxReference->TabIndex = 19;
			// 
			// boxNomSociete
			// 
			this->boxNomSociete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxNomSociete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxNomSociete->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxNomSociete->Location = System::Drawing::Point(186, 41);
			this->boxNomSociete->Name = L"boxNomSociete";
			this->boxNomSociete->Size = System::Drawing::Size(238, 22);
			this->boxNomSociete->TabIndex = 20;
			// 
			// boxTTC
			// 
			this->boxTTC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxTTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxTTC->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxTTC->Location = System::Drawing::Point(186, 73);
			this->boxTTC->Name = L"boxTTC";
			this->boxTTC->Size = System::Drawing::Size(238, 22);
			this->boxTTC->TabIndex = 21;
			// 
			// boxMontantRemise
			// 
			this->boxMontantRemise->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxMontantRemise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxMontantRemise->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxMontantRemise->Location = System::Drawing::Point(186, 107);
			this->boxMontantRemise->Name = L"boxMontantRemise";
			this->boxMontantRemise->Size = System::Drawing::Size(238, 22);
			this->boxMontantRemise->TabIndex = 22;
			// 
			// boxTotalArticles
			// 
			this->boxTotalArticles->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxTotalArticles->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxTotalArticles->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxTotalArticles->Location = System::Drawing::Point(186, 144);
			this->boxTotalArticles->Name = L"boxTotalArticles";
			this->boxTotalArticles->Size = System::Drawing::Size(238, 22);
			this->boxTotalArticles->TabIndex = 23;
			// 
			// boxDateEmission
			// 
			this->boxDateEmission->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxDateEmission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxDateEmission->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxDateEmission->Location = System::Drawing::Point(186, 181);
			this->boxDateEmission->Name = L"boxDateEmission";
			this->boxDateEmission->Size = System::Drawing::Size(238, 22);
			this->boxDateEmission->TabIndex = 24;
			// 
			// boxDatePaiement
			// 
			this->boxDatePaiement->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxDatePaiement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxDatePaiement->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxDatePaiement->Location = System::Drawing::Point(186, 221);
			this->boxDatePaiement->Name = L"boxDatePaiement";
			this->boxDatePaiement->Size = System::Drawing::Size(238, 22);
			this->boxDatePaiement->TabIndex = 25;
			// 
			// boxSateLivraison
			// 
			this->boxSateLivraison->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxSateLivraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxSateLivraison->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxSateLivraison->Location = System::Drawing::Point(186, 260);
			this->boxSateLivraison->Name = L"boxSateLivraison";
			this->boxSateLivraison->Size = System::Drawing::Size(238, 22);
			this->boxSateLivraison->TabIndex = 26;
			// 
			// boxNumClient
			// 
			this->boxNumClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxNumClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxNumClient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxNumClient->Location = System::Drawing::Point(186, 299);
			this->boxNumClient->Name = L"boxNumClient";
			this->boxNumClient->Size = System::Drawing::Size(238, 22);
			this->boxNumClient->TabIndex = 27;
			// 
			// boxIDFacture
			// 
			this->boxIDFacture->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxIDFacture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxIDFacture->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxIDFacture->Location = System::Drawing::Point(186, 338);
			this->boxIDFacture->Name = L"boxIDFacture";
			this->boxIDFacture->Size = System::Drawing::Size(238, 22);
			this->boxIDFacture->TabIndex = 28;
			// 
			// loadCommande
			// 
			this->loadCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->loadCommande->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->loadCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loadCommande->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->loadCommande->Location = System::Drawing::Point(0, 374);
			this->loadCommande->Name = L"loadCommande";
			this->loadCommande->Size = System::Drawing::Size(430, 54);
			this->loadCommande->TabIndex = 29;
			this->loadCommande->Text = L"Load";
			this->loadCommande->UseVisualStyleBackColor = false;
			// 
			// GestionCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->ClientSize = System::Drawing::Size(923, 585);
			this->Controls->Add(this->loadCommande);
			this->Controls->Add(this->boxIDFacture);
			this->Controls->Add(this->boxNumClient);
			this->Controls->Add(this->boxSateLivraison);
			this->Controls->Add(this->boxDatePaiement);
			this->Controls->Add(this->boxDateEmission);
			this->Controls->Add(this->boxTotalArticles);
			this->Controls->Add(this->boxMontantRemise);
			this->Controls->Add(this->boxTTC);
			this->Controls->Add(this->boxNomSociete);
			this->Controls->Add(this->boxReference);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->deleteCommande);
			this->Controls->Add(this->updateCommande);
			this->Controls->Add(this->inserCommande);
			this->Controls->Add(this->TableCommande);
			this->Name = L"GestionCommande";
			this->Text = L"GestionCommande";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableCommande))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
