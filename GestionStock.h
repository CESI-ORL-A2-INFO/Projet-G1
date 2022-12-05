#pragma once
#include "ServiceStock.h"
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionStock
	/// </summary>
	public ref class GestionStock : public System::Windows::Forms::Form
	{
	public:
		GestionStock(void)
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
		~GestionStock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ TableStock;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ boxIDArticle;
	private: System::Windows::Forms::TextBox^ boxSeuilReapr;
	private: System::Windows::Forms::TextBox^ boxHT;
	private: System::Windows::Forms::TextBox^ boxNature;
	private: System::Windows::Forms::TextBox^ boxCouleur;
	private: System::Windows::Forms::TextBox^ boxDesignation;
	private: System::Windows::Forms::TextBox^ boxQte;

	private: System::Windows::Forms::Button^ LoadStock;
	private: System::Windows::Forms::Button^ DelStock;
	private: System::Windows::Forms::Button^ UpdStock;
	private: System::Windows::Forms::Button^ InsStock;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ menuTVA;



	protected:




	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		NS_Serv::ServiceStock^ servStock;

		System::Data::DataSet^ dataStock;
		System::Data::DataSet^ dataUnStock;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->TableStock = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->boxIDArticle = (gcnew System::Windows::Forms::TextBox());
			this->boxSeuilReapr = (gcnew System::Windows::Forms::TextBox());
			this->boxHT = (gcnew System::Windows::Forms::TextBox());
			this->boxNature = (gcnew System::Windows::Forms::TextBox());
			this->boxCouleur = (gcnew System::Windows::Forms::TextBox());
			this->boxDesignation = (gcnew System::Windows::Forms::TextBox());
			this->boxQte = (gcnew System::Windows::Forms::TextBox());
			this->LoadStock = (gcnew System::Windows::Forms::Button());
			this->DelStock = (gcnew System::Windows::Forms::Button());
			this->UpdStock = (gcnew System::Windows::Forms::Button());
			this->InsStock = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->menuTVA = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableStock))->BeginInit();
			this->SuspendLayout();
			// 
			// TableStock
			// 
			this->TableStock->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->TableStock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
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
			this->TableStock->DefaultCellStyle = dataGridViewCellStyle1;
			this->TableStock->Dock = System::Windows::Forms::DockStyle::Right;
			this->TableStock->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->TableStock->Location = System::Drawing::Point(430, 0);
			this->TableStock->Name = L"TableStock";
			this->TableStock->RowHeadersWidth = 51;
			this->TableStock->RowTemplate->Height = 24;
			this->TableStock->Size = System::Drawing::Size(493, 585);
			this->TableStock->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 20);
			this->label1->TabIndex = 13;
			this->label1->Text = L"ID Article :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label2->Location = System::Drawing::Point(12, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(222, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Seuil Réapprivosionnement :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label3->Location = System::Drawing::Point(12, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 20);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Prix HT :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label4->Location = System::Drawing::Point(12, 157);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 20);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Nature :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label5->Location = System::Drawing::Point(12, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 20);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Couleur :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label6->Location = System::Drawing::Point(12, 249);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 20);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Désignation :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label7->Location = System::Drawing::Point(12, 290);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 20);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Quantite";
			this->label7->Click += gcnew System::EventHandler(this, &GestionStock::label7_Click);
			// 
			// boxIDArticle
			// 
			this->boxIDArticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxIDArticle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxIDArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxIDArticle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxIDArticle->Location = System::Drawing::Point(186, 20);
			this->boxIDArticle->Name = L"boxIDArticle";
			this->boxIDArticle->Size = System::Drawing::Size(238, 22);
			this->boxIDArticle->TabIndex = 20;
			this->boxIDArticle->TextChanged += gcnew System::EventHandler(this, &GestionStock::boxIDArticle_TextChanged);
			// 
			// boxSeuilReapr
			// 
			this->boxSeuilReapr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxSeuilReapr->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxSeuilReapr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxSeuilReapr->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxSeuilReapr->Location = System::Drawing::Point(261, 63);
			this->boxSeuilReapr->Name = L"boxSeuilReapr";
			this->boxSeuilReapr->Size = System::Drawing::Size(163, 22);
			this->boxSeuilReapr->TabIndex = 21;
			// 
			// boxHT
			// 
			this->boxHT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxHT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxHT->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxHT->Location = System::Drawing::Point(186, 111);
			this->boxHT->Name = L"boxHT";
			this->boxHT->Size = System::Drawing::Size(238, 22);
			this->boxHT->TabIndex = 22;
			// 
			// boxNature
			// 
			this->boxNature->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxNature->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxNature->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxNature->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxNature->Location = System::Drawing::Point(186, 158);
			this->boxNature->Name = L"boxNature";
			this->boxNature->Size = System::Drawing::Size(238, 22);
			this->boxNature->TabIndex = 23;
			// 
			// boxCouleur
			// 
			this->boxCouleur->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxCouleur->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxCouleur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxCouleur->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxCouleur->Location = System::Drawing::Point(186, 201);
			this->boxCouleur->Name = L"boxCouleur";
			this->boxCouleur->Size = System::Drawing::Size(238, 22);
			this->boxCouleur->TabIndex = 24;
			// 
			// boxDesignation
			// 
			this->boxDesignation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxDesignation->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxDesignation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxDesignation->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxDesignation->Location = System::Drawing::Point(186, 250);
			this->boxDesignation->Name = L"boxDesignation";
			this->boxDesignation->Size = System::Drawing::Size(238, 22);
			this->boxDesignation->TabIndex = 25;
			// 
			// boxQte
			// 
			this->boxQte->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxQte->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxQte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxQte->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxQte->Location = System::Drawing::Point(186, 291);
			this->boxQte->Name = L"boxQte";
			this->boxQte->Size = System::Drawing::Size(238, 22);
			this->boxQte->TabIndex = 26;
			// 
			// LoadStock
			// 
			this->LoadStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->LoadStock->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->LoadStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoadStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoadStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->LoadStock->Location = System::Drawing::Point(0, 531);
			this->LoadStock->Name = L"LoadStock";
			this->LoadStock->Size = System::Drawing::Size(430, 54);
			this->LoadStock->TabIndex = 27;
			this->LoadStock->Text = L"Load";
			this->LoadStock->UseVisualStyleBackColor = false;
			this->LoadStock->Click += gcnew System::EventHandler(this, &GestionStock::LoadStock_Click);
			// 
			// DelStock
			// 
			this->DelStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->DelStock->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->DelStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DelStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DelStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->DelStock->Location = System::Drawing::Point(0, 477);
			this->DelStock->Name = L"DelStock";
			this->DelStock->Size = System::Drawing::Size(430, 54);
			this->DelStock->TabIndex = 28;
			this->DelStock->Text = L"Delete";
			this->DelStock->UseVisualStyleBackColor = false;
			this->DelStock->Click += gcnew System::EventHandler(this, &GestionStock::DelStock_Click);
			// 
			// UpdStock
			// 
			this->UpdStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->UpdStock->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->UpdStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->UpdStock->Location = System::Drawing::Point(0, 423);
			this->UpdStock->Name = L"UpdStock";
			this->UpdStock->Size = System::Drawing::Size(430, 54);
			this->UpdStock->TabIndex = 29;
			this->UpdStock->Text = L"Update";
			this->UpdStock->UseVisualStyleBackColor = false;
			this->UpdStock->Click += gcnew System::EventHandler(this, &GestionStock::UpdStock_Click);
			// 
			// InsStock
			// 
			this->InsStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->InsStock->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->InsStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->InsStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InsStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->InsStock->Location = System::Drawing::Point(0, 369);
			this->InsStock->Name = L"InsStock";
			this->InsStock->Size = System::Drawing::Size(430, 54);
			this->InsStock->TabIndex = 30;
			this->InsStock->Text = L"Insert";
			this->InsStock->UseVisualStyleBackColor = false;
			this->InsStock->Click += gcnew System::EventHandler(this, &GestionStock::InsStock_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label8->Location = System::Drawing::Point(12, 329);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 20);
			this->label8->TabIndex = 31;
			this->label8->Text = L"TVA :";
			// 
			// menuTVA
			// 
			this->menuTVA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->menuTVA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->menuTVA->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->menuTVA->FormattingEnabled = true;
			this->menuTVA->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"5%", L"10%", L"15%", L"6%", L"2%", L"3%" });
			this->menuTVA->Location = System::Drawing::Point(186, 329);
			this->menuTVA->Name = L"menuTVA";
			this->menuTVA->Size = System::Drawing::Size(238, 24);
			this->menuTVA->TabIndex = 32;
			// 
			// GestionStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->ClientSize = System::Drawing::Size(923, 585);
			this->Controls->Add(this->menuTVA);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->InsStock);
			this->Controls->Add(this->UpdStock);
			this->Controls->Add(this->DelStock);
			this->Controls->Add(this->LoadStock);
			this->Controls->Add(this->boxQte);
			this->Controls->Add(this->boxDesignation);
			this->Controls->Add(this->boxCouleur);
			this->Controls->Add(this->boxNature);
			this->Controls->Add(this->boxHT);
			this->Controls->Add(this->boxSeuilReapr);
			this->Controls->Add(this->boxIDArticle);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TableStock);
			this->Name = L"GestionStock";
			this->Text = L"GestionStock";
			this->Load += gcnew System::EventHandler(this, &GestionStock::GestionStock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableStock))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GestionStock_Load(System::Object^ sender, System::EventArgs^ e) {
		this->servStock = gcnew NS_Serv::ServiceStock();
	}
	private: System::Void LoadStock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TableStock->Refresh();
		this->dataStock = this->servStock->selectAllStock("Article");
		this->TableStock->DataSource = this->dataStock;
		this->TableStock->DataMember = "Article";
		this->boxIDArticle->Text = "2";
	}
private: System::Void boxIDArticle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!this->boxIDArticle->Text->Equals("")) {
		this->dataUnStock = this->servStock->selectStockWhitId("Article", int::Parse(this->boxIDArticle->Text));
		System::Data::DataTableReader^ readerSt;
		readerSt = this->dataUnStock->CreateDataReader();
		readerSt->Read();
		this->boxSeuilReapr->Text = readerSt->GetValue(1)->ToString();
		this->boxHT->Text = readerSt->GetValue(2)->ToString();
		this->boxNature->Text = readerSt->GetValue(3)->ToString();
		this->boxCouleur->Text = readerSt->GetValue(4)->ToString();
		this->boxDesignation->Text = readerSt->GetValue(5)->ToString();
		this->boxQte->Text = readerSt->GetValue(6)->ToString();
		this->menuTVA->Text = readerSt->GetValue(7)->ToString() + "%";
	}
	this->TableStock->Refresh();
	this->dataStock = this->servStock->selectAllStock("Article");
	this->TableStock->DataSource = this->dataStock;
	this->TableStock->DataMember = "Article";
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void DelStock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->servStock->delCont(int::Parse(this->boxIDArticle->Text));
	this->servStock->delStock(int::Parse(this->boxIDArticle->Text));
}
private: System::Void UpdStock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->servStock->updateStock(int::Parse(this->boxIDArticle->Text), this->boxDesignation->Text, this->boxNature->Text, this->boxCouleur->Text, int::Parse(this->boxSeuilReapr->Text), int::Parse(this->boxQte->Text), (int)(this->menuTVA->SelectedIndex+1), this->boxHT->Text);
}
private: System::Void InsStock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->servStock->addStock(this->boxDesignation->Text, this->boxNature->Text, this->boxCouleur->Text, int::Parse(this->boxSeuilReapr->Text), int::Parse(this->boxQte->Text), (int)(this->menuTVA->SelectedIndex + 1), this->boxHT->Text);
}
};
}
