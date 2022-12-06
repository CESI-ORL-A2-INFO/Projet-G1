#pragma once
#include "ServiceAdresse.h"
#include "ServiceClient.h"
#include "ServicePersonnel.h"
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionAdress
	/// </summary>
	public ref class GestionAdress : public System::Windows::Forms::Form
	{
	public:
		GestionAdress(void)
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
		~GestionAdress()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ TableAdress;
	protected:

	private: System::Windows::Forms::Button^ InsAdress;
	private: System::Windows::Forms::Button^ LoadAdress;
	private: System::Windows::Forms::Button^ DelAdress;
	private: System::Windows::Forms::Button^ UpdAdress;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ boxIDAdress;
	private: System::Windows::Forms::TextBox^ boxNumRue;
	private: System::Windows::Forms::TextBox^ boxNomRue;
	private: System::Windows::Forms::TextBox^ boxTypeRue;
	private: System::Windows::Forms::TextBox^ boxVille;
	private: System::Windows::Forms::TextBox^ boxCP;







	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		NS_Serv::ServiceAdresse^ servAdress;
		NS_Serv::ServiceClient^ servClient;
		NS_Serv::ServicePersonnel^ servPers;
		System::Data::DataSet^ dataAdress;
		System::Data::DataSet^ dataClient;
		System::Data::DataSet^ dataUneAdress;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionAdress::typeid));
			this->TableAdress = (gcnew System::Windows::Forms::DataGridView());
			this->InsAdress = (gcnew System::Windows::Forms::Button());
			this->LoadAdress = (gcnew System::Windows::Forms::Button());
			this->DelAdress = (gcnew System::Windows::Forms::Button());
			this->UpdAdress = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->boxIDAdress = (gcnew System::Windows::Forms::TextBox());
			this->boxNumRue = (gcnew System::Windows::Forms::TextBox());
			this->boxNomRue = (gcnew System::Windows::Forms::TextBox());
			this->boxTypeRue = (gcnew System::Windows::Forms::TextBox());
			this->boxVille = (gcnew System::Windows::Forms::TextBox());
			this->boxCP = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableAdress))->BeginInit();
			this->SuspendLayout();
			// 
			// TableAdress
			// 
			this->TableAdress->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->TableAdress->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
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
			this->TableAdress->DefaultCellStyle = dataGridViewCellStyle1;
			this->TableAdress->Dock = System::Windows::Forms::DockStyle::Right;
			this->TableAdress->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->TableAdress->Location = System::Drawing::Point(430, 0);
			this->TableAdress->Name = L"TableAdress";
			this->TableAdress->RowHeadersWidth = 51;
			this->TableAdress->RowTemplate->Height = 24;
			this->TableAdress->Size = System::Drawing::Size(951, 585);
			this->TableAdress->TabIndex = 2;
			// 
			// InsAdress
			// 
			this->InsAdress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->InsAdress->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->InsAdress->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->InsAdress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InsAdress->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->InsAdress->Location = System::Drawing::Point(0, 369);
			this->InsAdress->Name = L"InsAdress";
			this->InsAdress->Size = System::Drawing::Size(430, 54);
			this->InsAdress->TabIndex = 32;
			this->InsAdress->Text = L"Insert";
			this->InsAdress->UseVisualStyleBackColor = false;
			this->InsAdress->Click += gcnew System::EventHandler(this, &GestionAdress::InsAdress_Click);
			// 
			// LoadAdress
			// 
			this->LoadAdress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->LoadAdress->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->LoadAdress->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoadAdress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoadAdress->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->LoadAdress->Location = System::Drawing::Point(0, 531);
			this->LoadAdress->Name = L"LoadAdress";
			this->LoadAdress->Size = System::Drawing::Size(430, 54);
			this->LoadAdress->TabIndex = 4;
			this->LoadAdress->Text = L"Load";
			this->LoadAdress->UseVisualStyleBackColor = false;
			this->LoadAdress->Click += gcnew System::EventHandler(this, &GestionAdress::LoadAdress_Click);
			// 
			// DelAdress
			// 
			this->DelAdress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->DelAdress->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->DelAdress->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DelAdress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DelAdress->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->DelAdress->Location = System::Drawing::Point(0, 477);
			this->DelAdress->Name = L"DelAdress";
			this->DelAdress->Size = System::Drawing::Size(430, 54);
			this->DelAdress->TabIndex = 5;
			this->DelAdress->Text = L"Delete";
			this->DelAdress->UseVisualStyleBackColor = false;
			this->DelAdress->Click += gcnew System::EventHandler(this, &GestionAdress::DelAdress_Click);
			// 
			// UpdAdress
			// 
			this->UpdAdress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->UpdAdress->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->UpdAdress->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdAdress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdAdress->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->UpdAdress->Location = System::Drawing::Point(0, 423);
			this->UpdAdress->Name = L"UpdAdress";
			this->UpdAdress->Size = System::Drawing::Size(430, 54);
			this->UpdAdress->TabIndex = 31;
			this->UpdAdress->Text = L"Update";
			this->UpdAdress->UseVisualStyleBackColor = false;
			this->UpdAdress->Click += gcnew System::EventHandler(this, &GestionAdress::UpdAdress_Click);
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
			this->label1->Size = System::Drawing::Size(36, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"ID :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label2->Location = System::Drawing::Point(12, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Numéro de rue :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label3->Location = System::Drawing::Point(12, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Nom de rue :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label4->Location = System::Drawing::Point(12, 152);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Type de rue";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label5->Location = System::Drawing::Point(12, 206);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Ville :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label6->Location = System::Drawing::Point(12, 256);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"CP :";
			// 
			// boxIDAdress
			// 
			this->boxIDAdress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxIDAdress->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxIDAdress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxIDAdress->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxIDAdress->Location = System::Drawing::Point(159, 10);
			this->boxIDAdress->Name = L"boxIDAdress";
			this->boxIDAdress->Size = System::Drawing::Size(265, 22);
			this->boxIDAdress->TabIndex = 19;
			this->boxIDAdress->TextChanged += gcnew System::EventHandler(this, &GestionAdress::boxIDAdress_TextChanged);
			// 
			// boxNumRue
			// 
			this->boxNumRue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxNumRue->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxNumRue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxNumRue->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxNumRue->Location = System::Drawing::Point(159, 54);
			this->boxNumRue->Name = L"boxNumRue";
			this->boxNumRue->Size = System::Drawing::Size(265, 22);
			this->boxNumRue->TabIndex = 20;
			// 
			// boxNomRue
			// 
			this->boxNomRue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxNomRue->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxNomRue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxNomRue->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxNomRue->Location = System::Drawing::Point(159, 102);
			this->boxNomRue->Name = L"boxNomRue";
			this->boxNomRue->Size = System::Drawing::Size(265, 22);
			this->boxNomRue->TabIndex = 21;
			// 
			// boxTypeRue
			// 
			this->boxTypeRue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxTypeRue->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxTypeRue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxTypeRue->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxTypeRue->Location = System::Drawing::Point(159, 153);
			this->boxTypeRue->Name = L"boxTypeRue";
			this->boxTypeRue->Size = System::Drawing::Size(265, 22);
			this->boxTypeRue->TabIndex = 22;
			// 
			// boxVille
			// 
			this->boxVille->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxVille->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxVille->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxVille->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxVille->Location = System::Drawing::Point(159, 207);
			this->boxVille->Name = L"boxVille";
			this->boxVille->Size = System::Drawing::Size(265, 22);
			this->boxVille->TabIndex = 23;
			// 
			// boxCP
			// 
			this->boxCP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxCP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxCP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxCP->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxCP->Location = System::Drawing::Point(159, 257);
			this->boxCP->Name = L"boxCP";
			this->boxCP->Size = System::Drawing::Size(265, 22);
			this->boxCP->TabIndex = 24;
			// 
			// GestionAdress
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->ClientSize = System::Drawing::Size(1381, 585);
			this->Controls->Add(this->InsAdress);
			this->Controls->Add(this->UpdAdress);
			this->Controls->Add(this->boxCP);
			this->Controls->Add(this->boxVille);
			this->Controls->Add(this->boxTypeRue);
			this->Controls->Add(this->boxNomRue);
			this->Controls->Add(this->boxNumRue);
			this->Controls->Add(this->boxIDAdress);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->DelAdress);
			this->Controls->Add(this->LoadAdress);
			this->Controls->Add(this->TableAdress);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"GestionAdress";
			this->Text = L"GestionAdress";
			this->Load += gcnew System::EventHandler(this, &GestionAdress::GestionAdress_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableAdress))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GestionAdress_Load(System::Object^ sender, System::EventArgs^ e) {
		this->servAdress = gcnew NS_Serv::ServiceAdresse();
		this->servClient = gcnew NS_Serv::ServiceClient();
		this->servPers = gcnew NS_Serv::ServicePersonnel();
	}
private: System::Void LoadAdress_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TableAdress->Refresh();
	this->dataAdress = this->servAdress->selectAllAdress("Rsl");
	this->TableAdress->DataSource = this->dataAdress;
	this->TableAdress->DataMember = "Rsl";
	this->boxIDAdress->Text = "1";
}
private: System::Void DelAdress_Click(System::Object^ sender, System::EventArgs^ e) {
	this->servClient->updClientForAdress(int::Parse(this->boxIDAdress->Text));
	this->servPers->updPersForAdress(int::Parse(this->boxIDAdress->Text));
	this->servAdress->delAdress(int::Parse(this->boxIDAdress->Text));
}
private: System::Void UpdAdress_Click(System::Object^ sender, System::EventArgs^ e) {
	this->servAdress->updAdress(int::Parse(this->boxIDAdress->Text),int::Parse(this->boxNumRue->Text), int::Parse(this->boxCP->Text), this->boxNomRue->Text, this->boxVille->Text, this->boxTypeRue->Text);
}
private: System::Void InsAdress_Click(System::Object^ sender, System::EventArgs^ e) {
	this->servAdress->addAdress(int::Parse(this->boxNumRue->Text), int::Parse(this->boxCP->Text), this->boxNomRue->Text, this->boxVille->Text, this->boxTypeRue->Text);
}
private: System::Void boxIDAdress_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!this->boxIDAdress->Text->Equals("")) {
		this->dataUneAdress = this->servAdress->selectAdressWithID("Rsl", int::Parse(this->boxIDAdress->Text));
		System::Data::DataTableReader^ reader1;
		reader1 = this->dataUneAdress->CreateDataReader();
		reader1->Read();
		this->boxNumRue->Text = reader1->GetValue(1)->ToString();
		this->boxNomRue->Text = reader1->GetValue(2)->ToString();
		this->boxCP->Text = reader1->GetValue(3)->ToString();
		this->boxVille->Text = reader1->GetValue(4)->ToString();
		this->boxTypeRue->Text = reader1->GetValue(5)->ToString();
	}
	this->TableAdress->Refresh();
	this->dataAdress = this->servAdress->selectAllAdress("Rsl");
	this->TableAdress->DataSource = this->dataAdress;
	this->TableAdress->DataMember = "Rsl";
}
};
}
