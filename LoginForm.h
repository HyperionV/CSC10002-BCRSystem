#pragma once

// Including all libraries in file "_Libraries_Storage_"
#include "_Libraries_Storage_.h"

// Including Staff UI
#include "StaffForm.h"

namespace UserInterfaceFormVersion2 {

	using namespace std;
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		string* location = new string[30];
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			location[0] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_1.jpg";
			location[1] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_2.jpg";
			location[2] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_3.jpg";
			location[3] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_4.jpg";
			location[4] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_5.jpg";
			location[5] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_6.jpg";
			location[6] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_7.jpg";
			location[7] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_8.jpg";
			location[8] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_9.jpg";
			location[9] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_11.jpg";
			location[10] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_12.jpg";
			location[11] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_13.jpg";
			location[12] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_14.jpg";
			location[13] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_15.jpg";
			location[14] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_16.jpg";
			location[15] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_17.jpg";
			location[16] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_18.jpg";
			location[17] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_19.jpg";
			location[18] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_20.jpg";
			location[19] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_21.jpg";
			location[20] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_22.jpg";
			location[21] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_23.jpg";
			location[22] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_user_24.jpg";
			location[23] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\textbox_password.png";
			location[24] = "D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\AvatarAnimation\\debut.jpg";
		}

	public:
	private: System::Windows::Forms::PictureBox^ pictureBox7;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: System::Windows::Forms::Panel^ panel3;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton24;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton23;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel4;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox5;
	private: System::Windows::Forms::Label^ label14;

	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton25;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton26;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox3;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel2;

	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton22;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton21;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox2;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton24 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton23 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuTextbox5 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton25 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton26 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuTextbox3 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuTextbox4 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuThinButton22 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton21 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuTextbox2 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuTextbox1 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Operator Mono Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 30);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"BCRSystem";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Cursor = System::Windows::Forms::Cursors::Default;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label15->Location = System::Drawing::Point(80, 322);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(298, 31);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Welcome to Our Project";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Cursor = System::Windows::Forms::Cursors::Default;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label16->Location = System::Drawing::Point(62, 375);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(343, 31);
			this->label16->TabIndex = 13;
			this->label16->Text = L"Hope You Have Fun With It";
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(96, 440);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(250, 250);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 14;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->bunifuThinButton24);
			this->panel3->Controls->Add(this->bunifuThinButton23);
			this->panel3->Location = System::Drawing::Point(1150, 399);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 160);
			this->panel3->TabIndex = 15;
			// 
			// bunifuThinButton24
			// 
			this->bunifuThinButton24->ActiveBorderThickness = 1;
			this->bunifuThinButton24->ActiveCornerRadius = 40;
			this->bunifuThinButton24->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton24->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton24->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton24->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton24.BackgroundImage")));
			this->bunifuThinButton24->ButtonText = L"Staff/Teacher";
			this->bunifuThinButton24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton24->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton24->IdleBorderThickness = 1;
			this->bunifuThinButton24->IdleCornerRadius = 40;
			this->bunifuThinButton24->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton24->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton24->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton24->Location = System::Drawing::Point(5, 84);
			this->bunifuThinButton24->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton24->Name = L"bunifuThinButton24";
			this->bunifuThinButton24->Size = System::Drawing::Size(190, 57);
			this->bunifuThinButton24->TabIndex = 9;
			this->bunifuThinButton24->TabStop = false;
			this->bunifuThinButton24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton24->Click += gcnew System::EventHandler(this, &LoginForm::bunifuThinButton24_Click);
			// 
			// bunifuThinButton23
			// 
			this->bunifuThinButton23->ActiveBorderThickness = 1;
			this->bunifuThinButton23->ActiveCornerRadius = 40;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton23.BackgroundImage")));
			this->bunifuThinButton23->ButtonText = L"Student";
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton23->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton23->IdleBorderThickness = 1;
			this->bunifuThinButton23->IdleCornerRadius = 40;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton23->Location = System::Drawing::Point(5, 17);
			this->bunifuThinButton23->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton23->Name = L"bunifuThinButton23";
			this->bunifuThinButton23->Size = System::Drawing::Size(190, 57);
			this->bunifuThinButton23->TabIndex = 8;
			this->bunifuThinButton23->TabStop = false;
			this->bunifuThinButton23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton23->Click += gcnew System::EventHandler(this, &LoginForm::bunifuThinButton23_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Crimson;
			this->label2->Location = System::Drawing::Point(40, 860);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 19);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Privacy Policy";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Crimson;
			this->label3->Location = System::Drawing::Point(1187, 860);
			this->label3->Margin = System::Windows::Forms::Padding(0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(229, 19);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Copyright@BCRSystem 2023";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.75F));
			this->label4->Location = System::Drawing::Point(1200, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 21);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Sign In";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Lime;
			this->label5->Location = System::Drawing::Point(1290, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(126, 23);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Project Demo";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Lime;
			this->panel1->Location = System::Drawing::Point(1302, 65);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(100, 2);
			this->panel1->TabIndex = 20;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Cursor = System::Windows::Forms::Cursors::Default;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17.25F, System::Drawing::FontStyle::Bold));
			this->label17->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label17->Location = System::Drawing::Point(690, 90);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(62, 25);
			this->label17->TabIndex = 24;
			this->label17->Text = L"AND";
			// 
			// panel6
			// 
			this->panel6->Location = System::Drawing::Point(760, 100);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(100, 5);
			this->panel6->TabIndex = 25;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Controls->Add(this->pictureBox7);
			this->panel4->Controls->Add(this->pictureBox5);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->bunifuTextbox5);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->bunifuThinButton25);
			this->panel4->Controls->Add(this->bunifuThinButton26);
			this->panel4->Controls->Add(this->bunifuTextbox3);
			this->panel4->Controls->Add(this->bunifuTextbox4);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Location = System::Drawing::Point(488, 140);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(490, 711);
			this->panel4->TabIndex = 26;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(170, 100);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(140, 140);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 32;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(400, 554);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(30, 30);
			this->pictureBox5->TabIndex = 31;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(400, 434);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(30, 30);
			this->pictureBox4->TabIndex = 31;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(400, 314);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(30, 30);
			this->pictureBox3->TabIndex = 31;
			this->pictureBox3->TabStop = false;
			// 
			// bunifuTextbox5
			// 
			this->bunifuTextbox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuTextbox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox5.BackgroundImage")));
			this->bunifuTextbox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuTextbox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.75F));
			this->bunifuTextbox5->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuTextbox5->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox5.Icon")));
			this->bunifuTextbox5->Location = System::Drawing::Point(45, 540);
			this->bunifuTextbox5->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->bunifuTextbox5->Name = L"bunifuTextbox5";
			this->bunifuTextbox5->Size = System::Drawing::Size(400, 60);
			this->bunifuTextbox5->TabIndex = 9;
			this->bunifuTextbox5->TabStop = false;
			this->bunifuTextbox5->text = L"UserCode";
			this->bunifuTextbox5->OnTextChange += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox5_OnTextChange);
			this->bunifuTextbox5->Click += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox5_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17.25F));
			this->label14->ForeColor = System::Drawing::SystemColors::Info;
			this->label14->Location = System::Drawing::Point(40, 500);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(232, 26);
			this->label14->TabIndex = 8;
			this->label14->Text = L"Staff/Teacher UserCode";
			// 
			// bunifuThinButton25
			// 
			this->bunifuThinButton25->ActiveBorderThickness = 1;
			this->bunifuThinButton25->ActiveCornerRadius = 40;
			this->bunifuThinButton25->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton25->ActiveForecolor = System::Drawing::Color::MidnightBlue;
			this->bunifuThinButton25->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton25->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton25.BackgroundImage")));
			this->bunifuThinButton25->ButtonText = L"Exit";
			this->bunifuThinButton25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton25->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton25->IdleBorderThickness = 1;
			this->bunifuThinButton25->IdleCornerRadius = 40;
			this->bunifuThinButton25->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton25->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton25->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton25->Location = System::Drawing::Point(255, 640);
			this->bunifuThinButton25->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton25->Name = L"bunifuThinButton25";
			this->bunifuThinButton25->Size = System::Drawing::Size(190, 57);
			this->bunifuThinButton25->TabIndex = 6;
			this->bunifuThinButton25->TabStop = false;
			this->bunifuThinButton25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton25->Click += gcnew System::EventHandler(this, &LoginForm::bunifuThinButton25_Click);
			// 
			// bunifuThinButton26
			// 
			this->bunifuThinButton26->ActiveBorderThickness = 1;
			this->bunifuThinButton26->ActiveCornerRadius = 40;
			this->bunifuThinButton26->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton26->ActiveForecolor = System::Drawing::Color::MidnightBlue;
			this->bunifuThinButton26->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton26->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton26.BackgroundImage")));
			this->bunifuThinButton26->ButtonText = L"Sign In";
			this->bunifuThinButton26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton26->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton26->IdleBorderThickness = 1;
			this->bunifuThinButton26->IdleCornerRadius = 40;
			this->bunifuThinButton26->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton26->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton26->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton26->Location = System::Drawing::Point(48, 640);
			this->bunifuThinButton26->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton26->Name = L"bunifuThinButton26";
			this->bunifuThinButton26->Size = System::Drawing::Size(190, 57);
			this->bunifuThinButton26->TabIndex = 5;
			this->bunifuThinButton26->TabStop = false;
			this->bunifuThinButton26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton26->Click += gcnew System::EventHandler(this, &LoginForm::bunifuThinButton26_Click);
			// 
			// bunifuTextbox3
			// 
			this->bunifuTextbox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuTextbox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox3.BackgroundImage")));
			this->bunifuTextbox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuTextbox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.75F));
			this->bunifuTextbox3->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuTextbox3->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox3.Icon")));
			this->bunifuTextbox3->Location = System::Drawing::Point(45, 420);
			this->bunifuTextbox3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->bunifuTextbox3->Name = L"bunifuTextbox3";
			this->bunifuTextbox3->Size = System::Drawing::Size(400, 60);
			this->bunifuTextbox3->TabIndex = 4;
			this->bunifuTextbox3->TabStop = false;
			this->bunifuTextbox3->text = L"Password";
			this->bunifuTextbox3->OnTextChange += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox3_OnTextChange);
			this->bunifuTextbox3->Click += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox3_Click);
			// 
			// bunifuTextbox4
			// 
			this->bunifuTextbox4->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->bunifuTextbox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuTextbox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox4.BackgroundImage")));
			this->bunifuTextbox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuTextbox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.75F));
			this->bunifuTextbox4->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuTextbox4->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox4.Icon")));
			this->bunifuTextbox4->Location = System::Drawing::Point(45, 300);
			this->bunifuTextbox4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->bunifuTextbox4->Name = L"bunifuTextbox4";
			this->bunifuTextbox4->Size = System::Drawing::Size(400, 60);
			this->bunifuTextbox4->TabIndex = 3;
			this->bunifuTextbox4->TabStop = false;
			this->bunifuTextbox4->text = L"UserName";
			this->bunifuTextbox4->OnTextChange += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox4_OnTextChange);
			this->bunifuTextbox4->Click += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox4_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17.25F));
			this->label11->ForeColor = System::Drawing::SystemColors::Info;
			this->label11->Location = System::Drawing::Point(43, 380);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(273, 26);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Staff/Teacher UserPassword";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17.25F));
			this->label12->ForeColor = System::Drawing::SystemColors::Info;
			this->label12->Location = System::Drawing::Point(40, 260);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(207, 26);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Staff/Teacher UserID";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 26.5F, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(48, 30);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(388, 50);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Login to Your Account";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->pictureBox6);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->bunifuThinButton22);
			this->panel2->Controls->Add(this->bunifuThinButton21);
			this->panel2->Controls->Add(this->bunifuTextbox2);
			this->panel2->Controls->Add(this->bunifuTextbox1);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(488, 140);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(490, 711);
			this->panel2->TabIndex = 27;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(170, 100);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(140, 140);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 31;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(400, 480);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(30, 30);
			this->pictureBox2->TabIndex = 30;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(400, 338);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(30, 30);
			this->pictureBox1->TabIndex = 29;
			this->pictureBox1->TabStop = false;
			// 
			// bunifuThinButton22
			// 
			this->bunifuThinButton22->ActiveBorderThickness = 1;
			this->bunifuThinButton22->ActiveCornerRadius = 40;
			this->bunifuThinButton22->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton22->ActiveForecolor = System::Drawing::Color::MidnightBlue;
			this->bunifuThinButton22->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton22->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton22.BackgroundImage")));
			this->bunifuThinButton22->ButtonText = L"Exit";
			this->bunifuThinButton22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton22->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton22->IdleBorderThickness = 1;
			this->bunifuThinButton22->IdleCornerRadius = 40;
			this->bunifuThinButton22->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton22->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton22->Location = System::Drawing::Point(255, 600);
			this->bunifuThinButton22->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->Size = System::Drawing::Size(190, 57);
			this->bunifuThinButton22->TabIndex = 6;
			this->bunifuThinButton22->TabStop = false;
			this->bunifuThinButton22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton22->Click += gcnew System::EventHandler(this, &LoginForm::bunifuThinButton22_Click);
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 1;
			this->bunifuThinButton21->ActiveCornerRadius = 40;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::MidnightBlue;
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"Sign In";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton21->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton21->IdleBorderThickness = 1;
			this->bunifuThinButton21->IdleCornerRadius = 40;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Location = System::Drawing::Point(45, 600);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(190, 57);
			this->bunifuThinButton21->TabIndex = 5;
			this->bunifuThinButton21->TabStop = false;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton21->Click += gcnew System::EventHandler(this, &LoginForm::bunifuThinButton21_Click);
			// 
			// bunifuTextbox2
			// 
			this->bunifuTextbox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuTextbox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox2.BackgroundImage")));
			this->bunifuTextbox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuTextbox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.75F));
			this->bunifuTextbox2->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuTextbox2->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox2.Icon")));
			this->bunifuTextbox2->Location = System::Drawing::Point(45, 466);
			this->bunifuTextbox2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->bunifuTextbox2->Name = L"bunifuTextbox2";
			this->bunifuTextbox2->Size = System::Drawing::Size(400, 60);
			this->bunifuTextbox2->TabIndex = 4;
			this->bunifuTextbox2->TabStop = false;
			this->bunifuTextbox2->text = L"Password";
			this->bunifuTextbox2->OnTextChange += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox2_OnTextChange);
			this->bunifuTextbox2->Click += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox2_Click);
			// 
			// bunifuTextbox1
			// 
			this->bunifuTextbox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuTextbox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.BackgroundImage")));
			this->bunifuTextbox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuTextbox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.75F));
			this->bunifuTextbox1->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuTextbox1->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.Icon")));
			this->bunifuTextbox1->Location = System::Drawing::Point(45, 325);
			this->bunifuTextbox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->bunifuTextbox1->Name = L"bunifuTextbox1";
			this->bunifuTextbox1->Size = System::Drawing::Size(400, 60);
			this->bunifuTextbox1->TabIndex = 3;
			this->bunifuTextbox1->TabStop = false;
			this->bunifuTextbox1->text = L"UserName";
			this->bunifuTextbox1->OnTextChange += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox1_OnTextChange);
			this->bunifuTextbox1->Click += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17.25F));
			this->label8->ForeColor = System::Drawing::SystemColors::Info;
			this->label8->Location = System::Drawing::Point(40, 415);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(221, 26);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Student UserPassword";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17.25F));
			this->label7->ForeColor = System::Drawing::SystemColors::Info;
			this->label7->Location = System::Drawing::Point(40, 273);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(155, 26);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Student UserID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 26.5F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(48, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(386, 48);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Login to Your Account";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Cursor = System::Windows::Forms::Cursors::Default;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::LightSalmon;
			this->label18->Location = System::Drawing::Point(614, 40);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(226, 40);
			this->label18->TabIndex = 28;
			this->label18->Text = L"Welcome Back";
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(580, 100);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(100, 5);
			this->panel5->TabIndex = 23;
			// 
			// LoginForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1450, 900);
			this->ControlBox = false;
			this->Controls->Add(this->label18);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->ForeColor = System::Drawing::Color::MintCream;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Group3 - BCRSystem - CourseManagement/CourseRegistration - LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

			// Login Form
		private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {

			this->panel2->BringToFront();
			this->label17->Visible = true;
			this->label18->Visible = true;
			this->panel5->Visible = true;
			this->panel6->Visible = true;
			this->pictureBox1->Visible = false;
			this->pictureBox2->Visible = false;
			this->pictureBox3->Visible = false;
			this->pictureBox4->Visible = false;
			this->pictureBox5->Visible = false;

		}

			// Exit button (Student Login Page)
		private: System::Void bunifuThinButton22_Click(System::Object^ sender, System::EventArgs^ e) {

			Application::Exit();

		}

			// Exit button (Staff/Teacher Login Page)
		private: System::Void bunifuThinButton25_Click(System::Object^ sender, System::EventArgs^ e) {

			Application::Exit();

		}

			// Staff/Teacher button (Student Login Page)
		private: System::Void bunifuThinButton24_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->panel2->Visible)
			{

				this->panel2->Visible = false;
				this->panel4->Visible = true;
				this->label17->Visible = true;
				this->label18->Visible = true;
				this->panel5->Visible = true;
				this->panel6->Visible = true;
				this->pictureBox1->Visible = false;
				this->pictureBox2->Visible = false;
				this->pictureBox3->Visible = false;
				this->pictureBox4->Visible = false;
				this->pictureBox5->Visible = false;
				this->pictureBox6->ImageLocation = marshal_as<String^>(location[24]);
				this->pictureBox7->ImageLocation = marshal_as<String^>(location[24]);

				this->bunifuThinButton24->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton24->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton24->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton24->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton24->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton24->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton24->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

				if (this->bunifuTextbox4->text == L"" || this->bunifuTextbox4->text != L"")
				{
					this->bunifuTextbox4->text = L"UserName";
				}

				if (this->bunifuTextbox3->text == L"" || this->bunifuTextbox3->text != L"")
				{
					this->bunifuTextbox3->text = L"Password";
				}

				if (this->bunifuTextbox5->text == L"" || this->bunifuTextbox5->text != L"")
				{
					this->bunifuTextbox5->text = L"UserCode";
				}

			}

		}

			// Student button (Staff/Teacher Login Page)
		private: System::Void bunifuThinButton23_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->panel4->Visible)
			{

				this->panel2->Visible = true;
				this->panel4->Visible = false;
				this->label17->Visible = true;
				this->label18->Visible = true;
				this->panel5->Visible = true;
				this->panel6->Visible = true;
				this->pictureBox1->Visible = false;
				this->pictureBox2->Visible = false;
				this->pictureBox3->Visible = false;
				this->pictureBox4->Visible = false;
				this->pictureBox5->Visible = false;
				this->pictureBox6->ImageLocation = marshal_as<String^>(location[24]);
				this->pictureBox7->ImageLocation = marshal_as<String^>(location[24]);

				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton24->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton24->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton24->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton24->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton24->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton24->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton24->IdleLineColor = System::Drawing::Color::White;

				if (this->bunifuTextbox1->text == L"" || this->bunifuTextbox1->text != L"")
				{
					this->bunifuTextbox1->text = L"UserName";
				}

				if (this->bunifuTextbox2->text == L"" || this->bunifuTextbox2->text != L"")
				{
					this->bunifuTextbox2->text = L"Password";
				}

			}

		}

			// UserName Textbox (Student Login Page)
		private: System::Void bunifuTextbox1_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->bunifuTextbox1->text == L"UserName")
			{

				this->pictureBox6->ImageLocation = marshal_as<String^>(location[24]);
				this->bunifuTextbox1->text = L"";

			}

			if (this->bunifuTextbox1->text->Length > 0)
			{

				this->pictureBox6->ImageLocation = marshal_as<String^>(location[this->bunifuTextbox1->text->Length]);

			}

		}

			// UserName Textbox with even on change (Student Login Page)
		private: System::Void bunifuTextbox1_OnTextChange(System::Object^ sender, System::EventArgs^ e) {

			if (this->bunifuTextbox1->text == L"UserName" || this->bunifuTextbox1->text == L"")
			{

				this->pictureBox6->ImageLocation = marshal_as<String^>(location[0]);
				this->pictureBox1->Visible = true;

			}
			else
			{
				if (this->bunifuTextbox1->text->Length > 0 && this->bunifuTextbox1->text->Length <= 15)
				{

					this->pictureBox6->ImageLocation = marshal_as<String^>(location[this->bunifuTextbox1->text->Length]);

				}
				else if (this->bunifuTextbox1->text->Length > 15)
				{

					this->pictureBox6->ImageLocation = marshal_as<String^>(location[22]);

				}
				this->pictureBox1->Visible = false;

			}

		}

			// Password Textbox (Student Login Page)
		private: System::Void bunifuTextbox2_Click(System::Object^ sender, System::EventArgs^ e) {

			this->pictureBox6->ImageLocation = marshal_as<String^>(location[23]);
			if (this->bunifuTextbox2->text == L"Password")
			{

				this->pictureBox6->ImageLocation = marshal_as<String^>(location[23]);
				this->bunifuTextbox2->text = L"";

			}


		}

			// Password Textbox with event on change (Student Login Page)
		private: System::Void bunifuTextbox2_OnTextChange(System::Object^ sender, System::EventArgs^ e) {

			if (this->bunifuTextbox2->text == L"Password" || this->bunifuTextbox2->text == L"")
			{

				this->pictureBox6->ImageLocation = marshal_as<String^>(location[23]);
				this->pictureBox2->Visible = true;

			}
			else
			{

				this->pictureBox6->ImageLocation = marshal_as<String^>(location[23]);
				this->pictureBox2->Visible = false;

			}

		}

			// UserName Textbox (Staff Login Page)
		private: System::Void bunifuTextbox4_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->bunifuTextbox4->text == L"UserName")
			{

				this->pictureBox7->ImageLocation = marshal_as<String^>(location[24]);
				this->bunifuTextbox4->text = L"";

			}

			if (this->bunifuTextbox4->text->Length > 0)
			{

				this->pictureBox7->ImageLocation = marshal_as<String^>(location[this->bunifuTextbox4->text->Length]);

			}

		}

			// UserName Textbox with even on change (Staff Login Page)
		private: System::Void bunifuTextbox4_OnTextChange(System::Object^ sender, System::EventArgs^ e) {

			if (this->bunifuTextbox4->text == L"UserName" || this->bunifuTextbox4->text == L"")
			{

				this->pictureBox3->Visible = true;

			}
			else
			{

				if (this->bunifuTextbox4->text->Length > 0 && this->bunifuTextbox4->text->Length <= 15)
				{

					this->pictureBox7->ImageLocation = marshal_as<String^>(location[this->bunifuTextbox4->text->Length]);

				}
				else if (this->bunifuTextbox4->text->Length > 15)
				{

					this->pictureBox7->ImageLocation = marshal_as<String^>(location[22]);

				}
				this->pictureBox3->Visible = false;

			}

		}

			// Password Textbox (Staff Login Page)
		private: System::Void bunifuTextbox3_Click(System::Object^ sender, System::EventArgs^ e) {

			this->pictureBox7->ImageLocation = marshal_as<String^>(location[23]);
			if (this->bunifuTextbox3->text == L"Password")
			{

				this->pictureBox7->ImageLocation = marshal_as<String^>(location[23]);
				this->bunifuTextbox3->text = L"";

			}

		}

			// Password Textbox with event on change (Staff Login Page)
		private: System::Void bunifuTextbox3_OnTextChange(System::Object^ sender, System::EventArgs^ e) {

			if (this->bunifuTextbox3->text == L"Password" || this->bunifuTextbox3->text == L"")
			{

				this->pictureBox7->ImageLocation = marshal_as<String^>(location[23]);
				this->pictureBox4->Visible = true;

			}
			else
			{

				this->pictureBox7->ImageLocation = marshal_as<String^>(location[23]);
				this->pictureBox4->Visible = false;

			}

		}

			// UserCode Textbox (Staff Login Page)
		private: System::Void bunifuTextbox5_Click(System::Object^ sender, System::EventArgs^ e) {

			this->pictureBox7->ImageLocation = marshal_as<String^>(location[23]);
			if (this->bunifuTextbox5->text == L"UserCode")
			{

				this->pictureBox7->ImageLocation = marshal_as<String^>(location[23]);
				this->bunifuTextbox5->text = L"";

			}

		}

			// UserCode Textbox with event on change (Staff Login Page)
		private: System::Void bunifuTextbox5_OnTextChange(System::Object^ sender, System::EventArgs^ e) {

			if (this->bunifuTextbox5->text == L"UserCode" || this->bunifuTextbox5->text == L"")
			{

				this->pictureBox7->ImageLocation = marshal_as<String^>(location[23]);
				this->pictureBox5->Visible = true;

			}
			else
			{

				this->pictureBox7->ImageLocation = marshal_as<String^>(location[23]);
				this->pictureBox5->Visible = false;

			}

		}

			// Regsiter button
		//private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {

		//	/*this->Hide();
		//	SignUpForm^ form = gcnew SignUpForm(this);
		//	form->Show();*/

		//	if (this->bunifuTextbox4->text == L"" || this->bunifuTextbox4->text != L"")
		//	{

		//		this->bunifuTextbox4->text = L"UserName";

		//	}

		//	if (this->bunifuTextbox3->text == L"" || this->bunifuTextbox3->text != L"")
		//	{

		//		this->bunifuTextbox3->text = L"Password";

		//	}

		//	if (this->bunifuTextbox5->text == L"" || this->bunifuTextbox5->text != L"")
		//	{

		//		this->bunifuTextbox5->text = L"UserCode";

		//	}

		//	if (this->bunifuTextbox1->text == L"" || this->bunifuTextbox1->text != L"")
		//	{

		//		this->bunifuTextbox1->text = L"UserName";

		//	}

		//	if (this->bunifuTextbox2->text == L"" || this->bunifuTextbox2->text != L"")
		//	{

		//		this->bunifuTextbox2->text = L"Password";

		//	}

		//}

			// Student Sign In Button
		private: System::Void bunifuThinButton21_Click(System::Object^ sender, System::EventArgs^ e) {

			string studentUserName = marshal_as<string>(this->bunifuTextbox1->text);
			string studentUserPassword = marshal_as<string>(this->bunifuTextbox2->text);

			ifstream reading_file;
			reading_file.open("D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\LoginData\\_Student_Login_.txt", ios::in);

			if (!reading_file.is_open())
			{

				MessageBox::Show("Login: Student Account is not existed, try again !! <3", "Student Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
				this->pictureBox1->Visible = true;
				this->pictureBox2->Visible = true;

			}
			else
			{

				if (studentUserName != "UserName" && studentUserName != "")
				{

					if (studentUserPassword != "Password" && studentUserPassword != "")
					{

						int count = 0;
						bool flagUserName = false;
						bool flagUserPassword = false;
						while (!reading_file.eof())
						{

							string studentUserName_Temp, studentUserPassword_temp, temp;

							if (count == 0)
							{

								getline(reading_file, temp);
								++count;
								continue;

							}

							getline(reading_file, studentUserName_Temp, ',');
							getline(reading_file, studentUserPassword_temp, '\n');

							if (studentUserName_Temp == studentUserName)
							{

								flagUserName = true;

								if (studentUserPassword_temp == studentUserPassword)
								{

									flagUserPassword = true;
									break;

								}

							}

						}

						reading_file.close();

						if (flagUserName)
						{

							if (flagUserPassword)
							{

								this->pictureBox1->Visible = false;
								this->pictureBox2->Visible = false;

								MessageBox::Show("Login: Student signs in successfully !! <3", "Student Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
								/*this->Hide();
								StudentForm^ studentUI = gcnew StudentForm(this);
								studentUI->Show();*/

								if (this->bunifuTextbox4->text == L"" || this->bunifuTextbox4->text != L"")
								{

									this->bunifuTextbox4->text = L"UserName";

								}

								if (this->bunifuTextbox3->text == L"" || this->bunifuTextbox3->text != L"")
								{

									this->bunifuTextbox3->text = L"Password";

								}

								if (this->bunifuTextbox5->text == L"" || this->bunifuTextbox5->text != L"")
								{

									this->bunifuTextbox5->text = L"UserCode";

								}

								if (this->bunifuTextbox1->text == L"" || this->bunifuTextbox1->text != L"")
								{

									this->bunifuTextbox1->text = L"UserName";

								}

								if (this->bunifuTextbox2->text == L"" || this->bunifuTextbox2->text != L"")
								{

									this->bunifuTextbox2->text = L"Password";

								}

								this->pictureBox1->Visible = false;
								this->pictureBox2->Visible = false;

							}
							else
							{

								MessageBox::Show("Login: Student UserPassword is invalid, try again !! <3", "Student Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
								this->pictureBox2->Visible = true;

							}

						}
						else
						{

							MessageBox::Show("Login: Student UserName is invalid, try again !! <3", "Student Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
							this->pictureBox1->Visible = true;
							this->pictureBox2->Visible = true;

						}

					}
					else
					{

						MessageBox::Show("Login: You need to enter UserPassword Textbox, try again !! <3", "Student Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
						this->pictureBox2->Visible = true;

					}

				}
				else
				{

					this->pictureBox1->Visible = true;
					if (studentUserPassword != "Password" && studentUserPassword != "")
					{

						MessageBox::Show("Login: You need to enter UserName Textbox, try again !! <3", "Student Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);

					}
					else
					{

						this->pictureBox2->Visible = true;
						MessageBox::Show("Login: You need to enter UserName Textbox and Password Textbox, try again !! <3", "Student Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);

					}

				}

			}

		}

			// Staff/Teacher Sign In Button
		private: System::Void bunifuThinButton26_Click(System::Object^ sender, System::EventArgs^ e) {

			string staffUserName = marshal_as<string>(this->bunifuTextbox4->text);
			string staffUserPassword = marshal_as<string>(this->bunifuTextbox3->text);
			string staffUserCode = marshal_as<string>(this->bunifuTextbox5->text);

			ifstream reading_file;
			reading_file.open("D:\\WorkingWorkspace\\Project_BCRSystem_ProTechniques\\Project_MenuTemplates\\Project_Code\\Project_BCRSystem_UserInterface_Version2_LoginForm\\LoginData\\_Staff_Login_.txt", ios::in);

			if (!reading_file.is_open())
			{

				MessageBox::Show("Login: Staff Account is not existed, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
				this->pictureBox3->Visible = true;
				this->pictureBox4->Visible = true;
				this->pictureBox5->Visible = true;

			}
			else
			{

				if (staffUserName != "UserName" && staffUserName != "")
				{

					if (staffUserPassword != "Password" && staffUserPassword != "")
					{

						if (staffUserCode != "UserCode" && staffUserCode != "")
						{

							int count = 0;
							bool flagUserName = false;
							bool flagUserPassword = false;
							bool flagUserCode = false;
							while (!reading_file.eof())
							{

								string staffUserName_Temp, staffUserPassword_temp, staffUserCode_temp, temp;

								if (count == 0)
								{

									getline(reading_file, temp);
									++count;
									continue;

								}

								getline(reading_file, staffUserName_Temp, ',');
								getline(reading_file, staffUserPassword_temp, ',');
								getline(reading_file, staffUserCode_temp, '\n');

								if (staffUserName_Temp == staffUserName)
								{

									flagUserName = true;

									if (staffUserPassword_temp == staffUserPassword)
									{

										flagUserPassword = true;

										if (staffUserCode_temp == staffUserCode)
										{

											flagUserCode = true;
											break;

										}

									}

								}

							}

							reading_file.close();

							if (flagUserName)
							{

								if (flagUserPassword)
								{

									if (flagUserCode)
									{

										this->pictureBox3->Visible = false;
										this->pictureBox4->Visible = false;
										this->pictureBox5->Visible = false;

										MessageBox::Show("Login: Staff signs in successfully !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
										this->Hide();
										StaffForm^ staffUI = gcnew StaffForm(this);
										staffUI->Show();

										if (this->bunifuTextbox4->text == L"" || this->bunifuTextbox4->text != L"")
										{
											this->bunifuTextbox4->text = L"UserName";
										}

										if (this->bunifuTextbox3->text == L"" || this->bunifuTextbox3->text != L"")
										{
											this->bunifuTextbox3->text = L"Password";
										}

										if (this->bunifuTextbox5->text == L"" || this->bunifuTextbox5->text != L"")
										{
											this->bunifuTextbox5->text = L"UserCode";
										}

										if (this->bunifuTextbox1->text == L"" || this->bunifuTextbox1->text != L"")
										{
											this->bunifuTextbox1->text = L"UserName";
										}

										if (this->bunifuTextbox2->text == L"" || this->bunifuTextbox2->text != L"")
										{
											this->bunifuTextbox2->text = L"Password";
										}

										this->pictureBox3->Visible = false;
										this->pictureBox4->Visible = false;
										this->pictureBox5->Visible = false;

									}
									else
									{

										MessageBox::Show("Login: Staff UserCode is invalid, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
										this->pictureBox5->Visible = true;

									}

								}
								else
								{

									MessageBox::Show("Login: Staff UserPassword is invalid, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
									this->pictureBox4->Visible = true;
									this->pictureBox5->Visible = true;

								}

							}
							else
							{

								MessageBox::Show("Login: Staff UserName is invalid, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
								this->pictureBox3->Visible = true;
								this->pictureBox4->Visible = true;
								this->pictureBox5->Visible = true;

							}

						}
						else
						{

							MessageBox::Show("Login: You need to enter UserCode Textbox, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
							this->pictureBox5->Visible = true;

						}

					}
					else
					{

						if (staffUserCode != "UserCode" && staffUserCode != "")
						{

							MessageBox::Show("Login: You need to enter UserPassword Textbox, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
							this->pictureBox4->Visible = true;
							this->pictureBox5->Visible = true;

						}
						else
						{

							MessageBox::Show("Login: You need to enter UserPassword Textbox and UserCode Textbox, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
							this->pictureBox4->Visible = true;

						}

					}

				}
				else
				{

					if (staffUserPassword != "Password" && staffUserPassword != "")
					{

						if (staffUserCode != "UserCode" && staffUserCode != "")
						{

							MessageBox::Show("Login: You need to enter UserName Textbox, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
							this->pictureBox3->Visible = true;

						}
						else
						{

							MessageBox::Show("Login: You need to enter UserName Textbox and UserCode Textbox, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
							this->pictureBox3->Visible = true;
							this->pictureBox5->Visible = true;

						}
					}
					else
					{
						if (staffUserCode != "UserCode" && staffUserCode != "")
						{

							MessageBox::Show("Login: You need to enter UserName Textbox and UserPassword Textbox, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
							this->pictureBox3->Visible = true;
							this->pictureBox4->Visible = true;

						}
						else
						{

							MessageBox::Show("Login: You need to enter UserName Textbox, UserPassword Textbox and UserCode Textbox, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
							this->pictureBox3->Visible = true;
							this->pictureBox4->Visible = true;
							this->pictureBox5->Visible = true;

						}

					}

				}

			}

		}
	};
}
