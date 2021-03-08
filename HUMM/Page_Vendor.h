#pragma once
#include "Vendor.h"
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
	/// Summary for Page_Vendor
	/// </summary>
	public ref class Page_Vendor : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::ListBox^  Products;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;

	public:

		Form^ obj;
		Vendor *vend;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtvendorid;
	private: System::Windows::Forms::TextBox^  txtvendorname;
	private: System::Windows::Forms::TextBox^  txttotal;





	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  vendor_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  vendor_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  total;
	private: System::Windows::Forms::DataGridViewButtonColumn^  remove;




	public:
		User *u;

	public:Page_Vendor(Form^ obj, Vendor *vend, User *u)
	{
		this->obj = obj;
		this->vend = vend;
		this->u = u;
		vend->clear();
		vend->load_vendor(u->getuname());
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
	}
		   void load_vendor()
		   {
			   //dataGridView1.Rows.Clear();
			   outputwindow->Rows->Clear();
			   if (vend->get_index() != 0)
			   {
				   outputwindow->Rows->Add(vend->get_index());
				   for (int i = 0; i < vend->get_index(); i++)
				   {
					   String ^s = gcnew String(vend->get_id(i).c_str());
					   outputwindow->Rows[i]->Cells[0]->Value = s;
					   String ^s1 = gcnew String(vend->get_name(i).c_str());
					   outputwindow->Rows[i]->Cells[1]->Value = s1;
					   outputwindow->Rows[i]->Cells[2]->Value = vend->get_total(i);

				   }
			   }
		   }
		   void empty() {

			   txtvendorname->Text = "";
			   txttotal->Text = "";
			   txtvendorid->Text = "";
		   }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Page_Vendor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ReturnButton;

	protected:



	private: System::Windows::Forms::TextBox^  search;
	private: System::Windows::Forms::DataGridView^  outputwindow;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Page_Vendor::typeid));
			this->ReturnButton = (gcnew System::Windows::Forms::Button());
			this->search = (gcnew System::Windows::Forms::TextBox());
			this->outputwindow = (gcnew System::Windows::Forms::DataGridView());
			this->Products = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtvendorid = (gcnew System::Windows::Forms::TextBox());
			this->txtvendorname = (gcnew System::Windows::Forms::TextBox());
			this->txttotal = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->vendor_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vendor_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->remove = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outputwindow))->BeginInit();
			this->panel1->SuspendLayout();
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
			this->ReturnButton->Location = System::Drawing::Point(38, 731);
			this->ReturnButton->Margin = System::Windows::Forms::Padding(9, 11, 9, 11);
			this->ReturnButton->Name = L"ReturnButton";
			this->ReturnButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ReturnButton->Size = System::Drawing::Size(117, 42);
			this->ReturnButton->TabIndex = 4;
			this->ReturnButton->Text = L"Return";
			this->ReturnButton->UseVisualStyleBackColor = false;
			this->ReturnButton->Click += gcnew System::EventHandler(this, &Page_Vendor::ReturnButton_Click);
			// 
			// search
			// 
			this->search->AcceptsReturn = true;
			this->search->BackColor = System::Drawing::Color::White;
			this->search->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->ForeColor = System::Drawing::Color::Black;
			this->search->Location = System::Drawing::Point(768, 38);
			this->search->Margin = System::Windows::Forms::Padding(4);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(232, 36);
			this->search->TabIndex = 17;
			this->search->Text = L"Type Vendor ID";
			this->search->TextChanged += gcnew System::EventHandler(this, &Page_Vendor::search_TextChanged);
			// 
			// outputwindow
			// 
			this->outputwindow->AllowUserToAddRows = false;
			this->outputwindow->AllowUserToDeleteRows = false;
			this->outputwindow->BackgroundColor = System::Drawing::Color::White;
			this->outputwindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->outputwindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->vendor_id,
					this->vendor_name, this->total, this->remove
			});
			this->outputwindow->GridColor = System::Drawing::Color::White;
			this->outputwindow->Location = System::Drawing::Point(38, 33);
			this->outputwindow->Margin = System::Windows::Forms::Padding(4);
			this->outputwindow->Name = L"outputwindow";
			this->outputwindow->Size = System::Drawing::Size(489, 683);
			this->outputwindow->TabIndex = 16;
			this->outputwindow->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Page_Vendor::outputwindow_CellContentClick);
			this->outputwindow->VisibleChanged += gcnew System::EventHandler(this, &Page_Vendor::outputwindow_VisibleChanged);
			// 
			// Products
			// 
			this->Products->BackColor = System::Drawing::Color::White;
			this->Products->Font = (gcnew System::Drawing::Font(L"Calibri Light", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Products->FormattingEnabled = true;
			this->Products->ItemHeight = 28;
			this->Products->Location = System::Drawing::Point(571, 80);
			this->Products->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Products->Name = L"Products";
			this->Products->Size = System::Drawing::Size(429, 424);
			this->Products->TabIndex = 20;
			this->Products->SelectedIndexChanged += gcnew System::EventHandler(this, &Page_Vendor::Products_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(3, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 29);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Products:";
			// 
			// panel1
			// 
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(571, 33);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(179, 41);
			this->panel1->TabIndex = 22;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtvendorid);
			this->groupBox1->Controls->Add(this->txtvendorname);
			this->groupBox1->Controls->Add(this->txttotal);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Gold;
			this->groupBox1->Location = System::Drawing::Point(571, 524);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(529, 249);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Modify Vendor:";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(413, 196);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 34);
			this->button1->TabIndex = 64;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Page_Vendor::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(27, 100);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(209, 29);
			this->label4->TabIndex = 63;
			this->label4->Text = L"New Vendor Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(117, 59);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 29);
			this->label2->TabIndex = 62;
			this->label2->Text = L"Vendor ID:";
			// 
			// txtvendorid
			// 
			this->txtvendorid->AcceptsReturn = true;
			this->txtvendorid->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txtvendorid->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtvendorid->ForeColor = System::Drawing::Color::Black;
			this->txtvendorid->Location = System::Drawing::Point(244, 55);
			this->txtvendorid->Margin = System::Windows::Forms::Padding(4);
			this->txtvendorid->Name = L"txtvendorid";
			this->txtvendorid->Size = System::Drawing::Size(258, 36);
			this->txtvendorid->TabIndex = 61;
			this->txtvendorid->TextChanged += gcnew System::EventHandler(this, &Page_Vendor::txtvendorid_TextChanged);
			// 
			// txtvendorname
			// 
			this->txtvendorname->AcceptsReturn = true;
			this->txtvendorname->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txtvendorname->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtvendorname->ForeColor = System::Drawing::Color::Black;
			this->txtvendorname->Location = System::Drawing::Point(244, 96);
			this->txtvendorname->Margin = System::Windows::Forms::Padding(4);
			this->txtvendorname->Name = L"txtvendorname";
			this->txtvendorname->Size = System::Drawing::Size(258, 36);
			this->txtvendorname->TabIndex = 60;
			// 
			// txttotal
			// 
			this->txttotal->AcceptsReturn = true;
			this->txttotal->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txttotal->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txttotal->ForeColor = System::Drawing::Color::Black;
			this->txttotal->Location = System::Drawing::Point(244, 136);
			this->txttotal->Margin = System::Windows::Forms::Padding(4);
			this->txttotal->Name = L"txttotal";
			this->txttotal->Size = System::Drawing::Size(258, 36);
			this->txttotal->TabIndex = 58;
			this->txttotal->TextChanged += gcnew System::EventHandler(this, &Page_Vendor::txttotal_TextChanged);
			this->txttotal->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Page_Vendor::txttotal_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(22, 140);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 29);
			this->label3->TabIndex = 57;
			this->label3->Text = L"New Total Payment:";
			// 
			// vendor_id
			// 
			this->vendor_id->HeaderText = L"Vendr ID";
			this->vendor_id->Name = L"vendor_id";
			// 
			// vendor_name
			// 
			this->vendor_name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->vendor_name->HeaderText = L"Vendor Name";
			this->vendor_name->Name = L"vendor_name";
			// 
			// total
			// 
			this->total->HeaderText = L"Total Payment";
			this->total->Name = L"total";
			this->total->Width = 120;
			// 
			// remove
			// 
			this->remove->HeaderText = L"";
			this->remove->Name = L"remove";
			this->remove->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->remove->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->remove->Text = L"Remove";
			this->remove->UseColumnTextForButtonValue = true;
			// 
			// Page_Vendor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1135, 793);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->ReturnButton);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Products);
			this->Controls->Add(this->search);
			this->Controls->Add(this->outputwindow);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Page_Vendor";
			this->Text = L"Page_Vendor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outputwindow))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ReturnButton_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Hide();
		obj->Show();
	}
	private: System::Void outputwindow_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		
		if (e->ColumnIndex == 3 && e->RowIndex >= 0){

			vend->removeVendor(e->RowIndex,u->getuname());
			vend->clear();
			vend->load_vendor(u->getuname());
			load_vendor();
		}
	}
	private: System::Void outputwindow_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {

		load_vendor();
	}
	private: System::Void Products_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {


	}
	private: System::Void search_TextChanged(System::Object^  sender, System::EventArgs^  e) {


		Products->Items->Clear();
		String ^s;
		string id = msclr::interop::marshal_as<std::string>(search->Text);

		int index_pro = vend->get_pro_index();
		int index_vend = vend->get_index();

		for (int i = 0; i < index_vend; i++) {

			if (id == vend->get_id(i)) {

				for (int j = 0; j < 10; j++) {

					s = gcnew String(vend->get_product(i, j).c_str());
					Products->Items->Add(s);
				}
				break;
			}
			else {


			}
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {


	}
	private: System::Void UpdateButton_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void txtvendorid_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	if (txtvendorname->Text == "" || txtvendorid->Text == "" || txttotal->Text == ""){

		MessageBox::Show("Enter All The Details!");
	}
	else
	{
		string v_name = msclr::interop::marshal_as <std::string>(txtvendorname->Text);
		string v_id = msclr::interop::marshal_as <std::string>(txtvendorid->Text);
		double v_total = Convert::ToDouble(txttotal->Text);

		if (vend->edit_vendor(v_id, v_name, v_total, u->getuname())) {

			MessageBox::Show("Vendor Modified!");
			load_vendor();
			empty();
		}
		else {

			MessageBox::Show(" No Such Vendor ID!");
			empty();
		}
	}

}
private: System::Void txttotal_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 && e->KeyChar != '.')
	{
		e->Handled = true;
	}
}
private: System::Void txttotal_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}