#pragma once

#include "Inventory.h"
#include "Product.h"
#include "Vendor.h"
#include "Order.h"
#include "string.h"
#include <chrono>
#include <ctime>
#include <msclr\marshal_cppstd.h>

namespace HUMM {

	using namespace System;
	using namespace std;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Page_Reports
	/// </summary>
	public ref class Page_Reports : public System::Windows::Forms::Form
	{

	public:

		Form^ obj;
		Vendor *vend;
		Customers *cust;
		Inventory *invptr;

	public:
		Page_Reports(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Page_Reports(Form^ obj, Vendor *vend, Customers *cust, Inventory *invptr) {

			this->obj = obj;
			this->vend = vend;
			this->cust = cust;
			this->invptr = invptr;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Page_Reports()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  ReturnButton;



	private: System::Windows::Forms::Button^  LogoutButton;
	private: System::Windows::Forms::Button^  SalesRButton;

	private: System::Windows::Forms::RichTextBox^  richText;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Page_Reports::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ReturnButton = (gcnew System::Windows::Forms::Button());
			this->LogoutButton = (gcnew System::Windows::Forms::Button());
			this->SalesRButton = (gcnew System::Windows::Forms::Button());
			this->richText = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->ReturnButton);
			this->groupBox1->Controls->Add(this->LogoutButton);
			this->groupBox1->Controls->Add(this->SalesRButton);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Gold;
			this->groupBox1->Location = System::Drawing::Point(13, 572);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(302, 105);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Main Menu:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(703, 554);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 64);
			this->button1->TabIndex = 5;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// ReturnButton
			// 
			this->ReturnButton->BackColor = System::Drawing::Color::Black;
			this->ReturnButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ReturnButton.BackgroundImage")));
			this->ReturnButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ReturnButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ReturnButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ReturnButton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReturnButton->ForeColor = System::Drawing::Color::White;
			this->ReturnButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ReturnButton->Location = System::Drawing::Point(13, 39);
			this->ReturnButton->Margin = System::Windows::Forms::Padding(9, 11, 9, 11);
			this->ReturnButton->Name = L"ReturnButton";
			this->ReturnButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ReturnButton->Size = System::Drawing::Size(119, 46);
			this->ReturnButton->TabIndex = 2;
			this->ReturnButton->Text = L"Return";
			this->ReturnButton->UseVisualStyleBackColor = false;
			this->ReturnButton->Click += gcnew System::EventHandler(this, &Page_Reports::ReturnButton_Click);
			// 
			// LogoutButton
			// 
			this->LogoutButton->BackColor = System::Drawing::Color::Black;
			this->LogoutButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->LogoutButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LogoutButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LogoutButton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogoutButton->ForeColor = System::Drawing::Color::White;
			this->LogoutButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->LogoutButton->Location = System::Drawing::Point(45, 572);
			this->LogoutButton->Margin = System::Windows::Forms::Padding(9, 11, 9, 11);
			this->LogoutButton->Name = L"LogoutButton";
			this->LogoutButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LogoutButton->Size = System::Drawing::Size(128, 47);
			this->LogoutButton->TabIndex = 3;
			this->LogoutButton->Text = L"Log Out";
			this->LogoutButton->UseVisualStyleBackColor = false;
			// 
			// SalesRButton
			// 
			this->SalesRButton->BackColor = System::Drawing::Color::Black;
			this->SalesRButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SalesRButton.BackgroundImage")));
			this->SalesRButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->SalesRButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SalesRButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SalesRButton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SalesRButton->ForeColor = System::Drawing::Color::White;
			this->SalesRButton->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->SalesRButton->Location = System::Drawing::Point(150, 39);
			this->SalesRButton->Margin = System::Windows::Forms::Padding(9, 11, 9, 11);
			this->SalesRButton->Name = L"SalesRButton";
			this->SalesRButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->SalesRButton->Size = System::Drawing::Size(134, 46);
			this->SalesRButton->TabIndex = 0;
			this->SalesRButton->Text = L"Sales Report";
			this->SalesRButton->UseVisualStyleBackColor = false;
			this->SalesRButton->Click += gcnew System::EventHandler(this, &Page_Reports::SalesRButton_Click);
			// 
			// richText
			// 
			this->richText->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richText->Location = System::Drawing::Point(13, 13);
			this->richText->Margin = System::Windows::Forms::Padding(4);
			this->richText->Name = L"richText";
			this->richText->Size = System::Drawing::Size(1011, 547);
			this->richText->TabIndex = 6;
			this->richText->Text = L"";
			this->richText->TextChanged += gcnew System::EventHandler(this, &Page_Reports::richText_TextChanged);
			// 
			// Page_Reports
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1045, 690);
			this->Controls->Add(this->richText);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Page_Reports";
			this->Text = L"                                                                                 "
				L"                                                                                "
				L"                              ";
			this->Load += gcnew System::EventHandler(this, &Page_Reports::Page_Reports_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void SalesRButton_Click(System::Object^  sender, System::EventArgs^  e) {

		richText->Clear();

		time_t now = time(0);
		string dt = ctime(&now);

		String^ time = gcnew String(dt.c_str());

		richText->AppendText("Sales Summary: ");
		richText->AppendText("\n\nReport Printed on:\t" + time);

		int textCount = richText->TextLength;

		richText->AppendText("ITEM ID\tITEM NAME\tSOLD QTY\tSALES\tCOST OF GOODS SOLD\tSALES PROFIT\n");
		richText->AppendText("_____________________________________________________________________________\n");


		richText->Select(0, 16);
		richText->SelectionColor = System::Drawing::Color::Black;
		richText->SelectionFont = (gcnew System::Drawing::Font(L"Calibri", 20.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));

		//richText->Select(textCount, textCount + 72 + 77);
		//richText->SelectionFont = (gcnew System::Drawing::Font(L"Calibri", 12.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		//	static_cast<System::Byte>(0)));

		int index = invptr->get_index();
		int qty_all = 0;
		int sales_all = 0;
		int cost_all = 0;
		int profit_all = 0;

		for (int i = 0; i < index; i++) {

			string id = invptr->get_id(i);
			string name = invptr->get_name(i);
			int qty = 0;

			for (int j = 0; j < cust->get_customers(); j++) {

				if (cust->get_qty(id, j) != -1) {
					qty += cust->get_qty(id, j);
				}
			}

			int sales = int(qty * invptr->get_price(i));
			int cost = int(qty * invptr->get_cost(i));
			int profit = sales - cost;

			qty_all += qty;
			sales_all += sales;
			cost_all += cost;
			profit_all += profit;

			//String^ appText = gcnew String(id.c_str() + 
				//					"\t\t" + name.c_str + 
					//				"\t\t" + to_string(qty).c_str() + 
						//			"\t\tRs" + to_string(total).c_str() + 
							//		"\t\tRs" + to_string(cost).c_str() + 
								//	"\t\tRs" + to_string(profit).c_str()) + "\n";

			String^ idText = gcnew String(id.c_str());
			String^ tabText = gcnew String("\t\t");
			String^ tabRsText = gcnew String("\t\tRs");
			String^ nameText = gcnew String(name.c_str());
			String^ totalText = gcnew String(to_string(sales).c_str());
			String^ qtyText = gcnew String(to_string(qty).c_str());
			String^ costText = gcnew String(to_string(cost).c_str());
			String^ profitText = gcnew String(to_string(profit).c_str());

			richText->AppendText(idText + tabText +
				nameText + tabText +
				qtyText + tabRsText +
				totalText + tabRsText +
				costText + tabRsText + profitText + "\n");

		}

		richText->AppendText("\n\nTotal Quantity Sold: ");
		richText->AppendText(Convert::ToString(qty_all));
		richText->AppendText("\nTotal Revenue: Rs");
		richText->AppendText(Convert::ToString(sales_all));
		richText->AppendText("\nTotal Cost: Rs");
		richText->AppendText(Convert::ToString(cost_all));
		richText->AppendText("\nTotal Profit/Loss: Rs");
		richText->AppendText(Convert::ToString(profit_all));
	}
	private: System::Void ReturnButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void richText_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Page_Reports_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}