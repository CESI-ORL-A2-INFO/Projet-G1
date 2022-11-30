#pragma once

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
	private: System::Windows::Forms::Button^ deleteStock;
	private: System::Windows::Forms::Button^ updateStock;
	private: System::Windows::Forms::Button^ inserStock;
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
	private: System::Windows::Forms::TextBox^ boxTVA;
	private: System::Windows::Forms::Button^ loadStock;
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
			this->TableStock = (gcnew System::Windows::Forms::DataGridView());
			this->deleteStock = (gcnew System::Windows::Forms::Button());
			this->updateStock = (gcnew System::Windows::Forms::Button());
			this->inserStock = (gcnew System::Windows::Forms::Button());
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
			this->boxTVA = (gcnew System::Windows::Forms::TextBox());
			this->loadStock = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableStock))->BeginInit();
			this->SuspendLayout();
			// 
			// TableStock
			// 
			this->TableStock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TableStock->Dock = System::Windows::Forms::DockStyle::Right;
			this->TableStock->Location = System::Drawing::Point(430, 0);
			this->TableStock->Name = L"TableStock";
			this->TableStock->RowHeadersWidth = 51;
			this->TableStock->RowTemplate->Height = 24;
			this->TableStock->Size = System::Drawing::Size(493, 585);
			this->TableStock->TabIndex = 3;
			// 
			// deleteStock
			// 
			this->deleteStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->deleteStock->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->deleteStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->deleteStock->Location = System::Drawing::Point(0, 428);
			this->deleteStock->Name = L"deleteStock";
			this->deleteStock->Size = System::Drawing::Size(430, 54);
			this->deleteStock->TabIndex = 12;
			this->deleteStock->Text = L"Del";
			this->deleteStock->UseVisualStyleBackColor = false;
			// 
			// updateStock
			// 
			this->updateStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->updateStock->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->updateStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->updateStock->Location = System::Drawing::Point(0, 482);
			this->updateStock->Name = L"updateStock";
			this->updateStock->Size = System::Drawing::Size(430, 51);
			this->updateStock->TabIndex = 11;
			this->updateStock->Text = L"Upd";
			this->updateStock->UseVisualStyleBackColor = false;
			// 
			// inserStock
			// 
			this->inserStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->inserStock->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->inserStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inserStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->inserStock->Location = System::Drawing::Point(0, 533);
			this->inserStock->Name = L"inserStock";
			this->inserStock->Size = System::Drawing::Size(430, 52);
			this->inserStock->TabIndex = 10;
			this->inserStock->Text = L"Ins";
			this->inserStock->UseVisualStyleBackColor = false;
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
			this->label4->Location = System::Drawing::Point(12, 161);
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
			this->label5->Location = System::Drawing::Point(12, 213);
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
			this->label6->Location = System::Drawing::Point(12, 262);
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
			this->label7->Location = System::Drawing::Point(12, 316);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 20);
			this->label7->TabIndex = 19;
			this->label7->Text = L"ID TVA :";
			// 
			// boxIDArticle
			// 
			this->boxIDArticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxIDArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxIDArticle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxIDArticle->Location = System::Drawing::Point(186, 20);
			this->boxIDArticle->Name = L"boxIDArticle";
			this->boxIDArticle->Size = System::Drawing::Size(238, 22);
			this->boxIDArticle->TabIndex = 20;
			// 
			// boxSeuilReapr
			// 
			this->boxSeuilReapr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxSeuilReapr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxSeuilReapr->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxSeuilReapr->Location = System::Drawing::Point(240, 63);
			this->boxSeuilReapr->Name = L"boxSeuilReapr";
			this->boxSeuilReapr->Size = System::Drawing::Size(184, 22);
			this->boxSeuilReapr->TabIndex = 21;
			// 
			// boxHT
			// 
			this->boxHT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
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
			this->boxNature->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxNature->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxNature->Location = System::Drawing::Point(186, 161);
			this->boxNature->Name = L"boxNature";
			this->boxNature->Size = System::Drawing::Size(238, 22);
			this->boxNature->TabIndex = 23;
			// 
			// boxCouleur
			// 
			this->boxCouleur->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxCouleur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxCouleur->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxCouleur->Location = System::Drawing::Point(186, 213);
			this->boxCouleur->Name = L"boxCouleur";
			this->boxCouleur->Size = System::Drawing::Size(238, 22);
			this->boxCouleur->TabIndex = 24;
			// 
			// boxDesignation
			// 
			this->boxDesignation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxDesignation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxDesignation->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxDesignation->Location = System::Drawing::Point(186, 262);
			this->boxDesignation->Name = L"boxDesignation";
			this->boxDesignation->Size = System::Drawing::Size(238, 22);
			this->boxDesignation->TabIndex = 25;
			// 
			// boxTVA
			// 
			this->boxTVA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->boxTVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxTVA->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->boxTVA->Location = System::Drawing::Point(186, 316);
			this->boxTVA->Name = L"boxTVA";
			this->boxTVA->Size = System::Drawing::Size(238, 22);
			this->boxTVA->TabIndex = 26;
			// 
			// loadStock
			// 
			this->loadStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->loadStock->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->loadStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.12F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loadStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->loadStock->Location = System::Drawing::Point(0, 374);
			this->loadStock->Name = L"loadStock";
			this->loadStock->Size = System::Drawing::Size(430, 54);
			this->loadStock->TabIndex = 30;
			this->loadStock->Text = L"Load";
			this->loadStock->UseVisualStyleBackColor = false;
			// 
			// GestionStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->ClientSize = System::Drawing::Size(923, 585);
			this->Controls->Add(this->loadStock);
			this->Controls->Add(this->boxTVA);
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
			this->Controls->Add(this->deleteStock);
			this->Controls->Add(this->updateStock);
			this->Controls->Add(this->inserStock);
			this->Controls->Add(this->TableStock);
			this->Name = L"GestionStock";
			this->Text = L"GestionStock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableStock))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
