#pragma once
#include "User.h"
using namespace std;
#include<iostream>
#include <msclr\marshal_cppstd.h>

namespace HUMM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page_Setting_DeleteUser
	/// </summary>
	public ref class Page_Setting_DeleteUser : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::GroupBox^  groupBox1;
	public:

		Form^ obj_Back;
		User *u;
		Form ^sp;
		Page_Setting_DeleteUser(void)
		{	
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Page_Setting_DeleteUser(Form^ obj1, User *u, Form ^sp)
		{
			obj_Back = obj1;
			this->sp = sp;
			this->u = u;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		//	Page_Setting_DeleteUser(User *u)	
		//	{
		//		user = u;
		//		InitializeComponent();
				//
				//TODO: Add the constructor code here
				//
		//	}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Page_Setting_DeleteUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  password;
	protected:

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  username;

	private: System::Windows::Forms::Button^  cancel;

	private: System::Windows::Forms::Button^  delete_user;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Page_Setting_DeleteUser::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->delete_user = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(32, 145);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(177, 29);
			this->label3->TabIndex = 48;
			this->label3->Text = L"Enter Password:";
			this->label3->Click += gcnew System::EventHandler(this, &Page_Setting_DeleteUser::label3_Click);
			// 
			// password
			// 
			this->password->AcceptsReturn = true;
			this->password->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->password->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->ForeColor = System::Drawing::Color::Black;
			this->password->Location = System::Drawing::Point(217, 134);
			this->password->Margin = System::Windows::Forms::Padding(4);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(320, 40);
			this->password->TabIndex = 47;
			this->password->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(26, 82);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 29);
			this->label2->TabIndex = 44;
			this->label2->Text = L"Enter Username:";
			this->label2->Click += gcnew System::EventHandler(this, &Page_Setting_DeleteUser::label2_Click);
			// 
			// username
			// 
			this->username->AcceptsReturn = true;
			this->username->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->username->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->ForeColor = System::Drawing::Color::Black;
			this->username->Location = System::Drawing::Point(217, 71);
			this->username->Margin = System::Windows::Forms::Padding(4);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(320, 40);
			this->username->TabIndex = 43;
			this->username->TextChanged += gcnew System::EventHandler(this, &Page_Setting_DeleteUser::textBox1_TextChanged);
			// 
			// cancel
			// 
			this->cancel->BackColor = System::Drawing::Color::DimGray;
			this->cancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cancel.BackgroundImage")));
			this->cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancel->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->ForeColor = System::Drawing::Color::White;
			this->cancel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->cancel->Location = System::Drawing::Point(312, 222);
			this->cancel->Margin = System::Windows::Forms::Padding(9, 11, 9, 11);
			this->cancel->Name = L"cancel";
			this->cancel->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->cancel->Size = System::Drawing::Size(137, 47);
			this->cancel->TabIndex = 42;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = false;
			this->cancel->Click += gcnew System::EventHandler(this, &Page_Setting_DeleteUser::button2_Click);
			// 
			// delete_user
			// 
			this->delete_user->BackColor = System::Drawing::Color::DimGray;
			this->delete_user->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"delete_user.BackgroundImage")));
			this->delete_user->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->delete_user->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete_user->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->delete_user->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_user->ForeColor = System::Drawing::Color::White;
			this->delete_user->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->delete_user->Location = System::Drawing::Point(146, 222);
			this->delete_user->Margin = System::Windows::Forms::Padding(9, 11, 9, 11);
			this->delete_user->Name = L"delete_user";
			this->delete_user->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->delete_user->Size = System::Drawing::Size(137, 47);
			this->delete_user->TabIndex = 41;
			this->delete_user->Text = L"Delete User";
			this->delete_user->UseVisualStyleBackColor = false;
			this->delete_user->Click += gcnew System::EventHandler(this, &Page_Setting_DeleteUser::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->username);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->delete_user);
			this->groupBox1->Controls->Add(this->password);
			this->groupBox1->Controls->Add(this->cancel);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Gold;
			this->groupBox1->Location = System::Drawing::Point(232, 185);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(578, 332);
			this->groupBox1->TabIndex = 49;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Delete User:";
			// 
			// Page_Setting_DeleteUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1045, 690);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Page_Setting_DeleteUser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Delete User";
			this->Load += gcnew System::EventHandler(this, &Page_Setting_DeleteUser::Page_Setting_DeleteUser_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Hide();
		obj_Back->Show();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		string user = msclr::interop::marshal_as<std::string>(username->Text);
		string pass = msclr::interop::marshal_as<std::string>(password->Text);

		if (u->getpass() == pass && u->getuname() == user) {

			u->delete_user();
			MessageBox::Show("Account Successfully Deleted!!");
			this->Hide();
			sp->Show();
			/*user->setUname("DeleteAccount");
			cout << user->getuname() << "Delete account page" << endl;
			obj_Back->Show();*/

		}
		else {

			MessageBox::Show("Wrong Username or password!!");
		}
	}

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Page_Setting_DeleteUser_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
