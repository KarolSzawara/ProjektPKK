#pragma once
#include "Sprzedarz.h"
#include "Instrument.h"
#include "Sprzedarz.h"
#include "dmuchane.h"
#include "perkusyjne.h"
#include "smyczkowe.h"
#include "uderzane.h"
namespace ProjektPKK {
	static std::string toStandardString(System::String^ string)
	{
		using System::Runtime::InteropServices::Marshal;
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		return returnString;
	}
	//std::vector<std::shared_ptr<Instrument>> kontener;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o OknoDodaj
	/// </summary>
	public ref class OknoDodaj : public System::Windows::Forms::Form
	{
	public:
		OknoDodaj(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		OknoDodaj(String^ rodzaj,int index)
		{
			InitializeComponent();
			switch (index) {
			case 0:text1->Text = "Dmuchany";
				Par1->Text = "Liczba Przyciskow"; break;
			case 1:text1->Text = "Perkusyjny";
				Par1->Text = "Liczba Talerzy";
				Par2->Text = "Liczna Bebnow";
				break;
			case 2:text1->Text = "Smyczkowy";
				Par1->Text = "Liczba Strun";
				Par2->Text = "Dlugosc gryfu";
				break;
			case 3:text1->Text = "Strunowy";
				Par1->Text = "Liczba Strun";
				break;
			case 4:text1->Text = "Uderzany";
				Par1->Text = "Liczba Strun";
				Par2->Text = "Liczba Klawiszy";
				break;
			}
			text1->ReadOnly=true;

			String^ filename = "data.txt";
			StreamReader^ din = File::OpenText(filename);
			String^ str;
			array<System::String^>^ anyPRT = gcnew array<System::String^>(5);
			while ((str = din->ReadLine()) != nullptr) {
				anyPRT = str->Split(';');
				anyPRT[1] = anyPRT[1]->Remove(0, 6);
				
				comboBox1->Items->Add(anyPRT[1]);

				
			}
			din->Close();

			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~OknoDodaj()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ text2;
	private: System::Windows::Forms::TextBox^ text3;
	private: System::Windows::Forms::TextBox^ text4;
	private: System::Windows::Forms::TextBox^ text5;
	private: System::Windows::Forms::TextBox^ text6;
	private: System::Windows::Forms::TextBox^ text7;
	private: System::Windows::Forms::Label^ Nazwa;
	private: System::Windows::Forms::Label^ Cena;
	private: System::Windows::Forms::Label^ L_SZT;
	private: System::Windows::Forms::Label^ Par2;
	private: System::Windows::Forms::Label^ Par3;
	protected:

	protected:











	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ text1;
	private: System::Windows::Forms::Label^ Instr;
	private: System::Windows::Forms::Label^ Par1;
	private: System::Windows::Forms::Button^ sprz;
	private: System::Windows::Forms::Button^ button2;





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
			this->text2 = (gcnew System::Windows::Forms::TextBox());
			this->text3 = (gcnew System::Windows::Forms::TextBox());
			this->text4 = (gcnew System::Windows::Forms::TextBox());
			this->text5 = (gcnew System::Windows::Forms::TextBox());
			this->text6 = (gcnew System::Windows::Forms::TextBox());
			this->text7 = (gcnew System::Windows::Forms::TextBox());
			this->Nazwa = (gcnew System::Windows::Forms::Label());
			this->Cena = (gcnew System::Windows::Forms::Label());
			this->L_SZT = (gcnew System::Windows::Forms::Label());
			this->Par2 = (gcnew System::Windows::Forms::Label());
			this->Par3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->text1 = (gcnew System::Windows::Forms::TextBox());
			this->Instr = (gcnew System::Windows::Forms::Label());
			this->Par1 = (gcnew System::Windows::Forms::Label());
			this->sprz = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// text2
			// 
			this->text2->Location = System::Drawing::Point(434, 52);
			this->text2->Name = L"text2";
			this->text2->Size = System::Drawing::Size(239, 20);
			this->text2->TabIndex = 0;
			// 
			// text3
			// 
			this->text3->Location = System::Drawing::Point(434, 78);
			this->text3->Name = L"text3";
			this->text3->Size = System::Drawing::Size(239, 20);
			this->text3->TabIndex = 1;
			// 
			// text4
			// 
			this->text4->Location = System::Drawing::Point(434, 104);
			this->text4->Name = L"text4";
			this->text4->Size = System::Drawing::Size(239, 20);
			this->text4->TabIndex = 2;
			// 
			// text5
			// 
			this->text5->Location = System::Drawing::Point(434, 130);
			this->text5->Name = L"text5";
			this->text5->Size = System::Drawing::Size(239, 20);
			this->text5->TabIndex = 3;
			// 
			// text6
			// 
			this->text6->Location = System::Drawing::Point(434, 156);
			this->text6->Name = L"text6";
			this->text6->Size = System::Drawing::Size(239, 20);
			this->text6->TabIndex = 4;
			// 
			// text7
			// 
			this->text7->Location = System::Drawing::Point(434, 182);
			this->text7->Name = L"text7";
			this->text7->Size = System::Drawing::Size(239, 20);
			this->text7->TabIndex = 5;
			// 
			// Nazwa
			// 
			this->Nazwa->AutoSize = true;
			this->Nazwa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->Nazwa->Location = System::Drawing::Point(292, 54);
			this->Nazwa->Name = L"Nazwa";
			this->Nazwa->Size = System::Drawing::Size(60, 20);
			this->Nazwa->TabIndex = 6;
			this->Nazwa->Text = L"Nazwa";
			this->Nazwa->Click += gcnew System::EventHandler(this, &OknoDodaj::label1_Click);
			// 
			// Cena
			// 
			this->Cena->AutoSize = true;
			this->Cena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->Cena->Location = System::Drawing::Point(292, 78);
			this->Cena->Name = L"Cena";
			this->Cena->Size = System::Drawing::Size(48, 20);
			this->Cena->TabIndex = 7;
			this->Cena->Text = L"Cena";
			// 
			// L_SZT
			// 
			this->L_SZT->AutoSize = true;
			this->L_SZT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->L_SZT->Location = System::Drawing::Point(292, 104);
			this->L_SZT->Name = L"L_SZT";
			this->L_SZT->Size = System::Drawing::Size(106, 20);
			this->L_SZT->TabIndex = 8;
			this->L_SZT->Text = L"Liczba Sztuk";
			this->L_SZT->Click += gcnew System::EventHandler(this, &OknoDodaj::label3_Click);
			// 
			// Par2
			// 
			this->Par2->AutoSize = true;
			this->Par2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->Par2->Location = System::Drawing::Point(292, 156);
			this->Par2->Name = L"Par2";
			this->Par2->Size = System::Drawing::Size(14, 20);
			this->Par2->TabIndex = 10;
			this->Par2->Text = L" ";
			// 
			// Par3
			// 
			this->Par3->AutoSize = true;
			this->Par3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->Par3->Location = System::Drawing::Point(292, 180);
			this->Par3->Name = L"Par3";
			this->Par3->Size = System::Drawing::Size(14, 20);
			this->Par3->TabIndex = 11;
			this->Par3->Text = L" ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(485, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 30);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Dodaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OknoDodaj::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(26, 52);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(239, 21);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &OknoDodaj::comboBox1_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label7->Location = System::Drawing::Point(87, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Istniej¹cy";
			this->label7->Click += gcnew System::EventHandler(this, &OknoDodaj::label7_Click);
			// 
			// text1
			// 
			this->text1->Location = System::Drawing::Point(434, 26);
			this->text1->Name = L"text1";
			this->text1->Size = System::Drawing::Size(239, 20);
			this->text1->TabIndex = 15;
			// 
			// Instr
			// 
			this->Instr->AutoSize = true;
			this->Instr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->Instr->Location = System::Drawing::Point(292, 27);
			this->Instr->Name = L"Instr";
			this->Instr->Size = System::Drawing::Size(88, 20);
			this->Instr->TabIndex = 16;
			this->Instr->Text = L"Instrument";
			// 
			// Par1
			// 
			this->Par1->AutoSize = true;
			this->Par1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->Par1->Location = System::Drawing::Point(292, 130);
			this->Par1->Name = L"Par1";
			this->Par1->Size = System::Drawing::Size(14, 20);
			this->Par1->TabIndex = 17;
			this->Par1->Text = L" ";
			// 
			// sprz
			// 
			this->sprz->Location = System::Drawing::Point(281, 214);
			this->sprz->Name = L"sprz";
			this->sprz->Size = System::Drawing::Size(148, 30);
			this->sprz->TabIndex = 18;
			this->sprz->Text = L"Przejdz do sprzedarzy";
			this->sprz->UseVisualStyleBackColor = true;
			this->sprz->Click += gcnew System::EventHandler(this, &OknoDodaj::sprz_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(65, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 30);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Wybierz";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OknoDodaj::button2_Click);
			// 
			// OknoDodaj
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 256);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->sprz);
			this->Controls->Add(this->Par1);
			this->Controls->Add(this->Instr);
			this->Controls->Add(this->text1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Par3);
			this->Controls->Add(this->Par2);
			this->Controls->Add(this->L_SZT);
			this->Controls->Add(this->Cena);
			this->Controls->Add(this->Nazwa);
			this->Controls->Add(this->text7);
			this->Controls->Add(this->text6);
			this->Controls->Add(this->text5);
			this->Controls->Add(this->text4);
			this->Controls->Add(this->text3);
			this->Controls->Add(this->text2);
			this->Name = L"OknoDodaj";
			this->Text = L"OknoDodaj";
			this->Load += gcnew System::EventHandler(this, &OknoDodaj::OknoDodaj_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void OknoDodaj_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ b = text1->Text;
	std::vector<std::shared_ptr<Instrument>> kontener;
	
	if (b == "Dmuchany") {
		dmuchane ins(toStandardString(text2->Text),unsigned::Parse(text3->Text), 
			unsigned::Parse(text4->Text), unsigned::Parse(text5->Text));
		kontener=ins.dodaj(kontener);
		
	}
	else if (b == "Perkusyjny") {
		perkusyjne ins(toStandardString(text2->Text), unsigned::Parse(text3->Text), 
			unsigned::Parse(text4->Text), unsigned::Parse(text5->Text),unsigned::Parse(text6->Text));
		kontener = ins.dodaj(kontener);
	}
	else if(b=="Smyczkowy"){
		smyczkowe ins(toStandardString(text2->Text), unsigned::Parse(text3->Text),
			unsigned::Parse(text4->Text), unsigned::Parse(text5->Text), float::Parse(text6->Text));
		kontener = ins.dodaj(kontener);
	}
	else if (b == "Strunowy") {
		strunowe ins(toStandardString(text2->Text), unsigned::Parse(text3->Text),
			unsigned::Parse(text4->Text), unsigned::Parse(text5->Text));
		kontener = ins.dodaj(kontener);
	}
	else if (b == "Uderzany") {
		uderzane ins(toStandardString(text2->Text), unsigned::Parse(text3->Text),
			unsigned::Parse(text4->Text), unsigned::Parse(text5->Text),unsigned::Parse(text6->Text));
		kontener = ins.dodaj(kontener);
	}
	kontener[0]->saveTXT();
	
	
	this->Close();
}
private: System::Void sprz_Click(System::Object^ sender, System::EventArgs^ e) {
	Sprzedarz^ newFORM = gcnew Sprzedarz();
	newFORM->Show();
	this->Close();
	
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ filename = "data.txt";
	StreamReader^ din = File::OpenText(filename);
	String^ str;
	array<System::String^>^ anyPRT;
	std::vector<std::shared_ptr<Instrument>> kontener;
	while ((str = din->ReadLine()) != nullptr)
	{
		anyPRT=str->Split(';');
		anyPRT[1]=anyPRT[1]->Remove(0,6);
		anyPRT[2]=anyPRT[2]->Remove(0,5);
		anyPRT[3] = anyPRT[3]->Remove(0, 13);
		
		
		if (anyPRT[0] == "dmuchane") {
			anyPRT[4] = anyPRT[4]->Remove(0, 13);
			dmuchane obj(toStandardString(anyPRT[1]), unsigned::Parse(anyPRT[2]),
				unsigned::Parse(anyPRT[3]), unsigned::Parse(anyPRT[4]));
			kontener = obj.dodaj(kontener);

		}else
			if (anyPRT[0] == "perkusyjne") {
				anyPRT[4] = anyPRT[4]->Remove(0, 15);
				anyPRT[5] = anyPRT[5]->Remove(0, 14);
				perkusyjne obj(toStandardString(anyPRT[1]), unsigned::Parse(anyPRT[2]),
					unsigned::Parse(anyPRT[3]), unsigned::Parse(anyPRT[4]), unsigned::Parse(anyPRT[5]));
				kontener = obj.dodaj(kontener);
			}
			else if (anyPRT[0] == "smyczkowe") {
				anyPRT[4] = anyPRT[4]->Remove(0, 13);
				anyPRT[5] = anyPRT[5]->Remove(0, 14);
				smyczkowe obj(toStandardString(anyPRT[1]), unsigned::Parse(anyPRT[2]),
					unsigned::Parse(anyPRT[3]), unsigned::Parse(anyPRT[4]), unsigned::Parse(anyPRT[5]));
				kontener = obj.dodaj(kontener);
			}
			else if (anyPRT[0] == "strunowe") {
				anyPRT[4] = anyPRT[4]->Remove(0, 13);
				strunowe obj(toStandardString(anyPRT[1]), unsigned::Parse(anyPRT[2]),
					unsigned::Parse(anyPRT[3]), unsigned::Parse(anyPRT[4]));
				kontener = obj.dodaj(kontener);
			}
			else if (anyPRT[0] == "uderzane") {
				anyPRT[4] = anyPRT[4]->Remove(0, 13);
				anyPRT[5] = anyPRT[5]->Remove(0, 16);
				uderzane obj(toStandardString(anyPRT[1]), unsigned::Parse(anyPRT[2]),
					unsigned::Parse(anyPRT[3]), unsigned::Parse(anyPRT[4]), unsigned::Parse(anyPRT[5]));
				kontener=obj.dodaj(kontener);
			}
if (comboBox1->SelectedItem->ToString() == anyPRT[1]) {
				
				text2->Text = anyPRT[1];
				text3->Text = anyPRT[2];
				text4->Text = anyPRT[3];
			if (anyPRT[0] == "dmuchane") {
				text1->Text = "Dmuchany";
				Par1->Text = "Liczba Przyciskow";
				text5->Text = anyPRT[4];
				Par2->Text = "";

			}
			else if (anyPRT[0] == "perkusyjne") {
				text1->Text = "Perkusyjny";
				text5->Text = anyPRT[4];
				text6->Text = anyPRT[5];
				Par1->Text = "Liczba Talerzy";
				Par2->Text = "Liczna Bebnow";
			}
			else if (anyPRT[0] == "smyczkowe") {
				text1->Text = "Smyczkowy";
				text5->Text = anyPRT[4];
				text6->Text = anyPRT[5];
				Par1->Text = "Liczba Strun";
				Par2->Text = "Dlugosc gryfu";
			}
			else if (anyPRT[0] == "strunowe") {
				text1->Text = "Strunowy";
				text5->Text = anyPRT[4];
				Par1->Text = "Liczba Strun";
				Par2->Text = "";
			}
			else if (anyPRT[0] == "Uderzany") {
				text1->Text = "Uderzane";
				text5->Text = anyPRT[4];
				text6->Text = anyPRT[5];
				Par1->Text = "Liczba Strun";
				Par2->Text = "Liczba Klawiszy";
			}
		}
	}
	din->Close();
	kontener=kontener[0]->sprzedaj(toStandardString(comboBox1->SelectedItem->ToString()),kontener);
	StreamWriter^ clean = gcnew StreamWriter(filename, false);
	clean->Close();
	for (int i = 0; i < kontener.size(); i++) {
		if(kontener[i]!=NULL)
		kontener[i]->saveTXT();
	}
}
};
}
