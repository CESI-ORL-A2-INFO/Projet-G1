#pragma once
#include "Statistique.h"
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AffichageStat
	/// </summary>
	public ref class AffichageStat : public System::Windows::Forms::Form
	{
	public:
		void ChiffreAffaire() {
			stat1 = gcnew CLStatistique();
			this->gridChiffreAffaire->Refresh();
			this->dataChiffreAffaire = this->stat1->chiffreAffairesMens("Rsl2");
			this->gridChiffreAffaire->DataSource = this->dataChiffreAffaire;
			this->gridChiffreAffaire->DataMember = "Rsl2";
		}
		void PanierMoy() {
			stat2 = gcnew CLStatistique();
			this->gridPanierMoy->Refresh();
			this->dataPanierMoy = this->stat2->panierMoy("Rsl6");
			this->gridPanierMoy->DataSource = this->dataPanierMoy;
			this->gridPanierMoy->DataMember = "Rsl6";
		}
		void SeuilReapr() {
			stat3 = gcnew CLStatistique();
			this->gridProduitReap->Refresh();
			this->dataReappro = this->stat3->reapprovisionnement("Rsl7");
			this->gridProduitReap->DataSource = this->dataReappro;
			this->gridProduitReap->DataMember = "Rsl7";
		}
		void PlusVendus() {
			stat4 = gcnew CLStatistique();
			this->gridPlusVendus->Refresh();
			this->dataPlusVendus = this->stat4->plusVendu("Rsl8");
			this->gridPlusVendus->DataSource = this->dataPlusVendus;
			this->gridPlusVendus->DataMember = "Rsl8";
		}
		void MoinsVendus() {
			stat5 = gcnew CLStatistique();
			this->gridMoinsVendus->Refresh();
			this->dataMoinsVendus = this->stat5->moinsVendu("Rsl9");
			this->gridMoinsVendus->DataSource = this->dataMoinsVendus;
			this->gridMoinsVendus->DataMember = "Rsl9";
		}
		void Achat() {
			stat6 = gcnew CLStatistique();
			this->gridAchat->Refresh();
			this->dataAchat = this->stat6->achatClientTot("Commande");
			this->gridAchat->DataSource = this->dataAchat;
			this->gridAchat->DataMember = "Commande";
		}
		AffichageStat(void)
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
		~AffichageStat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ boxValCom;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;




	private: System::Windows::Forms::Label^ boxSimulationStock;
	private: System::Windows::Forms::DataGridView^ gridChiffreAffaire;
	private: System::Windows::Forms::DataGridView^ gridProduitReap;
	private: System::Windows::Forms::DataGridView^ gridAchat;
	private: System::Windows::Forms::DataGridView^ gridPlusVendus;
	private: System::Windows::Forms::DataGridView^ gridMoinsVendus;
	private: System::Windows::Forms::DataGridView^ gridPanierMoy;
	private: System::Windows::Forms::ComboBox^ menuTVA;
	private: System::Windows::Forms::ComboBox^ menuMarge;
	private: System::Windows::Forms::ComboBox^ menuRemise;
	private: System::Windows::Forms::ComboBox^ menuDemarque;

	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		CLStatistique^ stat;
		CLStatistique^ stat1;
		CLStatistique^ stat2;
		CLStatistique^ stat3;
		CLStatistique^ stat4;
		CLStatistique^ stat5;
		CLStatistique^ stat6;
		System::Data::DataSet^ dataMoinsVendus;
		System::Data::DataSet^ dataPlusVendus;
		System::Data::DataSet^ dataAchat;
		System::Data::DataSet^ dataReappro;
		System::Data::DataSet^ dataChiffreAffaire;
		System::Data::DataSet^ dataMoyPanier;
		System::Data::DataSet^ dataSimu;
		System::Data::DataSet^ dataPanierMoy;
		System::Data::DataSet^ dataValeurStock;
		System::Data::DataTableReader^ reader1;


		   System::Data::DataTableReader^ reader2;




#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AffichageStat::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->boxValCom = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->boxSimulationStock = (gcnew System::Windows::Forms::Label());
			this->gridChiffreAffaire = (gcnew System::Windows::Forms::DataGridView());
			this->gridProduitReap = (gcnew System::Windows::Forms::DataGridView());
			this->gridAchat = (gcnew System::Windows::Forms::DataGridView());
			this->gridPlusVendus = (gcnew System::Windows::Forms::DataGridView());
			this->gridMoinsVendus = (gcnew System::Windows::Forms::DataGridView());
			this->menuTVA = (gcnew System::Windows::Forms::ComboBox());
			this->menuMarge = (gcnew System::Windows::Forms::ComboBox());
			this->menuRemise = (gcnew System::Windows::Forms::ComboBox());
			this->menuDemarque = (gcnew System::Windows::Forms::ComboBox());
			this->gridPanierMoy = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridChiffreAffaire))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridProduitReap))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridAchat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridPlusVendus))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridMoinsVendus))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridPanierMoy))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label1->Location = System::Drawing::Point(520, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Panier moyen après remise :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Valeur commercial du stock :";
			// 
			// boxValCom
			// 
			this->boxValCom->AutoSize = true;
			this->boxValCom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxValCom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxValCom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxValCom->Location = System::Drawing::Point(12, 37);
			this->boxValCom->Name = L"boxValCom";
			this->boxValCom->Size = System::Drawing::Size(21, 20);
			this->boxValCom->TabIndex = 12;
			this->boxValCom->Text = L"...";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label3->Location = System::Drawing::Point(12, 265);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(199, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Chiffre d\'affaire par mois ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label4->Location = System::Drawing::Point(434, 265);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(205, 20);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Produit à réapprovisionner";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label5->Location = System::Drawing::Point(881, 265);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Achat d\'un client";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label6->Location = System::Drawing::Point(1314, 265);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 20);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Articles les plus vendus";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label7->Location = System::Drawing::Point(1060, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(201, 20);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Articles les moins vendus";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label8->Location = System::Drawing::Point(266, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(215, 20);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Simulation valeur du stock :";
			// 
			// boxSimulationStock
			// 
			this->boxSimulationStock->AutoSize = true;
			this->boxSimulationStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxSimulationStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->boxSimulationStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxSimulationStock->Location = System::Drawing::Point(266, 167);
			this->boxSimulationStock->Name = L"boxSimulationStock";
			this->boxSimulationStock->Size = System::Drawing::Size(21, 20);
			this->boxSimulationStock->TabIndex = 23;
			this->boxSimulationStock->Text = L"...";
			// 
			// gridChiffreAffaire
			// 
			this->gridChiffreAffaire->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->gridChiffreAffaire->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->gridChiffreAffaire->DefaultCellStyle = dataGridViewCellStyle1;
			this->gridChiffreAffaire->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->gridChiffreAffaire->Location = System::Drawing::Point(12, 293);
			this->gridChiffreAffaire->Name = L"gridChiffreAffaire";
			this->gridChiffreAffaire->RowHeadersWidth = 51;
			this->gridChiffreAffaire->RowTemplate->Height = 24;
			this->gridChiffreAffaire->Size = System::Drawing::Size(420, 453);
			this->gridChiffreAffaire->TabIndex = 24;
			// 
			// gridProduitReap
			// 
			this->gridProduitReap->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->gridProduitReap->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->gridProduitReap->DefaultCellStyle = dataGridViewCellStyle2;
			this->gridProduitReap->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->gridProduitReap->Location = System::Drawing::Point(438, 293);
			this->gridProduitReap->Name = L"gridProduitReap";
			this->gridProduitReap->RowHeadersWidth = 51;
			this->gridProduitReap->RowTemplate->Height = 24;
			this->gridProduitReap->Size = System::Drawing::Size(441, 453);
			this->gridProduitReap->TabIndex = 25;
			// 
			// gridAchat
			// 
			this->gridAchat->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->gridAchat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->gridAchat->DefaultCellStyle = dataGridViewCellStyle3;
			this->gridAchat->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->gridAchat->Location = System::Drawing::Point(885, 293);
			this->gridAchat->Name = L"gridAchat";
			this->gridAchat->RowHeadersWidth = 51;
			this->gridAchat->RowTemplate->Height = 24;
			this->gridAchat->Size = System::Drawing::Size(427, 453);
			this->gridAchat->TabIndex = 26;
			// 
			// gridPlusVendus
			// 
			this->gridPlusVendus->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->gridPlusVendus->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->gridPlusVendus->DefaultCellStyle = dataGridViewCellStyle4;
			this->gridPlusVendus->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->gridPlusVendus->Location = System::Drawing::Point(1318, 293);
			this->gridPlusVendus->Name = L"gridPlusVendus";
			this->gridPlusVendus->RowHeadersWidth = 51;
			this->gridPlusVendus->RowTemplate->Height = 24;
			this->gridPlusVendus->Size = System::Drawing::Size(405, 453);
			this->gridPlusVendus->TabIndex = 27;
			// 
			// gridMoinsVendus
			// 
			this->gridMoinsVendus->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->gridMoinsVendus->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->gridMoinsVendus->DefaultCellStyle = dataGridViewCellStyle5;
			this->gridMoinsVendus->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->gridMoinsVendus->Location = System::Drawing::Point(1064, 37);
			this->gridMoinsVendus->Name = L"gridMoinsVendus";
			this->gridMoinsVendus->RowHeadersWidth = 51;
			this->gridMoinsVendus->RowTemplate->Height = 24;
			this->gridMoinsVendus->Size = System::Drawing::Size(659, 218);
			this->gridMoinsVendus->TabIndex = 28;
			// 
			// menuTVA
			// 
			this->menuTVA->FormattingEnabled = true;
			this->menuTVA->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"1%", L"5%", L"10%", L"15%", L"6%", L"2%", L"3%" });
			this->menuTVA->Location = System::Drawing::Point(270, 37);
			this->menuTVA->Name = L"menuTVA";
			this->menuTVA->Size = System::Drawing::Size(211, 24);
			this->menuTVA->TabIndex = 29;
			this->menuTVA->Text = L"TVA";
			this->menuTVA->SelectedIndexChanged += gcnew System::EventHandler(this, &AffichageStat::menuTVA_SelectedIndexChanged);
			// 
			// menuMarge
			// 
			this->menuMarge->FormattingEnabled = true;
			this->menuMarge->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1%", L"5%", L"10%", L"15%" });
			this->menuMarge->Location = System::Drawing::Point(270, 67);
			this->menuMarge->Name = L"menuMarge";
			this->menuMarge->Size = System::Drawing::Size(211, 24);
			this->menuMarge->TabIndex = 30;
			this->menuMarge->Text = L"Marge Commerciale";
			this->menuMarge->SelectedIndexChanged += gcnew System::EventHandler(this, &AffichageStat::menuMarge_SelectedIndexChanged);
			// 
			// menuRemise
			// 
			this->menuRemise->FormattingEnabled = true;
			this->menuRemise->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1%", L"5%", L"6%" });
			this->menuRemise->Location = System::Drawing::Point(270, 97);
			this->menuRemise->Name = L"menuRemise";
			this->menuRemise->Size = System::Drawing::Size(211, 24);
			this->menuRemise->TabIndex = 31;
			this->menuRemise->Text = L"Remise Commerciale";
			this->menuRemise->SelectedIndexChanged += gcnew System::EventHandler(this, &AffichageStat::menuRemise_SelectedIndexChanged);
			// 
			// menuDemarque
			// 
			this->menuDemarque->FormattingEnabled = true;
			this->menuDemarque->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1%", L"2%", L"3%", L"5%" });
			this->menuDemarque->Location = System::Drawing::Point(270, 127);
			this->menuDemarque->Name = L"menuDemarque";
			this->menuDemarque->Size = System::Drawing::Size(211, 24);
			this->menuDemarque->TabIndex = 32;
			this->menuDemarque->Text = L"Démarque Inconnue";
			this->menuDemarque->SelectedIndexChanged += gcnew System::EventHandler(this, &AffichageStat::menuDemarque_SelectedIndexChanged);
			// 
			// gridPanierMoy
			// 
			this->gridPanierMoy->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->gridPanierMoy->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->gridPanierMoy->DefaultCellStyle = dataGridViewCellStyle6;
			this->gridPanierMoy->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->gridPanierMoy->Location = System::Drawing::Point(524, 37);
			this->gridPanierMoy->Name = L"gridPanierMoy";
			this->gridPanierMoy->RowHeadersWidth = 51;
			this->gridPanierMoy->RowTemplate->Height = 24;
			this->gridPanierMoy->Size = System::Drawing::Size(534, 218);
			this->gridPanierMoy->TabIndex = 33;
			// 
			// AffichageStat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->ClientSize = System::Drawing::Size(1775, 758);
			this->Controls->Add(this->gridPanierMoy);
			this->Controls->Add(this->menuDemarque);
			this->Controls->Add(this->menuRemise);
			this->Controls->Add(this->menuMarge);
			this->Controls->Add(this->menuTVA);
			this->Controls->Add(this->gridMoinsVendus);
			this->Controls->Add(this->gridPlusVendus);
			this->Controls->Add(this->gridAchat);
			this->Controls->Add(this->gridProduitReap);
			this->Controls->Add(this->gridChiffreAffaire);
			this->Controls->Add(this->boxSimulationStock);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->boxValCom);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AffichageStat";
			this->Text = L"AffichageStat";
			this->Load += gcnew System::EventHandler(this, &AffichageStat::AffichageStat_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridChiffreAffaire))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridProduitReap))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridAchat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridPlusVendus))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridMoinsVendus))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridPanierMoy))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menuTVA_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->menuTVA->SelectedIndex == 0) {
			stat->setTVA("1");
			this->dataSimu = stat->simulationVarCom("Rsl");
			reader2 = this->dataSimu->CreateDataReader();
			reader2->Read();
			this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
		}
		if (this->menuTVA->SelectedIndex == 1) {
			stat->setTVA("5");
			this->dataSimu = stat->simulationVarCom("Rsl");
			reader2 = this->dataSimu->CreateDataReader();
			reader2->Read();
			this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
		}
		if (this->menuTVA->SelectedIndex == 2) {
			stat->setTVA("10");
			this->dataSimu = stat->simulationVarCom("Rsl");
			reader2 = this->dataSimu->CreateDataReader();
			reader2->Read();
			this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
		}
		if (this->menuTVA->SelectedIndex == 3) {
			stat->setTVA("15");
			this->dataSimu = stat->simulationVarCom("Rsl");
			reader2 = this->dataSimu->CreateDataReader();
			reader2->Read();
			this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
		}
		if (this->menuTVA->SelectedIndex == 4) {
			stat->setTVA("6");
			this->dataSimu = stat->simulationVarCom("Rsl");
			reader2 = this->dataSimu->CreateDataReader();
			reader2->Read();
			this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
		}
		if (this->menuTVA->SelectedIndex == 5) {
			stat->setTVA("2");
			this->dataSimu = stat->simulationVarCom("Rsl");
			reader2 = this->dataSimu->CreateDataReader();
			reader2->Read();
			this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
		}
		if (this->menuTVA->SelectedIndex == 6) {
			stat->setTVA("3");
			this->dataSimu = stat->simulationVarCom("Rsl");
			reader2 = this->dataSimu->CreateDataReader();
			reader2->Read();
			this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
		}
	}
private: System::Void menuMarge_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->menuMarge->SelectedIndex == 0) {
		stat->setMarge("1");
		this->dataSimu = stat->simulationVarCom("Rsl");
		reader2 = this->dataSimu->CreateDataReader();
		reader2->Read();
		this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
	}
	if (this->menuMarge->SelectedIndex == 1) {
		stat->setMarge("5");
		this->dataSimu = stat->simulationVarCom("Rsl");
		reader2 = this->dataSimu->CreateDataReader();
		reader2->Read();
		this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
	}
	if (this->menuMarge->SelectedIndex == 2) {
		stat->setMarge("10");
		this->dataSimu = stat->simulationVarCom("Rsl");
		reader2 = this->dataSimu->CreateDataReader();
		reader2->Read();
		this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
	}
	if (this->menuMarge->SelectedIndex == 3) {
		stat->setMarge("15");
		this->dataSimu = stat->simulationVarCom("Rsl");
		reader2 = this->dataSimu->CreateDataReader();
		reader2->Read();
		this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
	}
}
private: System::Void menuRemise_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->menuRemise->SelectedIndex == 0) {
		stat->setRemise("1");
		this->dataSimu = stat->simulationVarCom("Rsl");
		reader2 = this->dataSimu->CreateDataReader();
		reader2->Read();
		this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
	}
	if (this->menuRemise->SelectedIndex == 1) {
		stat->setRemise("5");
		this->dataSimu = stat->simulationVarCom("Rsl");
		reader2 = this->dataSimu->CreateDataReader();
		reader2->Read();
		this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
	}
	if (this->menuRemise->SelectedIndex == 2) {
		stat->setRemise("6");
		this->dataSimu = stat->simulationVarCom("Rsl");
		reader2 = this->dataSimu->CreateDataReader();
		reader2->Read();
		this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
	}
}
private: System::Void menuDemarque_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->menuDemarque->SelectedIndex == 0) {
		stat->setDemarque("1");
		this->dataSimu = stat->simulationVarCom("Rsl");
		reader2 = this->dataSimu->CreateDataReader();
		reader2->Read();
		this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
	}
	if (this->menuDemarque->SelectedIndex == 1) {
		stat->setDemarque("2");
		this->dataSimu = stat->simulationVarCom("Rsl");
		reader2 = this->dataSimu->CreateDataReader();
		reader2->Read();
		this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
	}
	if (this->menuDemarque->SelectedIndex == 2) {
		stat->setDemarque("3");
		this->dataSimu = stat->simulationVarCom("Rsl");
		reader2 = this->dataSimu->CreateDataReader();
		reader2->Read();
		this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
	}
	if (this->menuDemarque->SelectedIndex == 3) {
		stat->setDemarque("5");
		this->dataSimu = stat->simulationVarCom("Rsl");
		reader2 = this->dataSimu->CreateDataReader();
		reader2->Read();
		this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	ChiffreAffaire();
	PanierMoy();
	SeuilReapr();
	PlusVendus();
	MoinsVendus();
	Achat();
}
private: System::Void AffichageStat_Load_1(System::Object^ sender, System::EventArgs^ e) {
	this->stat = gcnew CLStatistique();
	this->dataValeurStock = stat->valComStock("Rsl");
	reader1 = this->dataValeurStock->CreateDataReader();
	reader1->Read();
	this->boxValCom->Text = reader1->GetValue(0)->ToString() + "€";

	stat->setTVA("1");
	stat->setMarge("1");
	stat->setRemise("1");
	stat->setDemarque("1");
	this->dataSimu = stat->simulationVarCom("Rsl");
	reader2 = this->dataSimu->CreateDataReader();
	reader2->Read();
	this->boxSimulationStock->Text = reader2->GetValue(1)->ToString() + "€";

	ChiffreAffaire();
	PanierMoy();
	SeuilReapr();
	PlusVendus();
	MoinsVendus();
	Achat();
}
};
}