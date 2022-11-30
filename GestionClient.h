#pragma once

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
	private: System::Windows::Forms::Button^ deleteClient;
	private: System::Windows::Forms::Button^ updateClient;
	private: System::Windows::Forms::Button^ inserClient;
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
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TableClient = (gcnew System::Windows::Forms::DataGridView());
			this->deleteClient = (gcnew System::Windows::Forms::Button());
			this->updateClient = (gcnew System::Windows::Forms::Button());
			this->inserClient = (gcnew System::Windows::Forms::Button());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableClient))->BeginInit();
			this->SuspendLayout();
			// 
			// TableClient
			// 
			this->TableClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TableClient->Dock = System::Windows::Forms::DockStyle::Right;
			this->TableClient->Location = System::Drawing::Point(430, 0);
			this->TableClient->Name = L"TableClient";
			this->TableClient->RowHeadersWidth = 51;
			this->TableClient->RowTemplate->Height = 24;
			this->TableClient->Size = System::Drawing::Size(493, 585);
			this->TableClient->TabIndex = 1;
			// 
			// deleteClient
			// 
			this->deleteClient->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->deleteClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteClient->Location = System::Drawing::Point(0, 428);
			this->deleteClient->Name = L"deleteClient";
			this->deleteClient->Size = System::Drawing::Size(430, 54);
			this->deleteClient->TabIndex = 6;
			this->deleteClient->Text = L"Del";
			this->deleteClient->UseVisualStyleBackColor = true;
			// 
			// updateClient
			// 
			this->updateClient->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->updateClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateClient->Location = System::Drawing::Point(0, 482);
			this->updateClient->Name = L"updateClient";
			this->updateClient->Size = System::Drawing::Size(430, 51);
			this->updateClient->TabIndex = 5;
			this->updateClient->Text = L"Upd";
			this->updateClient->UseVisualStyleBackColor = true;
			// 
			// inserClient
			// 
			this->inserClient->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->inserClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inserClient->Location = System::Drawing::Point(0, 533);
			this->inserClient->Name = L"inserClient";
			this->inserClient->Size = System::Drawing::Size(430, 52);
			this->inserClient->TabIndex = 4;
			this->inserClient->Text = L"Ins";
			this->inserClient->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
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
			this->label7->Location = System::Drawing::Point(12, 266);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"ID Adresse Livraison :";
			// 
			// boxNumClient
			// 
			this->boxNumClient->Location = System::Drawing::Point(186, 12);
			this->boxNumClient->Name = L"boxNumClient";
			this->boxNumClient->Size = System::Drawing::Size(238, 22);
			this->boxNumClient->TabIndex = 18;
			// 
			// boxNom
			// 
			this->boxNom->Location = System::Drawing::Point(186, 50);
			this->boxNom->Name = L"boxNom";
			this->boxNom->Size = System::Drawing::Size(238, 22);
			this->boxNom->TabIndex = 19;
			// 
			// boxPrenom
			// 
			this->boxPrenom->Location = System::Drawing::Point(186, 94);
			this->boxPrenom->Name = L"boxPrenom";
			this->boxPrenom->Size = System::Drawing::Size(238, 22);
			this->boxPrenom->TabIndex = 20;
			// 
			// boxIDAdresseFact
			// 
			this->boxIDAdresseFact->Location = System::Drawing::Point(186, 228);
			this->boxIDAdresseFact->Name = L"boxIDAdresseFact";
			this->boxIDAdresseFact->Size = System::Drawing::Size(238, 22);
			this->boxIDAdresseFact->TabIndex = 23;
			// 
			// boxIDAdresseLivraison
			// 
			this->boxIDAdresseLivraison->Location = System::Drawing::Point(186, 266);
			this->boxIDAdresseLivraison->Name = L"boxIDAdresseLivraison";
			this->boxIDAdresseLivraison->Size = System::Drawing::Size(238, 22);
			this->boxIDAdresseLivraison->TabIndex = 24;
			// 
			// dateNaissance
			// 
			this->dateNaissance->Location = System::Drawing::Point(186, 140);
			this->dateNaissance->Name = L"dateNaissance";
			this->dateNaissance->Size = System::Drawing::Size(238, 22);
			this->dateNaissance->TabIndex = 25;
			// 
			// dateFirstCommande
			// 
			this->dateFirstCommande->Location = System::Drawing::Point(236, 187);
			this->dateFirstCommande->Name = L"dateFirstCommande";
			this->dateFirstCommande->Size = System::Drawing::Size(188, 22);
			this->dateFirstCommande->TabIndex = 26;
			// 
			// loadClient
			// 
			this->loadClient->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->loadClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loadClient->Location = System::Drawing::Point(0, 374);
			this->loadClient->Name = L"loadClient";
			this->loadClient->Size = System::Drawing::Size(430, 54);
			this->loadClient->TabIndex = 30;
			this->loadClient->Text = L"Load";
			this->loadClient->UseVisualStyleBackColor = true;
			this->loadClient->Click += gcnew System::EventHandler(this, &GestionClient::loadClient_Click);
			// 
			// GestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(923, 585);
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
			this->Controls->Add(this->deleteClient);
			this->Controls->Add(this->updateClient);
			this->Controls->Add(this->inserClient);
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
		
	}
private: System::Void loadClient_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->TableClient->Refresh();
	//this-> = this->;
	//this-> = this->;
	//this->TableClient->DataSource = this->;
	//this->TableClient->DataMember = "Rsl";
}
};
}
