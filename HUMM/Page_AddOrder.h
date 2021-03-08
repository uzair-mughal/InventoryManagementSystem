#pragma once
#include "Inventory.h"
#include "Order.h"

namespace HUMM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page_AddOrder
	/// </summary>
	public ref class Page_AddOrder : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		Inventory *inv;
		Customers *customer;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  code;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  product_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  product_price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  product_qty;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Action;







	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  order_code;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  order_qty;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  order_cost;
	private: System::Windows::Forms::DataGridViewButtonColumn^  remove;





	public:

	public:
	
			 int number;
		Page_AddOrder(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Page_AddOrder(Form ^obj, Inventory *inv, Customers *customer)
		{
			this->obj = obj;
			this->inv = inv;
			this->customer = customer;
			number = customer->get_customers() - 1;
			InitializeComponent();
			loadinventory();
			//
			//TODO: Add the constructor code here
			//
		}
		/*Page_AddOrder(Inventory *inv)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}*/
		void loadinventory()
		{
			//dataGridView1.Rows.Clear();
			inventory->Rows->Clear();
			if (inv->get_index() != 0)
			{
				inventory->Rows->Add(inv->get_index());
				for (int i = 0; i < inv->get_index(); i++)
				{
					String ^s1 = gcnew String(inv->get_id(i).c_str());
					inventory->Rows[i]->Cells[0]->Value = s1;
					String ^s = gcnew String(inv->get_name(i).c_str());
					inventory->Rows[i]->Cells[1]->Value = s;
					inventory->Rows[i]->Cells[2]->Value = inv->get_price(i);
					inventory->Rows[i]->Cells[3]->Value = inv->get_qty(i);
				}
			}
			String ^temp = gcnew String(customer->get_name(number).c_str());
			id->Text = temp;
			delete temp;
			temp = gcnew String(customer->get_code(number).c_str());
			name->Text = temp;
		}
		void loadorders()
		{
			order_window->Rows-> Clear();
			if (customer->get_cust_orders(number) != 0)
			{
				order_window->Rows->Add(customer->get_cust_orders(number));
				for (int i = 0; i < customer->get_cust_orders(number); i++)
				{
					String ^prod_code = gcnew String(customer->get_code(i, number).c_str());
					String ^prod_name = gcnew String(inv->get_name(customer->get_code(i, number)).c_str());
					order_window->Rows[i]->Cells[0]->Value = prod_code;
					order_window->Rows[i]->Cells[1]->Value = prod_name;
					order_window->Rows[i]->Cells[2]->Value = customer->get_qty(i, number);
					order_window->Rows[i]->Cells[3]->Value = double(inv->get_price(customer->get_code(i, number)) * customer->get_qty(i, number));
				
				}
			}
		}
	private: System::Windows::Forms::Label^  id;

	private: System::Windows::Forms::Label^  name;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Page_AddOrder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  inventory;
	protected:





	private: System::Windows::Forms::DataGridView^  order_window;





	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Page_AddOrder::typeid));
			this->inventory = (gcnew System::Windows::Forms::DataGridView());
			this->code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->product_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->product_price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->product_qty = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Action = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->order_window = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->name = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->order_code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->order_qty = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->order_cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->remove = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inventory))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->order_window))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// inventory
			// 
			this->inventory->AllowUserToAddRows = false;
			this->inventory->AllowUserToDeleteRows = false;
			this->inventory->BackgroundColor = System::Drawing::Color::White;
			this->inventory->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->inventory->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->code, this->product_name,
					this->product_price, this->product_qty, this->Action
			});
			this->inventory->Location = System::Drawing::Point(20, 162);
			this->inventory->Name = L"inventory";
			this->inventory->ReadOnly = true;
			this->inventory->Size = System::Drawing::Size(408, 275);
			this->inventory->TabIndex = 0;
			this->inventory->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Page_AddOrder::inventory_CellContentClick);
			// 
			// code
			// 
			this->code->HeaderText = L"Product Code";
			this->code->Name = L"code";
			this->code->ReadOnly = true;
			// 
			// product_name
			// 
			this->product_name->HeaderText = L"Product Name";
			this->product_name->Name = L"product_name";
			this->product_name->ReadOnly = true;
			// 
			// product_price
			// 
			this->product_price->HeaderText = L"Product Price";
			this->product_price->Name = L"product_price";
			this->product_price->ReadOnly = true;
			// 
			// product_qty
			// 
			this->product_qty->HeaderText = L"Available Quantity";
			this->product_qty->Name = L"product_qty";
			this->product_qty->ReadOnly = true;
			// 
			// Action
			// 
			this->Action->HeaderText = L"Action";
			this->Action->Name = L"Action";
			this->Action->ReadOnly = true;
			this->Action->Text = L"Buy";
			this->Action->UseColumnTextForButtonValue = true;
			// 
			// order_window
			// 
			this->order_window->AllowUserToAddRows = false;
			this->order_window->BackgroundColor = System::Drawing::Color::White;
			this->order_window->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->order_window->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->order_code,
					this->Column1, this->order_qty, this->order_cost, this->remove
			});
			this->order_window->Location = System::Drawing::Point(444, 162);
			this->order_window->Name = L"order_window";
			this->order_window->ReadOnly = true;
			this->order_window->Size = System::Drawing::Size(414, 275);
			this->order_window->TabIndex = 1;
			this->order_window->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Page_AddOrder::order_window_CellContentClick);
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
			this->button1->Location = System::Drawing::Point(26, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Return";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Page_AddOrder::button1_Click);
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
			this->button2->Location = System::Drawing::Point(136, 38);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 34);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Confirm Order";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Page_AddOrder::button2_Click);
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->BackColor = System::Drawing::Color::Transparent;
			this->name->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::Color::White;
			this->name->Location = System::Drawing::Point(156, 20);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(57, 23);
			this->name->TabIndex = 4;
			this->name->Text = L"Name";
			// 
			// id
			// 
			this->id->AutoSize = true;
			this->id->BackColor = System::Drawing::Color::Transparent;
			this->id->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->ForeColor = System::Drawing::Color::White;
			this->id->Location = System::Drawing::Point(157, 58);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(50, 23);
			this->id->TabIndex = 5;
			this->id->Text = L"Code";
			this->id->Click += gcnew System::EventHandler(this, &Page_AddOrder::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(383, 130);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(46, 20);
			this->textBox1->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gold;
			this->label3->Location = System::Drawing::Point(20, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 23);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Customer Code:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gold;
			this->label4->Location = System::Drawing::Point(13, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(143, 23);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Customer Name:";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Gold;
			this->groupBox1->Location = System::Drawing::Point(20, 454);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(262, 88);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Operations:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(20, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(163, 23);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Available products:";
			this->label5->Click += gcnew System::EventHandler(this, &Page_AddOrder::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(440, 122);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(158, 23);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Products Selected:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(298, 124);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 23);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Quantity:";
			// 
			// order_code
			// 
			this->order_code->HeaderText = L"Product Code";
			this->order_code->Name = L"order_code";
			this->order_code->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Product Name";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// order_qty
			// 
			this->order_qty->HeaderText = L"Quantity Bought";
			this->order_qty->Name = L"order_qty";
			this->order_qty->ReadOnly = true;
			// 
			// order_cost
			// 
			this->order_cost->HeaderText = L"Total Price";
			this->order_cost->Name = L"order_cost";
			this->order_cost->ReadOnly = true;
			// 
			// remove
			// 
			this->remove->HeaderText = L"Action";
			this->remove->Name = L"remove";
			this->remove->ReadOnly = true;
			this->remove->Text = L"Remove";
			this->remove->UseColumnTextForButtonValue = true;
			// 
			// Page_AddOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(868, 564);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->id);
			this->Controls->Add(this->name);
			this->Controls->Add(this->order_window);
			this->Controls->Add(this->inventory);
			this->Name = L"Page_AddOrder";
			this->Text = L"Page_AddOrder";
			this->Load += gcnew System::EventHandler(this, &Page_AddOrder::Page_AddOrder_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &Page_AddOrder::Page_AddOrder_VisibleChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inventory))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->order_window))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Page_AddOrder_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void inventory_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->ColumnIndex == 4 && e->RowIndex >= 0)
	{
		int prod = e->RowIndex;
		int qty;
		if (textBox1->TextLength != 0)
		{
			qty = Convert::ToInt32(textBox1->Text);
			if (qty <= inv->get_qty(prod))
			{
				if(customer->get_index(inv->get_id(prod), number) == -1)
				{
					customer->add_item(inv->get_id(prod), qty, inv->get_price(prod), number);
					inv->change_quantity(prod, inv->get_qty(prod) - qty);
					String ^prod_code = gcnew String(inv->get_id(prod).c_str());
					String ^prod_name = gcnew String(inv->get_name(prod).c_str());
					order_window->Rows->Add();
					order_window->Rows[customer->get_cust_orders(number) - 1]->Cells[0]->Value = prod_code;
					order_window->Rows[customer->get_cust_orders(number) - 1]->Cells[1]->Value = prod_name;
					order_window->Rows[customer->get_cust_orders(number) - 1]->Cells[2]->Value = qty;
					order_window->Rows[customer->get_cust_orders(number) - 1]->Cells[3]->Value = double(inv->get_price(prod) * qty);
					loadinventory();
				}
				else
				{
					int order = customer->get_index(inv->get_id(prod), number);
					customer->change_order_qty(customer->get_qty(order, number) + qty, number, order);
					inv->change_quantity(prod, inv->get_qty(prod) - qty);
					loadorders();
					loadinventory();
				}
				
			}
			else
				MessageBox::Show("Quantity not available!");
		}
	}	
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	customer->removeCustomer(customer->get_code(number));
	this->Hide();
	obj->Show();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Order added successfully!");
	this->Hide();
	obj->Show();
}
private: System::Void Page_AddOrder_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	loadinventory();
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void order_window_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->ColumnIndex == 4 && e->RowIndex >= 0)
	{
		int ord = e->RowIndex;
		inv->change_quantity(inv->get_id_search(customer->get_code(ord, number)), customer->get_qty(ord, number) + inv->get_qty(customer->get_code(ord, number)));
		customer->remove_item(customer->get_code(ord, number), number);
		MessageBox::Show("Order deleted successfully");
		loadorders();
		loadinventory();
	}
}
};
}
