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

				str=str->Replace(';', '\t');
				str = str->Replace('_', ' ');
				
				if (str->IndexOf("uderzane") == 0) listBox2->Items->Add(str);
				else if (str->IndexOf("perkusyjne") == 0)listBox3->Items->Add(str);
				else if (str->IndexOf("smyczkowe") == 0)listBox4->Items->Add(str);
				else if (str->IndexOf("strunowe") == 0)listBox5->Items->Add(str);
				else if(str->IndexOf("dmuchane")==0) listBox1->Items->Add(str);
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
				if (listBox1->SelectedItem != nullptr) {
					
					str = listBox1->SelectedItem->ToString();

					str = str->Replace('\t', ';');
					str = str->Replace(' ', '_');
					w->Flush();
					if (str != "") {

						w->Write("{0}", str);
						w->Write("\n");
					}
				}
			}
			for (int i = 0; i < listBox2->Items->Count; i++) {
				listBox2->SetSelected(i, true);
				if (listBox2->SelectedItem != nullptr) {
					
					str = listBox2->SelectedItem->ToString();

					str = str->Replace('\t', ';');
					str = str->Replace(' ', '_');
					w->Flush();
					if (str != "") {

						w->Write("{0}", str);
						w->Write("\n");
					}
				}
			}
			for (int i = 0; i < listBox3->Items->Count; i++) {
				listBox3->SetSelected(i, true);
				if (listBox3->SelectedItem != nullptr) {
					str = listBox3->SelectedItem->ToString();

					str = str->Replace('\t', ';');
					str = str->Replace(' ', '_');
					w->Flush();
					if (str != "") {

						w->Write("{0}", str);
						w->Write("\n");
					}
				}
			}
			for (int i = 0; i < listBox4->Items->Count; i++) {
				listBox4->SetSelected(i, true);
				if (listBox4->SelectedItem != nullptr) {
					
					str = listBox4->SelectedItem->ToString();

					str = str->Replace('\t', ';');
					str = str->Replace(' ', '_');
					w->Flush();
					if (str != "") {

						w->Write("{0}", str);
						w->Write("\n");
					}
				}
			}
			for (int i = 0; i < listBox5->Items->Count; i++) {
				listBox5->SetSelected(i, true);
				if (listBox5->SelectedItem != nullptr) {
					
					str = listBox5->SelectedItem->ToString();

					str = str->Replace('\t', ';');
					str = str->Replace(' ', '_');
					w->Flush();
					if (str != "") {

						w->Write("{0}", str);
						w->Write("\n");
					}
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
	private: System::Data::DataSet^ dataSet1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox3;
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
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(299, 556);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Sprzedaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Sprzedarz::button1_Click);
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			// 
			// listBox2
			// 
			this->listBox2->Location = System::Drawing::Point(3, 104);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(613, 95);
			this->listBox2->TabIndex = 1;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Sprzedarz::listBox2_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->Location = System::Drawing::Point(3, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(613, 95);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Sprzedarz::listBox1_SelectedIndexChanged);
			// 
			// listBox5
			// 
			this->listBox5->Location = System::Drawing::Point(3, 407);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(613, 95);
			this->listBox5->TabIndex = 4;
			this->listBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Sprzedarz::listBox5_SelectedIndexChanged);
			// 
			// listBox4
			// 
			this->listBox4->Location = System::Drawing::Point(3, 306);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(613, 95);
			this->listBox4->TabIndex = 3;
			this->listBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Sprzedarz::listBox4_SelectedIndexChanged);
			// 
			// listBox3
			// 
			this->listBox3->Location = System::Drawing::Point(3, 205);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(613, 95);
			this->listBox3->TabIndex = 2;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Sprzedarz::listBox3_SelectedIndexChanged);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->listBox1);
			this->flowLayoutPanel1->Controls->Add(this->listBox2);
			this->flowLayoutPanel1->Controls->Add(this->listBox3);
			this->flowLayoutPanel1->Controls->Add(this->listBox4);
			this->flowLayoutPanel1->Controls->Add(this->listBox5);
			this->flowLayoutPanel1->Location = System::Drawing::Point(66, 12);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(616, 540);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Sprzedarz::flowLayoutPanel1_Paint);
			// 
			// Sprzedarz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(780, 661);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"Sprzedarz";
			this->Text = L"Sprzedarz";
			this->Click += gcnew System::EventHandler(this, &Sprzedarz::Sprzedarz_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		   private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if(listBox1->SelectedIndex>-1)
		listBox1->Items->RemoveAt(listBox1->SelectedIndex);
		if (listBox2->SelectedIndex > -1)
			listBox2->Items->RemoveAt(listBox2->SelectedIndex);
		if (listBox3->SelectedIndex > -1)
			listBox3->Items->RemoveAt(listBox3->SelectedIndex);
		if (listBox4->SelectedIndex > -1)
			listBox4->Items->RemoveAt(listBox4->SelectedIndex);
		if (listBox5->SelectedIndex > -1)
			listBox5->Items->RemoveAt(listBox5->SelectedIndex);
		 
		
	}
private: System::Void splitContainer1_Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	   private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void listBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void listBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

} 

private: System::Void Sprzedarz_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->ClearSelected();
	listBox2->ClearSelected();
	listBox3->ClearSelected();
	listBox4->ClearSelected();
	listBox5->ClearSelected();
}
};
}
