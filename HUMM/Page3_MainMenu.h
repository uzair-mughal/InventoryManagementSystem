#pragma once
#include"Page4_Products.h"
#include "Page_Setting_Main.h"
#include "Page_Customer.h"
#include "Page_Vendor.h"
#include "Page_Reports.h"

namespace HUMM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page3_MainMenu
	/// </summary>
	public ref class Page3_MainMenu : public System::Windows::Forms::Form
	{
	public:
	private: System::Windows::Forms::Button^  VendorButton;
	private: System::Windows::Forms::Button^  button1;
	public:

		Form ^Obj;
		Customers *customer;
		User *u;
		Inventory *inv;
		Vendor *vend;

		Page3_MainMenu(Form ^Obj1, User *obj, Inventory *inv, Customers *customer, Vendor *vend)
		{
			Obj = Obj1;
			u = obj;
			this->inv = inv;
			this->customer = customer;
			this->vend = vend;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Page3_MainMenu(void)
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
		~Page3_MainMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ProductButton;
	private: System::Windows::Forms::Button^  CustomerButton;
	private: System::Windows::Forms::Button^  LogoutButton;
	private: System::Windows::Forms::Button^  ReportsButton;
	protected:




	private: System::Windows::Forms::GroupBox^  groupBox1;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Page3_MainMenu::typeid));
			this->ProductButton = (gcnew System::Windows::Forms::Button());
			this->CustomerButton = (gcnew System::Windows::Forms::Button());
			this->LogoutButton = (gcnew System::Windows::Forms::Button());
			this->ReportsButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->VendorButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ProductButton
			// 
			this->ProductButton->BackColor = System::Drawing::Color::Black;
			this->ProductButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ProductButton.BackgroundImage")));
			this->ProductButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProductButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProductButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ProductButton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProductButton->ForeColor = System::Drawing::Color::White;
			this->ProductButton->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->ProductButton->Location = System::Drawing::Point(204, 62);
			this->ProductButton->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->ProductButton->Name = L"ProductButton";
			this->ProductButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ProductButton->Size = System::Drawing::Size(228, 53);
			this->ProductButton->TabIndex = 0;
			this->ProductButton->Text = L"Products Management";
			this->ProductButton->UseVisualStyleBackColor = false;
			this->ProductButton->Click += gcnew System::EventHandler(this, &Page3_MainMenu::button1_Click);
			// 
			// CustomerButton
			// 
			this->CustomerButton->BackColor = System::Drawing::Color::Black;
			this->CustomerButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CustomerButton.BackgroundImage")));
			this->CustomerButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CustomerButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CustomerButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CustomerButton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomerButton->ForeColor = System::Drawing::Color::White;
			this->CustomerButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->CustomerButton->Location = System::Drawing::Point(204, 204);
			this->CustomerButton->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->CustomerButton->Name = L"CustomerButton";
			this->CustomerButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->CustomerButton->Size = System::Drawing::Size(228, 53);
			this->CustomerButton->TabIndex = 1;
			this->CustomerButton->Text = L"Customer Details";
			this->CustomerButton->UseVisualStyleBackColor = false;
			this->CustomerButton->Click += gcnew System::EventHandler(this, &Page3_MainMenu::button2_Click);
			// 
			// LogoutButton
			// 
			this->LogoutButton->BackColor = System::Drawing::Color::Black;
			this->LogoutButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LogoutButton.BackgroundImage")));
			this->LogoutButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->LogoutButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LogoutButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LogoutButton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogoutButton->ForeColor = System::Drawing::Color::White;
			this->LogoutButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->LogoutButton->Location = System::Drawing::Point(28, 370);
			this->LogoutButton->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->LogoutButton->Name = L"LogoutButton";
			this->LogoutButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LogoutButton->Size = System::Drawing::Size(96, 38);
			this->LogoutButton->TabIndex = 3;
			this->LogoutButton->Text = L"Log Out";
			this->LogoutButton->UseVisualStyleBackColor = false;
			this->LogoutButton->Click += gcnew System::EventHandler(this, &Page3_MainMenu::button3_Click);
			// 
			// ReportsButton
			// 
			this->ReportsButton->BackColor = System::Drawing::Color::Black;
			this->ReportsButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ReportsButton.BackgroundImage")));
			this->ReportsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ReportsButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ReportsButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ReportsButton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReportsButton->ForeColor = System::Drawing::Color::White;
			this->ReportsButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ReportsButton->Location = System::Drawing::Point(204, 275);
			this->ReportsButton->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->ReportsButton->Name = L"ReportsButton";
			this->ReportsButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ReportsButton->Size = System::Drawing::Size(228, 53);
			this->ReportsButton->TabIndex = 2;
			this->ReportsButton->Text = L"Reports";
			this->ReportsButton->UseVisualStyleBackColor = false;
			this->ReportsButton->Click += gcnew System::EventHandler(this, &Page3_MainMenu::ReportsButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->VendorButton);
			this->groupBox1->Controls->Add(this->ReportsButton);
			this->groupBox1->Controls->Add(this->LogoutButton);
			this->groupBox1->Controls->Add(this->ProductButton);
			this->groupBox1->Controls->Add(this->CustomerButton);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Gold;
			this->groupBox1->Location = System::Drawing::Point(232, 129);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(619, 439);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Main Menu:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(521, 355);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 52);
			this->button1->TabIndex = 5;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Page3_MainMenu::button1_Click_1);
			// 
			// VendorButton
			// 
			this->VendorButton->BackColor = System::Drawing::Color::Black;
			this->VendorButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"VendorButton.BackgroundImage")));
			this->VendorButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->VendorButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->VendorButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->VendorButton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->VendorButton->ForeColor = System::Drawing::Color::White;
			this->VendorButton->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->VendorButton->Location = System::Drawing::Point(204, 133);
			this->VendorButton->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->VendorButton->Name = L"VendorButton";
			this->VendorButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->VendorButton->Size = System::Drawing::Size(228, 53);
			this->VendorButton->TabIndex = 4;
			this->VendorButton->Text = L"Vendor Details";
			this->VendorButton->UseVisualStyleBackColor = false;
			this->VendorButton->Click += gcnew System::EventHandler(this, &Page3_MainMenu::VendorButton_Click);
			// 
			// Page3_MainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1045, 690);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::DimGray;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->Name = L"Page3_MainMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HS Inventory Controller";
			this->Load += gcnew System::EventHandler(this, &Page3_MainMenu::Page3_MainMenu_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Page3_MainMenu_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Obj->Show();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Page4_Products^ P4 = gcnew Page4_Products(this, vend, inv, u);
		P4->Show();

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//Customer
		Page_Customer ^ P5 = gcnew Page_Customer(this, inv, customer);
		P5->Show();
		this->Hide();
	}
	private: System::Void VendorButton_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Hide();
		Page_Vendor ^obj = gcnew Page_Vendor(this, vend, u);
		obj->Show();

	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

		this->Hide();
		Page_Setting_Main^ settingpage = gcnew Page_Setting_Main(this, u, Obj);
		settingpage->Show();
	}
	private: System::Void ReportsButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Page_Reports^ reportspage = gcnew Page_Reports(this, vend, customer, inv);
		reportspage->Show();
	}
};
}