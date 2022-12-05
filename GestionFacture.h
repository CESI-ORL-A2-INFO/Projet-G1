#pragma once
#include "ServiceFacture.h"
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionFacture
	/// </summary>
	public ref class GestionFacture : public System::Windows::Forms::Form
	{
	public:
		GestionFacture(void)
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
		~GestionFacture()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ TableFacture;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ boxIDFact;
	private: System::Windows::Forms::TextBox^ boxDernierPaiement;
	private: System::Windows::Forms::TextBox^ boxReference;
	private: System::Windows::Forms::ComboBox^ menuMoyPaiement;
	private: System::Windows::Forms::Button^ LoadFact;
	private: System::Windows::Forms::Button^ DelFact;
	private: System::Windows::Forms::Button^ UpdFact;
	private: System::Windows::Forms::Button^ InsFact;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		NS_Serv::ServiceFacture^ servFact;
		System::Data::DataSet^ dataFact;
		System::Data::DataSet^ dataUneFact;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->TableFacture = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->boxIDFact = (gcnew System::Windows::Forms::TextBox());
			this->boxDernierPaiement = (gcnew System::Windows::Forms::TextBox());
			this->boxReference = (gcnew System::Windows::Forms::TextBox());
			this->menuMoyPaiement = (gcnew System::Windows::Forms::ComboBox());
			this->LoadFact = (gcnew System::Windows::Forms::Button());
			this->DelFact = (gcnew System::Windows::Forms::Button());
			this->UpdFact = (gcnew System::Windows::Forms::Button());
			this->InsFact = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableFacture))->BeginInit();
			this->SuspendLayout();
			// 
			// TableFacture
			// 
			this->TableFacture->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
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
			this->TableFacture->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->TableFacture->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
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
			this->TableFacture->DefaultCellStyle = dataGridViewCellStyle2;
			this->TableFacture->Dock = System::Windows::Forms::DockStyle::Right;
			this->TableFacture->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->TableFacture->Location = System::Drawing::Point(430, 0);
			this->TableFacture->Name = L"TableFacture";
			this->TableFacture->RowHeadersWidth = 51;
			this->TableFacture->RowTemplate->Height = 24;
			this->TableFacture->Size = System::Drawing::Size(493, 585);
			this->TableFacture->TabIndex = 1;
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
			this->label1->TabIndex = 5;
			this->label1->Text = L"ID :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label2->Location = System::Drawing::Point(-29, -32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"ID :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label3->Location = System::Drawing::Point(12, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Dernier Paiement :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label4->Location = System::Drawing::Point(12, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Référence :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->label5->Location = System::Drawing::Point(12, 161);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(166, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Moyen de Paiement :";
			// 
			// boxIDFact
			// 
			this->boxIDFact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxIDFact->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxIDFact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxIDFact->Location = System::Drawing::Point(195, 9);
			this->boxIDFact->Name = L"boxIDFact";
			this->boxIDFact->Size = System::Drawing::Size(229, 22);
			this->boxIDFact->TabIndex = 9;
			this->boxIDFact->TextChanged += gcnew System::EventHandler(this, &GestionFacture::boxIDFact_TextChanged);
			// 
			// boxDernierPaiement
			// 
			this->boxDernierPaiement->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxDernierPaiement->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxDernierPaiement->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxDernierPaiement->Location = System::Drawing::Point(195, 53);
			this->boxDernierPaiement->Name = L"boxDernierPaiement";
			this->boxDernierPaiement->Size = System::Drawing::Size(229, 22);
			this->boxDernierPaiement->TabIndex = 10;
			// 
			// boxReference
			// 
			this->boxReference->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxReference->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boxReference->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxReference->Location = System::Drawing::Point(195, 105);
			this->boxReference->Name = L"boxReference";
			this->boxReference->Size = System::Drawing::Size(229, 22);
			this->boxReference->TabIndex = 11;
			// 
			// menuMoyPaiement
			// 
			this->menuMoyPaiement->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->menuMoyPaiement->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->menuMoyPaiement->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->menuMoyPaiement->FormattingEnabled = true;
			this->menuMoyPaiement->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"CASH", L"CARTE BANCAIRE", L"VIREMENT",
					L"CHEQUE", L"PAYPAL"
			});
			this->menuMoyPaiement->Location = System::Drawing::Point(195, 161);
			this->menuMoyPaiement->Name = L"menuMoyPaiement";
			this->menuMoyPaiement->Size = System::Drawing::Size(229, 24);
			this->menuMoyPaiement->TabIndex = 12;
			// 
			// LoadFact
			// 
			this->LoadFact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->LoadFact->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->LoadFact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoadFact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoadFact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->LoadFact->Location = System::Drawing::Point(0, 531);
			this->LoadFact->Name = L"LoadFact";
			this->LoadFact->Size = System::Drawing::Size(430, 54);
			this->LoadFact->TabIndex = 13;
			this->LoadFact->Text = L"Load";
			this->LoadFact->UseVisualStyleBackColor = false;
			this->LoadFact->Click += gcnew System::EventHandler(this, &GestionFacture::LoadFact_Click);
			// 
			// DelFact
			// 
			this->DelFact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->DelFact->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->DelFact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DelFact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DelFact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->DelFact->Location = System::Drawing::Point(0, 477);
			this->DelFact->Name = L"DelFact";
			this->DelFact->Size = System::Drawing::Size(430, 54);
			this->DelFact->TabIndex = 14;
			this->DelFact->Text = L"Delete";
			this->DelFact->UseVisualStyleBackColor = false;
			this->DelFact->Click += gcnew System::EventHandler(this, &GestionFacture::DelFact_Click);
			// 
			// UpdFact
			// 
			this->UpdFact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->UpdFact->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->UpdFact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdFact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdFact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->UpdFact->Location = System::Drawing::Point(0, 423);
			this->UpdFact->Name = L"UpdFact";
			this->UpdFact->Size = System::Drawing::Size(430, 54);
			this->UpdFact->TabIndex = 15;
			this->UpdFact->Text = L"Update";
			this->UpdFact->UseVisualStyleBackColor = false;
			this->UpdFact->Click += gcnew System::EventHandler(this, &GestionFacture::UpdFact_Click);
			// 
			// InsFact
			// 
			this->InsFact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->InsFact->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->InsFact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->InsFact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InsFact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->InsFact->Location = System::Drawing::Point(0, 369);
			this->InsFact->Name = L"InsFact";
			this->InsFact->Size = System::Drawing::Size(430, 54);
			this->InsFact->TabIndex = 16;
			this->InsFact->Text = L"Insert";
			this->InsFact->UseVisualStyleBackColor = false;
			this->InsFact->Click += gcnew System::EventHandler(this, &GestionFacture::InsFact_Click);
			// 
			// GestionFacture
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->ClientSize = System::Drawing::Size(923, 585);
			this->Controls->Add(this->InsFact);
			this->Controls->Add(this->UpdFact);
			this->Controls->Add(this->DelFact);
			this->Controls->Add(this->LoadFact);
			this->Controls->Add(this->menuMoyPaiement);
			this->Controls->Add(this->boxReference);
			this->Controls->Add(this->boxDernierPaiement);
			this->Controls->Add(this->boxIDFact);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TableFacture);
			this->Name = L"GestionFacture";
			this->Text = L"GestionFacture";
			this->Load += gcnew System::EventHandler(this, &GestionFacture::GestionFacture_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableFacture))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GestionFacture_Load(System::Object^ sender, System::EventArgs^ e) {
		servFact = gcnew NS_Serv::ServiceFacture();
	}
private: System::Void DelFact_Click(System::Object^ sender, System::EventArgs^ e) {
	servFact->delFact(int::Parse(this->boxIDFact->Text));
}
private: System::Void UpdFact_Click(System::Object^ sender, System::EventArgs^ e) {
	servFact->updFact(int::Parse(this->boxIDFact->Text), this->boxReference->Text, this->boxDernierPaiement->Text, (int)(this->menuMoyPaiement->SelectedIndex + 1));
}
private: System::Void InsFact_Click(System::Object^ sender, System::EventArgs^ e) {
	servFact->addFact(this->boxReference->Text, this->boxDernierPaiement->Text, (int)(this->menuMoyPaiement->SelectedIndex + 1));
}
private: System::Void LoadFact_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TableFacture->Refresh();
	this->dataFact = this->servFact->selectAllFacture("Facture");
	this->TableFacture->DataSource = this->dataFact;
	this->TableFacture->DataMember = "Facture";
	this->boxIDFact->Text = "5";
}
private: System::Void boxIDFact_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!this->boxIDFact->Text->Equals("")) {
		this->dataUneFact = this->servFact->selectUneFacture("Facture", int::Parse(this->boxIDFact->Text));
		System::Data::DataTableReader^ reader1;
		reader1 = this->dataUneFact->CreateDataReader();
		reader1->Read();
		this->boxDernierPaiement->Text = reader1->GetValue(1)->ToString();
		this->boxReference->Text = reader1->GetValue(2)->ToString();
		this->menuMoyPaiement->Text = reader1->GetValue(3)->ToString();
	}
	this->TableFacture->Refresh();
	this->dataFact = this->servFact->selectAllFacture("Facture");
	this->TableFacture->DataSource = this->dataFact;
	this->TableFacture->DataMember = "Facture";
}
};
}
