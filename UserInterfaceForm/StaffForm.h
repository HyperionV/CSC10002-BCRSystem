#pragma once

// Including all libraries in file "_Libraries_Storage_" which are needed for project
#include "_Libraries_Storage_.h"

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
	/// Summary for StaffForm
	/// </summary>
	public ref class StaffForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		StaffForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		StaffForm(Form^ obj1)
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
		~StaffForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
		/// <summary>
		/// Declaration to check if menu buttons are clicked twice: to open and close
		/// </summary>
		bool flagCreateSchoolYear = false;
		bool flagHomeProfile = false;
		bool flagSemesterCourse = false;
		bool flagSchoolYearClasses = false;
		bool flagImportExport = false;
		bool flagCreateNewStaff = false;
		bool flagCreatingClicked = false;
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

	private: System::Windows::Forms::FlowLayoutPanel^ sidebar;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton223;
	private: System::Windows::Forms::Panel^ panel2;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton1;
	private: System::Windows::Forms::Panel^ panel3;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton2;
	private: System::Windows::Forms::Panel^ panel4;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton3;
	private: System::Windows::Forms::Panel^ panel7;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton6;
	private: System::Windows::Forms::Panel^ panel8;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton7;
	private: System::Windows::Forms::Panel^ panel9;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton8;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::FlowLayoutPanel^ sidebarTop;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton23;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton21;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Panel^ panel11;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton24;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton22;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel12;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox5;
	private: System::Windows::Forms::Panel^ panel13;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton25;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton26;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox4;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel18;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton226;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton225;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton224;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox8;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::ComboBox^ comboBox11;
	private: System::Windows::Forms::ComboBox^ comboBox9;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::Label^ label38;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox17;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label35;
	private: Bunifu::Framework::UI::BunifuDatepicker^ bunifuDatepicker7;
	private: Bunifu::Framework::UI::BunifuDatepicker^ bunifuDatepicker6;
	private: System::Windows::Forms::Label^ label29;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox13;
	private: System::Windows::Forms::Label^ label26;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox14;
	private: System::Windows::Forms::TreeView^ treeView2;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Panel^ panel19;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton253;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton252;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton219;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton221;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton222;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox18;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox19;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Panel^ panel5;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton27;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton28;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton215;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton29;
	private: System::Windows::Forms::FlowLayoutPanel^ studentsListCourse;
	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn27;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn28;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Column6;
	private: System::Windows::Forms::FlowLayoutPanel^ scoreboardCourse;
	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Column15;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton210;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox6;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton211;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton212;
	private: System::Windows::Forms::Panel^ panel25;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton213;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton214;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox34;
	private: Bunifu::Framework::UI::BunifuDatepicker^ bunifuDatepicker8;
	private: System::Windows::Forms::Label^ label85;
	private: System::Windows::Forms::Label^ label86;
	private: System::Windows::Forms::Label^ label87;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox35;
	private: System::Windows::Forms::Label^ label88;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox36;
	private: System::Windows::Forms::Label^ label89;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox38;
	private: System::Windows::Forms::ComboBox^ comboBox24;
	private: System::Windows::Forms::Label^ label91;
	private: System::Windows::Forms::Label^ label92;
	private: System::Windows::Forms::Panel^ panel24;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox33;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox32;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox30;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox27;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::Label^ label68;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox28;
	private: System::Windows::Forms::Label^ label69;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox29;
	private: System::Windows::Forms::Label^ label70;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox31;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton240;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton241;
	private: System::Windows::Forms::Label^ label72;
	private: System::Windows::Forms::Label^ label84;
	private: System::Windows::Forms::Panel^ panel6;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox21;
	private: System::Windows::Forms::Label^ label61;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox20;
	private: System::Windows::Forms::Label^ label60;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox16;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::ComboBox^ comboBox19;
	private: System::Windows::Forms::Label^ label58;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox9;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox11;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox15;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Panel^ panel14;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton229;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton230;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Label^ label96;
	private: System::Windows::Forms::ComboBox^ comboBox22;
	private: System::Windows::Forms::ComboBox^ comboBox20;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton233;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton234;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton216;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton217;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel21;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton236;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton220;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton227;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton228;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::ComboBox^ comboBox10;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::Panel^ panel20;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton218;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::FlowLayoutPanel^ studentsListClass;
	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn29;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn30;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn31;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn32;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn33;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn34;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn35;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Column5;
	private: System::Windows::Forms::FlowLayoutPanel^ scoreboardClass;
	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::Panel^ panel26;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox37;
	private: Bunifu::Framework::UI::BunifuDatepicker^ bunifuDatepicker9;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::Label^ label71;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox39;
	private: System::Windows::Forms::Label^ label90;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox40;
	private: System::Windows::Forms::Label^ label93;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox41;
	private: System::Windows::Forms::ComboBox^ comboBox21;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton244;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton245;
	private: System::Windows::Forms::Label^ label94;
	private: System::Windows::Forms::Label^ label95;
	private: System::Windows::Forms::TreeView^ treeView3;
	private: System::Windows::Forms::Panel^ panel23;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton2;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton239;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton237;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton238;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton242;
	private: System::Windows::Forms::Label^ label34;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StaffForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->sidebar = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuThinButton223 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->bunifuFlatButton3 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->bunifuFlatButton6 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->bunifuFlatButton7 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->bunifuFlatButton8 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->sidebarTop = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->bunifuThinButton23 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton21 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton29 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton210 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuCustomTextbox6 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->bunifuThinButton211 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton212 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuThinButton239 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton237 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton238 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton242 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton24 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton22 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuCustomTextbox2 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox1 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomTextbox5 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton25 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton26 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuCustomTextbox3 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox4 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuThinButton226 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton225 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton224 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuCustomTextbox8 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton27 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton28 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox17 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->bunifuDatepicker7 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->bunifuDatepicker6 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox13 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox14 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->treeView2 = (gcnew System::Windows::Forms::TreeView());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton215 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton253 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton252 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton219 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton221 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton222 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuCustomTextbox18 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox19 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->studentsListCourse = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->kryptonDataGridView5 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
			this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->scoreboardCourse = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->kryptonDataGridView3 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton213 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton214 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuCustomTextbox34 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->bunifuDatepicker8 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox35 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox36 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox38 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->comboBox24 = (gcnew System::Windows::Forms::ComboBox());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomTextbox33 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->bunifuCustomTextbox32 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->bunifuCustomTextbox30 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->bunifuCustomTextbox27 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox28 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox29 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox31 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->bunifuThinButton240 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton241 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomTextbox21 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox20 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox16 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->comboBox19 = (gcnew System::Windows::Forms::ComboBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox9 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->bunifuCustomTextbox11 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox15 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton229 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton230 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->comboBox22 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox20 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuThinButton233 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton234 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuThinButton216 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton217 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->treeView3 = (gcnew System::Windows::Forms::TreeView());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton236 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton220 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton227 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton228 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton218 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->studentsListClass = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->kryptonDataGridView6 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
			this->dataGridViewTextBoxColumn29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->scoreboardClass = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->kryptonDataGridView4 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomTextbox37 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->bunifuDatepicker9 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox39 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox40 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox41 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->comboBox21 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuThinButton244 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton245 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->sidebar->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->sidebarTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel17->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel19->SuspendLayout();
			this->studentsListCourse->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView5))->BeginInit();
			this->scoreboardCourse->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView3))->BeginInit();
			this->panel25->SuspendLayout();
			this->panel24->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel20->SuspendLayout();
			this->studentsListClass->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView6))->BeginInit();
			this->scoreboardClass->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView4))->BeginInit();
			this->panel26->SuspendLayout();
			this->SuspendLayout();
			// 
			// sidebar
			// 
			this->sidebar->BackColor = System::Drawing::Color::Transparent;
			this->sidebar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sidebar.BackgroundImage")));
			this->sidebar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sidebar->Controls->Add(this->panel1);
			this->sidebar->Controls->Add(this->panel2);
			this->sidebar->Controls->Add(this->panel3);
			this->sidebar->Controls->Add(this->panel4);
			this->sidebar->Controls->Add(this->panel7);
			this->sidebar->Controls->Add(this->panel8);
			this->sidebar->Controls->Add(this->panel9);
			this->sidebar->Controls->Add(this->label62);
			this->sidebar->Controls->Add(this->panel23);
			this->sidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->sidebar->Location = System::Drawing::Point(0, 0);
			this->sidebar->Margin = System::Windows::Forms::Padding(0);
			this->sidebar->MaximumSize = System::Drawing::Size(300, 1000);
			this->sidebar->MinimumSize = System::Drawing::Size(60, 1000);
			this->sidebar->Name = L"sidebar";
			this->sidebar->Size = System::Drawing::Size(300, 1000);
			this->sidebar->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->bunifuThinButton223);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(300, 140);
			this->panel1->TabIndex = 0;
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->DropDownHeight = 250;
			this->comboBox1->DropDownWidth = 200;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.5F));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"(School Year)", L"2022 - 2023", L"2023 - 2024",
					L"2024 - 2025", L"2025 - 2026"
			});
			this->comboBox1->Location = System::Drawing::Point(15, 50);
			this->comboBox1->MaxDropDownItems = 20;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(270, 33);
			this->comboBox1->Sorted = true;
			this->comboBox1->TabIndex = 4;
			this->comboBox1->TabStop = false;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &StaffForm::comboBox1_SelectedIndexChanged);
			// 
			// bunifuThinButton223
			// 
			this->bunifuThinButton223->ActiveBorderThickness = 1;
			this->bunifuThinButton223->ActiveCornerRadius = 10;
			this->bunifuThinButton223->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bunifuThinButton223->ActiveForecolor = System::Drawing::Color::Honeydew;
			this->bunifuThinButton223->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton223->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton223->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton223.BackgroundImage")));
			this->bunifuThinButton223->ButtonText = L"Create New School Year";
			this->bunifuThinButton223->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton223->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton223->ForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton223->IdleBorderThickness = 1;
			this->bunifuThinButton223->IdleCornerRadius = 10;
			this->bunifuThinButton223->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton223->IdleForecolor = System::Drawing::SystemColors::Info;
			this->bunifuThinButton223->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton223->Location = System::Drawing::Point(64, 94);
			this->bunifuThinButton223->Margin = System::Windows::Forms::Padding(0);
			this->bunifuThinButton223->Name = L"bunifuThinButton223";
			this->bunifuThinButton223->Size = System::Drawing::Size(159, 38);
			this->bunifuThinButton223->TabIndex = 3;
			this->bunifuThinButton223->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton223->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton223_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->panel2->Controls->Add(this->bunifuFlatButton1);
			this->panel2->Location = System::Drawing::Point(0, 180);
			this->panel2->Margin = System::Windows::Forms::Padding(0, 40, 0, 20);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(300, 63);
			this->panel2->TabIndex = 1;
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"        HOME / PROFILE";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton1.Iconimage")));
			this->bunifuFlatButton1->Iconimage_right = nullptr;
			this->bunifuFlatButton1->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton1->Iconimage_Selected = nullptr;
			this->bunifuFlatButton1->IconMarginLeft = 38;
			this->bunifuFlatButton1->IconMarginRight = 0;
			this->bunifuFlatButton1->IconRightVisible = true;
			this->bunifuFlatButton1->IconRightZoom = 0;
			this->bunifuFlatButton1->IconVisible = true;
			this->bunifuFlatButton1->IconZoom = 65;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(-25, -9);
			this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(0);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(344, 88);
			this->bunifuFlatButton1->TabIndex = 2;
			this->bunifuFlatButton1->Text = L"        HOME / PROFILE";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->Click += gcnew System::EventHandler(this, &StaffForm::bunifuFlatButton1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->panel3->Controls->Add(this->bunifuFlatButton2);
			this->panel3->Location = System::Drawing::Point(0, 283);
			this->panel3->Margin = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(300, 63);
			this->panel3->TabIndex = 3;
			// 
			// bunifuFlatButton2
			// 
			this->bunifuFlatButton2->Activecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuFlatButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton2->BorderRadius = 0;
			this->bunifuFlatButton2->ButtonText = L"        SEMESTER - COURSES";
			this->bunifuFlatButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton2->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton2->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton2.Iconimage")));
			this->bunifuFlatButton2->Iconimage_right = nullptr;
			this->bunifuFlatButton2->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton2->Iconimage_Selected = nullptr;
			this->bunifuFlatButton2->IconMarginLeft = 38;
			this->bunifuFlatButton2->IconMarginRight = 0;
			this->bunifuFlatButton2->IconRightVisible = true;
			this->bunifuFlatButton2->IconRightZoom = 0;
			this->bunifuFlatButton2->IconVisible = true;
			this->bunifuFlatButton2->IconZoom = 65;
			this->bunifuFlatButton2->IsTab = false;
			this->bunifuFlatButton2->Location = System::Drawing::Point(-25, -9);
			this->bunifuFlatButton2->Margin = System::Windows::Forms::Padding(0);
			this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
			this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton2->selected = false;
			this->bunifuFlatButton2->Size = System::Drawing::Size(344, 88);
			this->bunifuFlatButton2->TabIndex = 2;
			this->bunifuFlatButton2->Text = L"        SEMESTER - COURSES";
			this->bunifuFlatButton2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton2->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton2->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton2->Click += gcnew System::EventHandler(this, &StaffForm::bunifuFlatButton2_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->panel4->Controls->Add(this->bunifuFlatButton3);
			this->panel4->Location = System::Drawing::Point(0, 386);
			this->panel4->Margin = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(300, 63);
			this->panel4->TabIndex = 4;
			// 
			// bunifuFlatButton3
			// 
			this->bunifuFlatButton3->Activecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuFlatButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton3->BorderRadius = 0;
			this->bunifuFlatButton3->ButtonText = L"        SCHOOLYEAR - CLASSES";
			this->bunifuFlatButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton3->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton3->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton3.Iconimage")));
			this->bunifuFlatButton3->Iconimage_right = nullptr;
			this->bunifuFlatButton3->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton3->Iconimage_Selected = nullptr;
			this->bunifuFlatButton3->IconMarginLeft = 38;
			this->bunifuFlatButton3->IconMarginRight = 0;
			this->bunifuFlatButton3->IconRightVisible = true;
			this->bunifuFlatButton3->IconRightZoom = 0;
			this->bunifuFlatButton3->IconVisible = true;
			this->bunifuFlatButton3->IconZoom = 65;
			this->bunifuFlatButton3->IsTab = false;
			this->bunifuFlatButton3->Location = System::Drawing::Point(-25, -9);
			this->bunifuFlatButton3->Margin = System::Windows::Forms::Padding(0);
			this->bunifuFlatButton3->Name = L"bunifuFlatButton3";
			this->bunifuFlatButton3->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->OnHovercolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuFlatButton3->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton3->selected = false;
			this->bunifuFlatButton3->Size = System::Drawing::Size(344, 88);
			this->bunifuFlatButton3->TabIndex = 2;
			this->bunifuFlatButton3->Text = L"        SCHOOLYEAR - CLASSES";
			this->bunifuFlatButton3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton3->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton3->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton3->Click += gcnew System::EventHandler(this, &StaffForm::bunifuFlatButton3_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->panel7->Controls->Add(this->bunifuFlatButton6);
			this->panel7->Location = System::Drawing::Point(0, 489);
			this->panel7->Margin = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(300, 63);
			this->panel7->TabIndex = 7;
			// 
			// bunifuFlatButton6
			// 
			this->bunifuFlatButton6->Activecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuFlatButton6->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton6->BorderRadius = 0;
			this->bunifuFlatButton6->ButtonText = L"        IMPORT / EXPORT COURSE";
			this->bunifuFlatButton6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton6->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton6->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton6->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton6.Iconimage")));
			this->bunifuFlatButton6->Iconimage_right = nullptr;
			this->bunifuFlatButton6->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton6->Iconimage_Selected = nullptr;
			this->bunifuFlatButton6->IconMarginLeft = 38;
			this->bunifuFlatButton6->IconMarginRight = 0;
			this->bunifuFlatButton6->IconRightVisible = true;
			this->bunifuFlatButton6->IconRightZoom = 0;
			this->bunifuFlatButton6->IconVisible = true;
			this->bunifuFlatButton6->IconZoom = 65;
			this->bunifuFlatButton6->IsTab = false;
			this->bunifuFlatButton6->Location = System::Drawing::Point(-25, -9);
			this->bunifuFlatButton6->Margin = System::Windows::Forms::Padding(0);
			this->bunifuFlatButton6->Name = L"bunifuFlatButton6";
			this->bunifuFlatButton6->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton6->OnHovercolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuFlatButton6->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton6->selected = false;
			this->bunifuFlatButton6->Size = System::Drawing::Size(344, 88);
			this->bunifuFlatButton6->TabIndex = 2;
			this->bunifuFlatButton6->Text = L"        IMPORT / EXPORT COURSE";
			this->bunifuFlatButton6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton6->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton6->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton6->Click += gcnew System::EventHandler(this, &StaffForm::bunifuFlatButton6_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->panel8->Controls->Add(this->bunifuFlatButton7);
			this->panel8->Location = System::Drawing::Point(0, 592);
			this->panel8->Margin = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(300, 63);
			this->panel8->TabIndex = 8;
			// 
			// bunifuFlatButton7
			// 
			this->bunifuFlatButton7->Activecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuFlatButton7->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton7->BorderRadius = 0;
			this->bunifuFlatButton7->ButtonText = L"        CREATE NEW STAFF";
			this->bunifuFlatButton7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton7->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton7->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton7->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton7.Iconimage")));
			this->bunifuFlatButton7->Iconimage_right = nullptr;
			this->bunifuFlatButton7->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton7->Iconimage_Selected = nullptr;
			this->bunifuFlatButton7->IconMarginLeft = 38;
			this->bunifuFlatButton7->IconMarginRight = 0;
			this->bunifuFlatButton7->IconRightVisible = true;
			this->bunifuFlatButton7->IconRightZoom = 0;
			this->bunifuFlatButton7->IconVisible = true;
			this->bunifuFlatButton7->IconZoom = 65;
			this->bunifuFlatButton7->IsTab = false;
			this->bunifuFlatButton7->Location = System::Drawing::Point(-25, -9);
			this->bunifuFlatButton7->Margin = System::Windows::Forms::Padding(0);
			this->bunifuFlatButton7->Name = L"bunifuFlatButton7";
			this->bunifuFlatButton7->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton7->OnHovercolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuFlatButton7->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton7->selected = false;
			this->bunifuFlatButton7->Size = System::Drawing::Size(344, 88);
			this->bunifuFlatButton7->TabIndex = 2;
			this->bunifuFlatButton7->Text = L"        CREATE NEW STAFF";
			this->bunifuFlatButton7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton7->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton7->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton7->Click += gcnew System::EventHandler(this, &StaffForm::bunifuFlatButton7_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->panel9->Controls->Add(this->bunifuFlatButton8);
			this->panel9->Location = System::Drawing::Point(0, 695);
			this->panel9->Margin = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(300, 63);
			this->panel9->TabIndex = 9;
			// 
			// bunifuFlatButton8
			// 
			this->bunifuFlatButton8->Activecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuFlatButton8->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton8->BorderRadius = 0;
			this->bunifuFlatButton8->ButtonText = L"        LOG OUT";
			this->bunifuFlatButton8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton8->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton8->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton8->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton8.Iconimage")));
			this->bunifuFlatButton8->Iconimage_right = nullptr;
			this->bunifuFlatButton8->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton8->Iconimage_Selected = nullptr;
			this->bunifuFlatButton8->IconMarginLeft = 36;
			this->bunifuFlatButton8->IconMarginRight = 0;
			this->bunifuFlatButton8->IconRightVisible = true;
			this->bunifuFlatButton8->IconRightZoom = 0;
			this->bunifuFlatButton8->IconVisible = true;
			this->bunifuFlatButton8->IconZoom = 75;
			this->bunifuFlatButton8->IsTab = false;
			this->bunifuFlatButton8->Location = System::Drawing::Point(-25, -9);
			this->bunifuFlatButton8->Margin = System::Windows::Forms::Padding(0);
			this->bunifuFlatButton8->Name = L"bunifuFlatButton8";
			this->bunifuFlatButton8->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton8->OnHovercolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuFlatButton8->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton8->selected = false;
			this->bunifuFlatButton8->Size = System::Drawing::Size(344, 88);
			this->bunifuFlatButton8->TabIndex = 2;
			this->bunifuFlatButton8->Text = L"        LOG OUT";
			this->bunifuFlatButton8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton8->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton8->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton8->Click += gcnew System::EventHandler(this, &StaffForm::bunifuFlatButton8_Click);
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold));
			this->label62->ForeColor = System::Drawing::Color::Honeydew;
			this->label62->Location = System::Drawing::Point(60, 808);
			this->label62->Margin = System::Windows::Forms::Padding(60, 30, 0, 10);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(57, 26);
			this->label62->TabIndex = 10;
			this->label62->Text = L"Text";
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::Transparent;
			this->panel23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel23.BackgroundImage")));
			this->panel23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel23->Location = System::Drawing::Point(0, 844);
			this->panel23->Margin = System::Windows::Forms::Padding(0);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(300, 156);
			this->panel23->TabIndex = 11;
			// 
			// sidebarTop
			// 
			this->sidebarTop->BackColor = System::Drawing::Color::Transparent;
			this->sidebarTop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sidebarTop.BackgroundImage")));
			this->sidebarTop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sidebarTop->Controls->Add(this->bunifuThinButton23);
			this->sidebarTop->Controls->Add(this->bunifuThinButton21);
			this->sidebarTop->Controls->Add(this->bunifuThinButton29);
			this->sidebarTop->Controls->Add(this->bunifuThinButton210);
			this->sidebarTop->Controls->Add(this->bunifuCustomTextbox6);
			this->sidebarTop->Controls->Add(this->bunifuThinButton211);
			this->sidebarTop->Controls->Add(this->bunifuThinButton212);
			this->sidebarTop->Controls->Add(this->bunifuImageButton2);
			this->sidebarTop->Controls->Add(this->bunifuThinButton239);
			this->sidebarTop->Controls->Add(this->bunifuThinButton237);
			this->sidebarTop->Controls->Add(this->bunifuThinButton238);
			this->sidebarTop->Controls->Add(this->bunifuThinButton242);
			this->sidebarTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->sidebarTop->Location = System::Drawing::Point(300, 0);
			this->sidebarTop->Margin = System::Windows::Forms::Padding(0);
			this->sidebarTop->Name = L"sidebarTop";
			this->sidebarTop->Size = System::Drawing::Size(1300, 140);
			this->sidebarTop->TabIndex = 2;
			// 
			// bunifuThinButton23
			// 
			this->bunifuThinButton23->ActiveBorderThickness = 1;
			this->bunifuThinButton23->ActiveCornerRadius = 50;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton23.BackgroundImage")));
			this->bunifuThinButton23->ButtonText = L"Profile";
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton23->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton23->IdleBorderThickness = 1;
			this->bunifuThinButton23->IdleCornerRadius = 50;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton23->Location = System::Drawing::Point(80, 40);
			this->bunifuThinButton23->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton23->Name = L"bunifuThinButton23";
			this->bunifuThinButton23->Size = System::Drawing::Size(241, 64);
			this->bunifuThinButton23->TabIndex = 9;
			this->bunifuThinButton23->TabStop = false;
			this->bunifuThinButton23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton23->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton23_Click);
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 1;
			this->bunifuThinButton21->ActiveCornerRadius = 50;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"Change Password";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton21->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton21->IdleBorderThickness = 1;
			this->bunifuThinButton21->IdleCornerRadius = 50;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Location = System::Drawing::Point(441, 40);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(241, 64);
			this->bunifuThinButton21->TabIndex = 10;
			this->bunifuThinButton21->TabStop = false;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton21->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton21_Click);
			// 
			// bunifuThinButton29
			// 
			this->bunifuThinButton29->ActiveBorderThickness = 1;
			this->bunifuThinButton29->ActiveCornerRadius = 50;
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton29.BackgroundImage")));
			this->bunifuThinButton29->ButtonText = L"Semester - Course";
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton29->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton29->IdleBorderThickness = 1;
			this->bunifuThinButton29->IdleCornerRadius = 50;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton29->Location = System::Drawing::Point(802, 40);
			this->bunifuThinButton29->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton29->Name = L"bunifuThinButton29";
			this->bunifuThinButton29->Size = System::Drawing::Size(241, 64);
			this->bunifuThinButton29->TabIndex = 11;
			this->bunifuThinButton29->TabStop = false;
			this->bunifuThinButton29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton210
			// 
			this->bunifuThinButton210->ActiveBorderThickness = 1;
			this->bunifuThinButton210->ActiveCornerRadius = 50;
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton210->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton210.BackgroundImage")));
			this->bunifuThinButton210->ButtonText = L"Go Back";
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton210->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton210->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton210->IdleBorderThickness = 1;
			this->bunifuThinButton210->IdleCornerRadius = 50;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Location = System::Drawing::Point(40, 184);
			this->bunifuThinButton210->Margin = System::Windows::Forms::Padding(40, 40, 5, 40);
			this->bunifuThinButton210->Name = L"bunifuThinButton210";
			this->bunifuThinButton210->Size = System::Drawing::Size(241, 64);
			this->bunifuThinButton210->TabIndex = 12;
			this->bunifuThinButton210->TabStop = false;
			this->bunifuThinButton210->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton210->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton210_Click);
			// 
			// bunifuCustomTextbox6
			// 
			this->bunifuCustomTextbox6->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.75F));
			this->bunifuCustomTextbox6->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox6->Location = System::Drawing::Point(296, 196);
			this->bunifuCustomTextbox6->Margin = System::Windows::Forms::Padding(10, 52, 10, 40);
			this->bunifuCustomTextbox6->Name = L"bunifuCustomTextbox6";
			this->bunifuCustomTextbox6->Size = System::Drawing::Size(449, 41);
			this->bunifuCustomTextbox6->TabIndex = 13;
			this->bunifuCustomTextbox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bunifuThinButton211
			// 
			this->bunifuThinButton211->ActiveBorderThickness = 1;
			this->bunifuThinButton211->ActiveCornerRadius = 40;
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton211->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton211.BackgroundImage")));
			this->bunifuThinButton211->ButtonText = L"Search";
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton211->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton211->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton211->IdleBorderThickness = 1;
			this->bunifuThinButton211->IdleCornerRadius = 40;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Location = System::Drawing::Point(765, 184);
			this->bunifuThinButton211->Margin = System::Windows::Forms::Padding(10, 40, 10, 40);
			this->bunifuThinButton211->Name = L"bunifuThinButton211";
			this->bunifuThinButton211->Size = System::Drawing::Size(210, 60);
			this->bunifuThinButton211->TabIndex = 14;
			this->bunifuThinButton211->TabStop = false;
			this->bunifuThinButton211->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton212
			// 
			this->bunifuThinButton212->ActiveBorderThickness = 1;
			this->bunifuThinButton212->ActiveCornerRadius = 40;
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton212->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton212.BackgroundImage")));
			this->bunifuThinButton212->ButtonText = L"Delete";
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton212->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton212->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton212->IdleBorderThickness = 1;
			this->bunifuThinButton212->IdleCornerRadius = 40;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton212->Location = System::Drawing::Point(990, 184);
			this->bunifuThinButton212->Margin = System::Windows::Forms::Padding(5, 40, 10, 40);
			this->bunifuThinButton212->Name = L"bunifuThinButton212";
			this->bunifuThinButton212->Size = System::Drawing::Size(200, 60);
			this->bunifuThinButton212->TabIndex = 15;
			this->bunifuThinButton212->TabStop = false;
			this->bunifuThinButton212->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(1210, 192);
			this->bunifuImageButton2->Margin = System::Windows::Forms::Padding(10, 48, 40, 40);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(40, 40);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 25;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			// 
			// bunifuThinButton239
			// 
			this->bunifuThinButton239->ActiveBorderThickness = 1;
			this->bunifuThinButton239->ActiveCornerRadius = 50;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton239->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton239.BackgroundImage")));
			this->bunifuThinButton239->ButtonText = L"Create New Staff";
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton239->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton239->IdleBorderThickness = 1;
			this->bunifuThinButton239->IdleCornerRadius = 50;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton239->Location = System::Drawing::Point(80, 328);
			this->bunifuThinButton239->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton239->Name = L"bunifuThinButton239";
			this->bunifuThinButton239->Size = System::Drawing::Size(280, 64);
			this->bunifuThinButton239->TabIndex = 26;
			this->bunifuThinButton239->TabStop = false;
			this->bunifuThinButton239->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton237
			// 
			this->bunifuThinButton237->ActiveBorderThickness = 1;
			this->bunifuThinButton237->ActiveCornerRadius = 50;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton237->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton237.BackgroundImage")));
			this->bunifuThinButton237->ButtonText = L"Import";
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton237->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton237->IdleBorderThickness = 1;
			this->bunifuThinButton237->IdleCornerRadius = 50;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton237->Location = System::Drawing::Point(480, 328);
			this->bunifuThinButton237->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton237->Name = L"bunifuThinButton237";
			this->bunifuThinButton237->Size = System::Drawing::Size(280, 64);
			this->bunifuThinButton237->TabIndex = 27;
			this->bunifuThinButton237->TabStop = false;
			this->bunifuThinButton237->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton237->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton237_Click);
			// 
			// bunifuThinButton238
			// 
			this->bunifuThinButton238->ActiveBorderThickness = 1;
			this->bunifuThinButton238->ActiveCornerRadius = 50;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton238->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton238.BackgroundImage")));
			this->bunifuThinButton238->ButtonText = L"Export";
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton238->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton238->IdleBorderThickness = 1;
			this->bunifuThinButton238->IdleCornerRadius = 50;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Location = System::Drawing::Point(880, 328);
			this->bunifuThinButton238->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton238->Name = L"bunifuThinButton238";
			this->bunifuThinButton238->Size = System::Drawing::Size(280, 64);
			this->bunifuThinButton238->TabIndex = 28;
			this->bunifuThinButton238->TabStop = false;
			this->bunifuThinButton238->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton238->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton238_Click);
			// 
			// bunifuThinButton242
			// 
			this->bunifuThinButton242->ActiveBorderThickness = 1;
			this->bunifuThinButton242->ActiveCornerRadius = 50;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton242->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton242.BackgroundImage")));
			this->bunifuThinButton242->ButtonText = L"SchoolYear - Classes";
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton242->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton242->IdleBorderThickness = 1;
			this->bunifuThinButton242->IdleCornerRadius = 50;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton242->Location = System::Drawing::Point(80, 472);
			this->bunifuThinButton242->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton242->Name = L"bunifuThinButton242";
			this->bunifuThinButton242->Size = System::Drawing::Size(241, 64);
			this->bunifuThinButton242->TabIndex = 29;
			this->bunifuThinButton242->TabStop = false;
			this->bunifuThinButton242->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Transparent;
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel10->Controls->Add(this->comboBox2);
			this->panel10->Controls->Add(this->label42);
			this->panel10->Controls->Add(this->label41);
			this->panel10->Controls->Add(this->panel11);
			this->panel10->Controls->Add(this->bunifuCustomTextbox2);
			this->panel10->Controls->Add(this->label12);
			this->panel10->Controls->Add(this->label11);
			this->panel10->Controls->Add(this->bunifuCustomTextbox1);
			this->panel10->Controls->Add(this->label10);
			this->panel10->Controls->Add(this->label9);
			this->panel10->Controls->Add(this->label8);
			this->panel10->Controls->Add(this->label7);
			this->panel10->Controls->Add(this->label6);
			this->panel10->Controls->Add(this->label5);
			this->panel10->Controls->Add(this->label4);
			this->panel10->Controls->Add(this->label3);
			this->panel10->Controls->Add(this->label2);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel10->Location = System::Drawing::Point(300, 140);
			this->panel10->Margin = System::Windows::Forms::Padding(0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(1300, 860);
			this->panel10->TabIndex = 3;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->DropDownHeight = 250;
			this->comboBox2->DropDownWidth = 250;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.75F));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->IntegralHeight = false;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Female", L"Male" });
			this->comboBox2->Location = System::Drawing::Point(787, 320);
			this->comboBox2->MaxDropDownItems = 20;
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(450, 36);
			this->comboBox2->Sorted = true;
			this->comboBox2->TabIndex = 5;
			this->comboBox2->TabStop = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label42->ForeColor = System::Drawing::Color::Honeydew;
			this->label42->Location = System::Drawing::Point(383, 673);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(182, 29);
			this->label42->TabIndex = 18;
			this->label42->Text = L"*************";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label41->ForeColor = System::Drawing::SystemColors::Info;
			this->label41->Location = System::Drawing::Point(75, 673);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(116, 29);
			this->label41->TabIndex = 17;
			this->label41->Text = L"Password:";
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->bunifuThinButton24);
			this->panel11->Controls->Add(this->bunifuThinButton22);
			this->panel11->Location = System::Drawing::Point(787, 639);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(450, 100);
			this->panel11->TabIndex = 16;
			// 
			// bunifuThinButton24
			// 
			this->bunifuThinButton24->ActiveBorderThickness = 1;
			this->bunifuThinButton24->ActiveCornerRadius = 50;
			this->bunifuThinButton24->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton24->ActiveForecolor = System::Drawing::Color::MidnightBlue;
			this->bunifuThinButton24->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton24->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton24.BackgroundImage")));
			this->bunifuThinButton24->ButtonText = L"Close";
			this->bunifuThinButton24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton24->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton24->IdleBorderThickness = 1;
			this->bunifuThinButton24->IdleCornerRadius = 50;
			this->bunifuThinButton24->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton24->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton24->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton24->Location = System::Drawing::Point(232, 19);
			this->bunifuThinButton24->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton24->Name = L"bunifuThinButton24";
			this->bunifuThinButton24->Size = System::Drawing::Size(160, 60);
			this->bunifuThinButton24->TabIndex = 7;
			this->bunifuThinButton24->TabStop = false;
			this->bunifuThinButton24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton24->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton24_Click);
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
			this->bunifuThinButton22->ButtonText = L"Change";
			this->bunifuThinButton22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton22->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton22->IdleBorderThickness = 1;
			this->bunifuThinButton22->IdleCornerRadius = 50;
			this->bunifuThinButton22->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton22->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton22->Location = System::Drawing::Point(50, 19);
			this->bunifuThinButton22->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->Size = System::Drawing::Size(160, 60);
			this->bunifuThinButton22->TabIndex = 6;
			this->bunifuThinButton22->TabStop = false;
			this->bunifuThinButton22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomTextbox2
			// 
			this->bunifuCustomTextbox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox2->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox2->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox2->Location = System::Drawing::Point(787, 454);
			this->bunifuCustomTextbox2->Name = L"bunifuCustomTextbox2";
			this->bunifuCustomTextbox2->Size = System::Drawing::Size(450, 35);
			this->bunifuCustomTextbox2->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label12->ForeColor = System::Drawing::Color::Honeydew;
			this->label12->Location = System::Drawing::Point(782, 388);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(185, 29);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Enter Staff Email";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label11->ForeColor = System::Drawing::Color::Honeydew;
			this->label11->Location = System::Drawing::Point(782, 254);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(201, 29);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Enter Staff Gender";
			// 
			// bunifuCustomTextbox1
			// 
			this->bunifuCustomTextbox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox1->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox1->Location = System::Drawing::Point(787, 190);
			this->bunifuCustomTextbox1->Name = L"bunifuCustomTextbox1";
			this->bunifuCustomTextbox1->Size = System::Drawing::Size(450, 35);
			this->bunifuCustomTextbox1->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label10->ForeColor = System::Drawing::Color::Honeydew;
			this->label10->Location = System::Drawing::Point(782, 124);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(187, 29);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Enter Staff Name";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label9->ForeColor = System::Drawing::Color::Honeydew;
			this->label9->Location = System::Drawing::Point(383, 534);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 29);
			this->label9->TabIndex = 7;
			this->label9->Text = L"dbtien";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label8->ForeColor = System::Drawing::Color::Honeydew;
			this->label8->Location = System::Drawing::Point(383, 388);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(267, 29);
			this->label8->TabIndex = 6;
			this->label8->Text = L"dbtien@fit.hcmus.edu.vn";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label7->ForeColor = System::Drawing::Color::Honeydew;
			this->label7->Location = System::Drawing::Point(383, 258);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 29);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Male";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label6->ForeColor = System::Drawing::Color::Honeydew;
			this->label6->Location = System::Drawing::Point(383, 124);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(145, 29);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Dinh Ba Tien";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label5->ForeColor = System::Drawing::SystemColors::Info;
			this->label5->Location = System::Drawing::Point(75, 534);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 29);
			this->label5->TabIndex = 3;
			this->label5->Text = L"User ID:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label4->ForeColor = System::Drawing::SystemColors::Info;
			this->label4->Location = System::Drawing::Point(75, 388);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 29);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Email:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label3->ForeColor = System::Drawing::SystemColors::Info;
			this->label3->Location = System::Drawing::Point(75, 257);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 29);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Gender:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label2->ForeColor = System::Drawing::SystemColors::Info;
			this->label2->Location = System::Drawing::Point(75, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 29);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Full Name:";
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Transparent;
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel12->Controls->Add(this->bunifuCustomTextbox5);
			this->panel12->Controls->Add(this->panel13);
			this->panel12->Controls->Add(this->bunifuCustomTextbox3);
			this->panel12->Controls->Add(this->label15);
			this->panel12->Controls->Add(this->label16);
			this->panel12->Controls->Add(this->bunifuCustomTextbox4);
			this->panel12->Controls->Add(this->label17);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel12->Location = System::Drawing::Point(1600, 140);
			this->panel12->Margin = System::Windows::Forms::Padding(0);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(1300, 860);
			this->panel12->TabIndex = 19;
			// 
			// bunifuCustomTextbox5
			// 
			this->bunifuCustomTextbox5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox5->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox5->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox5->Location = System::Drawing::Point(440, 316);
			this->bunifuCustomTextbox5->Name = L"bunifuCustomTextbox5";
			this->bunifuCustomTextbox5->Size = System::Drawing::Size(450, 35);
			this->bunifuCustomTextbox5->TabIndex = 17;
			this->bunifuCustomTextbox5->UseSystemPasswordChar = true;
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->bunifuThinButton25);
			this->panel13->Controls->Add(this->bunifuThinButton26);
			this->panel13->Location = System::Drawing::Point(441, 567);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(449, 100);
			this->panel13->TabIndex = 16;
			// 
			// bunifuThinButton25
			// 
			this->bunifuThinButton25->ActiveBorderThickness = 1;
			this->bunifuThinButton25->ActiveCornerRadius = 50;
			this->bunifuThinButton25->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton25->ActiveForecolor = System::Drawing::Color::MidnightBlue;
			this->bunifuThinButton25->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton25->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton25.BackgroundImage")));
			this->bunifuThinButton25->ButtonText = L"Close";
			this->bunifuThinButton25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton25->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton25->IdleBorderThickness = 1;
			this->bunifuThinButton25->IdleCornerRadius = 50;
			this->bunifuThinButton25->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton25->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton25->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton25->Location = System::Drawing::Point(242, 19);
			this->bunifuThinButton25->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton25->Name = L"bunifuThinButton25";
			this->bunifuThinButton25->Size = System::Drawing::Size(168, 64);
			this->bunifuThinButton25->TabIndex = 12;
			this->bunifuThinButton25->TabStop = false;
			this->bunifuThinButton25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton25->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton25_Click);
			// 
			// bunifuThinButton26
			// 
			this->bunifuThinButton26->ActiveBorderThickness = 1;
			this->bunifuThinButton26->ActiveCornerRadius = 50;
			this->bunifuThinButton26->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton26->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton26->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton26->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton26.BackgroundImage")));
			this->bunifuThinButton26->ButtonText = L"Change";
			this->bunifuThinButton26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton26->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton26->IdleBorderThickness = 1;
			this->bunifuThinButton26->IdleCornerRadius = 50;
			this->bunifuThinButton26->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton26->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton26->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton26->Location = System::Drawing::Point(38, 19);
			this->bunifuThinButton26->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton26->Name = L"bunifuThinButton26";
			this->bunifuThinButton26->Size = System::Drawing::Size(168, 64);
			this->bunifuThinButton26->TabIndex = 11;
			this->bunifuThinButton26->TabStop = false;
			this->bunifuThinButton26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomTextbox3
			// 
			this->bunifuCustomTextbox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox3->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox3->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox3->Location = System::Drawing::Point(440, 450);
			this->bunifuCustomTextbox3->Name = L"bunifuCustomTextbox3";
			this->bunifuCustomTextbox3->Size = System::Drawing::Size(450, 35);
			this->bunifuCustomTextbox3->TabIndex = 13;
			this->bunifuCustomTextbox3->UseSystemPasswordChar = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label15->ForeColor = System::Drawing::Color::Honeydew;
			this->label15->Location = System::Drawing::Point(510, 388);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(308, 29);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Confirm Staff New Password";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label16->ForeColor = System::Drawing::Color::Honeydew;
			this->label16->Location = System::Drawing::Point(520, 254);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(277, 29);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Enter Staff New Password";
			// 
			// bunifuCustomTextbox4
			// 
			this->bunifuCustomTextbox4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox4->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox4->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox4->Location = System::Drawing::Point(440, 186);
			this->bunifuCustomTextbox4->Name = L"bunifuCustomTextbox4";
			this->bunifuCustomTextbox4->Size = System::Drawing::Size(450, 35);
			this->bunifuCustomTextbox4->TabIndex = 9;
			this->bunifuCustomTextbox4->UseSystemPasswordChar = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label17->ForeColor = System::Drawing::Color::Honeydew;
			this->label17->Location = System::Drawing::Point(524, 133);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(267, 29);
			this->label17->TabIndex = 8;
			this->label17->Text = L"Enter Staff Old Password";
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::Transparent;
			this->panel18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel18.BackgroundImage")));
			this->panel18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel18->Controls->Add(this->pictureBox1);
			this->panel18->Controls->Add(this->bunifuThinButton226);
			this->panel18->Controls->Add(this->bunifuThinButton225);
			this->panel18->Controls->Add(this->bunifuThinButton224);
			this->panel18->Controls->Add(this->bunifuCustomTextbox8);
			this->panel18->Controls->Add(this->label21);
			this->panel18->Controls->Add(this->label13);
			this->panel18->Location = System::Drawing::Point(680, 200);
			this->panel18->Margin = System::Windows::Forms::Padding(0);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(600, 600);
			this->panel18->TabIndex = 23;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(490, 294);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(30, 30);
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// bunifuThinButton226
			// 
			this->bunifuThinButton226->ActiveBorderThickness = 1;
			this->bunifuThinButton226->ActiveCornerRadius = 50;
			this->bunifuThinButton226->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton226->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton226->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton226->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton226->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton226.BackgroundImage")));
			this->bunifuThinButton226->ButtonText = L"Close";
			this->bunifuThinButton226->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton226->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton226->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton226->IdleBorderThickness = 1;
			this->bunifuThinButton226->IdleCornerRadius = 50;
			this->bunifuThinButton226->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton226->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton226->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton226->Location = System::Drawing::Point(216, 490);
			this->bunifuThinButton226->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton226->Name = L"bunifuThinButton226";
			this->bunifuThinButton226->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton226->TabIndex = 12;
			this->bunifuThinButton226->TabStop = false;
			this->bunifuThinButton226->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton226->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton226_Click);
			// 
			// bunifuThinButton225
			// 
			this->bunifuThinButton225->ActiveBorderThickness = 1;
			this->bunifuThinButton225->ActiveCornerRadius = 50;
			this->bunifuThinButton225->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton225->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton225->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton225->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton225->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton225.BackgroundImage")));
			this->bunifuThinButton225->ButtonText = L"Clear";
			this->bunifuThinButton225->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton225->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton225->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton225->IdleBorderThickness = 1;
			this->bunifuThinButton225->IdleCornerRadius = 50;
			this->bunifuThinButton225->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton225->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton225->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton225->Location = System::Drawing::Point(318, 397);
			this->bunifuThinButton225->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton225->Name = L"bunifuThinButton225";
			this->bunifuThinButton225->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton225->TabIndex = 11;
			this->bunifuThinButton225->TabStop = false;
			this->bunifuThinButton225->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton225->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton225_Click);
			// 
			// bunifuThinButton224
			// 
			this->bunifuThinButton224->ActiveBorderThickness = 1;
			this->bunifuThinButton224->ActiveCornerRadius = 50;
			this->bunifuThinButton224->ActiveFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton224->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton224->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton224->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton224->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton224.BackgroundImage")));
			this->bunifuThinButton224->ButtonText = L"Creating";
			this->bunifuThinButton224->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton224->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton224->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton224->IdleBorderThickness = 1;
			this->bunifuThinButton224->IdleCornerRadius = 50;
			this->bunifuThinButton224->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton224->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton224->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton224->Location = System::Drawing::Point(115, 397);
			this->bunifuThinButton224->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton224->Name = L"bunifuThinButton224";
			this->bunifuThinButton224->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton224->TabIndex = 10;
			this->bunifuThinButton224->TabStop = false;
			this->bunifuThinButton224->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton224->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton224_Click);
			// 
			// bunifuCustomTextbox8
			// 
			this->bunifuCustomTextbox8->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox8->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox8->Location = System::Drawing::Point(80, 290);
			this->bunifuCustomTextbox8->Name = L"bunifuCustomTextbox8";
			this->bunifuCustomTextbox8->Size = System::Drawing::Size(449, 40);
			this->bunifuCustomTextbox8->TabIndex = 2;
			this->bunifuCustomTextbox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label21->Location = System::Drawing::Point(110, 190);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(382, 40);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Enter A Specific School Year";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::IndianRed;
			this->label13->Location = System::Drawing::Point(19, 40);
			this->label13->Margin = System::Windows::Forms::Padding(0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(396, 42);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Create New School Year";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &StaffForm::timer1_Tick);
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::Transparent;
			this->panel17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel17.BackgroundImage")));
			this->panel17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel17->Controls->Add(this->panel5);
			this->panel17->Controls->Add(this->comboBox11);
			this->panel17->Controls->Add(this->comboBox9);
			this->panel17->Controls->Add(this->comboBox7);
			this->panel17->Controls->Add(this->comboBox6);
			this->panel17->Controls->Add(this->label38);
			this->panel17->Controls->Add(this->bunifuCustomTextbox17);
			this->panel17->Controls->Add(this->label36);
			this->panel17->Controls->Add(this->label35);
			this->panel17->Controls->Add(this->bunifuDatepicker7);
			this->panel17->Controls->Add(this->bunifuDatepicker6);
			this->panel17->Controls->Add(this->label29);
			this->panel17->Controls->Add(this->bunifuCustomTextbox13);
			this->panel17->Controls->Add(this->label26);
			this->panel17->Controls->Add(this->bunifuCustomTextbox14);
			this->panel17->Controls->Add(this->treeView2);
			this->panel17->Controls->Add(this->label27);
			this->panel17->Controls->Add(this->panel19);
			this->panel17->Controls->Add(this->bunifuCustomTextbox18);
			this->panel17->Controls->Add(this->label31);
			this->panel17->Controls->Add(this->label32);
			this->panel17->Controls->Add(this->bunifuCustomTextbox19);
			this->panel17->Controls->Add(this->label33);
			this->panel17->Controls->Add(this->label34);
			this->panel17->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel17->Location = System::Drawing::Point(2900, 140);
			this->panel17->Margin = System::Windows::Forms::Padding(0);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(1300, 860);
			this->panel17->TabIndex = 25;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->bunifuThinButton27);
			this->panel5->Controls->Add(this->bunifuThinButton28);
			this->panel5->Location = System::Drawing::Point(90, 720);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(484, 125);
			this->panel5->TabIndex = 21;
			// 
			// bunifuThinButton27
			// 
			this->bunifuThinButton27->ActiveBorderThickness = 1;
			this->bunifuThinButton27->ActiveCornerRadius = 50;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton27.BackgroundImage")));
			this->bunifuThinButton27->ButtonText = L"Add Student";
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton27->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton27->IdleBorderThickness = 1;
			this->bunifuThinButton27->IdleCornerRadius = 50;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton27->Location = System::Drawing::Point(52, 30);
			this->bunifuThinButton27->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton27->Name = L"bunifuThinButton27";
			this->bunifuThinButton27->Size = System::Drawing::Size(164, 64);
			this->bunifuThinButton27->TabIndex = 20;
			this->bunifuThinButton27->TabStop = false;
			this->bunifuThinButton27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton28
			// 
			this->bunifuThinButton28->ActiveBorderThickness = 1;
			this->bunifuThinButton28->ActiveCornerRadius = 50;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton28.BackgroundImage")));
			this->bunifuThinButton28->ButtonText = L"Remove Student";
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton28->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton28->IdleBorderThickness = 1;
			this->bunifuThinButton28->IdleCornerRadius = 50;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton28->Location = System::Drawing::Point(254, 30);
			this->bunifuThinButton28->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton28->Name = L"bunifuThinButton28";
			this->bunifuThinButton28->Size = System::Drawing::Size(164, 64);
			this->bunifuThinButton28->TabIndex = 19;
			this->bunifuThinButton28->TabStop = false;
			this->bunifuThinButton28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBox11
			// 
			this->comboBox11->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox11->DropDownHeight = 250;
			this->comboBox11->DropDownWidth = 250;
			this->comboBox11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->IntegralHeight = false;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->comboBox11->Location = System::Drawing::Point(210, 100);
			this->comboBox11->Margin = System::Windows::Forms::Padding(0);
			this->comboBox11->MaxDropDownItems = 20;
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(230, 33);
			this->comboBox11->TabIndex = 57;
			this->comboBox11->TabStop = false;
			// 
			// comboBox9
			// 
			this->comboBox9->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox9->DropDownHeight = 250;
			this->comboBox9->DropDownWidth = 250;
			this->comboBox9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->IntegralHeight = false;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"07:30 - 09:10", L"09:30 - 11:10", L"13:30 - 15:10",
					L"15:30 - 17:10", L"07:30 - 11:30", L"13:30 - 17:10"
			});
			this->comboBox9->Location = System::Drawing::Point(1009, 430);
			this->comboBox9->Margin = System::Windows::Forms::Padding(0);
			this->comboBox9->MaxDropDownItems = 20;
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(228, 33);
			this->comboBox9->TabIndex = 55;
			this->comboBox9->TabStop = false;
			// 
			// comboBox7
			// 
			this->comboBox7->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox7->DropDownHeight = 250;
			this->comboBox7->DropDownWidth = 250;
			this->comboBox7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->IntegralHeight = false;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", L"Sat" });
			this->comboBox7->Location = System::Drawing::Point(766, 430);
			this->comboBox7->Margin = System::Windows::Forms::Padding(0);
			this->comboBox7->MaxDropDownItems = 20;
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(221, 33);
			this->comboBox7->TabIndex = 53;
			this->comboBox7->TabStop = false;
			// 
			// comboBox6
			// 
			this->comboBox6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox6->DropDownHeight = 250;
			this->comboBox6->DropDownWidth = 250;
			this->comboBox6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->IntegralHeight = false;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"10", L"20", L"30", L"40", L"50", L"60", L"70",
					L"80", L"90", L"100"
			});
			this->comboBox6->Location = System::Drawing::Point(1019, 230);
			this->comboBox6->Margin = System::Windows::Forms::Padding(0);
			this->comboBox6->MaxDropDownItems = 20;
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(218, 33);
			this->comboBox6->TabIndex = 52;
			this->comboBox6->TabStop = false;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label38->ForeColor = System::Drawing::Color::Honeydew;
			this->label38->Location = System::Drawing::Point(641, 430);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(105, 29);
			this->label38->TabIndex = 45;
			this->label38->Text = L"Schedule";
			// 
			// bunifuCustomTextbox17
			// 
			this->bunifuCustomTextbox17->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox17->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox17->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox17->Location = System::Drawing::Point(857, 360);
			this->bunifuCustomTextbox17->Name = L"bunifuCustomTextbox17";
			this->bunifuCustomTextbox17->Size = System::Drawing::Size(379, 35);
			this->bunifuCustomTextbox17->TabIndex = 38;
			this->bunifuCustomTextbox17->UseSystemPasswordChar = true;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label36->ForeColor = System::Drawing::Color::Honeydew;
			this->label36->Location = System::Drawing::Point(852, 300);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(163, 29);
			this->label36->TabIndex = 37;
			this->label36->Text = L"Lecturer Name";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label35->ForeColor = System::Drawing::SystemColors::Info;
			this->label35->Location = System::Drawing::Point(1014, 170);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(153, 29);
			this->label35->TabIndex = 35;
			this->label35->Text = L"Max Students";
			// 
			// bunifuDatepicker7
			// 
			this->bunifuDatepicker7->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuDatepicker7->BorderRadius = 0;
			this->bunifuDatepicker7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bunifuDatepicker7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F));
			this->bunifuDatepicker7->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuDatepicker7->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->bunifuDatepicker7->FormatCustom = nullptr;
			this->bunifuDatepicker7->Location = System::Drawing::Point(766, 500);
			this->bunifuDatepicker7->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuDatepicker7->Name = L"bunifuDatepicker7";
			this->bunifuDatepicker7->Size = System::Drawing::Size(471, 33);
			this->bunifuDatepicker7->TabIndex = 34;
			this->bunifuDatepicker7->Value = System::DateTime(2023, 4, 11, 16, 41, 46, 736);
			// 
			// bunifuDatepicker6
			// 
			this->bunifuDatepicker6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuDatepicker6->BorderRadius = 0;
			this->bunifuDatepicker6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bunifuDatepicker6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F));
			this->bunifuDatepicker6->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuDatepicker6->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->bunifuDatepicker6->FormatCustom = nullptr;
			this->bunifuDatepicker6->Location = System::Drawing::Point(766, 570);
			this->bunifuDatepicker6->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuDatepicker6->Name = L"bunifuDatepicker6";
			this->bunifuDatepicker6->Size = System::Drawing::Size(470, 35);
			this->bunifuDatepicker6->TabIndex = 33;
			this->bunifuDatepicker6->Value = System::DateTime(2023, 4, 11, 16, 41, 46, 736);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label29->ForeColor = System::Drawing::SystemColors::Info;
			this->label29->Location = System::Drawing::Point(641, 570);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(107, 29);
			this->label29->TabIndex = 32;
			this->label29->Text = L"End Date";
			// 
			// bunifuCustomTextbox13
			// 
			this->bunifuCustomTextbox13->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox13->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox13->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox13->Location = System::Drawing::Point(857, 230);
			this->bunifuCustomTextbox13->Name = L"bunifuCustomTextbox13";
			this->bunifuCustomTextbox13->Size = System::Drawing::Size(128, 35);
			this->bunifuCustomTextbox13->TabIndex = 27;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label26->ForeColor = System::Drawing::SystemColors::Info;
			this->label26->Location = System::Drawing::Point(852, 170);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(85, 29);
			this->label26->TabIndex = 26;
			this->label26->Text = L"Credits";
			// 
			// bunifuCustomTextbox14
			// 
			this->bunifuCustomTextbox14->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox14->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox14->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox14->Location = System::Drawing::Point(646, 230);
			this->bunifuCustomTextbox14->Name = L"bunifuCustomTextbox14";
			this->bunifuCustomTextbox14->Size = System::Drawing::Size(176, 35);
			this->bunifuCustomTextbox14->TabIndex = 25;
			// 
			// treeView2
			// 
			this->treeView2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->treeView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->treeView2->Location = System::Drawing::Point(90, 180);
			this->treeView2->Name = L"treeView2";
			this->treeView2->Size = System::Drawing::Size(484, 527);
			this->treeView2->TabIndex = 22;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label27->ForeColor = System::Drawing::SystemColors::Info;
			this->label27->Location = System::Drawing::Point(641, 500);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(113, 29);
			this->label27->TabIndex = 20;
			this->label27->Text = L"Start Date";
			// 
			// panel19
			// 
			this->panel19->Controls->Add(this->bunifuThinButton215);
			this->panel19->Controls->Add(this->bunifuThinButton253);
			this->panel19->Controls->Add(this->bunifuThinButton252);
			this->panel19->Controls->Add(this->bunifuThinButton219);
			this->panel19->Controls->Add(this->bunifuThinButton221);
			this->panel19->Controls->Add(this->bunifuThinButton222);
			this->panel19->Location = System::Drawing::Point(610, 670);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(654, 174);
			this->panel19->TabIndex = 16;
			// 
			// bunifuThinButton215
			// 
			this->bunifuThinButton215->ActiveBorderThickness = 1;
			this->bunifuThinButton215->ActiveCornerRadius = 50;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton215->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton215.BackgroundImage")));
			this->bunifuThinButton215->ButtonText = L"Close";
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton215->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton215->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton215->IdleBorderThickness = 1;
			this->bunifuThinButton215->IdleCornerRadius = 50;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton215->Location = System::Drawing::Point(479, 80);
			this->bunifuThinButton215->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton215->Name = L"bunifuThinButton215";
			this->bunifuThinButton215->Size = System::Drawing::Size(150, 64);
			this->bunifuThinButton215->TabIndex = 19;
			this->bunifuThinButton215->TabStop = false;
			this->bunifuThinButton215->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton215->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton215_Click);
			// 
			// bunifuThinButton253
			// 
			this->bunifuThinButton253->ActiveBorderThickness = 1;
			this->bunifuThinButton253->ActiveCornerRadius = 50;
			this->bunifuThinButton253->ActiveFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton253->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton253->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton253->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton253->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton253.BackgroundImage")));
			this->bunifuThinButton253->ButtonText = L"View Scoreboard";
			this->bunifuThinButton253->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton253->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton253->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton253->IdleBorderThickness = 1;
			this->bunifuThinButton253->IdleCornerRadius = 50;
			this->bunifuThinButton253->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton253->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton253->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton253->Location = System::Drawing::Point(245, 80);
			this->bunifuThinButton253->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton253->Name = L"bunifuThinButton253";
			this->bunifuThinButton253->Size = System::Drawing::Size(203, 64);
			this->bunifuThinButton253->TabIndex = 18;
			this->bunifuThinButton253->TabStop = false;
			this->bunifuThinButton253->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton253->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton253_Click);
			// 
			// bunifuThinButton252
			// 
			this->bunifuThinButton252->ActiveBorderThickness = 1;
			this->bunifuThinButton252->ActiveCornerRadius = 50;
			this->bunifuThinButton252->ActiveFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton252->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton252->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton252->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton252->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton252.BackgroundImage")));
			this->bunifuThinButton252->ButtonText = L"View Students List";
			this->bunifuThinButton252->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton252->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton252->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton252->IdleBorderThickness = 1;
			this->bunifuThinButton252->IdleCornerRadius = 50;
			this->bunifuThinButton252->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton252->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton252->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton252->Location = System::Drawing::Point(9, 80);
			this->bunifuThinButton252->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton252->Name = L"bunifuThinButton252";
			this->bunifuThinButton252->Size = System::Drawing::Size(203, 64);
			this->bunifuThinButton252->TabIndex = 17;
			this->bunifuThinButton252->TabStop = false;
			this->bunifuThinButton252->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton252->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton252_Click);
			// 
			// bunifuThinButton219
			// 
			this->bunifuThinButton219->ActiveBorderThickness = 1;
			this->bunifuThinButton219->ActiveCornerRadius = 50;
			this->bunifuThinButton219->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton219->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton219->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton219->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton219->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton219.BackgroundImage")));
			this->bunifuThinButton219->ButtonText = L"Change";
			this->bunifuThinButton219->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton219->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton219->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton219->IdleBorderThickness = 1;
			this->bunifuThinButton219->IdleCornerRadius = 50;
			this->bunifuThinButton219->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton219->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton219->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton219->Location = System::Drawing::Point(269, 0);
			this->bunifuThinButton219->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton219->Name = L"bunifuThinButton219";
			this->bunifuThinButton219->Size = System::Drawing::Size(150, 64);
			this->bunifuThinButton219->TabIndex = 16;
			this->bunifuThinButton219->TabStop = false;
			this->bunifuThinButton219->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton221
			// 
			this->bunifuThinButton221->ActiveBorderThickness = 1;
			this->bunifuThinButton221->ActiveCornerRadius = 50;
			this->bunifuThinButton221->ActiveFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton221->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton221->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton221->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton221->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton221.BackgroundImage")));
			this->bunifuThinButton221->ButtonText = L"Clear";
			this->bunifuThinButton221->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton221->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton221->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton221->IdleBorderThickness = 1;
			this->bunifuThinButton221->IdleCornerRadius = 50;
			this->bunifuThinButton221->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton221->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton221->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton221->Location = System::Drawing::Point(479, 0);
			this->bunifuThinButton221->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton221->Name = L"bunifuThinButton221";
			this->bunifuThinButton221->Size = System::Drawing::Size(150, 64);
			this->bunifuThinButton221->TabIndex = 14;
			this->bunifuThinButton221->TabStop = false;
			this->bunifuThinButton221->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton222
			// 
			this->bunifuThinButton222->ActiveBorderThickness = 1;
			this->bunifuThinButton222->ActiveCornerRadius = 50;
			this->bunifuThinButton222->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton222->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton222->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton222->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton222->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton222.BackgroundImage")));
			this->bunifuThinButton222->ButtonText = L"Add";
			this->bunifuThinButton222->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton222->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton222->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton222->IdleBorderThickness = 1;
			this->bunifuThinButton222->IdleCornerRadius = 50;
			this->bunifuThinButton222->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton222->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton222->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton222->Location = System::Drawing::Point(35, 0);
			this->bunifuThinButton222->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton222->Name = L"bunifuThinButton222";
			this->bunifuThinButton222->Size = System::Drawing::Size(150, 64);
			this->bunifuThinButton222->TabIndex = 13;
			this->bunifuThinButton222->TabStop = false;
			this->bunifuThinButton222->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomTextbox18
			// 
			this->bunifuCustomTextbox18->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox18->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox18->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox18->Location = System::Drawing::Point(646, 360);
			this->bunifuCustomTextbox18->Name = L"bunifuCustomTextbox18";
			this->bunifuCustomTextbox18->Size = System::Drawing::Size(176, 35);
			this->bunifuCustomTextbox18->TabIndex = 13;
			this->bunifuCustomTextbox18->UseSystemPasswordChar = true;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label31->ForeColor = System::Drawing::Color::Honeydew;
			this->label31->Location = System::Drawing::Point(641, 300);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(76, 29);
			this->label31->TabIndex = 12;
			this->label31->Text = L"Room";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label32->ForeColor = System::Drawing::SystemColors::Info;
			this->label32->Location = System::Drawing::Point(641, 170);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(117, 29);
			this->label32->TabIndex = 10;
			this->label32->Text = L"Course ID";
			// 
			// bunifuCustomTextbox19
			// 
			this->bunifuCustomTextbox19->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox19->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox19->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox19->Location = System::Drawing::Point(646, 100);
			this->bunifuCustomTextbox19->Name = L"bunifuCustomTextbox19";
			this->bunifuCustomTextbox19->Size = System::Drawing::Size(591, 35);
			this->bunifuCustomTextbox19->TabIndex = 9;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label33->ForeColor = System::Drawing::SystemColors::Info;
			this->label33->Location = System::Drawing::Point(641, 40);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(151, 29);
			this->label33->TabIndex = 8;
			this->label33->Text = L"Course Name";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label34->ForeColor = System::Drawing::SystemColors::Info;
			this->label34->Location = System::Drawing::Point(270, 40);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(105, 29);
			this->label34->TabIndex = 0;
			this->label34->Text = L"Semester";
			// 
			// studentsListCourse
			// 
			this->studentsListCourse->BackColor = System::Drawing::Color::Transparent;
			this->studentsListCourse->Controls->Add(this->kryptonDataGridView5);
			this->studentsListCourse->Dock = System::Windows::Forms::DockStyle::Left;
			this->studentsListCourse->Location = System::Drawing::Point(4200, 140);
			this->studentsListCourse->Margin = System::Windows::Forms::Padding(0);
			this->studentsListCourse->Name = L"studentsListCourse";
			this->studentsListCourse->Size = System::Drawing::Size(1300, 860);
			this->studentsListCourse->TabIndex = 27;
			// 
			// kryptonDataGridView5
			// 
			dataGridViewCellStyle1->NullValue = L"-";
			this->kryptonDataGridView5->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->kryptonDataGridView5->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->kryptonDataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->kryptonDataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn22,
					this->dataGridViewTextBoxColumn23, this->dataGridViewTextBoxColumn24, this->dataGridViewTextBoxColumn25, this->dataGridViewTextBoxColumn26,
					this->dataGridViewTextBoxColumn27, this->dataGridViewTextBoxColumn28, this->Column6
			});
			this->kryptonDataGridView5->Dock = System::Windows::Forms::DockStyle::Top;
			this->kryptonDataGridView5->Location = System::Drawing::Point(0, 0);
			this->kryptonDataGridView5->Margin = System::Windows::Forms::Padding(0);
			this->kryptonDataGridView5->Name = L"kryptonDataGridView5";
			this->kryptonDataGridView5->Size = System::Drawing::Size(1300, 860);
			this->kryptonDataGridView5->TabIndex = 0;
			this->kryptonDataGridView5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StaffForm::kryptonDataGridView5_CellContentClick);
			// 
			// dataGridViewTextBoxColumn22
			// 
			this->dataGridViewTextBoxColumn22->HeaderText = L"No";
			this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
			this->dataGridViewTextBoxColumn22->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn23
			// 
			this->dataGridViewTextBoxColumn23->HeaderText = L"Student ID";
			this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
			this->dataGridViewTextBoxColumn23->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn24
			// 
			this->dataGridViewTextBoxColumn24->HeaderText = L"First Name";
			this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
			this->dataGridViewTextBoxColumn24->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn25
			// 
			this->dataGridViewTextBoxColumn25->HeaderText = L"Last Name";
			this->dataGridViewTextBoxColumn25->Name = L"dataGridViewTextBoxColumn25";
			this->dataGridViewTextBoxColumn25->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn26
			// 
			this->dataGridViewTextBoxColumn26->HeaderText = L"Gender";
			this->dataGridViewTextBoxColumn26->Name = L"dataGridViewTextBoxColumn26";
			this->dataGridViewTextBoxColumn26->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn27
			// 
			this->dataGridViewTextBoxColumn27->HeaderText = L"Date of Birth";
			this->dataGridViewTextBoxColumn27->Name = L"dataGridViewTextBoxColumn27";
			this->dataGridViewTextBoxColumn27->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn28
			// 
			this->dataGridViewTextBoxColumn28->HeaderText = L"Social ID";
			this->dataGridViewTextBoxColumn28->Name = L"dataGridViewTextBoxColumn28";
			this->dataGridViewTextBoxColumn28->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Update/Edit";
			this->Column6->Name = L"Column6";
			this->Column6->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column6->UseColumnTextForButtonValue = true;
			// 
			// scoreboardCourse
			// 
			this->scoreboardCourse->BackColor = System::Drawing::Color::Transparent;
			this->scoreboardCourse->Controls->Add(this->kryptonDataGridView3);
			this->scoreboardCourse->Dock = System::Windows::Forms::DockStyle::Left;
			this->scoreboardCourse->Location = System::Drawing::Point(5500, 140);
			this->scoreboardCourse->Margin = System::Windows::Forms::Padding(0);
			this->scoreboardCourse->Name = L"scoreboardCourse";
			this->scoreboardCourse->Size = System::Drawing::Size(1300, 860);
			this->scoreboardCourse->TabIndex = 28;
			// 
			// kryptonDataGridView3
			// 
			dataGridViewCellStyle2->NullValue = L"-";
			this->kryptonDataGridView3->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle2;
			this->kryptonDataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->kryptonDataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->kryptonDataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn8,
					this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12,
					this->Column11, this->Column12, this->Column15
			});
			this->kryptonDataGridView3->Dock = System::Windows::Forms::DockStyle::Top;
			this->kryptonDataGridView3->Location = System::Drawing::Point(0, 0);
			this->kryptonDataGridView3->Margin = System::Windows::Forms::Padding(0);
			this->kryptonDataGridView3->Name = L"kryptonDataGridView3";
			this->kryptonDataGridView3->Size = System::Drawing::Size(1300, 860);
			this->kryptonDataGridView3->TabIndex = 0;
			this->kryptonDataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StaffForm::kryptonDataGridView3_CellContentClick);
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"No";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Student ID";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Student FullName";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Midtearm Mark";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Final Mark";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Total Mark";
			this->Column11->Name = L"Column11";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Other Mark";
			this->Column12->Name = L"Column12";
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Update/Edit";
			this->Column15->Name = L"Column15";
			this->Column15->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column15->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column15->UseColumnTextForButtonValue = true;
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::Transparent;
			this->panel25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel25.BackgroundImage")));
			this->panel25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel25->Controls->Add(this->bunifuThinButton213);
			this->panel25->Controls->Add(this->bunifuThinButton214);
			this->panel25->Controls->Add(this->bunifuCustomTextbox34);
			this->panel25->Controls->Add(this->bunifuDatepicker8);
			this->panel25->Controls->Add(this->label85);
			this->panel25->Controls->Add(this->label86);
			this->panel25->Controls->Add(this->label87);
			this->panel25->Controls->Add(this->bunifuCustomTextbox35);
			this->panel25->Controls->Add(this->label88);
			this->panel25->Controls->Add(this->bunifuCustomTextbox36);
			this->panel25->Controls->Add(this->label89);
			this->panel25->Controls->Add(this->bunifuCustomTextbox38);
			this->panel25->Controls->Add(this->comboBox24);
			this->panel25->Controls->Add(this->label91);
			this->panel25->Controls->Add(this->label92);
			this->panel25->Location = System::Drawing::Point(680, 280);
			this->panel25->Margin = System::Windows::Forms::Padding(0);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(600, 600);
			this->panel25->TabIndex = 46;
			// 
			// bunifuThinButton213
			// 
			this->bunifuThinButton213->ActiveBorderThickness = 1;
			this->bunifuThinButton213->ActiveCornerRadius = 50;
			this->bunifuThinButton213->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton213->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton213->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton213->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton213->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton213.BackgroundImage")));
			this->bunifuThinButton213->ButtonText = L"Close";
			this->bunifuThinButton213->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton213->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton213->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton213->IdleBorderThickness = 1;
			this->bunifuThinButton213->IdleCornerRadius = 50;
			this->bunifuThinButton213->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton213->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton213->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton213->Location = System::Drawing::Point(318, 510);
			this->bunifuThinButton213->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton213->Name = L"bunifuThinButton213";
			this->bunifuThinButton213->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton213->TabIndex = 76;
			this->bunifuThinButton213->TabStop = false;
			this->bunifuThinButton213->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton213->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton213_Click);
			// 
			// bunifuThinButton214
			// 
			this->bunifuThinButton214->ActiveBorderThickness = 1;
			this->bunifuThinButton214->ActiveCornerRadius = 50;
			this->bunifuThinButton214->ActiveFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton214->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton214->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton214->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton214->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton214.BackgroundImage")));
			this->bunifuThinButton214->ButtonText = L"Change";
			this->bunifuThinButton214->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton214->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton214->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton214->IdleBorderThickness = 1;
			this->bunifuThinButton214->IdleCornerRadius = 50;
			this->bunifuThinButton214->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton214->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton214->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton214->Location = System::Drawing::Point(101, 510);
			this->bunifuThinButton214->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton214->Name = L"bunifuThinButton214";
			this->bunifuThinButton214->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton214->TabIndex = 75;
			this->bunifuThinButton214->TabStop = false;
			this->bunifuThinButton214->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomTextbox34
			// 
			this->bunifuCustomTextbox34->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox34->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox34->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox34->Location = System::Drawing::Point(160, 438);
			this->bunifuCustomTextbox34->Name = L"bunifuCustomTextbox34";
			this->bunifuCustomTextbox34->Size = System::Drawing::Size(421, 35);
			this->bunifuCustomTextbox34->TabIndex = 74;
			this->bunifuCustomTextbox34->UseSystemPasswordChar = true;
			// 
			// bunifuDatepicker8
			// 
			this->bunifuDatepicker8->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuDatepicker8->BorderRadius = 0;
			this->bunifuDatepicker8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bunifuDatepicker8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F));
			this->bunifuDatepicker8->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuDatepicker8->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->bunifuDatepicker8->FormatCustom = nullptr;
			this->bunifuDatepicker8->Location = System::Drawing::Point(160, 368);
			this->bunifuDatepicker8->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuDatepicker8->Name = L"bunifuDatepicker8";
			this->bunifuDatepicker8->Size = System::Drawing::Size(421, 35);
			this->bunifuDatepicker8->TabIndex = 72;
			this->bunifuDatepicker8->Value = System::DateTime(2023, 4, 11, 16, 41, 46, 736);
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->BackColor = System::Drawing::Color::Transparent;
			this->label85->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label85->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label85->Location = System::Drawing::Point(22, 438);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(90, 28);
			this->label85->TabIndex = 67;
			this->label85->Text = L"Social ID";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->BackColor = System::Drawing::Color::Transparent;
			this->label86->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label86->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label86->Location = System::Drawing::Point(21, 368);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(129, 28);
			this->label86->TabIndex = 64;
			this->label86->Text = L"Date of Birth";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->BackColor = System::Drawing::Color::Transparent;
			this->label87->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label87->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label87->Location = System::Drawing::Point(22, 300);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(79, 28);
			this->label87->TabIndex = 61;
			this->label87->Text = L"Gender";
			// 
			// bunifuCustomTextbox35
			// 
			this->bunifuCustomTextbox35->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox35->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox35->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox35->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox35->Location = System::Drawing::Point(160, 228);
			this->bunifuCustomTextbox35->Name = L"bunifuCustomTextbox35";
			this->bunifuCustomTextbox35->Size = System::Drawing::Size(421, 35);
			this->bunifuCustomTextbox35->TabIndex = 60;
			this->bunifuCustomTextbox35->UseSystemPasswordChar = true;
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->BackColor = System::Drawing::Color::Transparent;
			this->label88->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label88->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label88->Location = System::Drawing::Point(24, 231);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(108, 28);
			this->label88->TabIndex = 59;
			this->label88->Text = L"Last Name";
			// 
			// bunifuCustomTextbox36
			// 
			this->bunifuCustomTextbox36->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox36->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox36->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox36->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox36->Location = System::Drawing::Point(160, 160);
			this->bunifuCustomTextbox36->Name = L"bunifuCustomTextbox36";
			this->bunifuCustomTextbox36->Size = System::Drawing::Size(421, 35);
			this->bunifuCustomTextbox36->TabIndex = 58;
			this->bunifuCustomTextbox36->UseSystemPasswordChar = true;
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->BackColor = System::Drawing::Color::Transparent;
			this->label89->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label89->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label89->Location = System::Drawing::Point(21, 163);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(110, 28);
			this->label89->TabIndex = 57;
			this->label89->Text = L"First Name";
			// 
			// bunifuCustomTextbox38
			// 
			this->bunifuCustomTextbox38->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox38->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox38->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox38->Location = System::Drawing::Point(160, 102);
			this->bunifuCustomTextbox38->Name = L"bunifuCustomTextbox38";
			this->bunifuCustomTextbox38->Size = System::Drawing::Size(421, 35);
			this->bunifuCustomTextbox38->TabIndex = 54;
			this->bunifuCustomTextbox38->UseSystemPasswordChar = true;
			// 
			// comboBox24
			// 
			this->comboBox24->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox24->DropDownHeight = 250;
			this->comboBox24->DropDownWidth = 250;
			this->comboBox24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox24->FormattingEnabled = true;
			this->comboBox24->IntegralHeight = false;
			this->comboBox24->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->comboBox24->Location = System::Drawing::Point(160, 295);
			this->comboBox24->Margin = System::Windows::Forms::Padding(0);
			this->comboBox24->MaxDropDownItems = 20;
			this->comboBox24->Name = L"comboBox24";
			this->comboBox24->Size = System::Drawing::Size(421, 33);
			this->comboBox24->TabIndex = 53;
			this->comboBox24->TabStop = false;
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->BackColor = System::Drawing::Color::Transparent;
			this->label91->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label91->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label91->Location = System::Drawing::Point(21, 105);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(109, 28);
			this->label91->TabIndex = 1;
			this->label91->Text = L"Student ID";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->BackColor = System::Drawing::Color::Transparent;
			this->label92->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label92->ForeColor = System::Drawing::Color::IndianRed;
			this->label92->Location = System::Drawing::Point(19, 10);
			this->label92->Margin = System::Windows::Forms::Padding(0);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(550, 42);
			this->label92->TabIndex = 0;
			this->label92->Text = L"Update/Edit Students List Course";
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::Transparent;
			this->panel24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel24.BackgroundImage")));
			this->panel24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel24->Controls->Add(this->bunifuCustomTextbox33);
			this->panel24->Controls->Add(this->bunifuCustomTextbox32);
			this->panel24->Controls->Add(this->bunifuCustomTextbox30);
			this->panel24->Controls->Add(this->bunifuCustomTextbox27);
			this->panel24->Controls->Add(this->label63);
			this->panel24->Controls->Add(this->label66);
			this->panel24->Controls->Add(this->label67);
			this->panel24->Controls->Add(this->label68);
			this->panel24->Controls->Add(this->bunifuCustomTextbox28);
			this->panel24->Controls->Add(this->label69);
			this->panel24->Controls->Add(this->bunifuCustomTextbox29);
			this->panel24->Controls->Add(this->label70);
			this->panel24->Controls->Add(this->bunifuCustomTextbox31);
			this->panel24->Controls->Add(this->bunifuThinButton240);
			this->panel24->Controls->Add(this->bunifuThinButton241);
			this->panel24->Controls->Add(this->label72);
			this->panel24->Controls->Add(this->label84);
			this->panel24->Location = System::Drawing::Point(680, 280);
			this->panel24->Margin = System::Windows::Forms::Padding(0);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(600, 600);
			this->panel24->TabIndex = 47;
			// 
			// bunifuCustomTextbox33
			// 
			this->bunifuCustomTextbox33->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox33->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox33->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox33->Location = System::Drawing::Point(180, 217);
			this->bunifuCustomTextbox33->Name = L"bunifuCustomTextbox33";
			this->bunifuCustomTextbox33->Size = System::Drawing::Size(403, 35);
			this->bunifuCustomTextbox33->TabIndex = 77;
			this->bunifuCustomTextbox33->UseSystemPasswordChar = true;
			// 
			// bunifuCustomTextbox32
			// 
			this->bunifuCustomTextbox32->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox32->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox32->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox32->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox32->Location = System::Drawing::Point(155, 283);
			this->bunifuCustomTextbox32->Name = L"bunifuCustomTextbox32";
			this->bunifuCustomTextbox32->Size = System::Drawing::Size(426, 35);
			this->bunifuCustomTextbox32->TabIndex = 76;
			this->bunifuCustomTextbox32->UseSystemPasswordChar = true;
			// 
			// bunifuCustomTextbox30
			// 
			this->bunifuCustomTextbox30->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox30->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox30->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox30->Location = System::Drawing::Point(155, 347);
			this->bunifuCustomTextbox30->Name = L"bunifuCustomTextbox30";
			this->bunifuCustomTextbox30->Size = System::Drawing::Size(426, 35);
			this->bunifuCustomTextbox30->TabIndex = 75;
			this->bunifuCustomTextbox30->UseSystemPasswordChar = true;
			// 
			// bunifuCustomTextbox27
			// 
			this->bunifuCustomTextbox27->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox27->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox27->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox27->Location = System::Drawing::Point(155, 407);
			this->bunifuCustomTextbox27->Name = L"bunifuCustomTextbox27";
			this->bunifuCustomTextbox27->Size = System::Drawing::Size(426, 35);
			this->bunifuCustomTextbox27->TabIndex = 74;
			this->bunifuCustomTextbox27->UseSystemPasswordChar = true;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label63->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label63->Location = System::Drawing::Point(22, 410);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(116, 28);
			this->label63->TabIndex = 73;
			this->label63->Text = L"Other Mark";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label66->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label66->Location = System::Drawing::Point(21, 350);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(107, 28);
			this->label66->TabIndex = 67;
			this->label66->Text = L"Total Mark";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label67->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label67->Location = System::Drawing::Point(21, 286);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(106, 28);
			this->label67->TabIndex = 64;
			this->label67->Text = L"Final Mark";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label68->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label68->Location = System::Drawing::Point(21, 220);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(142, 28);
			this->label68->TabIndex = 61;
			this->label68->Text = L"Midterm Mark";
			// 
			// bunifuCustomTextbox28
			// 
			this->bunifuCustomTextbox28->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox28->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox28->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox28->Location = System::Drawing::Point(412, 152);
			this->bunifuCustomTextbox28->Name = L"bunifuCustomTextbox28";
			this->bunifuCustomTextbox28->Size = System::Drawing::Size(169, 35);
			this->bunifuCustomTextbox28->TabIndex = 60;
			this->bunifuCustomTextbox28->UseSystemPasswordChar = true;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label69->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label69->Location = System::Drawing::Point(304, 155);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(108, 28);
			this->label69->TabIndex = 59;
			this->label69->Text = L"Last Name";
			// 
			// bunifuCustomTextbox29
			// 
			this->bunifuCustomTextbox29->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox29->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox29->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox29->Location = System::Drawing::Point(135, 152);
			this->bunifuCustomTextbox29->Name = L"bunifuCustomTextbox29";
			this->bunifuCustomTextbox29->Size = System::Drawing::Size(168, 35);
			this->bunifuCustomTextbox29->TabIndex = 58;
			this->bunifuCustomTextbox29->UseSystemPasswordChar = true;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label70->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label70->Location = System::Drawing::Point(21, 159);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(110, 28);
			this->label70->TabIndex = 57;
			this->label70->Text = L"First Name";
			// 
			// bunifuCustomTextbox31
			// 
			this->bunifuCustomTextbox31->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox31->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox31->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox31->Location = System::Drawing::Point(271, 95);
			this->bunifuCustomTextbox31->Name = L"bunifuCustomTextbox31";
			this->bunifuCustomTextbox31->Size = System::Drawing::Size(141, 35);
			this->bunifuCustomTextbox31->TabIndex = 54;
			this->bunifuCustomTextbox31->UseSystemPasswordChar = true;
			// 
			// bunifuThinButton240
			// 
			this->bunifuThinButton240->ActiveBorderThickness = 1;
			this->bunifuThinButton240->ActiveCornerRadius = 50;
			this->bunifuThinButton240->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton240->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton240->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton240->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton240->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton240.BackgroundImage")));
			this->bunifuThinButton240->ButtonText = L"Close";
			this->bunifuThinButton240->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton240->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton240->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton240->IdleBorderThickness = 1;
			this->bunifuThinButton240->IdleCornerRadius = 50;
			this->bunifuThinButton240->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton240->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton240->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton240->Location = System::Drawing::Point(334, 482);
			this->bunifuThinButton240->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton240->Name = L"bunifuThinButton240";
			this->bunifuThinButton240->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton240->TabIndex = 12;
			this->bunifuThinButton240->TabStop = false;
			this->bunifuThinButton240->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton240->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton240_Click);
			// 
			// bunifuThinButton241
			// 
			this->bunifuThinButton241->ActiveBorderThickness = 1;
			this->bunifuThinButton241->ActiveCornerRadius = 50;
			this->bunifuThinButton241->ActiveFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton241->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton241->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton241->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton241->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton241.BackgroundImage")));
			this->bunifuThinButton241->ButtonText = L"Change";
			this->bunifuThinButton241->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton241->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton241->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton241->IdleBorderThickness = 1;
			this->bunifuThinButton241->IdleCornerRadius = 50;
			this->bunifuThinButton241->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton241->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton241->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton241->Location = System::Drawing::Point(91, 482);
			this->bunifuThinButton241->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton241->Name = L"bunifuThinButton241";
			this->bunifuThinButton241->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton241->TabIndex = 10;
			this->bunifuThinButton241->TabStop = false;
			this->bunifuThinButton241->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label72->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label72->Location = System::Drawing::Point(150, 98);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(109, 28);
			this->label72->TabIndex = 1;
			this->label72->Text = L"Student ID";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label84->ForeColor = System::Drawing::Color::IndianRed;
			this->label84->Location = System::Drawing::Point(19, 10);
			this->label84->Margin = System::Windows::Forms::Padding(0);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(523, 42);
			this->label84->TabIndex = 0;
			this->label84->Text = L"Update/Edit Scoreboard Course";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->Controls->Add(this->bunifuCustomTextbox21);
			this->panel6->Controls->Add(this->label61);
			this->panel6->Controls->Add(this->bunifuCustomTextbox20);
			this->panel6->Controls->Add(this->label60);
			this->panel6->Controls->Add(this->bunifuCustomTextbox16);
			this->panel6->Controls->Add(this->label59);
			this->panel6->Controls->Add(this->comboBox19);
			this->panel6->Controls->Add(this->label58);
			this->panel6->Controls->Add(this->bunifuCustomTextbox9);
			this->panel6->Controls->Add(this->bunifuCustomTextbox11);
			this->panel6->Controls->Add(this->label43);
			this->panel6->Controls->Add(this->label44);
			this->panel6->Controls->Add(this->bunifuCustomTextbox15);
			this->panel6->Controls->Add(this->label45);
			this->panel6->Controls->Add(this->panel14);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel6->Location = System::Drawing::Point(6800, 140);
			this->panel6->Margin = System::Windows::Forms::Padding(0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1300, 860);
			this->panel6->TabIndex = 48;
			// 
			// bunifuCustomTextbox21
			// 
			this->bunifuCustomTextbox21->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox21->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox21->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox21->Location = System::Drawing::Point(425, 720);
			this->bunifuCustomTextbox21->Name = L"bunifuCustomTextbox21";
			this->bunifuCustomTextbox21->Size = System::Drawing::Size(450, 35);
			this->bunifuCustomTextbox21->TabIndex = 59;
			this->bunifuCustomTextbox21->UseSystemPasswordChar = true;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label61->ForeColor = System::Drawing::Color::Honeydew;
			this->label61->Location = System::Drawing::Point(508, 670);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(304, 29);
			this->label61->TabIndex = 58;
			this->label61->Text = L"Enter Staff/Teacher Social ID";
			// 
			// bunifuCustomTextbox20
			// 
			this->bunifuCustomTextbox20->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox20->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox20->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox20->Location = System::Drawing::Point(663, 600);
			this->bunifuCustomTextbox20->Name = L"bunifuCustomTextbox20";
			this->bunifuCustomTextbox20->Size = System::Drawing::Size(317, 35);
			this->bunifuCustomTextbox20->TabIndex = 57;
			this->bunifuCustomTextbox20->UseSystemPasswordChar = true;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label60->ForeColor = System::Drawing::Color::Honeydew;
			this->label60->Location = System::Drawing::Point(658, 540);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(320, 29);
			this->label60->TabIndex = 56;
			this->label60->Text = L"Enter Staff/Teacher Last Name";
			// 
			// bunifuCustomTextbox16
			// 
			this->bunifuCustomTextbox16->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox16->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox16->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox16->Location = System::Drawing::Point(305, 600);
			this->bunifuCustomTextbox16->Name = L"bunifuCustomTextbox16";
			this->bunifuCustomTextbox16->Size = System::Drawing::Size(317, 35);
			this->bunifuCustomTextbox16->TabIndex = 55;
			this->bunifuCustomTextbox16->UseSystemPasswordChar = true;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label59->ForeColor = System::Drawing::Color::Honeydew;
			this->label59->Location = System::Drawing::Point(300, 540);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(322, 29);
			this->label59->TabIndex = 54;
			this->label59->Text = L"Enter Staff/Teacher First Name";
			// 
			// comboBox19
			// 
			this->comboBox19->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox19->DropDownHeight = 250;
			this->comboBox19->DropDownWidth = 250;
			this->comboBox19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox19->FormattingEnabled = true;
			this->comboBox19->IntegralHeight = false;
			this->comboBox19->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->comboBox19->Location = System::Drawing::Point(425, 460);
			this->comboBox19->Margin = System::Windows::Forms::Padding(0);
			this->comboBox19->MaxDropDownItems = 20;
			this->comboBox19->Name = L"comboBox19";
			this->comboBox19->Size = System::Drawing::Size(450, 33);
			this->comboBox19->TabIndex = 53;
			this->comboBox19->TabStop = false;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label58->ForeColor = System::Drawing::Color::Honeydew;
			this->label58->Location = System::Drawing::Point(490, 400);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(285, 29);
			this->label58->TabIndex = 24;
			this->label58->Text = L"Enter Staff/Teacher Gender";
			// 
			// bunifuCustomTextbox9
			// 
			this->bunifuCustomTextbox9->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox9->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox9->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox9->Location = System::Drawing::Point(425, 200);
			this->bunifuCustomTextbox9->Name = L"bunifuCustomTextbox9";
			this->bunifuCustomTextbox9->Size = System::Drawing::Size(450, 35);
			this->bunifuCustomTextbox9->TabIndex = 23;
			this->bunifuCustomTextbox9->UseSystemPasswordChar = true;
			// 
			// bunifuCustomTextbox11
			// 
			this->bunifuCustomTextbox11->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox11->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox11->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox11->Location = System::Drawing::Point(425, 320);
			this->bunifuCustomTextbox11->Name = L"bunifuCustomTextbox11";
			this->bunifuCustomTextbox11->Size = System::Drawing::Size(450, 35);
			this->bunifuCustomTextbox11->TabIndex = 22;
			this->bunifuCustomTextbox11->UseSystemPasswordChar = true;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label43->ForeColor = System::Drawing::Color::Honeydew;
			this->label43->Location = System::Drawing::Point(485, 260);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(339, 29);
			this->label43->TabIndex = 21;
			this->label43->Text = L"Confirm Staff/Teacher Password";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label44->ForeColor = System::Drawing::Color::Honeydew;
			this->label44->Location = System::Drawing::Point(490, 130);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(308, 29);
			this->label44->TabIndex = 20;
			this->label44->Text = L"Enter Staff/Teacher Password";
			// 
			// bunifuCustomTextbox15
			// 
			this->bunifuCustomTextbox15->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox15->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox15->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox15->Location = System::Drawing::Point(425, 70);
			this->bunifuCustomTextbox15->Name = L"bunifuCustomTextbox15";
			this->bunifuCustomTextbox15->Size = System::Drawing::Size(450, 35);
			this->bunifuCustomTextbox15->TabIndex = 19;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label45->ForeColor = System::Drawing::Color::Honeydew;
			this->label45->Location = System::Drawing::Point(490, 20);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(317, 29);
			this->label45->TabIndex = 18;
			this->label45->Text = L"Enter Staff/Teacher UserName";
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->bunifuThinButton229);
			this->panel14->Controls->Add(this->bunifuThinButton230);
			this->panel14->Location = System::Drawing::Point(467, 780);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(394, 64);
			this->panel14->TabIndex = 16;
			// 
			// bunifuThinButton229
			// 
			this->bunifuThinButton229->ActiveBorderThickness = 1;
			this->bunifuThinButton229->ActiveCornerRadius = 50;
			this->bunifuThinButton229->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton229->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton229->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton229->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton229->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton229.BackgroundImage")));
			this->bunifuThinButton229->ButtonText = L"Close";
			this->bunifuThinButton229->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton229->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton229->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton229->IdleBorderThickness = 1;
			this->bunifuThinButton229->IdleCornerRadius = 50;
			this->bunifuThinButton229->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton229->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton229->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton229->Location = System::Drawing::Point(196, -1);
			this->bunifuThinButton229->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton229->Name = L"bunifuThinButton229";
			this->bunifuThinButton229->Size = System::Drawing::Size(150, 64);
			this->bunifuThinButton229->TabIndex = 14;
			this->bunifuThinButton229->TabStop = false;
			this->bunifuThinButton229->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton229->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton229_Click);
			// 
			// bunifuThinButton230
			// 
			this->bunifuThinButton230->ActiveBorderThickness = 1;
			this->bunifuThinButton230->ActiveCornerRadius = 50;
			this->bunifuThinButton230->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton230->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton230->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton230->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton230->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton230.BackgroundImage")));
			this->bunifuThinButton230->ButtonText = L"Create";
			this->bunifuThinButton230->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton230->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton230->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton230->IdleBorderThickness = 1;
			this->bunifuThinButton230->IdleCornerRadius = 50;
			this->bunifuThinButton230->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton230->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton230->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton230->Location = System::Drawing::Point(22, -1);
			this->bunifuThinButton230->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton230->Name = L"bunifuThinButton230";
			this->bunifuThinButton230->Size = System::Drawing::Size(150, 64);
			this->bunifuThinButton230->TabIndex = 13;
			this->bunifuThinButton230->TabStop = false;
			this->bunifuThinButton230->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::Transparent;
			this->panel22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel22.BackgroundImage")));
			this->panel22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel22->Controls->Add(this->label96);
			this->panel22->Controls->Add(this->comboBox22);
			this->panel22->Controls->Add(this->comboBox20);
			this->panel22->Controls->Add(this->bunifuThinButton233);
			this->panel22->Controls->Add(this->bunifuThinButton234);
			this->panel22->Controls->Add(this->label56);
			this->panel22->Controls->Add(this->label57);
			this->panel22->Location = System::Drawing::Point(680, 280);
			this->panel22->Margin = System::Windows::Forms::Padding(0);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(600, 600);
			this->panel22->TabIndex = 49;
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label96->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label96->Location = System::Drawing::Point(116, 270);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(371, 40);
			this->label96->TabIndex = 57;
			this->label96->Text = L"Please Choose Your Course";
			// 
			// comboBox22
			// 
			this->comboBox22->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox22->DropDownHeight = 250;
			this->comboBox22->DropDownWidth = 250;
			this->comboBox22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox22->FormattingEnabled = true;
			this->comboBox22->IntegralHeight = false;
			this->comboBox22->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"CSC1011", L"CSC1012", L"CSC1013", L"CSC1014",
					L"CSC1015"
			});
			this->comboBox22->Location = System::Drawing::Point(180, 350);
			this->comboBox22->Margin = System::Windows::Forms::Padding(0);
			this->comboBox22->MaxDropDownItems = 20;
			this->comboBox22->Name = L"comboBox22";
			this->comboBox22->Size = System::Drawing::Size(242, 33);
			this->comboBox22->TabIndex = 55;
			this->comboBox22->TabStop = false;
			// 
			// comboBox20
			// 
			this->comboBox20->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox20->DropDownHeight = 250;
			this->comboBox20->DropDownWidth = 250;
			this->comboBox20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox20->FormattingEnabled = true;
			this->comboBox20->IntegralHeight = false;
			this->comboBox20->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Scoreboard", L"StudentsList" });
			this->comboBox20->Location = System::Drawing::Point(180, 180);
			this->comboBox20->Margin = System::Windows::Forms::Padding(0);
			this->comboBox20->MaxDropDownItems = 20;
			this->comboBox20->Name = L"comboBox20";
			this->comboBox20->Size = System::Drawing::Size(242, 33);
			this->comboBox20->TabIndex = 53;
			this->comboBox20->TabStop = false;
			// 
			// bunifuThinButton233
			// 
			this->bunifuThinButton233->ActiveBorderThickness = 1;
			this->bunifuThinButton233->ActiveCornerRadius = 50;
			this->bunifuThinButton233->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton233->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton233->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton233->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton233->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton233.BackgroundImage")));
			this->bunifuThinButton233->ButtonText = L"Close";
			this->bunifuThinButton233->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton233->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton233->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton233->IdleBorderThickness = 1;
			this->bunifuThinButton233->IdleCornerRadius = 50;
			this->bunifuThinButton233->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton233->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton233->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton233->Location = System::Drawing::Point(335, 450);
			this->bunifuThinButton233->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton233->Name = L"bunifuThinButton233";
			this->bunifuThinButton233->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton233->TabIndex = 12;
			this->bunifuThinButton233->TabStop = false;
			this->bunifuThinButton233->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton233->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton233_Click);
			// 
			// bunifuThinButton234
			// 
			this->bunifuThinButton234->ActiveBorderThickness = 1;
			this->bunifuThinButton234->ActiveCornerRadius = 50;
			this->bunifuThinButton234->ActiveFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton234->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton234->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton234->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton234->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton234.BackgroundImage")));
			this->bunifuThinButton234->ButtonText = L"Import Now";
			this->bunifuThinButton234->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton234->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton234->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton234->IdleBorderThickness = 1;
			this->bunifuThinButton234->IdleCornerRadius = 50;
			this->bunifuThinButton234->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton234->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton234->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton234->Location = System::Drawing::Point(94, 450);
			this->bunifuThinButton234->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton234->Name = L"bunifuThinButton234";
			this->bunifuThinButton234->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton234->TabIndex = 10;
			this->bunifuThinButton234->TabStop = false;
			this->bunifuThinButton234->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label56->Location = System::Drawing::Point(116, 100);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(369, 40);
			this->label56->TabIndex = 1;
			this->label56->Text = L"Please Choose Your Choice";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->ForeColor = System::Drawing::Color::IndianRed;
			this->label57->Location = System::Drawing::Point(19, 10);
			this->label57->Margin = System::Windows::Forms::Padding(0);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(544, 42);
			this->label57->TabIndex = 0;
			this->label57->Text = L"Import StudentsList / Scoreboard";
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::Transparent;
			this->panel15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel15.BackgroundImage")));
			this->panel15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel15->Controls->Add(this->label14);
			this->panel15->Controls->Add(this->comboBox3);
			this->panel15->Controls->Add(this->comboBox4);
			this->panel15->Controls->Add(this->bunifuThinButton216);
			this->panel15->Controls->Add(this->bunifuThinButton217);
			this->panel15->Controls->Add(this->label18);
			this->panel15->Controls->Add(this->label19);
			this->panel15->Location = System::Drawing::Point(680, 280);
			this->panel15->Margin = System::Windows::Forms::Padding(0);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(600, 600);
			this->panel15->TabIndex = 50;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label14->Location = System::Drawing::Point(116, 270);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(371, 40);
			this->label14->TabIndex = 57;
			this->label14->Text = L"Please Choose Your Course";
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox3->DropDownHeight = 250;
			this->comboBox3->DropDownWidth = 250;
			this->comboBox3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->IntegralHeight = false;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"CSC1011", L"CSC1012", L"CSC1013", L"CSC1014",
					L"CSC1015"
			});
			this->comboBox3->Location = System::Drawing::Point(180, 350);
			this->comboBox3->Margin = System::Windows::Forms::Padding(0);
			this->comboBox3->MaxDropDownItems = 20;
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(242, 33);
			this->comboBox3->TabIndex = 55;
			this->comboBox3->TabStop = false;
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox4->DropDownHeight = 250;
			this->comboBox4->DropDownWidth = 250;
			this->comboBox4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->IntegralHeight = false;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Scoreboard", L"StudentsList" });
			this->comboBox4->Location = System::Drawing::Point(180, 180);
			this->comboBox4->Margin = System::Windows::Forms::Padding(0);
			this->comboBox4->MaxDropDownItems = 20;
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(242, 33);
			this->comboBox4->TabIndex = 53;
			this->comboBox4->TabStop = false;
			// 
			// bunifuThinButton216
			// 
			this->bunifuThinButton216->ActiveBorderThickness = 1;
			this->bunifuThinButton216->ActiveCornerRadius = 50;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton216->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton216.BackgroundImage")));
			this->bunifuThinButton216->ButtonText = L"Close";
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton216->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton216->IdleBorderThickness = 1;
			this->bunifuThinButton216->IdleCornerRadius = 50;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton216->Location = System::Drawing::Point(335, 450);
			this->bunifuThinButton216->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton216->Name = L"bunifuThinButton216";
			this->bunifuThinButton216->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton216->TabIndex = 12;
			this->bunifuThinButton216->TabStop = false;
			this->bunifuThinButton216->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton216->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton216_Click);
			// 
			// bunifuThinButton217
			// 
			this->bunifuThinButton217->ActiveBorderThickness = 1;
			this->bunifuThinButton217->ActiveCornerRadius = 50;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton217->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton217.BackgroundImage")));
			this->bunifuThinButton217->ButtonText = L"Export Now";
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton217->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton217->IdleBorderThickness = 1;
			this->bunifuThinButton217->IdleCornerRadius = 50;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton217->Location = System::Drawing::Point(94, 450);
			this->bunifuThinButton217->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton217->Name = L"bunifuThinButton217";
			this->bunifuThinButton217->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton217->TabIndex = 10;
			this->bunifuThinButton217->TabStop = false;
			this->bunifuThinButton217->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label18->Location = System::Drawing::Point(116, 100);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(369, 40);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Please Choose Your Choice";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::IndianRed;
			this->label19->Location = System::Drawing::Point(19, 10);
			this->label19->Margin = System::Windows::Forms::Padding(0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(545, 42);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Export StudentsList / Scoreboard";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::Transparent;
			this->panel16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel16.BackgroundImage")));
			this->panel16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel16->Controls->Add(this->treeView3);
			this->panel16->Controls->Add(this->panel21);
			this->panel16->Controls->Add(this->comboBox8);
			this->panel16->Controls->Add(this->comboBox10);
			this->panel16->Controls->Add(this->treeView1);
			this->panel16->Controls->Add(this->panel20);
			this->panel16->Controls->Add(this->label22);
			this->panel16->Controls->Add(this->label37);
			this->panel16->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel16->Location = System::Drawing::Point(8100, 140);
			this->panel16->Margin = System::Windows::Forms::Padding(0);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(1300, 860);
			this->panel16->TabIndex = 51;
			// 
			// treeView3
			// 
			this->treeView3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->treeView3->Location = System::Drawing::Point(714, 31);
			this->treeView3->Name = L"treeView3";
			this->treeView3->Size = System::Drawing::Size(530, 527);
			this->treeView3->TabIndex = 35;
			// 
			// panel21
			// 
			this->panel21->Controls->Add(this->bunifuThinButton236);
			this->panel21->Controls->Add(this->bunifuThinButton220);
			this->panel21->Controls->Add(this->bunifuThinButton227);
			this->panel21->Controls->Add(this->bunifuThinButton228);
			this->panel21->Location = System::Drawing::Point(614, 620);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(687, 174);
			this->panel21->TabIndex = 34;
			// 
			// bunifuThinButton236
			// 
			this->bunifuThinButton236->ActiveBorderThickness = 1;
			this->bunifuThinButton236->ActiveCornerRadius = 50;
			this->bunifuThinButton236->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton236->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton236->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton236->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton236->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton236.BackgroundImage")));
			this->bunifuThinButton236->ButtonText = L"From File.....";
			this->bunifuThinButton236->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton236->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton236->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton236->IdleBorderThickness = 1;
			this->bunifuThinButton236->IdleCornerRadius = 50;
			this->bunifuThinButton236->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton236->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton236->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton236->Location = System::Drawing::Point(155, 0);
			this->bunifuThinButton236->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton236->Name = L"bunifuThinButton236";
			this->bunifuThinButton236->Size = System::Drawing::Size(180, 64);
			this->bunifuThinButton236->TabIndex = 20;
			this->bunifuThinButton236->TabStop = false;
			this->bunifuThinButton236->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton220
			// 
			this->bunifuThinButton220->ActiveBorderThickness = 1;
			this->bunifuThinButton220->ActiveCornerRadius = 50;
			this->bunifuThinButton220->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton220->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton220->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton220->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton220->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton220.BackgroundImage")));
			this->bunifuThinButton220->ButtonText = L"Close";
			this->bunifuThinButton220->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton220->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton220->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton220->IdleBorderThickness = 1;
			this->bunifuThinButton220->IdleCornerRadius = 50;
			this->bunifuThinButton220->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton220->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton220->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton220->Location = System::Drawing::Point(385, 0);
			this->bunifuThinButton220->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton220->Name = L"bunifuThinButton220";
			this->bunifuThinButton220->Size = System::Drawing::Size(180, 64);
			this->bunifuThinButton220->TabIndex = 19;
			this->bunifuThinButton220->TabStop = false;
			this->bunifuThinButton220->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton220->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton220_Click);
			// 
			// bunifuThinButton227
			// 
			this->bunifuThinButton227->ActiveBorderThickness = 1;
			this->bunifuThinButton227->ActiveCornerRadius = 50;
			this->bunifuThinButton227->ActiveFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton227->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton227->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton227->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton227->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton227.BackgroundImage")));
			this->bunifuThinButton227->ButtonText = L"View Scoreboard";
			this->bunifuThinButton227->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton227->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton227->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton227->IdleBorderThickness = 1;
			this->bunifuThinButton227->IdleCornerRadius = 50;
			this->bunifuThinButton227->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton227->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton227->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton227->Location = System::Drawing::Point(380, 100);
			this->bunifuThinButton227->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton227->Name = L"bunifuThinButton227";
			this->bunifuThinButton227->Size = System::Drawing::Size(203, 64);
			this->bunifuThinButton227->TabIndex = 18;
			this->bunifuThinButton227->TabStop = false;
			this->bunifuThinButton227->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton227->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton227_Click);
			// 
			// bunifuThinButton228
			// 
			this->bunifuThinButton228->ActiveBorderThickness = 1;
			this->bunifuThinButton228->ActiveCornerRadius = 50;
			this->bunifuThinButton228->ActiveFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton228->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton228->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton228->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton228->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton228.BackgroundImage")));
			this->bunifuThinButton228->ButtonText = L"View Students List";
			this->bunifuThinButton228->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton228->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton228->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton228->IdleBorderThickness = 1;
			this->bunifuThinButton228->IdleCornerRadius = 50;
			this->bunifuThinButton228->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton228->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton228->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton228->Location = System::Drawing::Point(144, 100);
			this->bunifuThinButton228->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton228->Name = L"bunifuThinButton228";
			this->bunifuThinButton228->Size = System::Drawing::Size(203, 64);
			this->bunifuThinButton228->TabIndex = 17;
			this->bunifuThinButton228->TabStop = false;
			this->bunifuThinButton228->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton228->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton228_Click);
			// 
			// comboBox8
			// 
			this->comboBox8->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox8->DropDownHeight = 250;
			this->comboBox8->DropDownWidth = 250;
			this->comboBox8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.75F));
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->IntegralHeight = false;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->comboBox8->Location = System::Drawing::Point(60, 210);
			this->comboBox8->Margin = System::Windows::Forms::Padding(0);
			this->comboBox8->MaxDropDownItems = 20;
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(236, 36);
			this->comboBox8->TabIndex = 32;
			this->comboBox8->TabStop = false;
			// 
			// comboBox10
			// 
			this->comboBox10->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox10->DropDownHeight = 250;
			this->comboBox10->DropDownWidth = 250;
			this->comboBox10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.75F));
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->IntegralHeight = false;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"APCS", L"CLC", L"DT" });
			this->comboBox10->Location = System::Drawing::Point(60, 90);
			this->comboBox10->Margin = System::Windows::Forms::Padding(0);
			this->comboBox10->MaxDropDownItems = 20;
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(236, 36);
			this->comboBox10->Sorted = true;
			this->comboBox10->TabIndex = 5;
			this->comboBox10->TabStop = false;
			// 
			// treeView1
			// 
			this->treeView1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->treeView1->Location = System::Drawing::Point(60, 290);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(495, 527);
			this->treeView1->TabIndex = 22;
			// 
			// panel20
			// 
			this->panel20->Controls->Add(this->bunifuThinButton218);
			this->panel20->Location = System::Drawing::Point(344, 90);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(211, 156);
			this->panel20->TabIndex = 17;
			// 
			// bunifuThinButton218
			// 
			this->bunifuThinButton218->ActiveBorderThickness = 1;
			this->bunifuThinButton218->ActiveCornerRadius = 50;
			this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton218->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton218.BackgroundImage")));
			this->bunifuThinButton218->ButtonText = L"Add";
			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton218->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton218->IdleBorderThickness = 1;
			this->bunifuThinButton218->IdleCornerRadius = 50;
			this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton218->Location = System::Drawing::Point(20, 40);
			this->bunifuThinButton218->Margin = System::Windows::Forms::Padding(0);
			this->bunifuThinButton218->Name = L"bunifuThinButton218";
			this->bunifuThinButton218->Size = System::Drawing::Size(170, 70);
			this->bunifuThinButton218->TabIndex = 11;
			this->bunifuThinButton218->TabStop = false;
			this->bunifuThinButton218->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label22->ForeColor = System::Drawing::SystemColors::Info;
			this->label22->Location = System::Drawing::Point(76, 160);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(204, 29);
			this->label22->TabIndex = 20;
			this->label22->Text = L"Number of Classes";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label37->ForeColor = System::Drawing::SystemColors::Info;
			this->label37->Location = System::Drawing::Point(88, 40);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(122, 29);
			this->label37->TabIndex = 0;
			this->label37->Text = L"Class Type";
			// 
			// studentsListClass
			// 
			this->studentsListClass->BackColor = System::Drawing::Color::Transparent;
			this->studentsListClass->Controls->Add(this->kryptonDataGridView6);
			this->studentsListClass->Dock = System::Windows::Forms::DockStyle::Left;
			this->studentsListClass->Location = System::Drawing::Point(9400, 140);
			this->studentsListClass->Margin = System::Windows::Forms::Padding(0);
			this->studentsListClass->Name = L"studentsListClass";
			this->studentsListClass->Size = System::Drawing::Size(1300, 860);
			this->studentsListClass->TabIndex = 52;
			// 
			// kryptonDataGridView6
			// 
			dataGridViewCellStyle3->NullValue = L"-";
			this->kryptonDataGridView6->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle3;
			this->kryptonDataGridView6->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->kryptonDataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->kryptonDataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn29,
					this->dataGridViewTextBoxColumn30, this->dataGridViewTextBoxColumn31, this->dataGridViewTextBoxColumn32, this->dataGridViewTextBoxColumn33,
					this->dataGridViewTextBoxColumn34, this->dataGridViewTextBoxColumn35, this->Column5
			});
			this->kryptonDataGridView6->Dock = System::Windows::Forms::DockStyle::Top;
			this->kryptonDataGridView6->Location = System::Drawing::Point(0, 0);
			this->kryptonDataGridView6->Margin = System::Windows::Forms::Padding(0);
			this->kryptonDataGridView6->Name = L"kryptonDataGridView6";
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->kryptonDataGridView6->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->kryptonDataGridView6->Size = System::Drawing::Size(1300, 860);
			this->kryptonDataGridView6->TabIndex = 0;
			this->kryptonDataGridView6->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StaffForm::kryptonDataGridView6_CellContentClick);
			// 
			// dataGridViewTextBoxColumn29
			// 
			this->dataGridViewTextBoxColumn29->HeaderText = L"No";
			this->dataGridViewTextBoxColumn29->Name = L"dataGridViewTextBoxColumn29";
			this->dataGridViewTextBoxColumn29->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn30
			// 
			this->dataGridViewTextBoxColumn30->HeaderText = L"Student ID";
			this->dataGridViewTextBoxColumn30->Name = L"dataGridViewTextBoxColumn30";
			this->dataGridViewTextBoxColumn30->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn31
			// 
			this->dataGridViewTextBoxColumn31->HeaderText = L"First Name";
			this->dataGridViewTextBoxColumn31->Name = L"dataGridViewTextBoxColumn31";
			this->dataGridViewTextBoxColumn31->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn32
			// 
			this->dataGridViewTextBoxColumn32->HeaderText = L"Last Name";
			this->dataGridViewTextBoxColumn32->Name = L"dataGridViewTextBoxColumn32";
			this->dataGridViewTextBoxColumn32->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn33
			// 
			this->dataGridViewTextBoxColumn33->HeaderText = L"Gender";
			this->dataGridViewTextBoxColumn33->Name = L"dataGridViewTextBoxColumn33";
			this->dataGridViewTextBoxColumn33->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn34
			// 
			this->dataGridViewTextBoxColumn34->HeaderText = L"Date of Birth";
			this->dataGridViewTextBoxColumn34->Name = L"dataGridViewTextBoxColumn34";
			this->dataGridViewTextBoxColumn34->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn35
			// 
			this->dataGridViewTextBoxColumn35->HeaderText = L"Social ID";
			this->dataGridViewTextBoxColumn35->Name = L"dataGridViewTextBoxColumn35";
			this->dataGridViewTextBoxColumn35->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Update/Edit";
			this->Column5->Name = L"Column5";
			this->Column5->Text = L"Update/Edit";
			// 
			// scoreboardClass
			// 
			this->scoreboardClass->BackColor = System::Drawing::Color::Transparent;
			this->scoreboardClass->Controls->Add(this->kryptonDataGridView4);
			this->scoreboardClass->Dock = System::Windows::Forms::DockStyle::Left;
			this->scoreboardClass->Location = System::Drawing::Point(10700, 140);
			this->scoreboardClass->Margin = System::Windows::Forms::Padding(0);
			this->scoreboardClass->Name = L"scoreboardClass";
			this->scoreboardClass->Size = System::Drawing::Size(1300, 860);
			this->scoreboardClass->TabIndex = 53;
			// 
			// kryptonDataGridView4
			// 
			dataGridViewCellStyle5->NullValue = L"-";
			this->kryptonDataGridView4->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle5;
			this->kryptonDataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->kryptonDataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->kryptonDataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dataGridViewTextBoxColumn15,
					this->dataGridViewTextBoxColumn16, this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19,
					this->dataGridViewTextBoxColumn20, this->dataGridViewTextBoxColumn21, this->Column9, this->Column10
			});
			this->kryptonDataGridView4->Dock = System::Windows::Forms::DockStyle::Top;
			this->kryptonDataGridView4->Location = System::Drawing::Point(0, 0);
			this->kryptonDataGridView4->Margin = System::Windows::Forms::Padding(0);
			this->kryptonDataGridView4->Name = L"kryptonDataGridView4";
			this->kryptonDataGridView4->Size = System::Drawing::Size(1300, 860);
			this->kryptonDataGridView4->TabIndex = 0;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"No";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"Student ID";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"Student FullName";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"FiM Course1";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn19
			// 
			this->dataGridViewTextBoxColumn19->HeaderText = L"FiM Course2";
			this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
			this->dataGridViewTextBoxColumn19->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->HeaderText = L"FiM Course3";
			this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
			this->dataGridViewTextBoxColumn20->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn21
			// 
			this->dataGridViewTextBoxColumn21->HeaderText = L"FiM Course4";
			this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
			this->dataGridViewTextBoxColumn21->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"FiM Course5";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Overall GPA";
			this->Column10->Name = L"Column10";
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::Transparent;
			this->panel26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel26.BackgroundImage")));
			this->panel26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel26->Controls->Add(this->bunifuCustomTextbox37);
			this->panel26->Controls->Add(this->bunifuDatepicker9);
			this->panel26->Controls->Add(this->label64);
			this->panel26->Controls->Add(this->label65);
			this->panel26->Controls->Add(this->label71);
			this->panel26->Controls->Add(this->bunifuCustomTextbox39);
			this->panel26->Controls->Add(this->label90);
			this->panel26->Controls->Add(this->bunifuCustomTextbox40);
			this->panel26->Controls->Add(this->label93);
			this->panel26->Controls->Add(this->bunifuCustomTextbox41);
			this->panel26->Controls->Add(this->comboBox21);
			this->panel26->Controls->Add(this->bunifuThinButton244);
			this->panel26->Controls->Add(this->bunifuThinButton245);
			this->panel26->Controls->Add(this->label94);
			this->panel26->Controls->Add(this->label95);
			this->panel26->Location = System::Drawing::Point(680, 280);
			this->panel26->Margin = System::Windows::Forms::Padding(0);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(600, 600);
			this->panel26->TabIndex = 54;
			// 
			// bunifuCustomTextbox37
			// 
			this->bunifuCustomTextbox37->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox37->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox37->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox37->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox37->Location = System::Drawing::Point(160, 425);
			this->bunifuCustomTextbox37->Name = L"bunifuCustomTextbox37";
			this->bunifuCustomTextbox37->Size = System::Drawing::Size(421, 35);
			this->bunifuCustomTextbox37->TabIndex = 74;
			this->bunifuCustomTextbox37->UseSystemPasswordChar = true;
			// 
			// bunifuDatepicker9
			// 
			this->bunifuDatepicker9->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuDatepicker9->BorderRadius = 0;
			this->bunifuDatepicker9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bunifuDatepicker9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F));
			this->bunifuDatepicker9->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuDatepicker9->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->bunifuDatepicker9->FormatCustom = nullptr;
			this->bunifuDatepicker9->Location = System::Drawing::Point(160, 355);
			this->bunifuDatepicker9->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuDatepicker9->Name = L"bunifuDatepicker9";
			this->bunifuDatepicker9->Size = System::Drawing::Size(421, 35);
			this->bunifuDatepicker9->TabIndex = 72;
			this->bunifuDatepicker9->Value = System::DateTime(2023, 4, 11, 16, 41, 46, 736);
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->BackColor = System::Drawing::Color::Transparent;
			this->label64->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label64->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label64->Location = System::Drawing::Point(22, 438);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(90, 28);
			this->label64->TabIndex = 67;
			this->label64->Text = L"Social ID";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->BackColor = System::Drawing::Color::Transparent;
			this->label65->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label65->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label65->Location = System::Drawing::Point(21, 368);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(129, 28);
			this->label65->TabIndex = 64;
			this->label65->Text = L"Date of Birth";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->BackColor = System::Drawing::Color::Transparent;
			this->label71->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label71->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label71->Location = System::Drawing::Point(22, 300);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(79, 28);
			this->label71->TabIndex = 61;
			this->label71->Text = L"Gender";
			// 
			// bunifuCustomTextbox39
			// 
			this->bunifuCustomTextbox39->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox39->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox39->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox39->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox39->Location = System::Drawing::Point(160, 228);
			this->bunifuCustomTextbox39->Name = L"bunifuCustomTextbox39";
			this->bunifuCustomTextbox39->Size = System::Drawing::Size(421, 35);
			this->bunifuCustomTextbox39->TabIndex = 60;
			this->bunifuCustomTextbox39->UseSystemPasswordChar = true;
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->BackColor = System::Drawing::Color::Transparent;
			this->label90->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label90->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label90->Location = System::Drawing::Point(24, 231);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(108, 28);
			this->label90->TabIndex = 59;
			this->label90->Text = L"Last Name";
			// 
			// bunifuCustomTextbox40
			// 
			this->bunifuCustomTextbox40->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox40->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox40->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox40->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox40->Location = System::Drawing::Point(160, 160);
			this->bunifuCustomTextbox40->Name = L"bunifuCustomTextbox40";
			this->bunifuCustomTextbox40->Size = System::Drawing::Size(421, 35);
			this->bunifuCustomTextbox40->TabIndex = 58;
			this->bunifuCustomTextbox40->UseSystemPasswordChar = true;
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->BackColor = System::Drawing::Color::Transparent;
			this->label93->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label93->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label93->Location = System::Drawing::Point(21, 163);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(110, 28);
			this->label93->TabIndex = 57;
			this->label93->Text = L"First Name";
			// 
			// bunifuCustomTextbox41
			// 
			this->bunifuCustomTextbox41->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox41->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox41->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox41->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox41->Location = System::Drawing::Point(160, 102);
			this->bunifuCustomTextbox41->Name = L"bunifuCustomTextbox41";
			this->bunifuCustomTextbox41->Size = System::Drawing::Size(421, 35);
			this->bunifuCustomTextbox41->TabIndex = 54;
			this->bunifuCustomTextbox41->UseSystemPasswordChar = true;
			// 
			// comboBox21
			// 
			this->comboBox21->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox21->DropDownHeight = 250;
			this->comboBox21->DropDownWidth = 250;
			this->comboBox21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox21->FormattingEnabled = true;
			this->comboBox21->IntegralHeight = false;
			this->comboBox21->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->comboBox21->Location = System::Drawing::Point(160, 295);
			this->comboBox21->Margin = System::Windows::Forms::Padding(0);
			this->comboBox21->MaxDropDownItems = 20;
			this->comboBox21->Name = L"comboBox21";
			this->comboBox21->Size = System::Drawing::Size(421, 33);
			this->comboBox21->TabIndex = 53;
			this->comboBox21->TabStop = false;
			// 
			// bunifuThinButton244
			// 
			this->bunifuThinButton244->ActiveBorderThickness = 1;
			this->bunifuThinButton244->ActiveCornerRadius = 50;
			this->bunifuThinButton244->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton244->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton244->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton244->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton244->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton244.BackgroundImage")));
			this->bunifuThinButton244->ButtonText = L"Close";
			this->bunifuThinButton244->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton244->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton244->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton244->IdleBorderThickness = 1;
			this->bunifuThinButton244->IdleCornerRadius = 50;
			this->bunifuThinButton244->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton244->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton244->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton244->Location = System::Drawing::Point(334, 500);
			this->bunifuThinButton244->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton244->Name = L"bunifuThinButton244";
			this->bunifuThinButton244->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton244->TabIndex = 12;
			this->bunifuThinButton244->TabStop = false;
			this->bunifuThinButton244->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton244->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton244_Click);
			// 
			// bunifuThinButton245
			// 
			this->bunifuThinButton245->ActiveBorderThickness = 1;
			this->bunifuThinButton245->ActiveCornerRadius = 50;
			this->bunifuThinButton245->ActiveFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton245->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton245->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton245->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton245->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton245.BackgroundImage")));
			this->bunifuThinButton245->ButtonText = L"Change";
			this->bunifuThinButton245->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton245->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton245->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton245->IdleBorderThickness = 1;
			this->bunifuThinButton245->IdleCornerRadius = 50;
			this->bunifuThinButton245->IdleFillColor = System::Drawing::Color::MidnightBlue;
			this->bunifuThinButton245->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton245->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton245->Location = System::Drawing::Point(91, 500);
			this->bunifuThinButton245->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton245->Name = L"bunifuThinButton245";
			this->bunifuThinButton245->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton245->TabIndex = 10;
			this->bunifuThinButton245->TabStop = false;
			this->bunifuThinButton245->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->BackColor = System::Drawing::Color::Transparent;
			this->label94->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label94->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label94->Location = System::Drawing::Point(21, 105);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(109, 28);
			this->label94->TabIndex = 1;
			this->label94->Text = L"Student ID";
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->BackColor = System::Drawing::Color::Transparent;
			this->label95->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label95->ForeColor = System::Drawing::Color::IndianRed;
			this->label95->Location = System::Drawing::Point(19, 10);
			this->label95->Margin = System::Windows::Forms::Padding(0);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(522, 42);
			this->label95->TabIndex = 0;
			this->label95->Text = L"Update/Edit Students List Class";
			// 
			// StaffForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1600, 1000);
			this->ControlBox = false;
			this->Controls->Add(this->panel26);
			this->Controls->Add(this->scoreboardClass);
			this->Controls->Add(this->studentsListClass);
			this->Controls->Add(this->panel16);
			this->Controls->Add(this->panel15);
			this->Controls->Add(this->panel22);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel24);
			this->Controls->Add(this->panel25);
			this->Controls->Add(this->scoreboardCourse);
			this->Controls->Add(this->studentsListCourse);
			this->Controls->Add(this->panel17);
			this->Controls->Add(this->panel18);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->sidebarTop);
			this->Controls->Add(this->sidebar);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"StaffForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Group3 - BCRSystem - CourseManagement/CourseRegistration - StaffForm";
			this->Load += gcnew System::EventHandler(this, &StaffForm::StaffForm_Load);
			this->sidebar->ResumeLayout(false);
			this->sidebar->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->sidebarTop->ResumeLayout(false);
			this->sidebarTop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel19->ResumeLayout(false);
			this->studentsListCourse->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView5))->EndInit();
			this->scoreboardCourse->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView3))->EndInit();
			this->panel25->ResumeLayout(false);
			this->panel25->PerformLayout();
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel20->ResumeLayout(false);
			this->studentsListClass->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView6))->EndInit();
			this->scoreboardClass->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView4))->EndInit();
			this->panel26->ResumeLayout(false);
			this->panel26->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

			// Staff Form Load
		private: System::Void StaffForm_Load(System::Object^ sender, System::EventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = false;
			flagSchoolYearClasses = false;
			flagCreateNewStaff = false;
			flagImportExport = false;
			flagCreatingClicked = false;
			this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->comboBox1->Text = L"";

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = false;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = false;
			this->bunifuThinButton211->Visible = false;
			this->bunifuThinButton212->Visible = false;
			this->bunifuCustomTextbox6->Visible = false;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = false;
			this->panel26->Visible = false;
			this->comboBox8->Enabled = false;
			this->comboBox10->Enabled = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton236->Visible = false;
			this->bunifuThinButton242->Visible = false;
			this->studentsListClass->Visible = false;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = false;

		}

			// Display Time in real life
		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

			this->label62->Text = System::Convert::ToString(DateTime::Now.ToString("MMMM dd, yyyy\nhh:mm tt"));

		}

			// Create School Year Button
		private: System::Void bunifuThinButton223_Click(System::Object^ sender, System::EventArgs^ e) {

			if (flagCreateSchoolYear == false)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = true;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = false;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = true;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = true;
				this->comboBox10->Enabled = true;
				this->bunifuThinButton218->Visible = true;
				this->bunifuThinButton236->Visible = true;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}
			else
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = false;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}

		}

			// Creating Button (Create School Year Gui)
		private: System::Void bunifuThinButton224_Click(System::Object^ sender, System::EventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = false;
			flagSchoolYearClasses = true;
			flagImportExport = false;
			flagCreateNewStaff = false;
			flagCreatingClicked = true;
			this->panel3->Visible = true;
			this->panel4->Visible = true;
			this->panel7->Visible = true;
			this->panel8->Visible = true;
			/*this->comboBox1->Text = L"";*/

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = true;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = false;
			this->bunifuThinButton211->Visible = false;
			this->bunifuThinButton212->Visible = false;
			this->bunifuCustomTextbox6->Visible = false;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = true;
			this->panel26->Visible = false;
			this->comboBox8->Enabled = true;
			this->comboBox10->Enabled = true;
			this->bunifuThinButton218->Visible = true;
			this->bunifuThinButton236->Visible = true;
			this->bunifuThinButton242->Visible = true;
			this->studentsListClass->Visible = false;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = false;

		}

			// Clear Button (Create School Year Gui)
		private: System::Void bunifuThinButton225_Click(System::Object^ sender, System::EventArgs^ e) {

			this->bunifuCustomTextbox8->Text = L"";

		}

			// Close Button (Create School Year Gui)
		private: System::Void bunifuThinButton226_Click(System::Object^ sender, System::EventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = false;
			flagSchoolYearClasses = false;
			flagImportExport = false;
			flagCreateNewStaff = false;
			flagCreatingClicked = false;
			this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->comboBox1->Text = L"";

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = false;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = false;
			this->bunifuThinButton211->Visible = false;
			this->bunifuThinButton212->Visible = false;
			this->bunifuCustomTextbox6->Visible = false;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = false;
			this->panel26->Visible = false;
			this->comboBox8->Enabled = false;
			this->comboBox10->Enabled = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton236->Visible = false;
			this->bunifuThinButton242->Visible = false;
			this->studentsListClass->Visible = false;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = false;

		}

			// Select School Year
		private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

			if (this->comboBox1->Text != "" && this->comboBox1->Text != "(School Year)")
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				this->panel3->Visible = true;
				this->panel4->Visible = true;
				this->panel7->Visible = true;
				this->panel8->Visible = true;
				this->comboBox1->Text = L"";

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = false;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}
			else
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = false;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}

		}

			// Home / Profile Button
		private: System::Void bunifuFlatButton1_Click(System::Object^ sender, System::EventArgs^ e) {

			if (flagHomeProfile == false)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = true;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = true;
				this->panel4->Visible = true;
				this->panel7->Visible = true;
				this->panel8->Visible = true;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = true;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = true;
				this->bunifuThinButton21->Visible = true;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}
			else
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = false;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}

		}

			// Close Button (Home / Profile: Profile)
		private: System::Void bunifuThinButton24_Click(System::Object^ sender, System::EventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = false;
			flagSchoolYearClasses = false;
			flagImportExport = false;
			flagCreateNewStaff = false;
			flagCreatingClicked = false;
			/*this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->comboBox1->Text = L"";*/

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = false;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = false;
			this->bunifuThinButton211->Visible = false;
			this->bunifuThinButton212->Visible = false;
			this->bunifuCustomTextbox6->Visible = false;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = false;
			this->panel26->Visible = false;
			this->comboBox8->Enabled = false;
			this->comboBox10->Enabled = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton236->Visible = false;
			this->bunifuThinButton242->Visible = false;
			this->studentsListClass->Visible = false;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = false;

		}

			// Close Button (Home / Profile: Change Password)
		private: System::Void bunifuThinButton25_Click(System::Object^ sender, System::EventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = false;
			flagSchoolYearClasses = false;
			flagImportExport = false;
			flagCreateNewStaff = false;
			flagCreatingClicked = false;
			/*this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->comboBox1->Text = L"";*/

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = false;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = false;
			this->bunifuThinButton211->Visible = false;
			this->bunifuThinButton212->Visible = false;
			this->bunifuCustomTextbox6->Visible = false;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = false;
			this->panel26->Visible = false;
			this->comboBox8->Enabled = false;
			this->comboBox10->Enabled = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton236->Visible = false;
			this->bunifuThinButton242->Visible = false;
			this->studentsListClass->Visible = false;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = false;

		}

			// Change Password Button (Home / Profile: Side Bar Top)
		private: System::Void bunifuThinButton21_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->panel10->Visible)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = true;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = true;
				this->bunifuThinButton23->Visible = true;
				this->bunifuThinButton21->Visible = true;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}

		}

			// Profile Button (Home / Profile: Side Bar Button)
		private: System::Void bunifuThinButton23_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->panel12->Visible)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = true;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = true;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = true;
				this->bunifuThinButton21->Visible = true;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}

		}

			// Semester - Course Button (Side Bar)
		private: System::Void bunifuFlatButton2_Click(System::Object^ sender, System::EventArgs^ e) {

			if (flagSemesterCourse == false)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagCreateNewStaff = false;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagSemesterCourse = true;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = true;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = true;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}
			else
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = false;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}

		}

			// View Students List (Semester - Course)
		private: System::Void bunifuThinButton252_Click(System::Object^ sender, System::EventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = true;
			flagSchoolYearClasses = false;
			flagImportExport = false;
			flagCreateNewStaff = false;
			flagCreatingClicked = false;
			/*this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->comboBox1->Text = L"";*/

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = true;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop1.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = true;
			this->scoreboardCourse->Visible = false;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = true;
			this->bunifuThinButton211->Visible = true;
			this->bunifuThinButton212->Visible = true;
			this->bunifuCustomTextbox6->Visible = true;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = false;
			this->panel26->Visible = false;
			this->comboBox8->Enabled = false;
			this->comboBox10->Enabled = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton236->Visible = false;
			this->bunifuThinButton242->Visible = false;
			this->studentsListClass->Visible = false;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = true;

		}

			// View Scoreboard (Semester - Course)
		private: System::Void bunifuThinButton253_Click(System::Object^ sender, System::EventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = true;
			flagSchoolYearClasses = false;
			flagImportExport = false;
			flagCreateNewStaff = false;
			flagCreatingClicked = false;
			/*this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->comboBox1->Text = L"";*/

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = true;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop1.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardCourse->Visible = true;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = true;
			this->bunifuThinButton211->Visible = true;
			this->bunifuThinButton212->Visible = true;
			this->bunifuCustomTextbox6->Visible = true;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = false;
			this->panel26->Visible = false;
			this->comboBox8->Enabled = false;
			this->comboBox10->Enabled = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton236->Visible = false;
			this->bunifuThinButton242->Visible = false;
			this->studentsListClass->Visible = false;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = true;

		}

			// Go Back Button (Semester - Course and SchoolYear - Classes)
		private: System::Void bunifuThinButton210_Click(System::Object^ sender, System::EventArgs^ e) {

			if (flagCreatingClicked)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = true;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = true;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = true;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = true;
				this->comboBox10->Enabled = true;
				this->bunifuThinButton218->Visible = true;
				this->bunifuThinButton236->Visible = true;
				this->bunifuThinButton242->Visible = true;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}
			if (flagSemesterCourse && !flagCreatingClicked)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = true;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = true;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = true;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}
			if (flagSchoolYearClasses && !flagCreatingClicked)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = true;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = true;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = true;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}

		}

			// Close Button (Semester - Course)
		private: System::Void bunifuThinButton215_Click(System::Object^ sender, System::EventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = false;
			flagSchoolYearClasses = false;
			flagImportExport = false;
			flagCreateNewStaff = false;
			flagCreatingClicked = false;
			/*this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->comboBox1->Text = L"";*/

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = false;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = false;
			this->bunifuThinButton211->Visible = false;
			this->bunifuThinButton212->Visible = false;
			this->bunifuCustomTextbox6->Visible = false;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = false;
			this->panel26->Visible = false;
			this->comboBox8->Enabled = false;
			this->comboBox10->Enabled = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton236->Visible = false;
			this->bunifuThinButton242->Visible = false;
			this->studentsListClass->Visible = false;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = false;

		}

			// Cell Student List Course Clicked: Update / Edit
		private: System::Void kryptonDataGridView5_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

			if (e->ColumnIndex == 7)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = true;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop1.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = true;
				this->studentsListCourse->Visible = true;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = true;
				this->bunifuThinButton211->Visible = true;
				this->bunifuThinButton212->Visible = true;
				this->bunifuCustomTextbox6->Visible = true;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = true;

			}

		}

			// Close Button (Update / Edit: View Students List Course)
		private: System::Void bunifuThinButton213_Click(System::Object^ sender, System::EventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = true;
			flagSchoolYearClasses = false;
			flagImportExport = false;
			flagCreateNewStaff = false;
			flagCreatingClicked = false;
			/*this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->comboBox1->Text = L"";*/

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = true;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop1.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = true;
			this->scoreboardCourse->Visible = false;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = true;
			this->bunifuThinButton211->Visible = true;
			this->bunifuThinButton212->Visible = true;
			this->bunifuCustomTextbox6->Visible = true;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = false;
			this->panel26->Visible = false;
			this->comboBox8->Enabled = false;
			this->comboBox10->Enabled = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton236->Visible = false;
			this->bunifuThinButton242->Visible = false;
			this->studentsListClass->Visible = false;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = true;

		}

			// Cell Scoreboard Course Clicked: Update / Edit
		private: System::Void kryptonDataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

			if (e->ColumnIndex == 7)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = true;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop1.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = true;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = true;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = true;
				this->bunifuThinButton211->Visible = true;
				this->bunifuThinButton212->Visible = true;
				this->bunifuCustomTextbox6->Visible = true;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = true;

			}

		}

			// Close Button (Update / Edit: View Scoreboard Course)
		private: System::Void bunifuThinButton240_Click(System::Object^ sender, System::EventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = true;
			flagSchoolYearClasses = false;
			flagImportExport = false;
			flagCreateNewStaff = false;
			flagCreatingClicked = false;
			/*this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->comboBox1->Text = L"";*/

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = true;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop1.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardCourse->Visible = true;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = true;
			this->bunifuThinButton211->Visible = true;
			this->bunifuThinButton212->Visible = true;
			this->bunifuCustomTextbox6->Visible = true;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = false;
			this->panel26->Visible = false;
			this->comboBox8->Enabled = false;
			this->comboBox10->Enabled = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton236->Visible = false;
			this->bunifuThinButton242->Visible = false;
			this->studentsListClass->Visible = false;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = true;

		}

			// SchoolYear - Classes Button (Side Bar Left)
		private: System::Void bunifuFlatButton3_Click(System::Object^ sender, System::EventArgs^ e) {

			if (flagSchoolYearClasses == false)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = true;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = true;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = true;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = true;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}
			else
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = false;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}

		}

			// Close Button (SchoolYear - Classes GUI)
		private: System::Void bunifuThinButton220_Click(System::Object^ sender, System::EventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = false;
			flagSchoolYearClasses = false;
			flagImportExport = false;
			flagCreateNewStaff = false;
			flagCreatingClicked = false;
			/*this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->comboBox1->Text = L"";*/

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = false;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = false;
			this->bunifuThinButton211->Visible = false;
			this->bunifuThinButton212->Visible = false;
			this->bunifuCustomTextbox6->Visible = false;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = false;
			this->panel26->Visible = false;
			this->comboBox8->Enabled = false;
			this->comboBox10->Enabled = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton236->Visible = false;
			this->bunifuThinButton242->Visible = false;
			this->studentsListClass->Visible = false;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = false;

		}

			// View Students List Button (SchoolYear - Classes GUI)
		private: System::Void bunifuThinButton228_Click(System::Object^ sender, System::EventArgs^ e) {

			if (flagCreatingClicked)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = true;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = true;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop1.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = true;
				this->bunifuThinButton211->Visible = true;
				this->bunifuThinButton212->Visible = true;
				this->bunifuCustomTextbox6->Visible = true;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = true;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = true;

			}
			else
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = true;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop1.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = true;
				this->bunifuThinButton211->Visible = true;
				this->bunifuThinButton212->Visible = true;
				this->bunifuCustomTextbox6->Visible = true;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = true;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = true;

			}
			

		}

			// Cell Content Clicked: Update / Edit (SchoolYear - Classes GUI: View Students List)
		private: System::Void kryptonDataGridView6_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = false;
			flagSchoolYearClasses = true;
			flagImportExport = false;
			flagCreateNewStaff = false;
			flagCreatingClicked = false;
			/*this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->comboBox1->Text = L"";*/

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = true;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop1.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = true;
			this->bunifuThinButton211->Visible = true;
			this->bunifuThinButton212->Visible = true;
			this->bunifuCustomTextbox6->Visible = true;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = false;
			this->panel26->Visible = true;
			this->comboBox8->Enabled = false;
			this->comboBox10->Enabled = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton236->Visible = false;
			this->bunifuThinButton242->Visible = false;
			this->studentsListClass->Visible = true;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = true;

		}

			// Close Button (SchoolYear - Classes GUI: Update and Edit GUI)
		private: System::Void bunifuThinButton244_Click(System::Object^ sender, System::EventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = false;
			flagSchoolYearClasses = true;
			flagImportExport = false;
			flagCreateNewStaff = false;
			flagCreatingClicked = false;
			/*this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->comboBox1->Text = L"";*/

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = true;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop1.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = true;
			this->bunifuThinButton211->Visible = true;
			this->bunifuThinButton212->Visible = true;
			this->bunifuCustomTextbox6->Visible = true;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = false;
			this->panel26->Visible = false;
			this->comboBox8->Enabled = false;
			this->comboBox10->Enabled = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton236->Visible = false;
			this->bunifuThinButton242->Visible = false;
			this->studentsListClass->Visible = true;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = true;

		}

			// View Scoreboard Button (SchoolYear - Classes GUI)
		private: System::Void bunifuThinButton227_Click(System::Object^ sender, System::EventArgs^ e) {

			if (flagCreatingClicked)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = true;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = true;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop1.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = true;
				this->bunifuThinButton211->Visible = true;
				this->bunifuThinButton212->Visible = true;
				this->bunifuCustomTextbox6->Visible = true;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = true;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = true;

			}
			else
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = true;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop1.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = true;
				this->bunifuThinButton211->Visible = true;
				this->bunifuThinButton212->Visible = true;
				this->bunifuCustomTextbox6->Visible = true;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = true;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = true;

			}

		}

			// Import / Export Button (Side Bar Left)
		private: System::Void bunifuFlatButton6_Click(System::Object^ sender, System::EventArgs^ e) {

			if (flagImportExport == false)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = true;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = true;
				this->bunifuThinButton237->Visible = true;
				this->bunifuThinButton238->Visible = true;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}
			else
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = false;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}

		}

			// Import Button (Import / Export GUI)
		private: System::Void bunifuThinButton237_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->panel15->Visible)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = true;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = true;
				this->bunifuThinButton237->Visible = true;
				this->bunifuThinButton238->Visible = true;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}

		}

			// Export Button (Import / Export GUI)
		private: System::Void bunifuThinButton238_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->panel22->Visible)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = true;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = true;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = true;
				this->bunifuThinButton238->Visible = true;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}

		}

			// Close Button (Import / Export: Import)
		private: System::Void bunifuThinButton216_Click(System::Object^ sender, System::EventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = false;
			flagSchoolYearClasses = false;
			flagImportExport = false;
			flagCreateNewStaff = false;
			flagCreatingClicked = false;
			/*this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->comboBox1->Text = L"";*/

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = false;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = false;
			this->bunifuThinButton211->Visible = false;
			this->bunifuThinButton212->Visible = false;
			this->bunifuCustomTextbox6->Visible = false;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = false;
			this->panel26->Visible = false;
			this->comboBox8->Enabled = false;
			this->comboBox10->Enabled = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton236->Visible = false;
			this->bunifuThinButton242->Visible = false;
			this->studentsListClass->Visible = false;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = false;

		}

			// Close Button (Import / Export: Export)
		private: System::Void bunifuThinButton233_Click(System::Object^ sender, System::EventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = false;
			flagSchoolYearClasses = false;
			flagImportExport = false;
			flagCreateNewStaff = false;
			flagCreatingClicked = false;
			/*this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->comboBox1->Text = L"";*/

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = false;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = false;
			this->bunifuThinButton211->Visible = false;
			this->bunifuThinButton212->Visible = false;
			this->bunifuCustomTextbox6->Visible = false;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = false;
			this->panel26->Visible = false;
			this->comboBox8->Enabled = false;
			this->comboBox10->Enabled = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton236->Visible = false;
			this->bunifuThinButton242->Visible = false;
			this->studentsListClass->Visible = false;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = false;

		}

			// Create New Staff Button (Side Bar Left)
		private: System::Void bunifuFlatButton7_Click(System::Object^ sender, System::EventArgs^ e) {

			if (flagCreateNewStaff == false)
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = true;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = true;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = true;
				this->bunifuThinButton239->Visible = true;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}
			else
			{

				// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
				flagCreateSchoolYear = false;
				flagHomeProfile = false;
				flagSemesterCourse = false;
				flagSchoolYearClasses = false;
				flagImportExport = false;
				flagCreateNewStaff = false;
				flagCreatingClicked = false;
				/*this->panel3->Visible = false;
				this->panel4->Visible = false;
				this->panel7->Visible = false;
				this->panel8->Visible = false;
				this->comboBox1->Text = L"";*/

				// Side Bar Top (Sub Menu Bar)
				this->sidebarTop->Visible = false;
				this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

				// Down panel (look down of Side Bar Top)
				// =========== Home / Profile GUI =========== //
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
				// =========== Create School Year GUI =========== //
				this->panel18->Visible = false;
				this->pictureBox1->Visible = false; // Invalid Input --> Will show
				this->bunifuCustomTextbox8->Text = L"";
				// =========== Semester - Course GUI =========== //
				this->panel17->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->bunifuThinButton29->Visible = false;
				this->bunifuThinButton210->Visible = false;
				this->bunifuThinButton211->Visible = false;
				this->bunifuThinButton212->Visible = false;
				this->bunifuCustomTextbox6->Visible = false;
				this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
				this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
				this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
				this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
				this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
				this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
				// =========== SchoolYear - Classes GUI =========== //
				this->panel16->Visible = false;
				this->panel26->Visible = false;
				this->comboBox8->Enabled = false;
				this->comboBox10->Enabled = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton236->Visible = false;
				this->bunifuThinButton242->Visible = false;
				this->studentsListClass->Visible = false;
				this->scoreboardClass->Visible = false;
				this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
				// =========== Import / Export GUI =========== //
				this->panel15->Visible = false;
				this->panel22->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
				// =========== Create New Staff GUI =========== //
				this->panel6->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
				// =========== Saving Button =========== //
				this->bunifuImageButton2->Visible = false;

			}

		}

			// Close Button (Create New Staff)
		private: System::Void bunifuThinButton229_Click(System::Object^ sender, System::EventArgs^ e) {

			// Side Bar Left (Main Menu Bar): Make every button hide, except: Home / Profile button and Log Out button
			flagCreateSchoolYear = false;
			flagHomeProfile = false;
			flagSemesterCourse = false;
			flagSchoolYearClasses = false;
			flagImportExport = false;
			flagCreateNewStaff = false;
			flagCreatingClicked = false;
			/*this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->comboBox1->Text = L"";*/

			// Side Bar Top (Sub Menu Bar)
			this->sidebarTop->Visible = false;
			this->sidebarTop->BackgroundImage = System::Drawing::Image::FromFile("ProjectBCRSystemImages\\sideBarTop.jpg");

			// Down panel (look down of Side Bar Top)
			// =========== Home / Profile GUI =========== //
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton23
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton21
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			// =========== Create School Year GUI =========== //
			this->panel18->Visible = false;
			this->pictureBox1->Visible = false; // Invalid Input --> Will show
			this->bunifuCustomTextbox8->Text = L"";
			// =========== Semester - Course GUI =========== //
			this->panel17->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->bunifuThinButton29->Visible = false;
			this->bunifuThinButton210->Visible = false;
			this->bunifuThinButton211->Visible = false;
			this->bunifuThinButton212->Visible = false;
			this->bunifuCustomTextbox6->Visible = false;
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton29
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton210
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton211
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton212
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Violet;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::SeaGreen;
			// =========== SchoolYear - Classes GUI =========== //
			this->panel16->Visible = false;
			this->panel26->Visible = false;
			this->comboBox8->Enabled = false;
			this->comboBox10->Enabled = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton236->Visible = false;
			this->bunifuThinButton242->Visible = false;
			this->studentsListClass->Visible = false;
			this->scoreboardClass->Visible = false;
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::White;
			// =========== Import / Export GUI =========== //
			this->panel15->Visible = false;
			this->panel22->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton237
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand; // bunifuThinButton238
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::PaleVioletRed;
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			// =========== Create New Staff GUI =========== //
			this->panel6->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No; // bunifuThinButton239
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			// =========== Saving Button =========== //
			this->bunifuImageButton2->Visible = false;

		}

			// Log Out Button
		private: System::Void bunifuFlatButton8_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();
			obj->Show();

		}
	};
}
