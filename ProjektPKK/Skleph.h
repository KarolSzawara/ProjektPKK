#pragma once
#include "Okno wyboru.h"
#include "Instrument.h"
#include "Sprzedarz.h"
#include "dmuchane.h"
#include "perkusyjne.h"
#include "smyczkowe.h"
#include "uderzane.h"

namespace ProjektPKK {
	std::vector<std::shared_ptr<Instrument>> kontener;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Skleph
	/// </summary>
	public ref class Skleph : public System::Windows::Forms::Form
	{
	public:
		Skleph(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Skleph()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26));
			this->label1->Location = System::Drawing::Point(263, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sklep Muzyczny";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(499, 149);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(223, 116);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Sprzedarz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Skleph::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(114, 149);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(223, 116);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Nowe Instrumenty";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Skleph::button2_Click);
			// 
			// Skleph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(831, 412);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Skleph";
			this->Text = L"Skleph";
			this->Load += gcnew System::EventHandler(this, &Skleph::Skleph_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Sprzedarz^ sprzedFORM = gcnew Sprzedarz;
		sprzedFORM->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Oknowyboru^ wybFORM = gcnew Oknowyboru;
		wybFORM->Show();
	}
	private: System::Void Skleph_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
