#pragma once
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
	/// Summary for Page_Setting_ChangePass
	/// </summary>
	public ref class Page_Setting_ChangePass : public System::Windows::Forms::Form
	{
	public:

		Form ^obj;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	public:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  confirm_pass;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  new_pass;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  current_pass;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
			 User *u;

		public:Page_Setting_ChangePass(Form^ obj1, User *user)
		{
			obj = obj1;
			u = user;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Page_Setting_ChangePass()
		{
			if (components)
			{
				delete components;
			}
		}


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Page_Setting_ChangePass::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->confirm_pass = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->new_pass = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->current_pass = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->confirm_pass);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->new_pass);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->current_pass);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Gold;
			this->groupBox1->Location = System::Drawing::Point(157, 199);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(726, 293);
			this->groupBox1->TabIndex = 41;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Change Password:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(150, 95);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 29);
			this->label3->TabIndex = 48;
			this->label3->Text = L"New Password:";
			// 
			// confirm_pass
			// 
			this->confirm_pass->AcceptsReturn = true;
			this->confirm_pass->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->confirm_pass->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirm_pass->ForeColor = System::Drawing::Color::Black;
			this->confirm_pass->Location = System::Drawing::Point(348, 142);
			this->confirm_pass->Margin = System::Windows::Forms::Padding(4);
			this->confirm_pass->Name = L"confirm_pass";
			this->confirm_pass->Size = System::Drawing::Size(320, 40);
			this->confirm_pass->TabIndex = 47;
			this->confirm_pass->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(58, 153);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(261, 29);
			this->label1->TabIndex = 46;
			this->label1->Text = L"Re-Enter New Password:";
			// 
			// new_pass
			// 
			this->new_pass->AcceptsReturn = true;
			this->new_pass->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->new_pass->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new_pass->ForeColor = System::Drawing::Color::Black;
			this->new_pass->Location = System::Drawing::Point(348, 91);
			this->new_pass->Margin = System::Windows::Forms::Padding(4);
			this->new_pass->Name = L"new_pass";
			this->new_pass->Size = System::Drawing::Size(320, 40);
			this->new_pass->TabIndex = 45;
			this->new_pass->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(119, 47);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 29);
			this->label2->TabIndex = 44;
			this->label2->Text = L"Current Password:";
			this->label2->Click += gcnew System::EventHandler(this, &Page_Setting_ChangePass::label2_Click_1);
			// 
			// current_pass
			// 
			this->current_pass->AcceptsReturn = true;
			this->current_pass->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->current_pass->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->current_pass->ForeColor = System::Drawing::Color::Black;
			this->current_pass->Location = System::Drawing::Point(348, 41);
			this->current_pass->Margin = System::Windows::Forms::Padding(4);
			this->current_pass->Name = L"current_pass";
			this->current_pass->Size = System::Drawing::Size(320, 40);
			this->current_pass->TabIndex = 43;
			this->current_pass->UseSystemPasswordChar = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(389, 209);
			this->button2->Margin = System::Windows::Forms::Padding(9, 11, 9, 11);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button2->Size = System::Drawing::Size(187, 47);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Page_Setting_ChangePass::button2_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(184, 209);
			this->button1->Margin = System::Windows::Forms::Padding(9, 11, 9, 11);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button1->Size = System::Drawing::Size(187, 47);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Change Password";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Page_Setting_ChangePass::button1_Click_1);
			// 
			// Page_Setting_ChangePass
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
			this->Name = L"Page_Setting_ChangePass";
			this->Text = L"Change Password";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

	string pass = msclr::interop::marshal_as < std::string>(current_pass->Text);
	string newpass = msclr::interop::marshal_as < std::string>(new_pass->Text);
	string conpass = msclr::interop::marshal_as < std::string>(confirm_pass->Text);

	if (u->check_pass_update(pass, newpass, conpass)) {

		MessageBox::Show("Password Successfully Change!!");
	}
	else {

		MessageBox::Show("Something Went Wrong!!");
	}
	this->Hide();
	obj->Show();
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {

	this->Hide();
	obj->Show();
}
};
}
