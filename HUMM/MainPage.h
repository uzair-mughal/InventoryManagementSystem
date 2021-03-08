#pragma once
#include "VendorPage.h"

namespace HUMM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainPage
	/// </summary>
	public ref class MainPage : public System::Windows::Forms::Form
	{
	public:
		MainPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  vendor_button;
	private: System::Windows::Forms::Button^  invent_button;
	private: System::Windows::Forms::Button^  cust_button;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->vendor_button = (gcnew System::Windows::Forms::Button());
			this->invent_button = (gcnew System::Windows::Forms::Button());
			this->cust_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// vendor_button
			// 
			this->vendor_button->Location = System::Drawing::Point(12, 12);
			this->vendor_button->Name = L"vendor_button";
			this->vendor_button->Size = System::Drawing::Size(75, 23);
			this->vendor_button->TabIndex = 0;
			this->vendor_button->Text = L"Vendor";
			this->vendor_button->UseVisualStyleBackColor = true;
			this->vendor_button->Click += gcnew System::EventHandler(this, &MainPage::button1_Click);
			// 
			// invent_button
			// 
			this->invent_button->Location = System::Drawing::Point(93, 12);
			this->invent_button->Name = L"invent_button";
			this->invent_button->Size = System::Drawing::Size(75, 23);
			this->invent_button->TabIndex = 1;
			this->invent_button->Text = L"Inventory";
			this->invent_button->UseVisualStyleBackColor = true;
			// 
			// cust_button
			// 
			this->cust_button->Location = System::Drawing::Point(174, 12);
			this->cust_button->Name = L"cust_button";
			this->cust_button->Size = System::Drawing::Size(75, 23);
			this->cust_button->TabIndex = 2;
			this->cust_button->Text = L"Customer";
			this->cust_button->UseVisualStyleBackColor = true;
			// 
			// MainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(262, 541);
			this->Controls->Add(this->cust_button);
			this->Controls->Add(this->invent_button);
			this->Controls->Add(this->vendor_button);
			this->Name = L"MainPage";
			this->Text = L"MainPage";
			this->Load += gcnew System::EventHandler(this, &MainPage::MainPage_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainPage_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		VendorPage^ v_menu = gcnew VendorPage;
		v_menu->Show();

		}
	};
}
