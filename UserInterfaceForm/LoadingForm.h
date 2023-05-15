#pragma once

// Including all libraries in file "_Libraries_Storage_" which are needed for project
#include "_Libraries_Storage_.h"

// Including Login Form UI
#include "LoginForm.h"

namespace UserInterfaceForm {

	using namespace std;
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoadingForm
	/// </summary>
	public ref class LoadingForm : public System::Windows::Forms::Form
	{
	public:
		LoadingForm(void)
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
		~LoadingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: Bunifu::Framework::UI::BunifuGradientPanel^ bunifuGradientPanel4;
	private: Bunifu::Framework::UI::BunifuGradientPanel^ bunifuGradientPanel2;
	private: Bunifu::Framework::UI::BunifuGradientPanel^ bunifuGradientPanel3;
	private: Bunifu::Framework::UI::BunifuGradientPanel^ bunifuGradientPanel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: Bunifu::Framework::UI::BunifuProgressBar^ bunifuProgressBar1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoadingForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuGradientPanel4 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->bunifuGradientPanel2 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->bunifuGradientPanel3 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->bunifuGradientPanel1 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bunifuProgressBar1 = (gcnew Bunifu::Framework::UI::BunifuProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->bunifuGradientPanel4);
			this->panel1->Controls->Add(this->bunifuGradientPanel2);
			this->panel1->Controls->Add(this->bunifuGradientPanel3);
			this->panel1->Controls->Add(this->bunifuGradientPanel1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(800, 474);
			this->panel1->TabIndex = 1;
			this->panel1->UseWaitCursor = true;
			// 
			// bunifuGradientPanel4
			// 
			this->bunifuGradientPanel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel4.BackgroundImage")));
			this->bunifuGradientPanel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel4->GradientBottomLeft = System::Drawing::Color::White;
			this->bunifuGradientPanel4->GradientBottomRight = System::Drawing::Color::White;
			this->bunifuGradientPanel4->GradientTopLeft = System::Drawing::Color::White;
			this->bunifuGradientPanel4->GradientTopRight = System::Drawing::Color::White;
			this->bunifuGradientPanel4->Location = System::Drawing::Point(610, 307);
			this->bunifuGradientPanel4->Name = L"bunifuGradientPanel4";
			this->bunifuGradientPanel4->Quality = 10;
			this->bunifuGradientPanel4->Size = System::Drawing::Size(5, 80);
			this->bunifuGradientPanel4->TabIndex = 7;
			this->bunifuGradientPanel4->UseWaitCursor = true;
			// 
			// bunifuGradientPanel2
			// 
			this->bunifuGradientPanel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel2.BackgroundImage")));
			this->bunifuGradientPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel2->GradientBottomLeft = System::Drawing::Color::White;
			this->bunifuGradientPanel2->GradientBottomRight = System::Drawing::Color::White;
			this->bunifuGradientPanel2->GradientTopLeft = System::Drawing::Color::White;
			this->bunifuGradientPanel2->GradientTopRight = System::Drawing::Color::White;
			this->bunifuGradientPanel2->Location = System::Drawing::Point(426, 382);
			this->bunifuGradientPanel2->Name = L"bunifuGradientPanel2";
			this->bunifuGradientPanel2->Quality = 10;
			this->bunifuGradientPanel2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuGradientPanel2->Size = System::Drawing::Size(186, 5);
			this->bunifuGradientPanel2->TabIndex = 5;
			this->bunifuGradientPanel2->UseWaitCursor = true;
			// 
			// bunifuGradientPanel3
			// 
			this->bunifuGradientPanel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel3.BackgroundImage")));
			this->bunifuGradientPanel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel3->GradientBottomLeft = System::Drawing::Color::White;
			this->bunifuGradientPanel3->GradientBottomRight = System::Drawing::Color::White;
			this->bunifuGradientPanel3->GradientTopLeft = System::Drawing::Color::White;
			this->bunifuGradientPanel3->GradientTopRight = System::Drawing::Color::White;
			this->bunifuGradientPanel3->Location = System::Drawing::Point(190, 268);
			this->bunifuGradientPanel3->Name = L"bunifuGradientPanel3";
			this->bunifuGradientPanel3->Quality = 10;
			this->bunifuGradientPanel3->Size = System::Drawing::Size(5, 80);
			this->bunifuGradientPanel3->TabIndex = 6;
			this->bunifuGradientPanel3->UseWaitCursor = true;
			// 
			// bunifuGradientPanel1
			// 
			this->bunifuGradientPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel1.BackgroundImage")));
			this->bunifuGradientPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel1->GradientBottomLeft = System::Drawing::Color::White;
			this->bunifuGradientPanel1->GradientBottomRight = System::Drawing::Color::White;
			this->bunifuGradientPanel1->GradientTopLeft = System::Drawing::Color::White;
			this->bunifuGradientPanel1->GradientTopRight = System::Drawing::Color::White;
			this->bunifuGradientPanel1->Location = System::Drawing::Point(190, 264);
			this->bunifuGradientPanel1->Name = L"bunifuGradientPanel1";
			this->bunifuGradientPanel1->Quality = 10;
			this->bunifuGradientPanel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuGradientPanel1->Size = System::Drawing::Size(186, 5);
			this->bunifuGradientPanel1->TabIndex = 4;
			this->bunifuGradientPanel1->UseWaitCursor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::MediumAquamarine;
			this->label4->Location = System::Drawing::Point(460, 326);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 28);
			this->label4->TabIndex = 3;
			this->label4->Text = L"%";
			this->label4->UseWaitCursor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::MediumAquamarine;
			this->label3->Location = System::Drawing::Point(416, 326);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"0";
			this->label3->UseWaitCursor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Cyan;
			this->label2->Location = System::Drawing::Point(296, 326);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Loading :";
			this->label2->UseWaitCursor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tinos Nerd Font", 19.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Cyan;
			this->label1->Location = System::Drawing::Point(210, 280);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(388, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Course Management";
			this->label1->UseWaitCursor = true;
			// 
			// bunifuProgressBar1
			// 
			this->bunifuProgressBar1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->bunifuProgressBar1->BorderRadius = 10;
			this->bunifuProgressBar1->Location = System::Drawing::Point(0, 475);
			this->bunifuProgressBar1->Margin = System::Windows::Forms::Padding(14, 15, 14, 15);
			this->bunifuProgressBar1->MaximumValue = 100;
			this->bunifuProgressBar1->Name = L"bunifuProgressBar1";
			this->bunifuProgressBar1->ProgressColor = System::Drawing::Color::MediumSpringGreen;
			this->bunifuProgressBar1->Size = System::Drawing::Size(800, 25);
			this->bunifuProgressBar1->TabIndex = 2;
			this->bunifuProgressBar1->UseWaitCursor = true;
			this->bunifuProgressBar1->Value = 0;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 15;
			this->timer1->Tick += gcnew System::EventHandler(this, &LoadingForm::timer1_Tick);
			// 
			// LoadingForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->ClientSize = System::Drawing::Size(800, 500);
			this->ControlBox = false;
			this->Controls->Add(this->bunifuProgressBar1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Tinos Nerd Font", 18.25F, System::Drawing::FontStyle::Bold));
			this->ForeColor = System::Drawing::Color::MintCream;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoadingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Group3 - BCRSystem - CourseManagement/CourseRegistration - LoadingForm";
			this->UseWaitCursor = true;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

			// Timer1 Tick: Display Loading Bar from 0% to 100%
		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

			this->bunifuProgressBar1->Value += 1;
			string stringCountingProgressBar = marshal_as<string>(this->label3->Text); // convert String^ of this->label3 to std::string of stringCountingProgressBar variable
			int intCountingProgressBar = stoi(stringCountingProgressBar) + 1; // convert string to int
			if (intCountingProgressBar > 100)
			{

				// Be Sure that at all time counting in this->label3 > 100 --> changing it to value 100
				intCountingProgressBar = 100;

			}
			stringCountingProgressBar = to_string(intCountingProgressBar); // convert int to string back
			this->label3->Text = marshal_as<String^>(stringCountingProgressBar); // convert std::string of stringCountingProgressBar variable to String^ of this->label3
			if (this->bunifuProgressBar1->Value == this->bunifuProgressBar1->Maximum_Value)
			{

				// Making this->label3 means: number from 0 -> 100 and this->label4 means: % ==> to disappear
				this->label3->Visible = false;
				this->label4->Visible = false;
				this->label2->Text = "Loading Finish <3";
				this->label2->ForeColor = System::Drawing::Color::LightSalmon;
				this->timer1->Stop();
				this->Hide();
				LoginForm^ signInUI = gcnew LoginForm(this);
				signInUI->Show();

			}
		}
	};
}
