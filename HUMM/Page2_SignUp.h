#pragma once

#include "Page3_MainMenu.h"
#include <msclr\marshal_cppstd.h>
#include"User.h"

namespace HUMM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page2_SignUp
	/// </summary>
	public ref class Page2_SignUp : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Page2_SignUp(Form^ obj1)
		{	
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Page2_SignUp(void)
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
		~Page2_SignUp()
		{
			if (components)
			{
				delete components;
			}
		}
		void clear() {

			fname->Text = "";
			lname->Text = "";
			uname->Text = "";
			pass->Text = "";
			cpass->Text = "";
		}

	private: System::Windows::Forms::TextBox^  pass;
	private: System::Windows::Forms::TextBox^  uname;

	private: System::Windows::Forms::TextBox^  lname;

	private: System::Windows::Forms::TextBox^  fname;

	private: System::Windows::Forms::Button^  button7;

	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  cpass;

	private: System::Windows::Forms::Label^  label1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Page2_SignUp::typeid));
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->uname = (gcnew System::Windows::Forms::TextBox());
			this->lname = (gcnew System::Windows::Forms::TextBox());
			this->fname = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cpass = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pass
			// 
			this->pass->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->Location = System::Drawing::Point(305, 256);
			this->pass->Margin = System::Windows::Forms::Padding(4);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(255, 40);
			this->pass->TabIndex = 21;
			this->pass->UseSystemPasswordChar = true;
			// 
			// uname
			// 
			this->uname->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uname->Location = System::Drawing::Point(305, 206);
			this->uname->Margin = System::Windows::Forms::Padding(4);
			this->uname->Name = L"uname";
			this->uname->Size = System::Drawing::Size(255, 40);
			this->uname->TabIndex = 20;
			this->uname->TextChanged += gcnew System::EventHandler(this, &Page2_SignUp::uanme_TextChanged);
			// 
			// lname
			// 
			this->lname->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname->Location = System::Drawing::Point(305, 156);
			this->lname->Margin = System::Windows::Forms::Padding(4);
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(255, 40);
			this->lname->TabIndex = 19;
			// 
			// fname
			// 
			this->fname->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname->Location = System::Drawing::Point(305, 105);
			this->fname->Margin = System::Windows::Forms::Padding(4);
			this->fname->Name = L"fname";
			this->fname->Size = System::Drawing::Size(255, 40);
			this->fname->TabIndex = 18;
			this->fname->TextChanged += gcnew System::EventHandler(this, &Page2_SignUp::textBox1_TextChanged);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Black;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(175, 389);
			this->button7->Margin = System::Windows::Forms::Padding(9, 11, 9, 11);
			this->button7->Name = L"button7";
			this->button7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button7->Size = System::Drawing::Size(138, 45);
			this->button7->TabIndex = 17;
			this->button7->Text = L"Register";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Page2_SignUp::button7_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(400, 389);
			this->button5->Margin = System::Windows::Forms::Padding(9, 11, 9, 11);
			this->button5->Name = L"button5";
			this->button5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button5->Size = System::Drawing::Size(138, 45);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Cancel";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Page2_SignUp::button5_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(108, 256);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(157, 24);
			this->label11->TabIndex = 3;
			this->label11->Text = L"*Enter Password:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(183, 206);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 24);
			this->label10->TabIndex = 2;
			this->label10->Text = L"*UserID:";
			this->label10->Click += gcnew System::EventHandler(this, &Page2_SignUp::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(140, 156);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 29);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Last Name:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(136, 111);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(129, 29);
			this->label8->TabIndex = 0;
			this->label8->Text = L"First Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(427, 657);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(210, 24);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Powered By: HummSoft";
			// 
			// cpass
			// 
			this->cpass->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cpass->Location = System::Drawing::Point(305, 307);
			this->cpass->Margin = System::Windows::Forms::Padding(4);
			this->cpass->Name = L"cpass";
			this->cpass->Size = System::Drawing::Size(255, 40);
			this->cpass->TabIndex = 24;
			this->cpass->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(86, 307);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 24);
			this->label1->TabIndex = 23;
			this->label1->Text = L"*Confirm Password:";
			this->label1->Click += gcnew System::EventHandler(this, &Page2_SignUp::label1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->uname);
			this->groupBox1->Controls->Add(this->cpass);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->pass);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->lname);
			this->groupBox1->Controls->Add(this->fname);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Gold;
			this->groupBox1->Location = System::Drawing::Point(179, 85);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(683, 512);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Registration:";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Page2_SignUp::groupBox1_Enter);
			// 
			// Page2_SignUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1045, 690);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Page2_SignUp";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Page2_SignUp";
			this->Load += gcnew System::EventHandler(this, &Page2_SignUp::Page2_SignUp_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		obj->Show();
	}

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			
		if (uname->Text == "" || pass->Text == "" || cpass->Text == "") {

			MessageBox::Show("Please Fill All The Important Fields (*)!!");
		}
		else{

			User u(msclr::interop::marshal_as<std::string>(fname->Text), msclr::interop::marshal_as<std::string>(lname->Text), msclr::interop::marshal_as<std::string>(uname->Text),
				msclr::interop::marshal_as < std::string>(pass->Text), msclr::interop::marshal_as < std::string>(cpass->Text));


			if (u.check_pass()) {

				if (u.create_database()) {

					u.create_logintable();
					u.create_tables();
					this->Hide();
					obj->Show();
				}
				else {

					clear();
					MessageBox::Show("Username Alredy Exists!!");
				}
			}
			else {

				clear();
				MessageBox::Show("Password Did Not Match!!");
			}
		}
	}
	private: System::Void Page2_SignUp_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void uanme_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
