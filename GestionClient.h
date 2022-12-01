#pragma once
#include "ServiceClient.h"
#include "GestionAdress.h"
namespace ProjetPOO {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionClient
	/// </summary>
	public ref class GestionClient : public System::Windows::Forms::Form
	{
	public:
		GestionClient(void)
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
		~GestionClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ TableClient;


	private:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ boxNumClient;
	private: System::Windows::Forms::TextBox^ boxNom;
	private: System::Windows::Forms::TextBox^ boxPrenom;
	private: System::Windows::Forms::TextBox^ boxIDAdresseFact;
	private: System::Windows::Forms::TextBox^ boxIDAdresseLivraison;
	private: System::Windows::Forms::TextBox^ dateNaissance;
	private: System::Windows::Forms::TextBox^ dateFirstCommande;
	private: System::Windows::Forms::Button^ loadClient;









	protected:




	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;
		NS_Serv::ServiceClient^ servClient;
		GestionAdress^ gestAdress;
	private: System::Windows::Forms::Button^ DelClient;
	private: System::Windows::Forms::Button^ UpdClient;
	private: System::Windows::Forms::Button^ InsClient;


		   System::Data::DataSet^ dataClient;
		   System::Data::DataSet^ dataUnClient;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->TableClient = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->boxNumClient = (gcnew System::Windows::Forms::TextBox());
			this->boxNom = (gcnew System::Windows::Forms::TextBox());
			this->boxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->boxIDAdresseFact = (gcnew System::Windows::Forms::TextBox());
			this->boxIDAdresseLivraison = (gcnew System::Windows::Forms::TextBox());
			this->dateNaissance = (gcnew System::Windows::Forms::TextBox());
			this->dateFirstCommande = (gcnew System::Windows::Forms::TextBox());
			this->loadClient = (gcnew System::Windows::Forms::Button());
			this->DelClient = (gcnew System::Windows::Forms::Button());
			this->UpdClient = (gcnew System::Windows::Forms::Button());
			this->InsClient = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableClient))->BeginInit();
			this->SuspendLayout();
			// 
			// TableClient
			// 
			this->TableClient->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->TableClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->TableClient->DefaultCellStyle = dataGridViewCellStyle1;
			this->TableClient->Dock = System::Windows::Forms::DockStyle::Right;
			this->TableClient->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->TableClient->Location = System::Drawing::Point(430, 0);
			this->TableClient->Name = L"TableClient";
			this->TableClient->RowHeadersWidth = 51;
			this->TableClient->RowTemplate->Height = 24;
			this->TableClient->Size = System::Drawing::Size(493, 585);
			this->TableClient->TabIndex = 1;
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
			this->label1->Size = System::Drawing::Size(102, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Num Client :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label2->Location = System::Drawing::Point(12, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Nom :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label3->Location = System::Drawing::Point(12, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Prenom :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label4->Location = System::Drawing::Point(12, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Date Naissance :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label5->Location = System::Drawing::Point(12, 187);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(218, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Date Première Commande :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label6->Location = System::Drawing::Point(12, 228);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(165, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"ID Adresse Facture :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label7->Location = System::Drawing::Point(12, 266);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"ID Adresse Livraison :";
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
			this->boxNumClient->Location = System::Drawing::Point(186, 12);
			this->boxNumClient->Name = L"boxNumClient";
			this->boxNumClient->Size = System::Drawing::Size(238, 22);
			this->boxNumClient->TabIndex = 18;
			this->boxNumClient->TextChanged += gcnew System::EventHandler(this, &GestionClient::boxNumClient_TextChanged);
			// 
			// boxNom
			// 
			this->boxNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxNom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxNom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxNom->Location = System::Drawing::Point(186, 50);
			this->boxNom->Name = L"boxNom";
			this->boxNom->Size = System::Drawing::Size(238, 22);
			this->boxNom->TabIndex = 19;
			this->boxNom->TextChanged += gcnew System::EventHandler(this, &GestionClient::boxNom_TextChanged);
			// 
			// boxPrenom
			// 
			this->boxPrenom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxPrenom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxPrenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxPrenom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxPrenom->Location = System::Drawing::Point(186, 94);
			this->boxPrenom->Name = L"boxPrenom";
			this->boxPrenom->Size = System::Drawing::Size(238, 22);
			this->boxPrenom->TabIndex = 20;
			// 
			// boxIDAdresseFact
			// 
			this->boxIDAdresseFact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxIDAdresseFact->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxIDAdresseFact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxIDAdresseFact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxIDAdresseFact->Location = System::Drawing::Point(211, 228);
			this->boxIDAdresseFact->Name = L"boxIDAdresseFact";
			this->boxIDAdresseFact->Size = System::Drawing::Size(213, 22);
			this->boxIDAdresseFact->TabIndex = 23;
			// 
			// boxIDAdresseLivraison
			// 
			this->boxIDAdresseLivraison->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxIDAdresseLivraison->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxIDAdresseLivraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->boxIDAdresseLivraison->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxIDAdresseLivraison->Location = System::Drawing::Point(211, 266);
			this->boxIDAdresseLivraison->Name = L"boxIDAdresseLivraison";
			this->boxIDAdresseLivraison->Size = System::Drawing::Size(213, 22);
			this->boxIDAdresseLivraison->TabIndex = 24;
			// 
			// dateNaissance
			// 
			this->dateNaissance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->dateNaissance->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->dateNaissance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateNaissance->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->dateNaissance->Location = System::Drawing::Point(186, 140);
			this->dateNaissance->Name = L"dateNaissance";
			this->dateNaissance->Size = System::Drawing::Size(238, 22);
			this->dateNaissance->TabIndex = 25;
			// 
			// dateFirstCommande
			// 
			this->dateFirstCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->dateFirstCommande->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->dateFirstCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateFirstCommande->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->dateFirstCommande->Location = System::Drawing::Point(250, 187);
			this->dateFirstCommande->Name = L"dateFirstCommande";
			this->dateFirstCommande->Size = System::Drawing::Size(174, 22);
			this->dateFirstCommande->TabIndex = 26;
			// 
			// loadClient
			// 
			this->loadClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->loadClient->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->loadClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loadClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loadClient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->loadClient->Location = System::Drawing::Point(0, 531);
			this->loadClient->Name = L"loadClient";
			this->loadClient->Size = System::Drawing::Size(430, 54);
			this->loadClient->TabIndex = 30;
			this->loadClient->Text = L"Load";
			this->loadClient->UseVisualStyleBackColor = true;
			this->loadClient->Click += gcnew System::EventHandler(this, &GestionClient::loadClient_Click);
			// 
			// DelClient
			// 
			this->DelClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->DelClient->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->DelClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DelClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DelClient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->DelClient->Location = System::Drawing::Point(0, 477);
			this->DelClient->Name = L"DelClient";
			this->DelClient->Size = System::Drawing::Size(430, 54);
			this->DelClient->TabIndex = 31;
			this->DelClient->Text = L"Delete";
			this->DelClient->UseVisualStyleBackColor = false;
			this->DelClient->Click += gcnew System::EventHandler(this, &GestionClient::DelClient_Click);
			// 
			// UpdClient
			// 
			this->UpdClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->UpdClient->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->UpdClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdClient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->UpdClient->Location = System::Drawing::Point(0, 423);
			this->UpdClient->Name = L"UpdClient";
			this->UpdClient->Size = System::Drawing::Size(430, 54);
			this->UpdClient->TabIndex = 32;
			this->UpdClient->Text = L"Update";
			this->UpdClient->UseVisualStyleBackColor = false;
			this->UpdClient->Click += gcnew System::EventHandler(this, &GestionClient::UpdClient_Click);
			// 
			// InsClient
			// 
			this->InsClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->InsClient->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->InsClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->InsClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InsClient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->InsClient->Location = System::Drawing::Point(0, 369);
			this->InsClient->Name = L"InsClient";
			this->InsClient->Size = System::Drawing::Size(430, 54);
			this->InsClient->TabIndex = 33;
			this->InsClient->Text = L"Insert";
			this->InsClient->UseVisualStyleBackColor = false;
			this->InsClient->Click += gcnew System::EventHandler(this, &GestionClient::InsClient_Click);
			// 
			// GestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->ClientSize = System::Drawing::Size(923, 585);
			this->Controls->Add(this->InsClient);
			this->Controls->Add(this->UpdClient);
			this->Controls->Add(this->DelClient);
			this->Controls->Add(this->loadClient);
			this->Controls->Add(this->dateFirstCommande);
			this->Controls->Add(this->dateNaissance);
			this->Controls->Add(this->boxIDAdresseLivraison);
			this->Controls->Add(this->boxIDAdresseFact);
			this->Controls->Add(this->boxPrenom);
			this->Controls->Add(this->boxNom);
			this->Controls->Add(this->boxNumClient);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TableClient);
			this->Name = L"GestionClient";
			this->Text = L"GestionClient";
			this->Load += gcnew System::EventHandler(this, &GestionClient::GestionClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableClient))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GestionClient_Load(System::Object^ sender, System::EventArgs^ e) {
		this->servClient = gcnew NS_Serv::ServiceClient();
	}
private: System::Void loadClient_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TableClient->Refresh();
	this->dataClient = this->servClient->selectAllClient("Rsl");
	this->TableClient->DataSource = this->dataClient;
	this->TableClient->DataMember = "Rsl";

}
private: System::Void deleteClient_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void inserClient_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void boxNom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void updateClient_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void boxNumClient_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!this->boxNumClient->Text->Equals("")) {
		this->dataUnClient = this->servClient->selectClientWithID("Client", int::Parse(this->boxNumClient->Text));
		System::Data::DataTableReader^ reader;
		reader = this->dataUnClient->CreateDataReader();
		reader->Read();
		this->boxNom->Text = reader->GetValue(1)->ToString();
		this->boxPrenom->Text = reader->GetValue(2)->ToString();
		this->dateNaissance->Text = reader->GetValue(3)->ToString();
		this->dateFirstCommande->Text = reader->GetValue(4)->ToString();
		this->boxIDAdresseFact->Text = reader->GetValue(5)->ToString();
		this->boxIDAdresseLivraison->Text = reader->GetValue(6)->ToString();
	}
	this->TableClient->Refresh();
	this->dataClient = this->servClient->selectAllClient("Rsl");
	this->TableClient->DataSource = this->dataClient;
	this->TableClient->DataMember = "Rsl";
}
private: System::Void DelClient_Click(System::Object^ sender, System::EventArgs^ e) {
	this->servClient->delClient(int::Parse(this->boxNumClient->Text));
}
private: System::Void UpdClient_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->boxIDAdresseFact->Text->IsNullOrWhiteSpace("") || this->boxIDAdresseLivraison->Text->IsNullOrWhiteSpace("")) { //Vérifie si les 2 ID adresses sont rentrés.
		gestAdress = gcnew GestionAdress();// Ouvre la fenêtre de gestion des Adresses.
		gestAdress->Show();
	}
	else {
		this->servClient->udpdateClient(int::Parse(this->boxNumClient->Text), this->dateNaissance->Text, this->dateFirstCommande->Text, this->boxNom->Text, this->boxPrenom->Text, int::Parse(this->boxIDAdresseLivraison->Text), int::Parse(this->boxIDAdresseFact->Text));
	}
}
private: System::Void InsClient_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->boxIDAdresseFact->Text->IsNullOrWhiteSpace("") || this->boxIDAdresseLivraison->Text->IsNullOrWhiteSpace("")) { //Vérifie si les 2 ID adresses sont rentrés.
		gestAdress = gcnew GestionAdress();// Ouvre la fenêtre de gestion des Adresses.
		gestAdress->Show();
	}
	else {
		this->servClient->addClient(this->dateNaissance->Text, this->dateFirstCommande->Text, this->boxNom->Text, this->boxPrenom->Text, int::Parse(this->boxIDAdresseLivraison->Text), int::Parse(this->boxIDAdresseFact->Text));
	}
}
};
}
