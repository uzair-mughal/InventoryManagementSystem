#pragma once
#include "Page3_MainMenu.h"
#include "Page2_SignUp.h"
#include <msclr\marshal_cppstd.h>
#include "User.h"
#include "Order.h"
#include"Vendor.h"


namespace HUMM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page1_LOGIN
	/// </summary>
	public ref class Page1_LOGIN : public System::Windows::Forms::Form
	{
	public:

		Form^ obj;
		User *u;
		Inventory *inv;
		Customers *customer;

	public:
	private: System::Windows::Forms::Panel^  panel4;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::TextBox^  username;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::ErrorProvider^  errorProvider;

	public:
		Vendor *vend;

		Page1_LOGIN(Form^ obj1)
		{
			obj = obj1;
			clear();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Page1_LOGIN(void)
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
		~Page1_LOGIN()
		{
			if (components)
			{
				delete components;
			}
		}
		void clear() {

			username->Text = "";
			password->Text = "";
		}

	private: System::Windows::Forms::Label^  label3;
	private: System::ComponentModel::IContainer^  components;



	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Page1_LOGIN::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->errorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(427, 645);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(210, 24);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Powered By: HummSoft";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Location = System::Drawing::Point(68, 197);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(448, 368);
			this->panel4->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Top Secret", 36, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(96, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(850, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"HS INVENTORY CONTOLLER";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->password);
			this->panel1->Controls->Add(this->username);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Location = System::Drawing::Point(583, 197);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(379, 368);
			this->panel1->TabIndex = 29;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(133, 304);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 43);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Page1_LOGIN::button1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(103, 31);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(203, 54);
			this->panel3->TabIndex = 34;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(133, 244);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 43);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Login";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Page1_LOGIN::button2_Click);
			// 
			// password
			// 
			this->password->AcceptsReturn = true;
			this->password->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->password->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->ForeColor = System::Drawing::Color::Black;
			this->password->Location = System::Drawing::Point(92, 187);
			this->password->Margin = System::Windows::Forms::Padding(4);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(260, 39);
			this->password->TabIndex = 32;
			this->password->Text = L"Password";
			this->password->UseSystemPasswordChar = true;
			this->password->Click += gcnew System::EventHandler(this, &Page1_LOGIN::password_Click);
			// 
			// username
			// 
			this->username->AcceptsReturn = true;
			this->username->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->username->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->ForeColor = System::Drawing::Color::Black;
			this->username->Location = System::Drawing::Point(92, 113);
			this->username->Margin = System::Windows::Forms::Padding(4);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(260, 44);
			this->username->TabIndex = 31;
			this->username->Text = L"Username";
			this->username->Click += gcnew System::EventHandler(this, &Page1_LOGIN::username_Click);
			this->username->TextChanged += gcnew System::EventHandler(this, &Page1_LOGIN::username_TextChanged);
			this->username->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Page1_LOGIN::username_Validating);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(17, 165);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(67, 62);
			this->pictureBox3->TabIndex = 30;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(17, 95);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(67, 62);
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			// 
			// errorProvider
			// 
			this->errorProvider->ContainerControl = this;
			// 
			// Page1_LOGIN
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1045, 690);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Page1_LOGIN";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HS Inventory Controller";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Page1_LOGIN::Page1_LOGIN_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Page1_LOGIN_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		username->Clear();

	}
	private: System::Void textBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		password->Clear();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


		if (username->Text == "" || password->Text == "") {

			MessageBox::Show("Please Fill All The Required Fields!!");

		}
		else {

			u = new User(msclr::interop::marshal_as<std::string>(username->Text), msclr::interop::marshal_as < std::string>(password->Text));
			if (u->check_user()) {
				inv = new Inventory();
				customer = new Customers();
				vend = new Vendor();
				inv->loadfromdb(u->getuname());
				customer->loadfromdb(u->getuname());
				// Passing user object
				this->Hide();
				Page3_MainMenu^ P3 = gcnew Page3_MainMenu(this, u, inv, customer, vend);
				clear();
				P3->ShowDialog();
			}
			else {

				clear();
				MessageBox::Show("No Username or Password Found!!");
			}
		}


	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Hide();
		Page2_SignUp^ Page2 = gcnew Page2_SignUp(this);
		Page2->Show();
	}
	private: System::Void fontDialog1_Apply(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void username_Click(System::Object^  sender, System::EventArgs^  e) {
		username->Clear();
	}
	private: System::Void password_Click(System::Object^  sender, System::EventArgs^  e) {
		password->Clear();
	}
	private: System::Void username_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void username_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

	}
	};
}