#pragma once

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
	private: System::Windows::Forms::Button^ inserPers;
	private: System::Windows::Forms::Button^ updatePersonnel;
	private: System::Windows::Forms::Button^ deletePersonnel;
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
	private: System::Windows::Forms::Button^ loadPersonnel;


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
			this->TablePersonnel = (gcnew System::Windows::Forms::DataGridView());
			this->inserPers = (gcnew System::Windows::Forms::Button());
			this->updatePersonnel = (gcnew System::Windows::Forms::Button());
			this->deletePersonnel = (gcnew System::Windows::Forms::Button());
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
			this->loadPersonnel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TablePersonnel))->BeginInit();
			this->SuspendLayout();
			// 
			// TablePersonnel
			// 
			this->TablePersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TablePersonnel->Dock = System::Windows::Forms::DockStyle::Right;
			this->TablePersonnel->Location = System::Drawing::Point(430, 0);
			this->TablePersonnel->Name = L"TablePersonnel";
			this->TablePersonnel->RowHeadersWidth = 51;
			this->TablePersonnel->RowTemplate->Height = 24;
			this->TablePersonnel->Size = System::Drawing::Size(493, 585);
			this->TablePersonnel->TabIndex = 0;
			// 
			// inserPers
			// 
			this->inserPers->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->inserPers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inserPers->Location = System::Drawing::Point(0, 533);
			this->inserPers->Name = L"inserPers";
			this->inserPers->Size = System::Drawing::Size(430, 52);
			this->inserPers->TabIndex = 1;
			this->inserPers->Text = L"Ins";
			this->inserPers->UseVisualStyleBackColor = true;
			// 
			// updatePersonnel
			// 
			this->updatePersonnel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->updatePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->updatePersonnel->Location = System::Drawing::Point(0, 482);
			this->updatePersonnel->Name = L"updatePersonnel";
			this->updatePersonnel->Size = System::Drawing::Size(430, 51);
			this->updatePersonnel->TabIndex = 2;
			this->updatePersonnel->Text = L"Upd";
			this->updatePersonnel->UseVisualStyleBackColor = true;
			// 
			// deletePersonnel
			// 
			this->deletePersonnel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->deletePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->deletePersonnel->Location = System::Drawing::Point(0, 428);
			this->deletePersonnel->Name = L"deletePersonnel";
			this->deletePersonnel->Size = System::Drawing::Size(430, 54);
			this->deletePersonnel->TabIndex = 3;
			this->deletePersonnel->Text = L"Del";
			this->deletePersonnel->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
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
			this->label7->Location = System::Drawing::Point(14, 279);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 20);
			this->label7->TabIndex = 10;
			this->label7->Text = L"ID Supérieur :";
			// 
			// boxAdresse
			// 
			this->boxAdresse->Location = System::Drawing::Point(159, 235);
			this->boxAdresse->Name = L"boxAdresse";
			this->boxAdresse->Size = System::Drawing::Size(238, 22);
			this->boxAdresse->TabIndex = 12;
			// 
			// boxSuperieur
			// 
			this->boxSuperieur->Location = System::Drawing::Point(159, 279);
			this->boxSuperieur->Name = L"boxSuperieur";
			this->boxSuperieur->Size = System::Drawing::Size(238, 22);
			this->boxSuperieur->TabIndex = 13;
			// 
			// boxStatut
			// 
			this->boxStatut->Location = System::Drawing::Point(159, 149);
			this->boxStatut->Name = L"boxStatut";
			this->boxStatut->Size = System::Drawing::Size(238, 22);
			this->boxStatut->TabIndex = 14;
			// 
			// boxPrenom
			// 
			this->boxPrenom->Location = System::Drawing::Point(159, 106);
			this->boxPrenom->Name = L"boxPrenom";
			this->boxPrenom->Size = System::Drawing::Size(238, 22);
			this->boxPrenom->TabIndex = 15;
			// 
			// boxNom
			// 
			this->boxNom->Location = System::Drawing::Point(159, 63);
			this->boxNom->Name = L"boxNom";
			this->boxNom->Size = System::Drawing::Size(238, 22);
			this->boxNom->TabIndex = 16;
			// 
			// boxID
			// 
			this->boxID->Location = System::Drawing::Point(159, 22);
			this->boxID->Name = L"boxID";
			this->boxID->Size = System::Drawing::Size(238, 22);
			this->boxID->TabIndex = 17;
			// 
			// dateEmbauche
			// 
			this->dateEmbauche->Location = System::Drawing::Point(159, 194);
			this->dateEmbauche->Name = L"dateEmbauche";
			this->dateEmbauche->Size = System::Drawing::Size(238, 22);
			this->dateEmbauche->TabIndex = 18;
			// 
			// loadPersonnel
			// 
			this->loadPersonnel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->loadPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loadPersonnel->Location = System::Drawing::Point(0, 374);
			this->loadPersonnel->Name = L"loadPersonnel";
			this->loadPersonnel->Size = System::Drawing::Size(430, 54);
			this->loadPersonnel->TabIndex = 30;
			this->loadPersonnel->Text = L"Load";
			this->loadPersonnel->UseVisualStyleBackColor = true;
			// 
			// GestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(923, 585);
			this->Controls->Add(this->loadPersonnel);
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
			this->Controls->Add(this->deletePersonnel);
			this->Controls->Add(this->updatePersonnel);
			this->Controls->Add(this->inserPers);
			this->Controls->Add(this->TablePersonnel);
			this->Name = L"GestionPersonnel";
			this->Text = L"GestionPersonnel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TablePersonnel))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
