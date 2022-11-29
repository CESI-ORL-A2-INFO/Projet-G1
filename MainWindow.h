#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_gestPersonnel;
	protected:
	private: System::Windows::Forms::Button^ button_gestClient;
	private: System::Windows::Forms::Button^ button_gestCommande;
	private: System::Windows::Forms::Button^ button_gestStock;
	private: System::Windows::Forms::Button^ button_stat;

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
			this->button_gestPersonnel = (gcnew System::Windows::Forms::Button());
			this->button_gestClient = (gcnew System::Windows::Forms::Button());
			this->button_gestCommande = (gcnew System::Windows::Forms::Button());
			this->button_gestStock = (gcnew System::Windows::Forms::Button());
			this->button_stat = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_gestPersonnel
			// 
			this->button_gestPersonnel->Dock = System::Windows::Forms::DockStyle::Top;
			this->button_gestPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.16F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_gestPersonnel->Location = System::Drawing::Point(0, 0);
			this->button_gestPersonnel->Name = L"button_gestPersonnel";
			this->button_gestPersonnel->Size = System::Drawing::Size(530, 82);
			this->button_gestPersonnel->TabIndex = 0;
			this->button_gestPersonnel->Text = L"Gestion Personnel";
			this->button_gestPersonnel->UseVisualStyleBackColor = true;
			// 
			// button_gestClient
			// 
			this->button_gestClient->Dock = System::Windows::Forms::DockStyle::Top;
			this->button_gestClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.16F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_gestClient->Location = System::Drawing::Point(0, 82);
			this->button_gestClient->Name = L"button_gestClient";
			this->button_gestClient->Size = System::Drawing::Size(530, 82);
			this->button_gestClient->TabIndex = 1;
			this->button_gestClient->Text = L"Gestion Client";
			this->button_gestClient->UseVisualStyleBackColor = true;
			// 
			// button_gestCommande
			// 
			this->button_gestCommande->Dock = System::Windows::Forms::DockStyle::Top;
			this->button_gestCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.16F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_gestCommande->Location = System::Drawing::Point(0, 164);
			this->button_gestCommande->Name = L"button_gestCommande";
			this->button_gestCommande->Size = System::Drawing::Size(530, 82);
			this->button_gestCommande->TabIndex = 2;
			this->button_gestCommande->Text = L"Gestion Commande";
			this->button_gestCommande->UseVisualStyleBackColor = true;
			// 
			// button_gestStock
			// 
			this->button_gestStock->Dock = System::Windows::Forms::DockStyle::Top;
			this->button_gestStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.16F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_gestStock->Location = System::Drawing::Point(0, 246);
			this->button_gestStock->Name = L"button_gestStock";
			this->button_gestStock->Size = System::Drawing::Size(530, 82);
			this->button_gestStock->TabIndex = 3;
			this->button_gestStock->Text = L"Gestion Stock";
			this->button_gestStock->UseVisualStyleBackColor = true;
			// 
			// button_stat
			// 
			this->button_stat->Dock = System::Windows::Forms::DockStyle::Top;
			this->button_stat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.16F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_stat->Location = System::Drawing::Point(0, 328);
			this->button_stat->Name = L"button_stat";
			this->button_stat->Size = System::Drawing::Size(530, 82);
			this->button_stat->TabIndex = 4;
			this->button_stat->Text = L"Affichage statistiques";
			this->button_stat->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(530, 411);
			this->Controls->Add(this->button_stat);
			this->Controls->Add(this->button_gestStock);
			this->Controls->Add(this->button_gestCommande);
			this->Controls->Add(this->button_gestClient);
			this->Controls->Add(this->button_gestPersonnel);
			this->Name = L"MyForm";
			this->Text = L"MainWindow";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
