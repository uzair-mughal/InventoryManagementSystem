#pragma once
#include <string.h>
#include"Inventory.h"
#include"Vendor.h"
#include"User.h"
#include <msclr\marshal_cppstd.h>

namespace HUMM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page4_Products
	/// </summary>
	public ref class Page4_Products : public System::Windows::Forms::Form
	{
	public:
		
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Cost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  qty;
	private: System::Windows::Forms::DataGridViewButtonColumn^  remove;

	public:
		
	private: System::Windows::Forms::GroupBox^  groupBox2;
	public:
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  vendor_idText;
	private: System::Windows::Forms::TextBox^  vendor_nameText;
	private: System::Windows::Forms::TextBox^  priceText;






	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::TextBox^  costText;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  qtyText;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  idText;

	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  expandButton;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  nameText;

	public:
		Form ^obj;
		User *u;
	private: System::Windows::Forms::Label^  label8;
	public:
		Inventory *invptr;
		Vendor *vend;

		public:Page4_Products(Form ^obj1, Vendor *vend, Inventory *invptr, User *u)
		{
			obj = obj1;
			this->vend = vend;
			this->invptr = invptr;
			this->u = u;
			InitializeComponent();
			invptr = new Inventory();
			loadprod();
			//
			//TODO: Add the constructor code here
			//
		}
		void empty() {

			vendor_nameText->Text == "";
			vendor_idText->Text == "";
		}

		void loadprod()
		{
			//dataGridView1.Rows.Clear();
			outputwindow->Rows->Clear();
			if (invptr->get_index() != 0)
			{
				outputwindow->Rows->Add(invptr->get_index());
				for (int i = 0; i < invptr->get_index(); i++)
				{
					String ^s1 = gcnew String(invptr->get_id(i).c_str());
					outputwindow->Rows[i]->Cells[0]->Value = s1;
					String ^s = gcnew String(invptr->get_name(i).c_str());
					outputwindow->Rows[i]->Cells[1]->Value = s;
					outputwindow->Rows[i]->Cells[2]->Value = invptr->get_cost(i);
					outputwindow->Rows[i]->Cells[3]->Value = invptr->get_price(i);
					outputwindow->Rows[i]->Cells[4]->Value = invptr->get_qty(i);
				}
			}
		}

		Page4_Products(void)
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
		~Page4_Products()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ReturnButton;
private: System::Windows::Forms::Button^  updatebutton;
	protected:











	private: System::Windows::Forms::DataGridView^  outputwindow;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Page4_Products::typeid));
			this->ReturnButton = (gcnew System::Windows::Forms::Button());
			this->updatebutton = (gcnew System::Windows::Forms::Button());
			this->outputwindow = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->qty = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->remove = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->nameText = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->vendor_idText = (gcnew System::Windows::Forms::TextBox());
			this->vendor_nameText = (gcnew System::Windows::Forms::TextBox());
			this->priceText = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->costText = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->qtyText = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->idText = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->expandButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outputwindow))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ReturnButton
			// 
			this->ReturnButton->BackColor = System::Drawing::Color::DimGray;
			this->ReturnButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ReturnButton.BackgroundImage")));
			this->ReturnButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ReturnButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ReturnButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ReturnButton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReturnButton->ForeColor = System::Drawing::Color::White;
			this->ReturnButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ReturnButton->Location = System::Drawing::Point(13, 28);
			this->ReturnButton->Margin = System::Windows::Forms::Padding(9, 11, 9, 11);
			this->ReturnButton->Name = L"ReturnButton";
			this->ReturnButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ReturnButton->Size = System::Drawing::Size(133, 37);
			this->ReturnButton->TabIndex = 4;
			this->ReturnButton->Text = L"Return";
			this->ReturnButton->UseVisualStyleBackColor = false;
			this->ReturnButton->Click += gcnew System::EventHandler(this, &Page4_Products::button3_Click);
			// 
			// updatebutton
			// 
			this->updatebutton->BackColor = System::Drawing::Color::Black;
			this->updatebutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updatebutton.BackgroundImage")));
			this->updatebutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->updatebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->updatebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->updatebutton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updatebutton->ForeColor = System::Drawing::Color::White;
			this->updatebutton->Location = System::Drawing::Point(307, 28);
			this->updatebutton->Margin = System::Windows::Forms::Padding(9, 11, 9, 11);
			this->updatebutton->Name = L"updatebutton";
			this->updatebutton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->updatebutton->Size = System::Drawing::Size(133, 37);
			this->updatebutton->TabIndex = 5;
			this->updatebutton->Text = L"Update\r\n";
			this->updatebutton->UseVisualStyleBackColor = false;
			this->updatebutton->Click += gcnew System::EventHandler(this, &Page4_Products::button1_Click);
			// 
			// outputwindow
			// 
			this->outputwindow->AllowUserToAddRows = false;
			this->outputwindow->AllowUserToDeleteRows = false;
			this->outputwindow->BackgroundColor = System::Drawing::Color::White;
			this->outputwindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->outputwindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ID, this->name,
					this->Cost, this->price, this->qty, this->remove
			});
			this->outputwindow->Location = System::Drawing::Point(25, 40);
			this->outputwindow->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->outputwindow->Name = L"outputwindow";
			this->outputwindow->Size = System::Drawing::Size(440, 596);
			this->outputwindow->TabIndex = 8;
			this->outputwindow->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Page4_Products::outputwindow_CellContentClick);
			this->outputwindow->CellMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &Page4_Products::outputwindow_CellMouseDoubleClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"Product ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			// 
			// name
			// 
			this->name->HeaderText = L"Product Name";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			// 
			// Cost
			// 
			this->Cost->HeaderText = L"Product Cost";
			this->Cost->Name = L"Cost";
			this->Cost->ReadOnly = true;
			// 
			// price
			// 
			this->price->HeaderText = L"Selling Price";
			this->price->Name = L"price";
			this->price->ReadOnly = true;
			// 
			// qty
			// 
			this->qty->HeaderText = L"Quantity";
			this->qty->Name = L"qty";
			this->qty->ReadOnly = true;
			// 
			// remove
			// 
			this->remove->HeaderText = L"Remove";
			this->remove->Name = L"remove";
			this->remove->Text = L"Remove";
			this->remove->UseColumnTextForButtonValue = true;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox2.BackgroundImage")));
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->nameText);
			this->groupBox2->Controls->Add(this->groupBox1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->vendor_idText);
			this->groupBox2->Controls->Add(this->vendor_nameText);
			this->groupBox2->Controls->Add(this->priceText);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->costText);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->qtyText);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->idText);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::Gold;
			this->groupBox2->Location = System::Drawing::Point(473, 81);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Size = System::Drawing::Size(533, 560);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Page4_Products::groupBox2_Enter);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(19, 37);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(333, 24);
			this->label8->TabIndex = 59;
			this->label8->Text = L"Products Update, Purchase and Insert:";
			// 
			// nameText
			// 
			this->nameText->AcceptsReturn = true;
			this->nameText->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->nameText->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->nameText->ForeColor = System::Drawing::Color::Black;
			this->nameText->Location = System::Drawing::Point(209, 137);
			this->nameText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->nameText->Name = L"nameText";
			this->nameText->Size = System::Drawing::Size(297, 28);
			this->nameText->TabIndex = 58;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->ReturnButton);
			this->groupBox1->Controls->Add(this->updatebutton);
			this->groupBox1->Controls->Add(this->saveButton);
			this->groupBox1->Location = System::Drawing::Point(47, 438);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(459, 78);
			this->groupBox1->TabIndex = 57;
			this->groupBox1->TabStop = false;
			// 
			// saveButton
			// 
			this->saveButton->BackColor = System::Drawing::Color::Black;
			this->saveButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveButton.BackgroundImage")));
			this->saveButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->saveButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->saveButton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveButton->ForeColor = System::Drawing::Color::White;
			this->saveButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->saveButton->Location = System::Drawing::Point(160, 28);
			this->saveButton->Margin = System::Windows::Forms::Padding(9, 11, 9, 11);
			this->saveButton->Name = L"saveButton";
			this->saveButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->saveButton->Size = System::Drawing::Size(133, 37);
			this->saveButton->TabIndex = 45;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = false;
			this->saveButton->Click += gcnew System::EventHandler(this, &Page4_Products::saveButton_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(21, 140);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 21);
			this->label7->TabIndex = 56;
			this->label7->Text = L"Item Name:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(21, 389);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 21);
			this->label4->TabIndex = 55;
			this->label4->Text = L"Vendor Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(21, 353);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 21);
			this->label1->TabIndex = 54;
			this->label1->Text = L"Vendor ID:";
			// 
			// vendor_idText
			// 
			this->vendor_idText->AcceptsReturn = true;
			this->vendor_idText->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->vendor_idText->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->vendor_idText->ForeColor = System::Drawing::Color::Black;
			this->vendor_idText->Location = System::Drawing::Point(209, 345);
			this->vendor_idText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->vendor_idText->Name = L"vendor_idText";
			this->vendor_idText->Size = System::Drawing::Size(112, 28);
			this->vendor_idText->TabIndex = 53;
			this->vendor_idText->TextChanged += gcnew System::EventHandler(this, &Page4_Products::vendor_id_TextChanged);
			// 
			// vendor_nameText
			// 
			this->vendor_nameText->AcceptsReturn = true;
			this->vendor_nameText->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->vendor_nameText->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->vendor_nameText->ForeColor = System::Drawing::Color::Black;
			this->vendor_nameText->Location = System::Drawing::Point(209, 380);
			this->vendor_nameText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->vendor_nameText->Name = L"vendor_nameText";
			this->vendor_nameText->Size = System::Drawing::Size(297, 28);
			this->vendor_nameText->TabIndex = 52;
			this->vendor_nameText->TextChanged += gcnew System::EventHandler(this, &Page4_Products::vendor_name_TextChanged);
			// 
			// priceText
			// 
			this->priceText->AcceptsReturn = true;
			this->priceText->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->priceText->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->priceText->ForeColor = System::Drawing::Color::Black;
			this->priceText->Location = System::Drawing::Point(209, 247);
			this->priceText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->priceText->Name = L"priceText";
			this->priceText->Size = System::Drawing::Size(112, 28);
			this->priceText->TabIndex = 49;
			this->priceText->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Page4_Products::priceText_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(21, 256);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 21);
			this->label3->TabIndex = 48;
			this->label3->Text = L"Sell Price:";
			// 
			// costText
			// 
			this->costText->AcceptsReturn = true;
			this->costText->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->costText->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->costText->ForeColor = System::Drawing::Color::Black;
			this->costText->Location = System::Drawing::Point(209, 210);
			this->costText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->costText->Name = L"costText";
			this->costText->Size = System::Drawing::Size(112, 28);
			this->costText->TabIndex = 43;
			this->costText->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Page4_Products::costText_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(21, 219);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 21);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Cost Price:";
			// 
			// qtyText
			// 
			this->qtyText->AcceptsReturn = true;
			this->qtyText->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->qtyText->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->qtyText->ForeColor = System::Drawing::Color::Black;
			this->qtyText->Location = System::Drawing::Point(209, 174);
			this->qtyText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->qtyText->Name = L"qtyText";
			this->qtyText->Size = System::Drawing::Size(112, 28);
			this->qtyText->TabIndex = 41;
			this->qtyText->TextChanged += gcnew System::EventHandler(this, &Page4_Products::qtyText_TextChanged);
			this->qtyText->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Page4_Products::qtyText_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(21, 182);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 21);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Quantity:";
			// 
			// idText
			// 
			this->idText->AcceptsReturn = true;
			this->idText->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->idText->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->idText->ForeColor = System::Drawing::Color::Black;
			this->idText->Location = System::Drawing::Point(209, 100);
			this->idText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->idText->Name = L"idText";
			this->idText->Size = System::Drawing::Size(112, 28);
			this->idText->TabIndex = 37;
			this->idText->TextChanged += gcnew System::EventHandler(this, &Page4_Products::textBox5_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(21, 108);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 21);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Item Code:";
			// 
			// expandButton
			// 
			this->expandButton->BackColor = System::Drawing::Color::White;
			this->expandButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->expandButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->expandButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->expandButton->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold));
			this->expandButton->ForeColor = System::Drawing::Color::Black;
			this->expandButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->expandButton->Location = System::Drawing::Point(437, 78);
			this->expandButton->Margin = System::Windows::Forms::Padding(9, 11, 9, 11);
			this->expandButton->Name = L"expandButton";
			this->expandButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->expandButton->Size = System::Drawing::Size(27, 27);
			this->expandButton->TabIndex = 56;
			this->expandButton->Text = L">";
			this->expandButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->expandButton->UseVisualStyleBackColor = false;
			this->expandButton->Click += gcnew System::EventHandler(this, &Page4_Products::button6_Click);
			// 
			// Page4_Products
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1049, 694);
			this->Controls->Add(this->expandButton);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->outputwindow);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Page4_Products";
			this->Text = L"HS Inventory Controller";
			this->Load += gcnew System::EventHandler(this, &Page4_Products::Page4_Products_Load);
			this->Shown += gcnew System::EventHandler(this, &Page4_Products::Page4_Products_Shown);
			this->VisibleChanged += gcnew System::EventHandler(this, &Page4_Products::Page4_Products_VisibleChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outputwindow))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	public:

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

		string v_name = msclr::interop::marshal_as<std::string>(vendor_nameText->Text);
		string v_id = msclr::interop::marshal_as<std::string>(vendor_idText->Text);
		string p_id = msclr::interop::marshal_as<std::string>(idText->Text);
		string p_name = msclr::interop::marshal_as<std::string>(nameText->Text);
		double p_cost = Convert::ToDouble(costText->Text);
		double p_price = Convert::ToDouble(priceText->Text);
		int p_qty = Convert::ToInt32(qtyText->Text);

		if (v_name != "" && v_id != "") {

			if (invptr->get_id_search(p_id) == -1) {

				Vendor v(v_id, v_name, p_name, p_cost, p_qty);
				v.insert_vendor(u->getuname(), v_id);
				invptr->addProduct(p_id, p_name, p_cost, p_price, p_qty);
				loadprod();
			}
			else
			{
				MessageBox::Show("Product already exists!");
			}

		}
		else {

			if (invptr->get_id_search(p_id) == -1) {

				invptr->addProduct(p_id, p_name, p_cost, p_price, p_qty);
				loadprod();
			}
			else
			{
				MessageBox::Show("Product already exists!");
			}
		}

		//		Previous Code
		//		this->Hide();
		//		Products_AddNew^ p = gcnew Products_AddNew(this , invptr, u);
		//		p->Show();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		if (vendor_nameText->Text != "" || vendor_idText->Text != "") {

			MessageBox::Show("You Can't Use Vendor Details To Update A Product!");
			empty();
			return;
		}
		if(idText->Text == "" || nameText->Text == "" || costText->Text == "" || priceText->Text == "" || qtyText->Text == ""){

			MessageBox::Show("Please Fill All The Required Fileds!");
			return;
		}
		else {

			string p_id = msclr::interop::marshal_as<std::string>(idText->Text);
			string p_name = msclr::interop::marshal_as<std::string>(nameText->Text);
			double p_cost = Convert::ToDouble(costText->Text);
			double p_price = Convert::ToDouble(priceText->Text);
			int p_qty = Convert::ToInt32(qtyText->Text);

			if (invptr->update_product(p_id, p_name, p_cost, p_price, p_qty, u->getuname())) {

				MessageBox::Show("Product Details Updated!");
				loadprod();
			}
			else {

				MessageBox::Show("No Such Product ID Exists!");
			}

		}
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		
		/*if (search->TextLength != 0)
		{
			int r = invptr->get_id_search(msclr::interop::marshal_as<std::string>(search->Text));
			if (r != -1)
				outputwindow->Rows[r]->Selected = true;
			else
				MessageBox::Show("No product found!");
		}*/
	}
	private: System::Void outputwindow_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

		if (e->ColumnIndex == 5 && e->RowIndex >= 0)
		{
			invptr->removeProduct(e->RowIndex);
			loadprod();
		}

	}
	private: System::Void Page4_Products_Shown(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void Page4_Products_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
		loadprod();
	}
	private: System::Void Page4_Products_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void vendor_name_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void vendor_id_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
			 bool flag = false;
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		//795, 500
		//519, 0
		if (!flag) {
			this->outputwindow->Size = System::Drawing::Size(648, 500);
			this->expandButton->Text = L"<";
			this->expandButton->Location = System::Drawing::Point(650, 61);
			this->groupBox2->Visible = FALSE;
			flag = true;
		}
		else {
			this->outputwindow->Size = System::Drawing::Size(400, 500);
			this->expandButton->Text = L">";
			this->expandButton->Location = System::Drawing::Point(400, 61);
			this->groupBox2->Visible = TRUE;
			flag = false;
		}
	}
	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e) {

		if (vendor_nameText->Text == "" && vendor_idText->Text == "") {

			if (idText->Text == "" || nameText->Text == "" || costText->Text == "" || priceText->Text == "" || qtyText->Text == "") {

				MessageBox::Show("Fill The Remaining Product Details!");
				return;
			}
			else {

				string p_id = msclr::interop::marshal_as<std::string>(idText->Text);
				string p_name = msclr::interop::marshal_as<std::string>(nameText->Text);
				double p_cost = Convert::ToDouble(costText->Text);
				double p_price = Convert::ToDouble(priceText->Text);
				int p_qty = Convert::ToInt32(qtyText->Text);

				if (invptr->get_id_search(p_id) == -1) {

					invptr->addProduct(p_id, p_name, p_cost, p_price, p_qty);
					loadprod();
					return;
				}
				else
				{
					MessageBox::Show("Product already exists!");
					return;
				}
			}
		}

		else if (vendor_nameText->Text == "" || vendor_idText->Text == "" || idText->Text == "" || nameText->Text == "" || costText->Text == "" || priceText->Text == "" || qtyText->Text == "") {

			MessageBox::Show("Fill The Vendor Details And Remaining Product Details!");
			return;
		}
		else {

			string v_name = msclr::interop::marshal_as<std::string>(vendor_nameText->Text);
			string v_id = msclr::interop::marshal_as<std::string>(vendor_idText->Text);
			string p_id = msclr::interop::marshal_as<std::string>(idText->Text);
			string p_name = msclr::interop::marshal_as<std::string>(nameText->Text);
			double p_cost = Convert::ToDouble(costText->Text);
			double p_price = Convert::ToDouble(priceText->Text);
			int p_qty = Convert::ToInt32(qtyText->Text);

			if (invptr->get_id_search(p_id) == -1) {

				Vendor v(v_id, v_name, p_name, p_cost, p_qty);
				v.insert_vendor(u->getuname(), v_id);
				invptr->addProduct(p_id, p_name, p_cost, p_price, p_qty);
				loadprod();
				return;
			}
			else
			{
				MessageBox::Show("Product already exists!");
				return;
			}
		}
		
		
	}
	private: System::Void qtyText_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void qtyText_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		{
			e->Handled = true;
		}
	}
	private: System::Void costText_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 && e->KeyChar != '.')
		{
			e->Handled = true;
		}
	}
	private: System::Void priceText_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 && e->KeyChar != '.')
		{
			e->Handled = true;
		}
	}
	private: System::Void search_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void outputwindow_CellMouseDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
	
		String^ id = gcnew String(invptr->get_id(e->RowIndex).c_str());
		String^ name = gcnew String(invptr->get_name(e->RowIndex).c_str());

		idText->Text = id;
		nameText->Text = name;
		qtyText->Text = Convert::ToString(invptr->get_qty(e->RowIndex));
		costText->Text = Convert::ToString(invptr->get_cost(e->RowIndex));
		priceText->Text = Convert::ToString(invptr->get_price(e->RowIndex));

		//int index = vend->get_index(invptr->get_name(e->RowIndex));

		//if (index != -1)	{
			//String^ v_id = gcnew String(vend->get_id(index).c_str());
			//String^ v_name = gcnew String(vend->get_name(index).c_str());

			//vendor_idText->Text = v_id;
			//vendor_nameText->Text = v_name;
		//}
	}
};
}