#pragma once
#include "ServiceCommande.h"
#include "GestionClient.h"
#include "GestionContenuCommande.h"
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



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::TextBox^ boxReference;
	private: System::Windows::Forms::TextBox^ boxNomSociete;
	private: System::Windows::Forms::TextBox^ boxTTC;
	private: System::Windows::Forms::TextBox^ boxMontantRemise;
	private: System::Windows::Forms::TextBox^ boxTotalArticles;
	private: System::Windows::Forms::TextBox^ boxDateEmission;
	private: System::Windows::Forms::TextBox^ boxDatePaiement;
	private: System::Windows::Forms::TextBox^ boxSateLivraison;
	private: System::Windows::Forms::TextBox^ boxNumClient;

	private: System::Windows::Forms::Button^ LoadCom;
	private: System::Windows::Forms::Button^ DelCom;
	private: System::Windows::Forms::Button^ UpdCom;
	private: System::Windows::Forms::Button^ InsCom;

	protected:




	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		NS_Serv::ServiceCommande^ servCom;
		GestionClient^ gestClient;
		GestionContenuCommande^ gestCont;

		System::Data::DataSet^ dataCom;
		System::Data::DataSet^ dataUneCom;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionCommande::typeid));
			this->TableCommande = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->boxReference = (gcnew System::Windows::Forms::TextBox());
			this->boxNomSociete = (gcnew System::Windows::Forms::TextBox());
			this->boxTTC = (gcnew System::Windows::Forms::TextBox());
			this->boxMontantRemise = (gcnew System::Windows::Forms::TextBox());
			this->boxTotalArticles = (gcnew System::Windows::Forms::TextBox());
			this->boxDateEmission = (gcnew System::Windows::Forms::TextBox());
			this->boxDatePaiement = (gcnew System::Windows::Forms::TextBox());
			this->boxSateLivraison = (gcnew System::Windows::Forms::TextBox());
			this->boxNumClient = (gcnew System::Windows::Forms::TextBox());
			this->LoadCom = (gcnew System::Windows::Forms::Button());
			this->DelCom = (gcnew System::Windows::Forms::Button());
			this->UpdCom = (gcnew System::Windows::Forms::Button());
			this->InsCom = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableCommande))->BeginInit();
			this->SuspendLayout();
			// 
			// TableCommande
			// 
			this->TableCommande->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->TableCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
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
			this->TableCommande->DefaultCellStyle = dataGridViewCellStyle1;
			this->TableCommande->Dock = System::Windows::Forms::DockStyle::Right;
			this->TableCommande->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->TableCommande->Location = System::Drawing::Point(430, 0);
			this->TableCommande->Name = L"TableCommande";
			this->TableCommande->RowHeadersWidth = 51;
			this->TableCommande->RowTemplate->Height = 24;
			this->TableCommande->Size = System::Drawing::Size(951, 585);
			this->TableCommande->TabIndex = 2;
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
			// boxReference
			// 
			this->boxReference->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxReference->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxReference->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxReference->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxReference->Location = System::Drawing::Point(186, 9);
			this->boxReference->Name = L"boxReference";
			this->boxReference->Size = System::Drawing::Size(238, 22);
			this->boxReference->TabIndex = 19;
			this->boxReference->TextChanged += gcnew System::EventHandler(this, &GestionCommande::boxReference_TextChanged);
			// 
			// boxNomSociete
			// 
			this->boxNomSociete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxNomSociete->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
			this->boxTTC->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
			this->boxMontantRemise->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
			this->boxTotalArticles->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
			this->boxDateEmission->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
			this->boxDatePaiement->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
			this->boxSateLivraison->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
			this->boxNumClient->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxNumClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxNumClient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxNumClient->Location = System::Drawing::Point(186, 299);
			this->boxNumClient->Name = L"boxNumClient";
			this->boxNumClient->Size = System::Drawing::Size(238, 22);
			this->boxNumClient->TabIndex = 27;
			// 
			// LoadCom
			// 
			this->LoadCom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->LoadCom->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->LoadCom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoadCom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoadCom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->LoadCom->Location = System::Drawing::Point(0, 531);
			this->LoadCom->Name = L"LoadCom";
			this->LoadCom->Size = System::Drawing::Size(430, 54);
			this->LoadCom->TabIndex = 29;
			this->LoadCom->Text = L"Load";
			this->LoadCom->UseVisualStyleBackColor = false;
			this->LoadCom->Click += gcnew System::EventHandler(this, &GestionCommande::LoadCom_Click);
			// 
			// DelCom
			// 
			this->DelCom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->DelCom->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->DelCom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DelCom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DelCom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->DelCom->Location = System::Drawing::Point(0, 477);
			this->DelCom->Name = L"DelCom";
			this->DelCom->Size = System::Drawing::Size(430, 54);
			this->DelCom->TabIndex = 30;
			this->DelCom->Text = L"Delete";
			this->DelCom->UseVisualStyleBackColor = false;
			this->DelCom->Click += gcnew System::EventHandler(this, &GestionCommande::DelCom_Click);
			// 
			// UpdCom
			// 
			this->UpdCom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->UpdCom->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->UpdCom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdCom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdCom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->UpdCom->Location = System::Drawing::Point(0, 423);
			this->UpdCom->Name = L"UpdCom";
			this->UpdCom->Size = System::Drawing::Size(430, 54);
			this->UpdCom->TabIndex = 31;
			this->UpdCom->Text = L"Update";
			this->UpdCom->UseVisualStyleBackColor = false;
			this->UpdCom->Click += gcnew System::EventHandler(this, &GestionCommande::UpdCom_Click);
			// 
			// InsCom
			// 
			this->InsCom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->InsCom->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->InsCom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->InsCom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InsCom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->InsCom->Location = System::Drawing::Point(0, 369);
			this->InsCom->Name = L"InsCom";
			this->InsCom->Size = System::Drawing::Size(430, 54);
			this->InsCom->TabIndex = 32;
			this->InsCom->Text = L"Insert";
			this->InsCom->UseVisualStyleBackColor = false;
			this->InsCom->Click += gcnew System::EventHandler(this, &GestionCommande::InsCom_Click);
			// 
			// GestionCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->ClientSize = System::Drawing::Size(1381, 585);
			this->Controls->Add(this->InsCom);
			this->Controls->Add(this->UpdCom);
			this->Controls->Add(this->DelCom);
			this->Controls->Add(this->LoadCom);
			this->Controls->Add(this->boxNumClient);
			this->Controls->Add(this->boxSateLivraison);
			this->Controls->Add(this->boxDatePaiement);
			this->Controls->Add(this->boxDateEmission);
			this->Controls->Add(this->boxTotalArticles);
			this->Controls->Add(this->boxMontantRemise);
			this->Controls->Add(this->boxTTC);
			this->Controls->Add(this->boxNomSociete);
			this->Controls->Add(this->boxReference);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TableCommande);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"GestionCommande";
			this->Text = L"GestionCommande";
			this->Load += gcnew System::EventHandler(this, &GestionCommande::GestionCommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableCommande))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GestionCommande_Load(System::Object^ sender, System::EventArgs^ e) {
		this->servCom = gcnew NS_Serv::ServiceCommande();
	}
private: System::Void LoadCom_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TableCommande->Refresh();
	this->dataCom = this->servCom->selectAllCommande("Commande");
	this->TableCommande->DataSource = this->dataCom;
	this->TableCommande->DataMember = "Commande";
}
private: System::Void DelCom_Click(System::Object^ sender, System::EventArgs^ e) {
	this->servCom->delFact(this->boxReference->Text);
	this->servCom->delCont(this->boxReference->Text);
	this->servCom->delCommande(this->boxReference->Text);
}
private: System::Void UpdCom_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->boxNumClient->Text->Equals("")) { //Vérifie si les 2 ID adresses sont rentrés.
		gestClient = gcnew GestionClient();// Ouvre la fenêtre de gestion des Adresses.
		gestClient->Show();
	}
	else {
		this->servCom->updateCommande(this->boxReference->Text, this->boxNomSociete->Text, this->boxTTC->Text, this->boxMontantRemise->Text, int::Parse(this->boxTotalArticles->Text), int::Parse(this->boxNumClient->Text), this->boxDateEmission->Text, this->boxDatePaiement->Text, this->boxSateLivraison->Text);
		this->gestCont = gcnew GestionContenuCommande();
		this->gestCont->Show();
	}
}
private: System::Void InsCom_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->boxNumClient->Text->Equals("")) { //Vérifie si les 2 ID adresses sont rentrés.
		gestClient = gcnew GestionClient();// Ouvre la fenêtre de gestion des Adresses.
		gestClient->Show();
	}
	else {
		this->gestCont = gcnew GestionContenuCommande();
		this->gestCont->Show();
		this->servCom->addCommande(this->boxReference->Text, this->boxNomSociete->Text, this->boxTTC->Text, this->boxMontantRemise->Text, int::Parse(this->boxTotalArticles->Text), int::Parse(this->boxNumClient->Text), this->boxDateEmission->Text, this->boxDatePaiement->Text, this->boxSateLivraison->Text);
	}
}
private: System::Void boxReference_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
