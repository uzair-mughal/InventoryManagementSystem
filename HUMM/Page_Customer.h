#pragma once
#include "Inventory.h"
#include "Order.h"
#include "Page_Customer_Info.h"
namespace HUMM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page_Customer
	/// </summary>
	public ref class Page_Customer : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Inventory *inv;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ListBox^  detail;







	private: System::Windows::Forms::DataGridView^  outputwindow;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  order_serial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  c_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  bill;
	private: System::Windows::Forms::DataGridViewButtonColumn^  details;








	public:

	public:

		Customers *customer;
		Page_Customer(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Page_Customer(Form ^obj, Inventory *inv, Customers *customer)
		{
			this->obj = obj;
			this->inv = inv;
			this->customer = customer;
			InitializeComponent();
			//loadorders();
			//
			//TODO: Add the constructor code here
			//
		}

		void loadorders()
		{
			outputwindow->Rows->Clear();
			if (customer->get_customers() != 0)
			{
				outputwindow->Rows->Add(customer->get_customers());
				for (int i = 0; i < customer->get_customers(); i++)
				{
					String ^code = gcnew String(customer->get_code(i).c_str());
					outputwindow->Rows[i]->Cells[0]->Value = code;
					String ^name = gcnew String(customer->get_name(i).c_str());
					outputwindow->Rows[i]->Cells[1]->Value = name;
					String ^date = gcnew String(customer->get_date(i).c_str());
					outputwindow->Rows[i]->Cells[2]->Value = date;
					outputwindow->Rows[i]->Cells[3]->Value = customer->get_bill(i);
				}
			}
		}







	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Page_Customer()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Page_Customer::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->detail = (gcnew System::Windows::Forms::ListBox());
			this->outputwindow = (gcnew System::Windows::Forms::DataGridView());
			this->order_serial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bill = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->details = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outputwindow))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(20, 39);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Return";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Page_Customer::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(167, 39);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 42);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Add Order";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Page_Customer::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(315, 39);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 42);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Delete Order";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Page_Customer::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Gold;
			this->groupBox1->Location = System::Drawing::Point(35, 561);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(483, 107);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Opertaions:";
			// 
			// detail
			// 
			this->detail->FormattingEnabled = true;
			this->detail->ItemHeight = 16;
			this->detail->Location = System::Drawing::Point(593, 100);
			this->detail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->detail->Name = L"detail";
			this->detail->Size = System::Drawing::Size(424, 436);
			this->detail->TabIndex = 5;
			this->detail->SelectedIndexChanged += gcnew System::EventHandler(this, &Page_Customer::listBox1_SelectedIndexChanged);
			// 
			// outputwindow
			// 
			this->outputwindow->AllowUserToAddRows = false;
			this->outputwindow->AllowUserToDeleteRows = false;
			this->outputwindow->BackgroundColor = System::Drawing::Color::White;
			this->outputwindow->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->outputwindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->outputwindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->order_serial,
					this->c_name, this->date, this->bill, this->details
			});
			this->outputwindow->Location = System::Drawing::Point(35, 47);
			this->outputwindow->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->outputwindow->Name = L"outputwindow";
			this->outputwindow->ReadOnly = true;
			this->outputwindow->Size = System::Drawing::Size(537, 487);
			this->outputwindow->TabIndex = 0;
			this->outputwindow->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Page_Customer::dataGridView1_CellContentClick);
			// 
			// order_serial
			// 
			this->order_serial->HeaderText = L"Customer code";
			this->order_serial->Name = L"order_serial";
			this->order_serial->ReadOnly = true;
			// 
			// c_name
			// 
			this->c_name->HeaderText = L"Customer Name";
			this->c_name->Name = L"c_name";
			this->c_name->ReadOnly = true;
			// 
			// date
			// 
			this->date->HeaderText = L"Date";
			this->date->Name = L"date";
			this->date->ReadOnly = true;
			// 
			// bill
			// 
			this->bill->HeaderText = L"Total Bill";
			this->bill->Name = L"bill";
			this->bill->ReadOnly = true;
			// 
			// details
			// 
			this->details->HeaderText = L"Action";
			this->details->Name = L"details";
			this->details->ReadOnly = true;
			this->details->Text = L"View Details";
			this->details->UseColumnTextForButtonValue = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label2);
			this->panel2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel2->Location = System::Drawing::Point(593, 47);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(109, 41);
			this->panel2->TabIndex = 25;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(3, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 29);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Details:";
			// 
			// Page_Customer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1049, 694);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->detail);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->outputwindow);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Page_Customer";
			this->Text = L"Page_Customer";
			this->Load += gcnew System::EventHandler(this, &Page_Customer::Page_Customer_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &Page_Customer::Page_Customer_VisibleChanged);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outputwindow))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (e->ColumnIndex == 4 && e->RowIndex >= 0)
		{
			int cust = e->RowIndex;
			String ^code = gcnew String(customer->get_code(cust).c_str());
			String ^name = gcnew String(customer->get_name(cust).c_str());
			String ^date = gcnew String(customer->get_date(cust).c_str());
			detail->Items->Clear();
			detail->Items->Add("Code: " + code + " Name: " + name + " Date: " + date + " Total Bill: $" + Convert::ToString(customer->get_bill(cust)));
			detail->Items->Add("CODE     NAME     QUANTITY     PRICE");
			for (int i = 0; i < customer->get_cust_orders(cust); i++)
			{
				String ^pcode = gcnew String(customer->get_code(i, cust).c_str());
				String ^pname = gcnew String(inv->get_name(customer->get_code(i, cust)).c_str());
				
				detail->Items->Add( pcode + "       " + pname + "      " + Convert::ToString(customer->get_qty(i, cust)) + "      " + Convert::ToString(customer->get_price(i, cust)));
			}
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		obj->Show();
		this->Hide();

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Page_Customer_Info ^cinfo = gcnew Page_Customer_Info(this, inv, customer);
		cinfo->Show();
		this->Hide();

	}
	private: System::Void Page_Customer_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
		loadorders();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void Page_Customer_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//DELETE CUSTOMER
	for (int i = 0; i < customer->get_customers(); i++)
	{
		if (outputwindow->Rows[i]->Cells[0]->Selected == true)
		{
			customer->removeCustomer(customer->get_code(i));
			MessageBox::Show("Customer Deleted!");
			loadorders();

			break;
		}
	}
}
};
}
