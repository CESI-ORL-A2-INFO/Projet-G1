#pragma once

#include "ServicePersonnel.h"
#include "GestionAdress.h"
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionPersonnel
	/// </summary>
	public ref class GestionPersonnel : public System::Windows::Forms::Form
	{
	public:
		GestionPersonnel(void)
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
		~GestionPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ TablePersonnel;
	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TextBox^ boxAdresse;
	private: System::Windows::Forms::TextBox^ boxSuperieur;
	private: System::Windows::Forms::TextBox^ boxStatut;
	private: System::Windows::Forms::TextBox^ boxPrenom;
	private: System::Windows::Forms::TextBox^ boxNom;
	private: System::Windows::Forms::TextBox^ boxID;
	private: System::Windows::Forms::TextBox^ dateEmbauche;
	private: System::Windows::Forms::Button^ LoadPers;
	private: System::Windows::Forms::Button^ DelPers;
	private: System::Windows::Forms::Button^ UpdPers;
	private: System::Windows::Forms::Button^ InsPers;



	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

		NS_Serv::ServicePersonnel^ servPers;
		GestionAdress^ gestAdress;

		System::Data::DataSet^ dataPers;
		System::Data::DataSet^ dataUnePers;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionPersonnel::typeid));
			this->TablePersonnel = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->boxAdresse = (gcnew System::Windows::Forms::TextBox());
			this->boxSuperieur = (gcnew System::Windows::Forms::TextBox());
			this->boxStatut = (gcnew System::Windows::Forms::TextBox());
			this->boxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->boxNom = (gcnew System::Windows::Forms::TextBox());
			this->boxID = (gcnew System::Windows::Forms::TextBox());
			this->dateEmbauche = (gcnew System::Windows::Forms::TextBox());
			this->LoadPers = (gcnew System::Windows::Forms::Button());
			this->DelPers = (gcnew System::Windows::Forms::Button());
			this->UpdPers = (gcnew System::Windows::Forms::Button());
			this->InsPers = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TablePersonnel))->BeginInit();
			this->SuspendLayout();
			// 
			// TablePersonnel
			// 
			this->TablePersonnel->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
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
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->TablePersonnel->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->TablePersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->TablePersonnel->DefaultCellStyle = dataGridViewCellStyle2;
			this->TablePersonnel->Dock = System::Windows::Forms::DockStyle::Right;
			this->TablePersonnel->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->TablePersonnel->Location = System::Drawing::Point(430, 0);
			this->TablePersonnel->Name = L"TablePersonnel";
			this->TablePersonnel->RowHeadersWidth = 51;
			this->TablePersonnel->RowTemplate->Height = 24;
			this->TablePersonnel->Size = System::Drawing::Size(493, 585);
			this->TablePersonnel->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label1->Location = System::Drawing::Point(14, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"ID :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label2->Location = System::Drawing::Point(14, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Nom :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label3->Location = System::Drawing::Point(14, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Prénom :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label4->Location = System::Drawing::Point(14, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Statut :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label5->Location = System::Drawing::Point(14, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Date Embauche :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label6->Location = System::Drawing::Point(14, 235);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"ID Adresse :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label7->Location = System::Drawing::Point(14, 279);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 20);
			this->label7->TabIndex = 10;
			this->label7->Text = L"ID Supérieur :";
			// 
			// boxAdresse
			// 
			this->boxAdresse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxAdresse->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxAdresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxAdresse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxAdresse->Location = System::Drawing::Point(186, 236);
			this->boxAdresse->Name = L"boxAdresse";
			this->boxAdresse->Size = System::Drawing::Size(238, 22);
			this->boxAdresse->TabIndex = 12;
			// 
			// boxSuperieur
			// 
			this->boxSuperieur->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxSuperieur->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxSuperieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxSuperieur->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxSuperieur->Location = System::Drawing::Point(186, 280);
			this->boxSuperieur->Name = L"boxSuperieur";
			this->boxSuperieur->Size = System::Drawing::Size(238, 22);
			this->boxSuperieur->TabIndex = 13;
			// 
			// boxStatut
			// 
			this->boxStatut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxStatut->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxStatut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxStatut->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxStatut->Location = System::Drawing::Point(186, 150);
			this->boxStatut->Name = L"boxStatut";
			this->boxStatut->Size = System::Drawing::Size(238, 22);
			this->boxStatut->TabIndex = 14;
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
			this->boxPrenom->Location = System::Drawing::Point(186, 107);
			this->boxPrenom->Name = L"boxPrenom";
			this->boxPrenom->Size = System::Drawing::Size(238, 22);
			this->boxPrenom->TabIndex = 15;
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
			this->boxNom->Location = System::Drawing::Point(186, 64);
			this->boxNom->Name = L"boxNom";
			this->boxNom->Size = System::Drawing::Size(238, 22);
			this->boxNom->TabIndex = 16;
			// 
			// boxID
			// 
			this->boxID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxID->Location = System::Drawing::Point(186, 23);
			this->boxID->Name = L"boxID";
			this->boxID->Size = System::Drawing::Size(238, 22);
			this->boxID->TabIndex = 17;
			this->boxID->TextChanged += gcnew System::EventHandler(this, &GestionPersonnel::boxID_TextChanged);
			// 
			// dateEmbauche
			// 
			this->dateEmbauche->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->dateEmbauche->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->dateEmbauche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateEmbauche->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->dateEmbauche->Location = System::Drawing::Point(186, 195);
			this->dateEmbauche->Name = L"dateEmbauche";
			this->dateEmbauche->Size = System::Drawing::Size(238, 22);
			this->dateEmbauche->TabIndex = 18;
			// 
			// LoadPers
			// 
			this->LoadPers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->LoadPers->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->LoadPers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoadPers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoadPers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->LoadPers->Location = System::Drawing::Point(0, 531);
			this->LoadPers->Name = L"LoadPers";
			this->LoadPers->Size = System::Drawing::Size(430, 54);
			this->LoadPers->TabIndex = 19;
			this->LoadPers->Text = L"Load";
			this->LoadPers->UseVisualStyleBackColor = false;
			this->LoadPers->Click += gcnew System::EventHandler(this, &GestionPersonnel::LoadPers_Click);
			// 
			// DelPers
			// 
			this->DelPers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->DelPers->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->DelPers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DelPers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DelPers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->DelPers->Location = System::Drawing::Point(0, 477);
			this->DelPers->Name = L"DelPers";
			this->DelPers->Size = System::Drawing::Size(430, 54);
			this->DelPers->TabIndex = 20;
			this->DelPers->Text = L"Delete";
			this->DelPers->UseVisualStyleBackColor = false;
			this->DelPers->Click += gcnew System::EventHandler(this, &GestionPersonnel::DelPers_Click);
			// 
			// UpdPers
			// 
			this->UpdPers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->UpdPers->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->UpdPers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdPers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdPers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->UpdPers->Location = System::Drawing::Point(0, 423);
			this->UpdPers->Name = L"UpdPers";
			this->UpdPers->Size = System::Drawing::Size(430, 54);
			this->UpdPers->TabIndex = 21;
			this->UpdPers->Text = L"Update";
			this->UpdPers->UseVisualStyleBackColor = false;
			this->UpdPers->Click += gcnew System::EventHandler(this, &GestionPersonnel::UpdPers_Click);
			// 
			// InsPers
			// 
			this->InsPers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->InsPers->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->InsPers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->InsPers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InsPers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->InsPers->Location = System::Drawing::Point(0, 369);
			this->InsPers->Name = L"InsPers";
			this->InsPers->Size = System::Drawing::Size(430, 54);
			this->InsPers->TabIndex = 22;
			this->InsPers->Text = L"Insert";
			this->InsPers->UseVisualStyleBackColor = false;
			this->InsPers->Click += gcnew System::EventHandler(this, &GestionPersonnel::InsPers_Click);
			// 
			// GestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->ClientSize = System::Drawing::Size(923, 585);
			this->Controls->Add(this->InsPers);
			this->Controls->Add(this->UpdPers);
			this->Controls->Add(this->DelPers);
			this->Controls->Add(this->LoadPers);
			this->Controls->Add(this->dateEmbauche);
			this->Controls->Add(this->boxID);
			this->Controls->Add(this->boxNom);
			this->Controls->Add(this->boxPrenom);
			this->Controls->Add(this->boxStatut);
			this->Controls->Add(this->boxSuperieur);
			this->Controls->Add(this->boxAdresse);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TablePersonnel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"GestionPersonnel";
			this->Text = L"GestionPersonnel";
			this->Load += gcnew System::EventHandler(this, &GestionPersonnel::GestionPersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TablePersonnel))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
		this->servPers = gcnew NS_Serv::ServicePersonnel();
	}
private: System::Void LoadPers_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TablePersonnel->Refresh();
	this->dataPers = this->servPers->selectAllPers("Personnel");
	this->TablePersonnel->DataSource = this->dataPers;
	this->TablePersonnel->DataMember = "Personnel";
	this->boxID->Text = "1";
}
private: System::Void InsPers_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->boxAdresse->Text->Equals("")) { //Vérifie si les 2 ID adresses sont rentrés.
		gestAdress = gcnew GestionAdress();// Ouvre la fenêtre de gestion des Adresses.
		gestAdress->Show();
	}
	else {
		this->servPers->addPers(this->boxNom->Text, this->boxPrenom->Text, this->boxStatut->Text, this->dateEmbauche->Text, int::Parse(this->boxAdresse->Text), int::Parse(this->boxSuperieur->Text));
	}
}
private: System::Void UpdPers_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->boxAdresse->Text->Equals("")) { //Vérifie si les 2 ID adresses sont rentrés.
		gestAdress = gcnew GestionAdress();// Ouvre la fenêtre de gestion des Adresses.
		gestAdress->Show();
	}
	else {
		this->servPers->updatePers(int::Parse(this->boxID->Text), this->boxNom->Text, this->boxPrenom->Text, this->boxStatut->Text, this->dateEmbauche->Text, int::Parse(this->boxAdresse->Text), int::Parse(this->boxSuperieur->Text));
	}
}
private: System::Void DelPers_Click(System::Object^ sender, System::EventArgs^ e) {
	this->servPers->updPersForID(int::Parse(this->boxSuperieur->Text));
	this->servPers->delPers(int::Parse(this->boxID->Text));
}
private: System::Void boxID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!this->boxID->Text->Equals("")) {
		this->dataUnePers = this->servPers->selectUnPersonnel("Personnel", int::Parse(this->boxID->Text));
		System::Data::DataTableReader^ reader1;
		reader1 = this->dataUnePers->CreateDataReader();
		reader1->Read();
		this->boxNom->Text = reader1->GetValue(1)->ToString();
		this->boxPrenom->Text = reader1->GetValue(2)->ToString();
		this->boxStatut->Text = reader1->GetValue(3)->ToString();
		this->dateEmbauche->Text = reader1->GetValue(4)->ToString();
		this->boxSuperieur->Text = reader1->GetValue(5)->ToString();
		this->boxAdresse->Text = reader1->GetValue(6)->ToString();
	}
	this->TablePersonnel->Refresh();
	this->dataPers = this->servPers->selectAllPers("Personnel");
	this->TablePersonnel->DataSource = this->dataPers;
	this->TablePersonnel->DataMember = "Personnel";
}
};
}
