#pragma once

// Including all libraries in file "_Libraries_Storage_" which are needed for project
#include "_Libraries_Storage_.h"

// Including Staff Form UI
#include "StaffForm.h"

namespace UserInterfaceForm {

	using namespace std;
	using namespace msclr::interop;
	namespace fs = std::filesystem;
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
		Form^ obj;
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		LoginForm(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

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
			delete[] locationAvatarAnimationImages;
			delete[] locationCredential;
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::ComboBox^ comboBox21;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton22;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton21;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox2;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	protected:
		/// <summary>
		/// Fixing flickering problem when changing between UIs or rendering UIs
		/// </summary>
		virtual property System::Windows::Forms::CreateParams^ CreateParams
		{
			System::Windows::Forms::CreateParams^ get() override
			{
				// Make your changes to overrideParams members here
				System::Windows::Forms::CreateParams^ overrideParams = Form::CreateParams;
				overrideParams->ExStyle |= 0x02000000;
				return overrideParams;
			}
		}
		/// <summary>
		/// Declaration of string paths of Login Avatars Animation and Credential
		/// </summary>
		string* locationAvatarAnimationImages = new string[27];
		string* locationCredential = new string[2];
		int locationAvatarsAnimationIndex = 0;
		int locationCredentialIndex = 0;
		bool flagAvatarsAnimation = false;
		bool flagCredential = false;
		string checkPathString(string path)
		{

			if (path[path.length() - 1] == '/')
			{

				path = path.substr(0, path.length() - 1);

			}
			return path;

		}
		bool traversal_directory_AvatarsAnimation(string path)
		{

			DIR* directory = opendir(path.c_str());
			if (directory != NULL)
			{

				struct dirent* dir_entry;
				while ((dir_entry = readdir(directory)) != NULL)
				{

					if (strcmp(dir_entry->d_name, ".") == 0 || strcmp(dir_entry->d_name, "..") == 0) continue;
					if (dir_entry->d_type == DT_DIR)
					{
						path = checkPathString(path);
						string strPath = path + "/" + dir_entry->d_name;
						traversal_directory_AvatarsAnimation(strPath);

					}
					else
					{

						path = checkPathString(path);
						if (strstr(path.c_str(), "ProjectBCRSystemLoginAvatarsAnimation"))
						{

							flagAvatarsAnimation = true;
							string strPath = path + "/" + dir_entry->d_name;
							locationAvatarAnimationImages[locationAvatarsAnimationIndex++] = strPath;

						}

					}

				}

			}
			closedir(directory);
			return flagAvatarsAnimation;

		}
		bool traversal_directory_Credential(string path)
		{

			DIR* directory = opendir(path.c_str());
			if (directory != NULL)
			{

				struct dirent* dir_entry;
				while ((dir_entry = readdir(directory)) != NULL)
				{

					if (strcmp(dir_entry->d_name, ".") == 0 || strcmp(dir_entry->d_name, "..") == 0) continue;
					if (dir_entry->d_type == DT_DIR)
					{
						path = checkPathString(path);
						string strPath = path + "/" + dir_entry->d_name;
						traversal_directory_Credential(strPath);

					}
					else
					{

						path = checkPathString(path);
						if (strstr(path.c_str(), "ProjectBCRSystemCredential"))
						{

							flagCredential = true;
							string strPath = path + "/" + dir_entry->d_name;
							locationCredential[locationCredentialIndex++] = strPath;

						}

					}

				}

			}
			closedir(directory);
			return flagCredential;

		}
		/// <summary>
		/// Deleting white spaces of a given string
		/// </summary>
		string removeSpaces(string& str)
		{

			string result = "";
			for (int i = 0; i < str.size(); ++i)
			{

				if (str[i] != ' ')
				{

					result += str[i];

				}

			}
			return result;

		}

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox21 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Hack Nerd Font Mono", 18.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Orchid;
			this->label2->Location = System::Drawing::Point(20, 14);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 29);
			this->label2->TabIndex = 17;
			this->label2->Text = L"About Us";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->pictureBox8);
			this->panel2->Controls->Add(this->comboBox21);
			this->panel2->Controls->Add(this->label1);
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
			this->panel2->Location = System::Drawing::Point(450, 75);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(550, 750);
			this->panel2->TabIndex = 28;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->Location = System::Drawing::Point(465, 598);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(23, 23);
			this->pictureBox8->TabIndex = 55;
			this->pictureBox8->TabStop = false;
			// 
			// comboBox21
			// 
			this->comboBox21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->comboBox21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox21->DropDownHeight = 250;
			this->comboBox21->DropDownWidth = 250;
			this->comboBox21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.5F));
			this->comboBox21->ForeColor = System::Drawing::Color::Honeydew;
			this->comboBox21->FormattingEnabled = true;
			this->comboBox21->IntegralHeight = false;
			this->comboBox21->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"    Student", L"    Staff", L"    UserRole" });
			this->comboBox21->Location = System::Drawing::Point(50, 590);
			this->comboBox21->Margin = System::Windows::Forms::Padding(0);
			this->comboBox21->MaxDropDownItems = 20;
			this->comboBox21->Name = L"comboBox21";
			this->comboBox21->Size = System::Drawing::Size(464, 38);
			this->comboBox21->TabIndex = 54;
			this->comboBox21->TabStop = false;
			this->comboBox21->Text = L"    UserRole";
			this->comboBox21->SelectedIndexChanged += gcnew System::EventHandler(this, &LoginForm::comboBox21_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17.25F));
			this->label1->ForeColor = System::Drawing::SystemColors::Info;
			this->label1->Location = System::Drawing::Point(45, 540);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 26);
			this->label1->TabIndex = 32;
			this->label1->Text = L"User Role";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(194, 85);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(165, 165);
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
			this->pictureBox2->Location = System::Drawing::Point(464, 476);
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
			this->pictureBox1->Location = System::Drawing::Point(464, 346);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(30, 30);
			this->pictureBox1->TabIndex = 29;
			this->pictureBox1->TabStop = false;
			// 
			// bunifuThinButton22
			// 
			this->bunifuThinButton22->ActiveBorderThickness = 1;
			this->bunifuThinButton22->ActiveCornerRadius = 50;
			this->bunifuThinButton22->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton22->ActiveForecolor = System::Drawing::Color::MidnightBlue;
			this->bunifuThinButton22->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton22->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton22.BackgroundImage")));
			this->bunifuThinButton22->ButtonText = L"Exit";
			this->bunifuThinButton22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->bunifuThinButton22->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton22->IdleBorderThickness = 1;
			this->bunifuThinButton22->IdleCornerRadius = 50;
			this->bunifuThinButton22->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton22->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton22->Location = System::Drawing::Point(295, 666);
			this->bunifuThinButton22->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->Size = System::Drawing::Size(190, 68);
			this->bunifuThinButton22->TabIndex = 6;
			this->bunifuThinButton22->TabStop = false;
			this->bunifuThinButton22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton22->Click += gcnew System::EventHandler(this, &LoginForm::bunifuThinButton22_Click);
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 1;
			this->bunifuThinButton21->ActiveCornerRadius = 50;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"Sign In";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->bunifuThinButton21->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuThinButton21->IdleBorderThickness = 1;
			this->bunifuThinButton21->IdleCornerRadius = 50;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Location = System::Drawing::Point(71, 666);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(190, 68);
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
			this->bunifuTextbox2->Location = System::Drawing::Point(50, 460);
			this->bunifuTextbox2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->bunifuTextbox2->Name = L"bunifuTextbox2";
			this->bunifuTextbox2->Size = System::Drawing::Size(464, 62);
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
			this->bunifuTextbox1->Location = System::Drawing::Point(50, 330);
			this->bunifuTextbox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->bunifuTextbox1->Name = L"bunifuTextbox1";
			this->bunifuTextbox1->Size = System::Drawing::Size(464, 62);
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
			this->label8->Location = System::Drawing::Point(45, 410);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(150, 26);
			this->label8->TabIndex = 2;
			this->label8->Text = L"User Password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17.25F));
			this->label7->ForeColor = System::Drawing::SystemColors::Info;
			this->label7->Location = System::Drawing::Point(45, 280);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 26);
			this->label7->TabIndex = 1;
			this->label7->Text = L"User ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 28.5F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(208, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(136, 51);
			this->label6->TabIndex = 0;
			this->label6->Text = L"LOGIN";
			// 
			// LoginForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1450, 900);
			this->ControlBox = false;
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label2);
			this->Font = (gcnew System::Drawing::Font(L"Hack Nerd Font Mono", 18.25F, System::Drawing::FontStyle::Bold));
			this->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Group3 - BCRSystem - CourseManagement/CourseRegistration - LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

			// LoginForm load
		private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {

			bool findingAvatarsAnimationPath1 = this->traversal_directory_AvatarsAnimation("C:/");
			if (findingAvatarsAnimationPath1 == false)
			{

				bool findingAvatarsAnimationPath2 = this->traversal_directory_AvatarsAnimation("D:/");
				if (findingAvatarsAnimationPath2 == false)
				{

					MessageBox::Show("Something wrong with your folder ProjectBCRSystemLoginAvatarsAnimation, try again!", "Warning Project", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);

				}

			}

			bool findingCredentialPath1 = this->traversal_directory_Credential("C:/");
			if (findingCredentialPath1 == false)
			{
				bool findingCredentialPath2 = this->traversal_directory_Credential("D:/");
				if (findingCredentialPath2 == false)
				{

					fs::create_directory("ProjectBCRSystemCredential");
					ofstream creating_file;
					creating_file.open("ProjectBCRSystemCredential/_Staffs_Information.txt", ios::out);
					creating_file << "StaffUserID,StaffUserPassword,StaffFirstName,StaffLastName,StaffGender,StaffEmail" << endl;
					creating_file << "admin,123456,<N/A>,<N/A>,<N/A>,<N/A>" << endl;
					creating_file.close();
					creating_file.open("ProjectBCRSystemCredential/_Students_Information.txt", ios::out);
					creating_file << "StudentUserID,StudentUserPassword,StudentFirstName,StudentLastName,StudentGender,StudentEmail" << endl;
					creating_file.close();

				}

			}

			this->pictureBox1->Visible = false;
			this->pictureBox2->Visible = false;
			this->pictureBox8->Visible = false;

		}

			// UserName Textbox
		private: System::Void bunifuTextbox1_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->bunifuTextbox1->text == L"UserName")
			{

				this->bunifuTextbox1->text = L"";
				this->pictureBox6->ImageLocation = marshal_as<String^>(locationAvatarAnimationImages[2]);

			}

			if (this->bunifuTextbox1->text->Length > 0)
			{

				this->pictureBox6->ImageLocation = marshal_as<String^>(locationAvatarAnimationImages[this->bunifuTextbox1->text->Length + 1]);

			}

		}

			// UserName with event on change
		private: System::Void bunifuTextbox1_OnTextChange(System::Object^ sender, System::EventArgs^ e) {

			if (this->bunifuTextbox1->text == L"UserName")
			{

				this->pictureBox6->ImageLocation = marshal_as<String^>(locationAvatarAnimationImages[0]);
				this->pictureBox1->Visible = true;

			}
			else if (this->bunifuTextbox1->text == L"")
			{

				this->pictureBox6->ImageLocation = marshal_as<String^>(locationAvatarAnimationImages[2]);
				this->pictureBox1->Visible = true;

			}
			else
			{

				this->pictureBox1->Visible = false;
				if (this->bunifuTextbox1->text->Length > 0 && this->bunifuTextbox1->text->Length < 16)
				{

					this->pictureBox6->ImageLocation = marshal_as<String^>(locationAvatarAnimationImages[this->bunifuTextbox1->text->Length + 1]);

				}
				else if (this->bunifuTextbox1->text->Length > 15)
				{

					this->pictureBox6->ImageLocation = marshal_as<String^>(locationAvatarAnimationImages[16]);

				}

			}

		}

			// UserPassword Textbox
		private: System::Void bunifuTextbox2_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->bunifuTextbox2->text == L"Password")
			{

				this->bunifuTextbox2->text = L"";
				this->pictureBox6->ImageLocation = marshal_as<String^>(locationAvatarAnimationImages[1]);

			}

		}

			// UserPasswrod with event on change
		private: System::Void bunifuTextbox2_OnTextChange(System::Object^ sender, System::EventArgs^ e) {

			if (this->bunifuTextbox2->text == L"Password" || this->bunifuTextbox2->text == L"")
			{

				this->pictureBox6->ImageLocation = marshal_as<String^>(locationAvatarAnimationImages[1]);
				this->pictureBox2->Visible = true;

			}
			else
			{

				this->pictureBox6->ImageLocation = marshal_as<String^>(locationAvatarAnimationImages[1]);
				this->pictureBox2->Visible = false;

			}

		}

			// UserRole Selection
		private: System::Void comboBox21_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

			this->pictureBox6->ImageLocation = marshal_as<String^>(locationAvatarAnimationImages[26]);
			string userRole = marshal_as<string>(this->comboBox21->Text);
			userRole = this->removeSpaces(userRole);
			if (userRole == "UserRole" || userRole == "")
			{

				this->pictureBox8->Visible = true;

			}
			else
			{

				this->pictureBox8->Visible = false;

			}

			this->pictureBox1->Visible = false;
			this->pictureBox2->Visible = false;
			this->pictureBox6->ImageLocation = marshal_as<String^>(locationAvatarAnimationImages[0]);
			if (this->bunifuTextbox1->text == L"" || this->bunifuTextbox1->text != L"")
			{
				this->bunifuTextbox1->text = L"UserName";
			}

			if (this->bunifuTextbox2->text == L"" || this->bunifuTextbox2->text != L"")
			{
				this->bunifuTextbox2->text = L"Password";
			}

		}

			// Exit Project Button
		private: System::Void bunifuThinButton22_Click(System::Object^ sender, System::EventArgs^ e) {

			Application::Exit();

		}

			// Sign In Button
		private: System::Void bunifuThinButton21_Click(System::Object^ sender, System::EventArgs^ e) {

			string userName = marshal_as<string>(this->bunifuTextbox1->text);
			string userPassword = marshal_as<string>(this->bunifuTextbox2->text);
			string userRole = marshal_as<string>(this->comboBox21->Text);
			userRole = this->removeSpaces(userRole);
			if (userRole == "Student")
			{

				if (userName != "UserName" && userName != "")
				{

					if (userPassword != "Password" && userPassword != "")
					{

						int count = 0;
						bool flagUserName = false;
						bool flagUserPassword = false;
						ifstream reading_file;
						reading_file.open(locationCredential[1], ios::in);
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
							getline(reading_file, studentUserPassword_temp, ',');
							getline(reading_file, temp, '\n');

							if (studentUserName_Temp == userName)
							{

								flagUserName = true;

								if (studentUserPassword_temp == userPassword)
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
								this->pictureBox6->ImageLocation = marshal_as<String^>(locationAvatarAnimationImages[0]);

								MessageBox::Show("Login: Student signs in successfully !! <3", "Student Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
								/*this->Hide();
								StaffForm^ staffUI = gcnew StaffForm(this);
								staffUI->Show();*/

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
								this->pictureBox6->ImageLocation = marshal_as<String^>(locationAvatarAnimationImages[0]);

							}
							else
							{

								MessageBox::Show("Login: Staff UserPassword is invalid, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
								this->pictureBox2->Visible = true;

							}

						}
						else
						{

							MessageBox::Show("Login: Staff UserName is invalid, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
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

					if (userPassword != "Password" && userPassword != "")
					{

						MessageBox::Show("Login: You need to enter UserName Textbox, try again !! <3", "Student Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
						this->pictureBox1->Visible = true;

					}
					else
					{

						MessageBox::Show("Login: You need to enter UserName Textbox and UserPassword Textbox, try again !! <3", "Student Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
						this->pictureBox1->Visible = true;
						this->pictureBox2->Visible = true;

					}

				}

			}
			if (userRole == "Staff")
			{

				if (userName != "UserName" && userName != "")
				{

					if (userPassword != "Password" && userPassword != "")
					{

						int count = 0;
						bool flagUserName = false;
						bool flagUserPassword = false;
						ifstream reading_file;
						reading_file.open(locationCredential[0], ios::in);
						while (!reading_file.eof())
						{

							string staffUserName_Temp, staffUserPassword_temp, temp;

							if (count == 0)
							{

								getline(reading_file, temp);
								++count;
								continue;

							}

							getline(reading_file, staffUserName_Temp, ',');
							getline(reading_file, staffUserPassword_temp, ',');
							getline(reading_file, temp, '\n');

							if (staffUserName_Temp == userName)
							{

								flagUserName = true;

								if (staffUserPassword_temp == userPassword)
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
								this->pictureBox8->Visible = false;
								this->pictureBox6->ImageLocation = marshal_as<String^>(locationAvatarAnimationImages[0]);

								MessageBox::Show("Login: Staff signs in successfully !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
								this->Hide();
								StaffForm^ staffUI = gcnew StaffForm(this);
								staffUI->Show();

								if (this->bunifuTextbox1->text == L"" || this->bunifuTextbox1->text != L"")
								{
									this->bunifuTextbox1->text = L"UserName";
								}

								if (this->bunifuTextbox2->text == L"" || this->bunifuTextbox2->text != L"")
								{
									this->bunifuTextbox2->text = L"Password";
								}

								this->comboBox21->Text = L"    UserRole";
								this->pictureBox1->Visible = false;
								this->pictureBox2->Visible = false;
								this->pictureBox8->Visible = false;
								this->pictureBox6->ImageLocation = marshal_as<String^>(locationAvatarAnimationImages[0]);

							}
							else
							{

								MessageBox::Show("Login: Staff UserPassword is invalid, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
								this->pictureBox2->Visible = true;

							}

						}
						else
						{

							MessageBox::Show("Login: Staff UserName is invalid, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
							this->pictureBox1->Visible = true;
							this->pictureBox2->Visible = true;

						}

					}
					else
					{

						MessageBox::Show("Login: You need to enter UserPassword Textbox, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
						this->pictureBox2->Visible = true;

					}

				}
				else
				{

					if (userPassword != "Password" && userPassword != "")
					{

						MessageBox::Show("Login: You need to enter UserName Textbox, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
						this->pictureBox1->Visible = true;

					}
					else
					{

						MessageBox::Show("Login: You need to enter UserName Textbox and UserPassword Textbox, try again !! <3", "Staff Login", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
						this->pictureBox1->Visible = true;
						this->pictureBox2->Visible = true;

					}

				}

			}
		}
	};
}
