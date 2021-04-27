#pragma once

namespace ProjektPKK {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Podsumowanie informacji o Sprzedarz
	/// </summary>
	public ref class Sprzedarz : public System::Windows::Forms::Form
	{
	public:
		Sprzedarz(void)
		{
			InitializeComponent();
			String^ filename = "data.txt";
			StreamReader^ din = File::OpenText(filename);
			String^ str;
			
			while ((str = din->ReadLine()) != nullptr) {
				listBox1->Items->Add(str);
			}
			din->Close();

		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Sprzedarz()
		{
			String^ str;
			StreamWriter^ w = gcnew StreamWriter("data.txt", false);
			
			for (int i = 0; i < listBox1->Items->Count; i++) {
				listBox1->SetSelected(i, true);
				
				w->Flush();
				if (listBox1->SelectedItem->ToString() != "") {
					w->Write("{0}", listBox1->SelectedItem->ToString());
					w->Write("\n");
				}
			}

			
			
			
			w->Close();
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(210, 361);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Sprzedaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Sprzedarz::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(3, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(567, 342);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Sprzedarz::listBox1_SelectedIndexChanged);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->listBox1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(570, 342);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Sprzedarz::flowLayoutPanel1_Paint);
			// 
			// Sprzedarz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(594, 398);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"Sprzedarz";
			this->Text = L"Sprzedarz";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->RemoveAt(listBox1->SelectedIndex);
		
	}
};
}
