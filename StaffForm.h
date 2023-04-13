#pragma once

// Private: khong the truy xuat o bat cu dau, tru trong doi tuong UserInterfaceFormVersion2
// Protected: nhung dua thua huong lai UserInterfaceFormVersion2, thi deu co the truy xuat
// public: thoai mai vo tu
// Overide: overloading


// Including all libraries in file "_Libraries_Storage_"
#include "_Libraries_Storage_.h"

namespace UserInterfaceFormVersion2 {

	using namespace std;
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
		bool sideBarFlag = true;
		bool sideBarTopFlag_HomeProfile = false;
		bool sideBarTopFlag_SemesterModification = false;
		bool sideBarTopFlag_ImportExport = false;
		bool sideBarTopFlag_CreateStaff = false;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton225;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox11;
	private: System::Windows::Forms::ComboBox^ comboBox10;
	private: System::Windows::Forms::ComboBox^ comboBox9;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton226;
	private: System::Windows::Forms::FlowLayoutPanel^ coursesInformation;
	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView2;
	private: System::Windows::Forms::FlowLayoutPanel^ scoreboardCourse;
	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView3;
	private: System::Windows::Forms::FlowLayoutPanel^ scoreboardClass;
	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView4;
	private: System::Windows::Forms::FlowLayoutPanel^ studentsListCourse;
	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView5;
	private: System::Windows::Forms::FlowLayoutPanel^ studentsListClass;
	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView6;
private: System::Windows::Forms::Panel^ panel5;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox9;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox11;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox15;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Panel^ panel6;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton229;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton230;
private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::ComboBox^ comboBox14;
private: System::Windows::Forms::ComboBox^ comboBox13;
private: System::Windows::Forms::ComboBox^ comboBox12;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label48;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton227;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton231;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::ComboBox^ comboBox15;
private: System::Windows::Forms::ComboBox^ comboBox16;
private: System::Windows::Forms::ComboBox^ comboBox17;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton228;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton232;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Panel^ panel22;
private: System::Windows::Forms::ComboBox^ comboBox20;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton233;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton234;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Panel^ panel23;
private: System::Windows::Forms::ComboBox^ comboBox18;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton235;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton236;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label55;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton237;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton238;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox20;
private: System::Windows::Forms::Label^ label60;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox16;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::ComboBox^ comboBox19;
private: System::Windows::Forms::Label^ label58;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox21;
private: System::Windows::Forms::Label^ label61;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton239;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewButtonColumn^ Column17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewButtonColumn^ Column16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
private: System::Windows::Forms::DataGridViewButtonColumn^ Column15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn22;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn23;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn24;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn26;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn27;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn28;
private: System::Windows::Forms::DataGridViewButtonColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn29;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn30;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn31;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn32;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn33;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn34;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn35;
private: System::Windows::Forms::DataGridViewButtonColumn^ Column5;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::Panel^ panel29;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox26;
private: System::Windows::Forms::Label^ label83;
private: Bunifu::Framework::UI::BunifuDatepicker^ bunifuDatepicker3;
private: System::Windows::Forms::Label^ label82;
private: System::Windows::Forms::Label^ label81;
private: Bunifu::Framework::UI::BunifuDatepicker^ bunifuDatepicker1;
private: System::Windows::Forms::Label^ label80;
private: System::Windows::Forms::ComboBox^ comboBox28;
private: System::Windows::Forms::Label^ label79;
private: System::Windows::Forms::ComboBox^ comboBox29;
private: System::Windows::Forms::ComboBox^ comboBox27;
private: System::Windows::Forms::Label^ label78;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox25;
private: System::Windows::Forms::Label^ label77;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox24;
private: System::Windows::Forms::Label^ label76;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox23;
private: System::Windows::Forms::Label^ label75;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox22;
private: System::Windows::Forms::ComboBox^ comboBox26;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton250;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton251;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Panel^ panel28;
private: System::Windows::Forms::Label^ label118;
private: System::Windows::Forms::ComboBox^ comboBox41;
private: System::Windows::Forms::Label^ label122;
private: System::Windows::Forms::ComboBox^ comboBox42;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox49;
private: System::Windows::Forms::Label^ label125;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton248;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton249;
private: System::Windows::Forms::Label^ label128;
private: System::Windows::Forms::Label^ label84;
private: System::Windows::Forms::Label^ label72;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton241;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton240;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox31;
private: System::Windows::Forms::Label^ label70;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox29;
private: System::Windows::Forms::Label^ label69;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox28;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label63;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox27;
private: System::Windows::Forms::Panel^ panel24;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox33;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox32;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox30;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn21;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
private: System::Windows::Forms::Label^ label92;
private: System::Windows::Forms::Label^ label91;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton243;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton242;
private: System::Windows::Forms::ComboBox^ comboBox24;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox38;
private: System::Windows::Forms::Label^ label89;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox36;
private: System::Windows::Forms::Label^ label88;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox35;
private: System::Windows::Forms::Label^ label87;
private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::Label^ label85;
private: Bunifu::Framework::UI::BunifuDatepicker^ bunifuDatepicker8;
private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox34;
private: System::Windows::Forms::Panel^ panel25;
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
	public:
		bool sideBarTopFlag_SemesterViewer = false;
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
	private: System::Windows::Forms::Panel^ panel18;
	public:
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton224;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox8;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label13;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton223;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton24;
	public:
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton22;
	private: System::Windows::Forms::Label^ label42;
	public:
	private: System::Windows::Forms::Label^ label41;
	public:
	private: System::Windows::Forms::FlowLayoutPanel^ classesInformation;
	public:
	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView1;
	private: System::Windows::Forms::Panel^ panel17;
	public:
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
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton220;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton221;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton222;
	private: System::Windows::Forms::Label^ label30;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox18;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox19;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label38;
	private: Bunifu::Framework::UI::BunifuDatepicker^ bunifuDatepicker4;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label25;
	private: Bunifu::Framework::UI::BunifuDatepicker^ bunifuDatepicker5;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton219;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton215;
	public:
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton216;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton217;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton218;
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
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton27;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton28;
	private: System::Windows::Forms::Panel^ panel14;
	public:
	private: System::Windows::Forms::Label^ label24;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox12;
	private: System::Windows::Forms::Label^ label23;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox10;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::Panel^ panel16;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton212;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Panel^ panel15;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton214;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton213;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton211;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton29;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton210;
	private: Bunifu::Framework::UI::BunifuDatepicker^ bunifuDatepicker2;
	private: System::Windows::Forms::Label^ label14;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox6;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox7;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::FlowLayoutPanel^ sidebarTop;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton23;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton21;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel11;
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
	private: System::Windows::Forms::FlowLayoutPanel^ sidebar;
	protected:
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ menubarButton;
	private: System::Windows::Forms::Label^ label1;
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
	private: System::Windows::Forms::Timer^ sidebarTimer;
	private: System::ComponentModel::IContainer^ components;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StaffForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->sidebar = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuThinButton223 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->menubarButton = (gcnew System::Windows::Forms::PictureBox());
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->sidebarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->sidebarTop = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->bunifuThinButton23 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton21 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton27 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton28 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton215 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton216 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton217 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton218 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton237 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton238 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton239 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
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
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox12 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox10 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton212 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton214 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton213 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton211 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton29 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton210 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuDatepicker2 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox6 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox7 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->bunifuDatepicker4 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->bunifuDatepicker5 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
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
			this->bunifuThinButton219 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton220 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton221 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton222 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox18 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox19 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->classesInformation = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->kryptonDataGridView1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton226 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton225 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton224 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuCustomTextbox8 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->coursesInformation = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->kryptonDataGridView2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
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
			this->panel5 = (gcnew System::Windows::Forms::Panel());
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
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton229 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton230 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton227 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton231 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox16 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox17 = (gcnew System::Windows::Forms::ComboBox());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton228 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton232 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->comboBox20 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuThinButton233 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton234 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->comboBox18 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuThinButton235 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton236 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomTextbox26 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->bunifuDatepicker3 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->bunifuDatepicker1 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->comboBox28 = (gcnew System::Windows::Forms::ComboBox());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->comboBox29 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox27 = (gcnew System::Windows::Forms::ComboBox());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox25 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox24 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox23 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox22 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->comboBox26 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuThinButton250 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton251 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->comboBox41 = (gcnew System::Windows::Forms::ComboBox());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->comboBox42 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuCustomTextbox49 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label125 = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton248 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton249 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton241 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton240 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuCustomTextbox31 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox29 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox28 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox27 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomTextbox33 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->bunifuCustomTextbox32 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->bunifuCustomTextbox30 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton243 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton242 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->comboBox24 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuCustomTextbox38 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox36 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomTextbox35 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->bunifuDatepicker8 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->bunifuCustomTextbox34 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menubarButton))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->sidebarTop->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel19->SuspendLayout();
			this->classesInformation->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView1))->BeginInit();
			this->panel18->SuspendLayout();
			this->coursesInformation->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView2))->BeginInit();
			this->scoreboardCourse->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView3))->BeginInit();
			this->scoreboardClass->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView4))->BeginInit();
			this->studentsListCourse->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView5))->BeginInit();
			this->studentsListClass->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView6))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel29->SuspendLayout();
			this->panel28->SuspendLayout();
			this->panel24->SuspendLayout();
			this->panel25->SuspendLayout();
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
			this->sidebar->Controls->Add(this->label1);
			this->sidebar->Controls->Add(this->label62);
			this->sidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->sidebar->Location = System::Drawing::Point(0, 0);
			this->sidebar->Margin = System::Windows::Forms::Padding(0);
			this->sidebar->MaximumSize = System::Drawing::Size(300, 1000);
			this->sidebar->MinimumSize = System::Drawing::Size(68, 1000);
			this->sidebar->Name = L"sidebar";
			this->sidebar->Size = System::Drawing::Size(300, 1000);
			this->sidebar->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->bunifuThinButton223);
			this->panel1->Controls->Add(this->menubarButton);
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
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.5F));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"(School Year)", L"2022 - 2023", L"2023 - 2024",
					L"2024 - 2025", L"2025 - 2026"
			});
			this->comboBox1->Location = System::Drawing::Point(73, 54);
			this->comboBox1->MaxDropDownItems = 20;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 31);
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
			this->bunifuThinButton223->Location = System::Drawing::Point(73, 90);
			this->bunifuThinButton223->Margin = System::Windows::Forms::Padding(0);
			this->bunifuThinButton223->Name = L"bunifuThinButton223";
			this->bunifuThinButton223->Size = System::Drawing::Size(134, 38);
			this->bunifuThinButton223->TabIndex = 3;
			this->bunifuThinButton223->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton223->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton223_Click);
			// 
			// menubarButton
			// 
			this->menubarButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menubarButton.BackgroundImage")));
			this->menubarButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menubarButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->menubarButton->Location = System::Drawing::Point(15, 50);
			this->menubarButton->Margin = System::Windows::Forms::Padding(0);
			this->menubarButton->Name = L"menubarButton";
			this->menubarButton->Size = System::Drawing::Size(35, 36);
			this->menubarButton->TabIndex = 1;
			this->menubarButton->TabStop = false;
			this->menubarButton->Click += gcnew System::EventHandler(this, &StaffForm::menubarButton_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->bunifuFlatButton1);
			this->panel2->Location = System::Drawing::Point(0, 152);
			this->panel2->Margin = System::Windows::Forms::Padding(0, 12, 0, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(300, 63);
			this->panel2->TabIndex = 1;
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
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
			this->bunifuFlatButton1->IconMarginLeft = 43;
			this->bunifuFlatButton1->IconMarginRight = 0;
			this->bunifuFlatButton1->IconRightVisible = true;
			this->bunifuFlatButton1->IconRightZoom = 0;
			this->bunifuFlatButton1->IconVisible = true;
			this->bunifuFlatButton1->IconZoom = 50;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(-25, -9);
			this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
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
			this->panel3->Controls->Add(this->bunifuFlatButton2);
			this->panel3->Location = System::Drawing::Point(0, 239);
			this->panel3->Margin = System::Windows::Forms::Padding(0, 12, 0, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(300, 63);
			this->panel3->TabIndex = 3;
			// 
			// bunifuFlatButton2
			// 
			this->bunifuFlatButton2->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton2->BorderRadius = 0;
			this->bunifuFlatButton2->ButtonText = L"        SEMESTER MODIFICATION";
			this->bunifuFlatButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton2->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton2->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton2.Iconimage")));
			this->bunifuFlatButton2->Iconimage_right = nullptr;
			this->bunifuFlatButton2->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton2->Iconimage_Selected = nullptr;
			this->bunifuFlatButton2->IconMarginLeft = 43;
			this->bunifuFlatButton2->IconMarginRight = 0;
			this->bunifuFlatButton2->IconRightVisible = true;
			this->bunifuFlatButton2->IconRightZoom = 0;
			this->bunifuFlatButton2->IconVisible = true;
			this->bunifuFlatButton2->IconZoom = 50;
			this->bunifuFlatButton2->IsTab = false;
			this->bunifuFlatButton2->Location = System::Drawing::Point(-25, -9);
			this->bunifuFlatButton2->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
			this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton2->selected = false;
			this->bunifuFlatButton2->Size = System::Drawing::Size(344, 88);
			this->bunifuFlatButton2->TabIndex = 2;
			this->bunifuFlatButton2->Text = L"        SEMESTER MODIFICATION";
			this->bunifuFlatButton2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton2->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton2->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton2->Click += gcnew System::EventHandler(this, &StaffForm::bunifuFlatButton2_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->bunifuFlatButton3);
			this->panel4->Location = System::Drawing::Point(0, 326);
			this->panel4->Margin = System::Windows::Forms::Padding(0, 12, 0, 12);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(300, 63);
			this->panel4->TabIndex = 4;
			// 
			// bunifuFlatButton3
			// 
			this->bunifuFlatButton3->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton3->BorderRadius = 0;
			this->bunifuFlatButton3->ButtonText = L"        SEMESTER VIEWER";
			this->bunifuFlatButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton3->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton3->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton3.Iconimage")));
			this->bunifuFlatButton3->Iconimage_right = nullptr;
			this->bunifuFlatButton3->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton3->Iconimage_Selected = nullptr;
			this->bunifuFlatButton3->IconMarginLeft = 43;
			this->bunifuFlatButton3->IconMarginRight = 0;
			this->bunifuFlatButton3->IconRightVisible = true;
			this->bunifuFlatButton3->IconRightZoom = 0;
			this->bunifuFlatButton3->IconVisible = true;
			this->bunifuFlatButton3->IconZoom = 50;
			this->bunifuFlatButton3->IsTab = false;
			this->bunifuFlatButton3->Location = System::Drawing::Point(-25, -9);
			this->bunifuFlatButton3->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuFlatButton3->Name = L"bunifuFlatButton3";
			this->bunifuFlatButton3->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton3->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton3->selected = false;
			this->bunifuFlatButton3->Size = System::Drawing::Size(344, 88);
			this->bunifuFlatButton3->TabIndex = 2;
			this->bunifuFlatButton3->Text = L"        SEMESTER VIEWER";
			this->bunifuFlatButton3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton3->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton3->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton3->Click += gcnew System::EventHandler(this, &StaffForm::bunifuFlatButton3_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->bunifuFlatButton6);
			this->panel7->Location = System::Drawing::Point(0, 413);
			this->panel7->Margin = System::Windows::Forms::Padding(0, 12, 0, 12);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(300, 63);
			this->panel7->TabIndex = 7;
			// 
			// bunifuFlatButton6
			// 
			this->bunifuFlatButton6->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton6->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton6->BorderRadius = 0;
			this->bunifuFlatButton6->ButtonText = L"        IMPORT / EXPORT";
			this->bunifuFlatButton6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton6->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton6->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton6->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton6.Iconimage")));
			this->bunifuFlatButton6->Iconimage_right = nullptr;
			this->bunifuFlatButton6->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton6->Iconimage_Selected = nullptr;
			this->bunifuFlatButton6->IconMarginLeft = 43;
			this->bunifuFlatButton6->IconMarginRight = 0;
			this->bunifuFlatButton6->IconRightVisible = true;
			this->bunifuFlatButton6->IconRightZoom = 0;
			this->bunifuFlatButton6->IconVisible = true;
			this->bunifuFlatButton6->IconZoom = 50;
			this->bunifuFlatButton6->IsTab = false;
			this->bunifuFlatButton6->Location = System::Drawing::Point(-25, -9);
			this->bunifuFlatButton6->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuFlatButton6->Name = L"bunifuFlatButton6";
			this->bunifuFlatButton6->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton6->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton6->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton6->selected = false;
			this->bunifuFlatButton6->Size = System::Drawing::Size(344, 88);
			this->bunifuFlatButton6->TabIndex = 2;
			this->bunifuFlatButton6->Text = L"        IMPORT / EXPORT";
			this->bunifuFlatButton6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton6->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton6->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton6->Click += gcnew System::EventHandler(this, &StaffForm::bunifuFlatButton6_Click);
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->bunifuFlatButton7);
			this->panel8->Location = System::Drawing::Point(0, 500);
			this->panel8->Margin = System::Windows::Forms::Padding(0, 12, 0, 12);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(300, 63);
			this->panel8->TabIndex = 8;
			// 
			// bunifuFlatButton7
			// 
			this->bunifuFlatButton7->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
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
			this->bunifuFlatButton7->IconMarginLeft = 43;
			this->bunifuFlatButton7->IconMarginRight = 0;
			this->bunifuFlatButton7->IconRightVisible = true;
			this->bunifuFlatButton7->IconRightZoom = 0;
			this->bunifuFlatButton7->IconVisible = true;
			this->bunifuFlatButton7->IconZoom = 50;
			this->bunifuFlatButton7->IsTab = false;
			this->bunifuFlatButton7->Location = System::Drawing::Point(-25, -9);
			this->bunifuFlatButton7->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuFlatButton7->Name = L"bunifuFlatButton7";
			this->bunifuFlatButton7->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton7->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
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
			this->panel9->Controls->Add(this->bunifuFlatButton8);
			this->panel9->Location = System::Drawing::Point(0, 587);
			this->panel9->Margin = System::Windows::Forms::Padding(0, 12, 0, 12);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(300, 63);
			this->panel9->TabIndex = 9;
			// 
			// bunifuFlatButton8
			// 
			this->bunifuFlatButton8->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
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
			this->bunifuFlatButton8->IconMarginLeft = 43;
			this->bunifuFlatButton8->IconMarginRight = 0;
			this->bunifuFlatButton8->IconRightVisible = true;
			this->bunifuFlatButton8->IconRightZoom = 0;
			this->bunifuFlatButton8->IconVisible = true;
			this->bunifuFlatButton8->IconZoom = 50;
			this->bunifuFlatButton8->IsTab = false;
			this->bunifuFlatButton8->Location = System::Drawing::Point(-25, -9);
			this->bunifuFlatButton8->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuFlatButton8->Name = L"bunifuFlatButton8";
			this->bunifuFlatButton8->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton8->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Hack NF", 20, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Honeydew;
			this->label1->Location = System::Drawing::Point(60, 762);
			this->label1->Margin = System::Windows::Forms::Padding(60, 100, 0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BCRSystem";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Hack NF", 16, System::Drawing::FontStyle::Bold));
			this->label62->ForeColor = System::Drawing::Color::Honeydew;
			this->label62->Location = System::Drawing::Point(60, 893);
			this->label62->Margin = System::Windows::Forms::Padding(60, 100, 0, 0);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(68, 25);
			this->label62->TabIndex = 10;
			this->label62->Text = L"Text";
			// 
			// sidebarTimer
			// 
			this->sidebarTimer->Interval = 10;
			this->sidebarTimer->Tick += gcnew System::EventHandler(this, &StaffForm::sidebarTimer_Tick);
			// 
			// sidebarTop
			// 
			this->sidebarTop->BackColor = System::Drawing::Color::Transparent;
			this->sidebarTop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sidebarTop.BackgroundImage")));
			this->sidebarTop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sidebarTop->Controls->Add(this->bunifuThinButton23);
			this->sidebarTop->Controls->Add(this->bunifuThinButton21);
			this->sidebarTop->Controls->Add(this->bunifuThinButton27);
			this->sidebarTop->Controls->Add(this->bunifuThinButton28);
			this->sidebarTop->Controls->Add(this->bunifuThinButton215);
			this->sidebarTop->Controls->Add(this->bunifuThinButton216);
			this->sidebarTop->Controls->Add(this->bunifuThinButton217);
			this->sidebarTop->Controls->Add(this->bunifuThinButton218);
			this->sidebarTop->Controls->Add(this->bunifuThinButton237);
			this->sidebarTop->Controls->Add(this->bunifuThinButton238);
			this->sidebarTop->Controls->Add(this->bunifuThinButton239);
			this->sidebarTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->sidebarTop->Location = System::Drawing::Point(300, 0);
			this->sidebarTop->Margin = System::Windows::Forms::Padding(0);
			this->sidebarTop->Name = L"sidebarTop";
			this->sidebarTop->Size = System::Drawing::Size(1300, 140);
			this->sidebarTop->TabIndex = 1;
			// 
			// bunifuThinButton23
			// 
			this->bunifuThinButton23->ActiveBorderThickness = 1;
			this->bunifuThinButton23->ActiveCornerRadius = 50;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
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
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
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
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
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
			// bunifuThinButton27
			// 
			this->bunifuThinButton27->ActiveBorderThickness = 1;
			this->bunifuThinButton27->ActiveCornerRadius = 50;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton27.BackgroundImage")));
			this->bunifuThinButton27->ButtonText = L"Modify Courses";
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton27->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton27->IdleBorderThickness = 1;
			this->bunifuThinButton27->IdleCornerRadius = 50;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton27->Location = System::Drawing::Point(802, 40);
			this->bunifuThinButton27->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton27->Name = L"bunifuThinButton27";
			this->bunifuThinButton27->Size = System::Drawing::Size(241, 64);
			this->bunifuThinButton27->TabIndex = 11;
			this->bunifuThinButton27->TabStop = false;
			this->bunifuThinButton27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton27->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton27_Click);
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
			this->bunifuThinButton28->ButtonText = L"Modify Classes";
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
			this->bunifuThinButton28->Location = System::Drawing::Point(80, 184);
			this->bunifuThinButton28->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton28->Name = L"bunifuThinButton28";
			this->bunifuThinButton28->Size = System::Drawing::Size(241, 64);
			this->bunifuThinButton28->TabIndex = 12;
			this->bunifuThinButton28->TabStop = false;
			this->bunifuThinButton28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton28->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton28_Click);
			// 
			// bunifuThinButton215
			// 
			this->bunifuThinButton215->ActiveBorderThickness = 1;
			this->bunifuThinButton215->ActiveCornerRadius = 50;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton215->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton215.BackgroundImage")));
			this->bunifuThinButton215->ButtonText = L"View Courses";
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton215->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton215->IdleBorderThickness = 1;
			this->bunifuThinButton215->IdleCornerRadius = 50;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton215->Location = System::Drawing::Point(381, 184);
			this->bunifuThinButton215->Margin = System::Windows::Forms::Padding(20, 40, 40, 40);
			this->bunifuThinButton215->Name = L"bunifuThinButton215";
			this->bunifuThinButton215->Size = System::Drawing::Size(241, 64);
			this->bunifuThinButton215->TabIndex = 13;
			this->bunifuThinButton215->TabStop = false;
			this->bunifuThinButton215->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton215->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton215_Click);
			// 
			// bunifuThinButton216
			// 
			this->bunifuThinButton216->ActiveBorderThickness = 1;
			this->bunifuThinButton216->ActiveCornerRadius = 50;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton216->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton216.BackgroundImage")));
			this->bunifuThinButton216->ButtonText = L"View Classes";
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton216->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton216->IdleBorderThickness = 1;
			this->bunifuThinButton216->IdleCornerRadius = 50;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton216->Location = System::Drawing::Point(682, 184);
			this->bunifuThinButton216->Margin = System::Windows::Forms::Padding(20, 40, 40, 40);
			this->bunifuThinButton216->Name = L"bunifuThinButton216";
			this->bunifuThinButton216->Size = System::Drawing::Size(241, 64);
			this->bunifuThinButton216->TabIndex = 14;
			this->bunifuThinButton216->TabStop = false;
			this->bunifuThinButton216->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton216->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton216_Click);
			// 
			// bunifuThinButton217
			// 
			this->bunifuThinButton217->ActiveBorderThickness = 1;
			this->bunifuThinButton217->ActiveCornerRadius = 50;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton217->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton217.BackgroundImage")));
			this->bunifuThinButton217->ButtonText = L"View Students List";
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton217->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton217->IdleBorderThickness = 1;
			this->bunifuThinButton217->IdleCornerRadius = 50;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton217->Location = System::Drawing::Point(983, 184);
			this->bunifuThinButton217->Margin = System::Windows::Forms::Padding(20, 40, 40, 40);
			this->bunifuThinButton217->Name = L"bunifuThinButton217";
			this->bunifuThinButton217->Size = System::Drawing::Size(241, 64);
			this->bunifuThinButton217->TabIndex = 15;
			this->bunifuThinButton217->TabStop = false;
			this->bunifuThinButton217->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton217->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton217_Click);
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
			this->bunifuThinButton218->ButtonText = L"View Scoreboard";
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
			this->bunifuThinButton218->Location = System::Drawing::Point(20, 328);
			this->bunifuThinButton218->Margin = System::Windows::Forms::Padding(20, 40, 40, 40);
			this->bunifuThinButton218->Name = L"bunifuThinButton218";
			this->bunifuThinButton218->Size = System::Drawing::Size(241, 64);
			this->bunifuThinButton218->TabIndex = 16;
			this->bunifuThinButton218->TabStop = false;
			this->bunifuThinButton218->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton218->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton218_Click);
			// 
			// bunifuThinButton237
			// 
			this->bunifuThinButton237->ActiveBorderThickness = 1;
			this->bunifuThinButton237->ActiveCornerRadius = 50;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton237->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton237.BackgroundImage")));
			this->bunifuThinButton237->ButtonText = L"Import Scoreboar Course";
			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton237->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton237->IdleBorderThickness = 1;
			this->bunifuThinButton237->IdleCornerRadius = 50;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton237->Location = System::Drawing::Point(381, 328);
			this->bunifuThinButton237->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton237->Name = L"bunifuThinButton237";
			this->bunifuThinButton237->Size = System::Drawing::Size(280, 64);
			this->bunifuThinButton237->TabIndex = 17;
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
			this->bunifuThinButton238->ButtonText = L"Export Students Lists Course";
			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton238->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton238->IdleBorderThickness = 1;
			this->bunifuThinButton238->IdleCornerRadius = 50;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton238->Location = System::Drawing::Point(781, 328);
			this->bunifuThinButton238->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton238->Name = L"bunifuThinButton238";
			this->bunifuThinButton238->Size = System::Drawing::Size(280, 64);
			this->bunifuThinButton238->TabIndex = 18;
			this->bunifuThinButton238->TabStop = false;
			this->bunifuThinButton238->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton238->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton238_Click);
			// 
			// bunifuThinButton239
			// 
			this->bunifuThinButton239->ActiveBorderThickness = 1;
			this->bunifuThinButton239->ActiveCornerRadius = 50;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton239->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton239.BackgroundImage")));
			this->bunifuThinButton239->ButtonText = L"Create Staff";
			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton239->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton239->IdleBorderThickness = 1;
			this->bunifuThinButton239->IdleCornerRadius = 50;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton239->Location = System::Drawing::Point(80, 472);
			this->bunifuThinButton239->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton239->Name = L"bunifuThinButton239";
			this->bunifuThinButton239->Size = System::Drawing::Size(280, 64);
			this->bunifuThinButton239->TabIndex = 19;
			this->bunifuThinButton239->TabStop = false;
			this->bunifuThinButton239->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Transparent;
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
			this->panel10->TabIndex = 2;
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
			this->label42->Location = System::Drawing::Point(383, 671);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(136, 29);
			this->label42->TabIndex = 18;
			this->label42->Text = L"dbtien12380";
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
			this->label12->Size = System::Drawing::Size(269, 29);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Enter Staff/Teacher Email";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label11->ForeColor = System::Drawing::Color::Honeydew;
			this->label11->Location = System::Drawing::Point(782, 254);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(285, 29);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Enter Staff/Teacher Gender";
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
			this->label10->Size = System::Drawing::Size(271, 29);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Enter Staff/Teacher Name";
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
			this->panel12->TabIndex = 18;
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
			this->label15->Location = System::Drawing::Point(462, 388);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(392, 29);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Confirm Staff/Teacher New Password";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label16->ForeColor = System::Drawing::Color::Honeydew;
			this->label16->Location = System::Drawing::Point(480, 254);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(361, 29);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Enter Staff/Teacher New Password";
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
			this->label17->Location = System::Drawing::Point(486, 133);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(351, 29);
			this->label17->TabIndex = 8;
			this->label17->Text = L"Enter Staff/Teacher Old Password";
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::Transparent;
			this->panel14->Controls->Add(this->comboBox5);
			this->panel14->Controls->Add(this->comboBox4);
			this->panel14->Controls->Add(this->comboBox3);
			this->panel14->Controls->Add(this->label24);
			this->panel14->Controls->Add(this->bunifuCustomTextbox12);
			this->panel14->Controls->Add(this->label23);
			this->panel14->Controls->Add(this->bunifuCustomTextbox10);
			this->panel14->Controls->Add(this->treeView1);
			this->panel14->Controls->Add(this->panel16);
			this->panel14->Controls->Add(this->label22);
			this->panel14->Controls->Add(this->panel15);
			this->panel14->Controls->Add(this->bunifuDatepicker2);
			this->panel14->Controls->Add(this->label14);
			this->panel14->Controls->Add(this->bunifuCustomTextbox6);
			this->panel14->Controls->Add(this->label18);
			this->panel14->Controls->Add(this->label19);
			this->panel14->Controls->Add(this->bunifuCustomTextbox7);
			this->panel14->Controls->Add(this->label20);
			this->panel14->Controls->Add(this->label28);
			this->panel14->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel14->Location = System::Drawing::Point(2900, 140);
			this->panel14->Margin = System::Windows::Forms::Padding(0);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(1300, 860);
			this->panel14->TabIndex = 19;
			// 
			// comboBox5
			// 
			this->comboBox5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox5->DropDownHeight = 250;
			this->comboBox5->DropDownWidth = 250;
			this->comboBox5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.75F));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->IntegralHeight = false;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Female", L"Male" });
			this->comboBox5->Location = System::Drawing::Point(983, 558);
			this->comboBox5->Margin = System::Windows::Forms::Padding(0);
			this->comboBox5->MaxDropDownItems = 20;
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(254, 36);
			this->comboBox5->Sorted = true;
			this->comboBox5->TabIndex = 33;
			this->comboBox5->TabStop = false;
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox4->DropDownHeight = 250;
			this->comboBox4->DropDownWidth = 250;
			this->comboBox4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.75F));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->IntegralHeight = false;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->comboBox4->Location = System::Drawing::Point(36, 255);
			this->comboBox4->Margin = System::Windows::Forms::Padding(0);
			this->comboBox4->MaxDropDownItems = 20;
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(236, 36);
			this->comboBox4->TabIndex = 32;
			this->comboBox4->TabStop = false;
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox3->DropDownHeight = 250;
			this->comboBox3->DropDownWidth = 250;
			this->comboBox3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.75F));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->IntegralHeight = false;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->comboBox3->Location = System::Drawing::Point(36, 131);
			this->comboBox3->Margin = System::Windows::Forms::Padding(0);
			this->comboBox3->MaxDropDownItems = 20;
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(236, 36);
			this->comboBox3->Sorted = true;
			this->comboBox3->TabIndex = 5;
			this->comboBox3->TabStop = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label24->ForeColor = System::Drawing::Color::Honeydew;
			this->label24->Location = System::Drawing::Point(980, 497);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(87, 29);
			this->label24->TabIndex = 28;
			this->label24->Text = L"Gender";
			// 
			// bunifuCustomTextbox12
			// 
			this->bunifuCustomTextbox12->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox12->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox12->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox12->Location = System::Drawing::Point(985, 252);
			this->bunifuCustomTextbox12->Name = L"bunifuCustomTextbox12";
			this->bunifuCustomTextbox12->Size = System::Drawing::Size(252, 35);
			this->bunifuCustomTextbox12->TabIndex = 27;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label23->ForeColor = System::Drawing::SystemColors::Info;
			this->label23->Location = System::Drawing::Point(980, 201);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(122, 29);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Last Name";
			// 
			// bunifuCustomTextbox10
			// 
			this->bunifuCustomTextbox10->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox10->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox10->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox10->Location = System::Drawing::Point(695, 255);
			this->bunifuCustomTextbox10->Name = L"bunifuCustomTextbox10";
			this->bunifuCustomTextbox10->Size = System::Drawing::Size(203, 35);
			this->bunifuCustomTextbox10->TabIndex = 25;
			// 
			// treeView1
			// 
			this->treeView1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->treeView1->Location = System::Drawing::Point(36, 307);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(495, 527);
			this->treeView1->TabIndex = 22;
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->bunifuThinButton212);
			this->panel16->Location = System::Drawing::Point(295, 131);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(236, 152);
			this->panel16->TabIndex = 17;
			// 
			// bunifuThinButton212
			// 
			this->bunifuThinButton212->ActiveBorderThickness = 1;
			this->bunifuThinButton212->ActiveCornerRadius = 30;
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton212->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton212->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton212.BackgroundImage")));
			this->bunifuThinButton212->ButtonText = L"Add";
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton212->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton212->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton212->IdleBorderThickness = 1;
			this->bunifuThinButton212->IdleCornerRadius = 30;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton212->Location = System::Drawing::Point(39, 46);
			this->bunifuThinButton212->Margin = System::Windows::Forms::Padding(0);
			this->bunifuThinButton212->Name = L"bunifuThinButton212";
			this->bunifuThinButton212->Size = System::Drawing::Size(163, 64);
			this->bunifuThinButton212->TabIndex = 11;
			this->bunifuThinButton212->TabStop = false;
			this->bunifuThinButton212->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label22->ForeColor = System::Drawing::SystemColors::Info;
			this->label22->Location = System::Drawing::Point(31, 201);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(204, 29);
			this->label22->TabIndex = 20;
			this->label22->Text = L"Number of Classes";
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->bunifuThinButton214);
			this->panel15->Controls->Add(this->bunifuThinButton213);
			this->panel15->Controls->Add(this->bunifuThinButton211);
			this->panel15->Controls->Add(this->bunifuThinButton29);
			this->panel15->Controls->Add(this->bunifuThinButton210);
			this->panel15->Location = System::Drawing::Point(615, 673);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(622, 161);
			this->panel15->TabIndex = 16;
			// 
			// bunifuThinButton214
			// 
			this->bunifuThinButton214->ActiveBorderThickness = 1;
			this->bunifuThinButton214->ActiveCornerRadius = 50;
			this->bunifuThinButton214->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton214->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton214->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton214->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton214->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton214.BackgroundImage")));
			this->bunifuThinButton214->ButtonText = L"From File....";
			this->bunifuThinButton214->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton214->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton214->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton214->IdleBorderThickness = 1;
			this->bunifuThinButton214->IdleCornerRadius = 50;
			this->bunifuThinButton214->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton214->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton214->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton214->Location = System::Drawing::Point(31, 58);
			this->bunifuThinButton214->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton214->Name = L"bunifuThinButton214";
			this->bunifuThinButton214->Size = System::Drawing::Size(168, 64);
			this->bunifuThinButton214->TabIndex = 15;
			this->bunifuThinButton214->TabStop = false;
			this->bunifuThinButton214->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton213
			// 
			this->bunifuThinButton213->ActiveBorderThickness = 1;
			this->bunifuThinButton213->ActiveCornerRadius = 50;
			this->bunifuThinButton213->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton213->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
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
			this->bunifuThinButton213->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton213->Location = System::Drawing::Point(454, 97);
			this->bunifuThinButton213->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton213->Name = L"bunifuThinButton213";
			this->bunifuThinButton213->Size = System::Drawing::Size(168, 64);
			this->bunifuThinButton213->TabIndex = 14;
			this->bunifuThinButton213->TabStop = false;
			this->bunifuThinButton213->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton213->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton213_Click);
			// 
			// bunifuThinButton211
			// 
			this->bunifuThinButton211->ActiveBorderThickness = 1;
			this->bunifuThinButton211->ActiveCornerRadius = 50;
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton211->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton211->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton211.BackgroundImage")));
			this->bunifuThinButton211->ButtonText = L"Change";
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton211->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton211->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton211->IdleBorderThickness = 1;
			this->bunifuThinButton211->IdleCornerRadius = 50;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton211->Location = System::Drawing::Point(242, 97);
			this->bunifuThinButton211->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton211->Name = L"bunifuThinButton211";
			this->bunifuThinButton211->Size = System::Drawing::Size(168, 64);
			this->bunifuThinButton211->TabIndex = 13;
			this->bunifuThinButton211->TabStop = false;
			this->bunifuThinButton211->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton29
			// 
			this->bunifuThinButton29->ActiveBorderThickness = 1;
			this->bunifuThinButton29->ActiveCornerRadius = 50;
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton29->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton29.BackgroundImage")));
			this->bunifuThinButton29->ButtonText = L"Clear";
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton29->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton29->IdleBorderThickness = 1;
			this->bunifuThinButton29->IdleCornerRadius = 50;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton29->Location = System::Drawing::Point(454, 19);
			this->bunifuThinButton29->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton29->Name = L"bunifuThinButton29";
			this->bunifuThinButton29->Size = System::Drawing::Size(168, 64);
			this->bunifuThinButton29->TabIndex = 12;
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
			this->bunifuThinButton210->ButtonText = L"Add";
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton210->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton210->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton210->IdleBorderThickness = 1;
			this->bunifuThinButton210->IdleCornerRadius = 50;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton210->Location = System::Drawing::Point(242, 19);
			this->bunifuThinButton210->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton210->Name = L"bunifuThinButton210";
			this->bunifuThinButton210->Size = System::Drawing::Size(168, 64);
			this->bunifuThinButton210->TabIndex = 11;
			this->bunifuThinButton210->TabStop = false;
			this->bunifuThinButton210->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuDatepicker2
			// 
			this->bunifuDatepicker2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuDatepicker2->BorderRadius = 0;
			this->bunifuDatepicker2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bunifuDatepicker2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F));
			this->bunifuDatepicker2->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuDatepicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->bunifuDatepicker2->FormatCustom = nullptr;
			this->bunifuDatepicker2->Location = System::Drawing::Point(695, 558);
			this->bunifuDatepicker2->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->bunifuDatepicker2->Name = L"bunifuDatepicker2";
			this->bunifuDatepicker2->Size = System::Drawing::Size(254, 36);
			this->bunifuDatepicker2->TabIndex = 15;
			this->bunifuDatepicker2->Value = System::DateTime(2023, 4, 11, 16, 41, 46, 736);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label14->ForeColor = System::Drawing::Color::Honeydew;
			this->label14->Location = System::Drawing::Point(690, 493);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(143, 29);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Date of Birth";
			// 
			// bunifuCustomTextbox6
			// 
			this->bunifuCustomTextbox6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox6->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox6->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox6->Location = System::Drawing::Point(695, 411);
			this->bunifuCustomTextbox6->Name = L"bunifuCustomTextbox6";
			this->bunifuCustomTextbox6->Size = System::Drawing::Size(542, 35);
			this->bunifuCustomTextbox6->TabIndex = 13;
			this->bunifuCustomTextbox6->UseSystemPasswordChar = true;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label18->ForeColor = System::Drawing::Color::Honeydew;
			this->label18->Location = System::Drawing::Point(690, 347);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(106, 29);
			this->label18->TabIndex = 12;
			this->label18->Text = L"Social ID";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label19->ForeColor = System::Drawing::SystemColors::Info;
			this->label19->Location = System::Drawing::Point(689, 201);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(124, 29);
			this->label19->TabIndex = 10;
			this->label19->Text = L"First Name";
			// 
			// bunifuCustomTextbox7
			// 
			this->bunifuCustomTextbox7->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox7->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox7->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox7->Location = System::Drawing::Point(695, 134);
			this->bunifuCustomTextbox7->Name = L"bunifuCustomTextbox7";
			this->bunifuCustomTextbox7->Size = System::Drawing::Size(542, 35);
			this->bunifuCustomTextbox7->TabIndex = 9;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label20->ForeColor = System::Drawing::SystemColors::Info;
			this->label20->Location = System::Drawing::Point(690, 79);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(123, 29);
			this->label20->TabIndex = 8;
			this->label20->Text = L"Student ID";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label28->ForeColor = System::Drawing::SystemColors::Info;
			this->label28->Location = System::Drawing::Point(31, 79);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(105, 29);
			this->label28->TabIndex = 0;
			this->label28->Text = L"Semester";
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::Transparent;
			this->panel17->Controls->Add(this->comboBox11);
			this->panel17->Controls->Add(this->comboBox10);
			this->panel17->Controls->Add(this->comboBox9);
			this->panel17->Controls->Add(this->comboBox8);
			this->panel17->Controls->Add(this->comboBox7);
			this->panel17->Controls->Add(this->comboBox6);
			this->panel17->Controls->Add(this->label40);
			this->panel17->Controls->Add(this->label39);
			this->panel17->Controls->Add(this->label38);
			this->panel17->Controls->Add(this->bunifuDatepicker4);
			this->panel17->Controls->Add(this->label37);
			this->panel17->Controls->Add(this->label25);
			this->panel17->Controls->Add(this->bunifuDatepicker5);
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
			this->panel17->Controls->Add(this->label30);
			this->panel17->Controls->Add(this->bunifuCustomTextbox18);
			this->panel17->Controls->Add(this->label31);
			this->panel17->Controls->Add(this->label32);
			this->panel17->Controls->Add(this->bunifuCustomTextbox19);
			this->panel17->Controls->Add(this->label33);
			this->panel17->Controls->Add(this->label34);
			this->panel17->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel17->Location = System::Drawing::Point(4200, 140);
			this->panel17->Margin = System::Windows::Forms::Padding(0);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(1300, 860);
			this->panel17->TabIndex = 20;
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
			this->comboBox11->Location = System::Drawing::Point(149, 134);
			this->comboBox11->Margin = System::Windows::Forms::Padding(0);
			this->comboBox11->MaxDropDownItems = 20;
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(230, 33);
			this->comboBox11->TabIndex = 57;
			this->comboBox11->TabStop = false;
			// 
			// comboBox10
			// 
			this->comboBox10->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox10->DropDownHeight = 250;
			this->comboBox10->DropDownWidth = 250;
			this->comboBox10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->IntegralHeight = false;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"07:30 - 09:10", L"09:30 - 11:10", L"13:30 - 15:10",
					L"15:30 - 17:10", L"07:30 - 11:30", L"13:30 - 17:10"
			});
			this->comboBox10->Location = System::Drawing::Point(1008, 701);
			this->comboBox10->Margin = System::Windows::Forms::Padding(0);
			this->comboBox10->MaxDropDownItems = 20;
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(228, 33);
			this->comboBox10->TabIndex = 56;
			this->comboBox10->TabStop = false;
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
			this->comboBox9->Location = System::Drawing::Point(1008, 642);
			this->comboBox9->Margin = System::Windows::Forms::Padding(0);
			this->comboBox9->MaxDropDownItems = 20;
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(228, 33);
			this->comboBox9->TabIndex = 55;
			this->comboBox9->TabStop = false;
			// 
			// comboBox8
			// 
			this->comboBox8->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox8->DropDownHeight = 250;
			this->comboBox8->DropDownWidth = 250;
			this->comboBox8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->IntegralHeight = false;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", L"Sat" });
			this->comboBox8->Location = System::Drawing::Point(802, 701);
			this->comboBox8->Margin = System::Windows::Forms::Padding(0);
			this->comboBox8->MaxDropDownItems = 20;
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(183, 33);
			this->comboBox8->TabIndex = 54;
			this->comboBox8->TabStop = false;
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
			this->comboBox7->Location = System::Drawing::Point(802, 642);
			this->comboBox7->Margin = System::Windows::Forms::Padding(0);
			this->comboBox7->MaxDropDownItems = 20;
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(183, 33);
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
			this->comboBox6->Location = System::Drawing::Point(1019, 248);
			this->comboBox6->Margin = System::Windows::Forms::Padding(0);
			this->comboBox6->MaxDropDownItems = 20;
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(218, 33);
			this->comboBox6->TabIndex = 52;
			this->comboBox6->TabStop = false;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->label40->ForeColor = System::Drawing::Color::Honeydew;
			this->label40->Location = System::Drawing::Point(740, 708);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(43, 21);
			this->label40->TabIndex = 47;
			this->label40->Text = L"Lab:";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->label39->ForeColor = System::Drawing::Color::Honeydew;
			this->label39->Location = System::Drawing::Point(715, 649);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(68, 21);
			this->label39->TabIndex = 46;
			this->label39->Text = L"Theory:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label38->ForeColor = System::Drawing::Color::Honeydew;
			this->label38->Location = System::Drawing::Point(641, 586);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(105, 29);
			this->label38->TabIndex = 45;
			this->label38->Text = L"Schedule";
			// 
			// bunifuDatepicker4
			// 
			this->bunifuDatepicker4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuDatepicker4->BorderRadius = 0;
			this->bunifuDatepicker4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bunifuDatepicker4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F));
			this->bunifuDatepicker4->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuDatepicker4->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->bunifuDatepicker4->FormatCustom = nullptr;
			this->bunifuDatepicker4->Location = System::Drawing::Point(763, 525);
			this->bunifuDatepicker4->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuDatepicker4->Name = L"bunifuDatepicker4";
			this->bunifuDatepicker4->Size = System::Drawing::Size(192, 35);
			this->bunifuDatepicker4->TabIndex = 44;
			this->bunifuDatepicker4->Value = System::DateTime(2023, 4, 11, 16, 41, 46, 736);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->label37->ForeColor = System::Drawing::Color::Honeydew;
			this->label37->Location = System::Drawing::Point(990, 534);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(35, 21);
			this->label37->TabIndex = 43;
			this->label37->Text = L"To:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->label25->ForeColor = System::Drawing::Color::Honeydew;
			this->label25->Location = System::Drawing::Point(715, 534);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(31, 21);
			this->label25->TabIndex = 42;
			this->label25->Text = L"Fr:";
			// 
			// bunifuDatepicker5
			// 
			this->bunifuDatepicker5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuDatepicker5->BorderRadius = 0;
			this->bunifuDatepicker5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bunifuDatepicker5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F));
			this->bunifuDatepicker5->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuDatepicker5->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->bunifuDatepicker5->FormatCustom = nullptr;
			this->bunifuDatepicker5->Location = System::Drawing::Point(1044, 525);
			this->bunifuDatepicker5->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuDatepicker5->Name = L"bunifuDatepicker5";
			this->bunifuDatepicker5->Size = System::Drawing::Size(192, 35);
			this->bunifuDatepicker5->TabIndex = 41;
			this->bunifuDatepicker5->Value = System::DateTime(2023, 4, 11, 16, 41, 46, 736);
			// 
			// bunifuCustomTextbox17
			// 
			this->bunifuCustomTextbox17->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox17->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox17->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox17->Location = System::Drawing::Point(857, 379);
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
			this->label36->Location = System::Drawing::Point(852, 323);
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
			this->label35->Location = System::Drawing::Point(1014, 201);
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
			this->bunifuDatepicker7->Location = System::Drawing::Point(36, 248);
			this->bunifuDatepicker7->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuDatepicker7->Name = L"bunifuDatepicker7";
			this->bunifuDatepicker7->Size = System::Drawing::Size(224, 35);
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
			this->bunifuDatepicker6->Location = System::Drawing::Point(307, 248);
			this->bunifuDatepicker6->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuDatepicker6->Name = L"bunifuDatepicker6";
			this->bunifuDatepicker6->Size = System::Drawing::Size(224, 35);
			this->bunifuDatepicker6->TabIndex = 33;
			this->bunifuDatepicker6->Value = System::DateTime(2023, 4, 11, 16, 41, 46, 736);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label29->ForeColor = System::Drawing::SystemColors::Info;
			this->label29->Location = System::Drawing::Point(302, 201);
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
			this->bunifuCustomTextbox13->Location = System::Drawing::Point(857, 248);
			this->bunifuCustomTextbox13->Name = L"bunifuCustomTextbox13";
			this->bunifuCustomTextbox13->Size = System::Drawing::Size(128, 35);
			this->bunifuCustomTextbox13->TabIndex = 27;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label26->ForeColor = System::Drawing::SystemColors::Info;
			this->label26->Location = System::Drawing::Point(852, 201);
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
			this->bunifuCustomTextbox14->Location = System::Drawing::Point(646, 248);
			this->bunifuCustomTextbox14->Name = L"bunifuCustomTextbox14";
			this->bunifuCustomTextbox14->Size = System::Drawing::Size(176, 35);
			this->bunifuCustomTextbox14->TabIndex = 25;
			// 
			// treeView2
			// 
			this->treeView2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->treeView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->treeView2->Location = System::Drawing::Point(36, 307);
			this->treeView2->Name = L"treeView2";
			this->treeView2->Size = System::Drawing::Size(495, 527);
			this->treeView2->TabIndex = 22;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label27->ForeColor = System::Drawing::SystemColors::Info;
			this->label27->Location = System::Drawing::Point(31, 201);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(113, 29);
			this->label27->TabIndex = 20;
			this->label27->Text = L"Start Date";
			// 
			// panel19
			// 
			this->panel19->Controls->Add(this->bunifuThinButton219);
			this->panel19->Controls->Add(this->bunifuThinButton220);
			this->panel19->Controls->Add(this->bunifuThinButton221);
			this->panel19->Controls->Add(this->bunifuThinButton222);
			this->panel19->Location = System::Drawing::Point(563, 770);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(674, 64);
			this->panel19->TabIndex = 16;
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
			this->bunifuThinButton219->Location = System::Drawing::Point(361, 0);
			this->bunifuThinButton219->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton219->Name = L"bunifuThinButton219";
			this->bunifuThinButton219->Size = System::Drawing::Size(150, 64);
			this->bunifuThinButton219->TabIndex = 16;
			this->bunifuThinButton219->TabStop = false;
			this->bunifuThinButton219->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->bunifuThinButton220->ButtonText = L"Done";
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
			this->bunifuThinButton220->Location = System::Drawing::Point(42, 0);
			this->bunifuThinButton220->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton220->Name = L"bunifuThinButton220";
			this->bunifuThinButton220->Size = System::Drawing::Size(150, 64);
			this->bunifuThinButton220->TabIndex = 15;
			this->bunifuThinButton220->TabStop = false;
			this->bunifuThinButton220->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton221
			// 
			this->bunifuThinButton221->ActiveBorderThickness = 1;
			this->bunifuThinButton221->ActiveCornerRadius = 50;
			this->bunifuThinButton221->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton221->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton221->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton221->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton221->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton221.BackgroundImage")));
			this->bunifuThinButton221->ButtonText = L"Close";
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
			this->bunifuThinButton221->Location = System::Drawing::Point(523, 0);
			this->bunifuThinButton221->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton221->Name = L"bunifuThinButton221";
			this->bunifuThinButton221->Size = System::Drawing::Size(150, 64);
			this->bunifuThinButton221->TabIndex = 14;
			this->bunifuThinButton221->TabStop = false;
			this->bunifuThinButton221->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton221->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton221_Click);
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
			this->bunifuThinButton222->Location = System::Drawing::Point(200, -1);
			this->bunifuThinButton222->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton222->Name = L"bunifuThinButton222";
			this->bunifuThinButton222->Size = System::Drawing::Size(150, 64);
			this->bunifuThinButton222->TabIndex = 13;
			this->bunifuThinButton222->TabStop = false;
			this->bunifuThinButton222->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label30->ForeColor = System::Drawing::Color::Honeydew;
			this->label30->Location = System::Drawing::Point(641, 464);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(187, 29);
			this->label30->TabIndex = 14;
			this->label30->Text = L"Registration Date";
			// 
			// bunifuCustomTextbox18
			// 
			this->bunifuCustomTextbox18->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox18->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox18->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox18->Location = System::Drawing::Point(646, 379);
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
			this->label31->Location = System::Drawing::Point(641, 323);
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
			this->label32->Location = System::Drawing::Point(641, 201);
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
			this->bunifuCustomTextbox19->Location = System::Drawing::Point(646, 134);
			this->bunifuCustomTextbox19->Name = L"bunifuCustomTextbox19";
			this->bunifuCustomTextbox19->Size = System::Drawing::Size(591, 35);
			this->bunifuCustomTextbox19->TabIndex = 9;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->label33->ForeColor = System::Drawing::SystemColors::Info;
			this->label33->Location = System::Drawing::Point(641, 79);
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
			this->label34->Location = System::Drawing::Point(200, 79);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(105, 29);
			this->label34->TabIndex = 0;
			this->label34->Text = L"Semester";
			// 
			// classesInformation
			// 
			this->classesInformation->BackColor = System::Drawing::Color::Transparent;
			this->classesInformation->Controls->Add(this->kryptonDataGridView1);
			this->classesInformation->Location = System::Drawing::Point(300, 140);
			this->classesInformation->Margin = System::Windows::Forms::Padding(0);
			this->classesInformation->Name = L"classesInformation";
			this->classesInformation->Size = System::Drawing::Size(1300, 860);
			this->classesInformation->TabIndex = 21;
			// 
			// kryptonDataGridView1
			// 
			dataGridViewCellStyle1->NullValue = L"-";
			this->kryptonDataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->kryptonDataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->kryptonDataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->kryptonDataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column7, this->Column17
			});
			this->kryptonDataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->kryptonDataGridView1->Location = System::Drawing::Point(0, 0);
			this->kryptonDataGridView1->Margin = System::Windows::Forms::Padding(0);
			this->kryptonDataGridView1->Name = L"kryptonDataGridView1";
			this->kryptonDataGridView1->Size = System::Drawing::Size(1300, 860);
			this->kryptonDataGridView1->TabIndex = 0;
			this->kryptonDataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StaffForm::kryptonDataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"No";
			this->Column1->Name = L"Column1";
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"School Year";
			this->Column2->Name = L"Column2";
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Semester";
			this->Column3->Name = L"Column3";
			this->Column3->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Class ID";
			this->Column7->Name = L"Column7";
			this->Column7->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Update/Edit";
			this->Column17->Name = L"Column17";
			this->Column17->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column17->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column17->UseColumnTextForButtonValue = true;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::WhiteSmoke;
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
			this->panel18->TabIndex = 22;
			// 
			// bunifuThinButton226
			// 
			this->bunifuThinButton226->ActiveBorderThickness = 1;
			this->bunifuThinButton226->ActiveCornerRadius = 50;
			this->bunifuThinButton226->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton226->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton226->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton226->BackColor = System::Drawing::Color::WhiteSmoke;
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
			this->bunifuThinButton226->Location = System::Drawing::Point(80, 490);
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
			this->bunifuThinButton225->ActiveFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton225->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton225->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton225->BackColor = System::Drawing::Color::WhiteSmoke;
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
			this->bunifuThinButton225->Location = System::Drawing::Point(342, 490);
			this->bunifuThinButton225->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton225->Name = L"bunifuThinButton225";
			this->bunifuThinButton225->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton225->TabIndex = 11;
			this->bunifuThinButton225->TabStop = false;
			this->bunifuThinButton225->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton224
			// 
			this->bunifuThinButton224->ActiveBorderThickness = 1;
			this->bunifuThinButton224->ActiveCornerRadius = 50;
			this->bunifuThinButton224->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton224->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton224->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton224->BackColor = System::Drawing::Color::WhiteSmoke;
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
			this->bunifuThinButton224->Location = System::Drawing::Point(216, 404);
			this->bunifuThinButton224->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton224->Name = L"bunifuThinButton224";
			this->bunifuThinButton224->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton224->TabIndex = 10;
			this->bunifuThinButton224->TabStop = false;
			this->bunifuThinButton224->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(110, 190);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(382, 40);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Enter A Specific School Year";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Crimson;
			this->label13->Location = System::Drawing::Point(19, 40);
			this->label13->Margin = System::Windows::Forms::Padding(0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(396, 42);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Create New School Year";
			// 
			// coursesInformation
			// 
			this->coursesInformation->BackColor = System::Drawing::Color::Transparent;
			this->coursesInformation->Controls->Add(this->kryptonDataGridView2);
			this->coursesInformation->Location = System::Drawing::Point(300, 140);
			this->coursesInformation->Margin = System::Windows::Forms::Padding(0);
			this->coursesInformation->Name = L"coursesInformation";
			this->coursesInformation->Size = System::Drawing::Size(1300, 860);
			this->coursesInformation->TabIndex = 23;
			// 
			// kryptonDataGridView2
			// 
			dataGridViewCellStyle2->NullValue = L"-";
			this->kryptonDataGridView2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle2;
			this->kryptonDataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->kryptonDataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->kryptonDataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->Column13, this->Column14, this->Column4, this->Column16
			});
			this->kryptonDataGridView2->Dock = System::Windows::Forms::DockStyle::Top;
			this->kryptonDataGridView2->Location = System::Drawing::Point(0, 0);
			this->kryptonDataGridView2->Margin = System::Windows::Forms::Padding(0);
			this->kryptonDataGridView2->Name = L"kryptonDataGridView2";
			this->kryptonDataGridView2->Size = System::Drawing::Size(1300, 860);
			this->kryptonDataGridView2->TabIndex = 0;
			this->kryptonDataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StaffForm::kryptonDataGridView2_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"No";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Course ID";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Course Name";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Credits";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Max Students";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Enroll Students";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Theory Date";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Lab Date";
			this->Column13->Name = L"Column13";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Course Date";
			this->Column14->Name = L"Column14";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Lecturer Name";
			this->Column4->Name = L"Column4";
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Update/Edit";
			this->Column16->Name = L"Column16";
			this->Column16->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column16->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column16->UseColumnTextForButtonValue = true;
			// 
			// scoreboardCourse
			// 
			this->scoreboardCourse->BackColor = System::Drawing::Color::Transparent;
			this->scoreboardCourse->Controls->Add(this->kryptonDataGridView3);
			this->scoreboardCourse->Location = System::Drawing::Point(300, 140);
			this->scoreboardCourse->Margin = System::Windows::Forms::Padding(0);
			this->scoreboardCourse->Name = L"scoreboardCourse";
			this->scoreboardCourse->Size = System::Drawing::Size(1300, 860);
			this->scoreboardCourse->TabIndex = 24;
			// 
			// kryptonDataGridView3
			// 
			dataGridViewCellStyle3->NullValue = L"-";
			this->kryptonDataGridView3->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle3;
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
			// scoreboardClass
			// 
			this->scoreboardClass->BackColor = System::Drawing::Color::Transparent;
			this->scoreboardClass->Controls->Add(this->kryptonDataGridView4);
			this->scoreboardClass->Location = System::Drawing::Point(300, 140);
			this->scoreboardClass->Margin = System::Windows::Forms::Padding(0);
			this->scoreboardClass->Name = L"scoreboardClass";
			this->scoreboardClass->Size = System::Drawing::Size(1300, 860);
			this->scoreboardClass->TabIndex = 25;
			// 
			// kryptonDataGridView4
			// 
			dataGridViewCellStyle4->NullValue = L"-";
			this->kryptonDataGridView4->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle4;
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
			// studentsListCourse
			// 
			this->studentsListCourse->BackColor = System::Drawing::Color::Transparent;
			this->studentsListCourse->Controls->Add(this->kryptonDataGridView5);
			this->studentsListCourse->Location = System::Drawing::Point(300, 140);
			this->studentsListCourse->Margin = System::Windows::Forms::Padding(0);
			this->studentsListCourse->Name = L"studentsListCourse";
			this->studentsListCourse->Size = System::Drawing::Size(1300, 860);
			this->studentsListCourse->TabIndex = 26;
			// 
			// kryptonDataGridView5
			// 
			dataGridViewCellStyle5->NullValue = L"-";
			this->kryptonDataGridView5->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle5;
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
			// studentsListClass
			// 
			this->studentsListClass->BackColor = System::Drawing::Color::Transparent;
			this->studentsListClass->Controls->Add(this->kryptonDataGridView6);
			this->studentsListClass->Location = System::Drawing::Point(300, 140);
			this->studentsListClass->Margin = System::Windows::Forms::Padding(0);
			this->studentsListClass->Name = L"studentsListClass";
			this->studentsListClass->Size = System::Drawing::Size(1300, 860);
			this->studentsListClass->TabIndex = 27;
			// 
			// kryptonDataGridView6
			// 
			dataGridViewCellStyle6->NullValue = L"-";
			this->kryptonDataGridView6->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle6;
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
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->bunifuCustomTextbox21);
			this->panel5->Controls->Add(this->label61);
			this->panel5->Controls->Add(this->bunifuCustomTextbox20);
			this->panel5->Controls->Add(this->label60);
			this->panel5->Controls->Add(this->bunifuCustomTextbox16);
			this->panel5->Controls->Add(this->label59);
			this->panel5->Controls->Add(this->comboBox19);
			this->panel5->Controls->Add(this->label58);
			this->panel5->Controls->Add(this->bunifuCustomTextbox9);
			this->panel5->Controls->Add(this->bunifuCustomTextbox11);
			this->panel5->Controls->Add(this->label43);
			this->panel5->Controls->Add(this->label44);
			this->panel5->Controls->Add(this->bunifuCustomTextbox15);
			this->panel5->Controls->Add(this->label45);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel5->Location = System::Drawing::Point(5500, 140);
			this->panel5->Margin = System::Windows::Forms::Padding(0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1300, 860);
			this->panel5->TabIndex = 28;
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
			this->bunifuCustomTextbox9->Location = System::Drawing::Point(425, 180);
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
			this->label43->Location = System::Drawing::Point(462, 260);
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
			this->label44->Location = System::Drawing::Point(474, 120);
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
			// panel6
			// 
			this->panel6->Controls->Add(this->bunifuThinButton229);
			this->panel6->Controls->Add(this->bunifuThinButton230);
			this->panel6->Location = System::Drawing::Point(467, 780);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(394, 64);
			this->panel6->TabIndex = 16;
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
			this->bunifuThinButton230->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton230_Click);
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel20->Controls->Add(this->comboBox14);
			this->panel20->Controls->Add(this->comboBox13);
			this->panel20->Controls->Add(this->comboBox12);
			this->panel20->Controls->Add(this->label49);
			this->panel20->Controls->Add(this->label48);
			this->panel20->Controls->Add(this->bunifuThinButton227);
			this->panel20->Controls->Add(this->bunifuThinButton231);
			this->panel20->Controls->Add(this->label46);
			this->panel20->Controls->Add(this->label47);
			this->panel20->Location = System::Drawing::Point(680, 200);
			this->panel20->Margin = System::Windows::Forms::Padding(0);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(600, 600);
			this->panel20->TabIndex = 29;
			// 
			// comboBox14
			// 
			this->comboBox14->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox14->DropDownHeight = 250;
			this->comboBox14->DropDownWidth = 250;
			this->comboBox14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->IntegralHeight = false;
			this->comboBox14->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"CSC1011", L"CSC1012", L"CSC1013", L"CSC1014",
					L"CSC1015"
			});
			this->comboBox14->Location = System::Drawing::Point(180, 387);
			this->comboBox14->Margin = System::Windows::Forms::Padding(0);
			this->comboBox14->MaxDropDownItems = 20;
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(242, 33);
			this->comboBox14->TabIndex = 55;
			this->comboBox14->TabStop = false;
			// 
			// comboBox13
			// 
			this->comboBox13->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox13->DropDownHeight = 250;
			this->comboBox13->DropDownWidth = 250;
			this->comboBox13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->IntegralHeight = false;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"22CLC01", L"22CLC02", L"22CLC03", L"22CLC04",
					L"22CLC05", L"22CLC06", L"22CLC07", L"22CLC08", L"22CLC09", L"22CLC10"
			});
			this->comboBox13->Location = System::Drawing::Point(180, 387);
			this->comboBox13->Margin = System::Windows::Forms::Padding(0);
			this->comboBox13->MaxDropDownItems = 20;
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(242, 33);
			this->comboBox13->TabIndex = 54;
			this->comboBox13->TabStop = false;
			// 
			// comboBox12
			// 
			this->comboBox12->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox12->DropDownHeight = 250;
			this->comboBox12->DropDownWidth = 250;
			this->comboBox12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->IntegralHeight = false;
			this->comboBox12->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Class", L"Course" });
			this->comboBox12->Location = System::Drawing::Point(180, 188);
			this->comboBox12->Margin = System::Windows::Forms::Padding(0);
			this->comboBox12->MaxDropDownItems = 20;
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(242, 33);
			this->comboBox12->TabIndex = 53;
			this->comboBox12->TabStop = false;
			this->comboBox12->SelectedIndexChanged += gcnew System::EventHandler(this, &StaffForm::comboBox12_SelectedIndexChanged);
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(116, 300);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(371, 40);
			this->label49->TabIndex = 14;
			this->label49->Text = L"Please Choose Your Course";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(135, 290);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(347, 40);
			this->label48->TabIndex = 13;
			this->label48->Text = L"Please Choose Your Class";
			// 
			// bunifuThinButton227
			// 
			this->bunifuThinButton227->ActiveBorderThickness = 1;
			this->bunifuThinButton227->ActiveCornerRadius = 50;
			this->bunifuThinButton227->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton227->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton227->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton227->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuThinButton227->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton227.BackgroundImage")));
			this->bunifuThinButton227->ButtonText = L"Close";
			this->bunifuThinButton227->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton227->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton227->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton227->IdleBorderThickness = 1;
			this->bunifuThinButton227->IdleCornerRadius = 50;
			this->bunifuThinButton227->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton227->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton227->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton227->Location = System::Drawing::Point(342, 498);
			this->bunifuThinButton227->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton227->Name = L"bunifuThinButton227";
			this->bunifuThinButton227->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton227->TabIndex = 12;
			this->bunifuThinButton227->TabStop = false;
			this->bunifuThinButton227->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton227->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton227_Click);
			// 
			// bunifuThinButton231
			// 
			this->bunifuThinButton231->ActiveBorderThickness = 1;
			this->bunifuThinButton231->ActiveCornerRadius = 50;
			this->bunifuThinButton231->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton231->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton231->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton231->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuThinButton231->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton231.BackgroundImage")));
			this->bunifuThinButton231->ButtonText = L"View Now";
			this->bunifuThinButton231->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton231->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton231->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton231->IdleBorderThickness = 1;
			this->bunifuThinButton231->IdleCornerRadius = 50;
			this->bunifuThinButton231->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton231->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton231->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton231->Location = System::Drawing::Point(91, 498);
			this->bunifuThinButton231->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton231->Name = L"bunifuThinButton231";
			this->bunifuThinButton231->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton231->TabIndex = 10;
			this->bunifuThinButton231->TabStop = false;
			this->bunifuThinButton231->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton231->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton231_Click);
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(116, 100);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(369, 40);
			this->label46->TabIndex = 1;
			this->label46->Text = L"Please Choose Your Choice";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::Color::Crimson;
			this->label47->Location = System::Drawing::Point(19, 10);
			this->label47->Margin = System::Windows::Forms::Padding(0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(313, 42);
			this->label47->TabIndex = 0;
			this->label47->Text = L"View Students List";
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel21->Controls->Add(this->comboBox15);
			this->panel21->Controls->Add(this->comboBox16);
			this->panel21->Controls->Add(this->comboBox17);
			this->panel21->Controls->Add(this->label50);
			this->panel21->Controls->Add(this->label51);
			this->panel21->Controls->Add(this->bunifuThinButton228);
			this->panel21->Controls->Add(this->bunifuThinButton232);
			this->panel21->Controls->Add(this->label52);
			this->panel21->Controls->Add(this->label53);
			this->panel21->Location = System::Drawing::Point(680, 200);
			this->panel21->Margin = System::Windows::Forms::Padding(0);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(600, 600);
			this->panel21->TabIndex = 30;
			// 
			// comboBox15
			// 
			this->comboBox15->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox15->DropDownHeight = 250;
			this->comboBox15->DropDownWidth = 250;
			this->comboBox15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox15->FormattingEnabled = true;
			this->comboBox15->IntegralHeight = false;
			this->comboBox15->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"CSC1011", L"CSC1012", L"CSC1013", L"CSC1014",
					L"CSC1015"
			});
			this->comboBox15->Location = System::Drawing::Point(180, 387);
			this->comboBox15->Margin = System::Windows::Forms::Padding(0);
			this->comboBox15->MaxDropDownItems = 20;
			this->comboBox15->Name = L"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(242, 33);
			this->comboBox15->TabIndex = 55;
			this->comboBox15->TabStop = false;
			// 
			// comboBox16
			// 
			this->comboBox16->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox16->DropDownHeight = 250;
			this->comboBox16->DropDownWidth = 250;
			this->comboBox16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox16->FormattingEnabled = true;
			this->comboBox16->IntegralHeight = false;
			this->comboBox16->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"22CLC01", L"22CLC02", L"22CLC03", L"22CLC04",
					L"22CLC05", L"22CLC06", L"22CLC07", L"22CLC08", L"22CLC09", L"22CLC10"
			});
			this->comboBox16->Location = System::Drawing::Point(180, 387);
			this->comboBox16->Margin = System::Windows::Forms::Padding(0);
			this->comboBox16->MaxDropDownItems = 20;
			this->comboBox16->Name = L"comboBox16";
			this->comboBox16->Size = System::Drawing::Size(242, 33);
			this->comboBox16->TabIndex = 54;
			this->comboBox16->TabStop = false;
			// 
			// comboBox17
			// 
			this->comboBox17->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox17->DropDownHeight = 250;
			this->comboBox17->DropDownWidth = 250;
			this->comboBox17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox17->FormattingEnabled = true;
			this->comboBox17->IntegralHeight = false;
			this->comboBox17->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Class", L"Course" });
			this->comboBox17->Location = System::Drawing::Point(180, 188);
			this->comboBox17->Margin = System::Windows::Forms::Padding(0);
			this->comboBox17->MaxDropDownItems = 20;
			this->comboBox17->Name = L"comboBox17";
			this->comboBox17->Size = System::Drawing::Size(242, 33);
			this->comboBox17->TabIndex = 53;
			this->comboBox17->TabStop = false;
			this->comboBox17->SelectedIndexChanged += gcnew System::EventHandler(this, &StaffForm::comboBox17_SelectedIndexChanged);
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(116, 300);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(371, 40);
			this->label50->TabIndex = 14;
			this->label50->Text = L"Please Choose Your Course";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(135, 290);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(347, 40);
			this->label51->TabIndex = 13;
			this->label51->Text = L"Please Choose Your Class";
			// 
			// bunifuThinButton228
			// 
			this->bunifuThinButton228->ActiveBorderThickness = 1;
			this->bunifuThinButton228->ActiveCornerRadius = 50;
			this->bunifuThinButton228->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton228->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton228->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton228->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuThinButton228->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton228.BackgroundImage")));
			this->bunifuThinButton228->ButtonText = L"Close";
			this->bunifuThinButton228->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton228->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton228->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton228->IdleBorderThickness = 1;
			this->bunifuThinButton228->IdleCornerRadius = 50;
			this->bunifuThinButton228->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton228->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton228->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton228->Location = System::Drawing::Point(342, 498);
			this->bunifuThinButton228->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton228->Name = L"bunifuThinButton228";
			this->bunifuThinButton228->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton228->TabIndex = 12;
			this->bunifuThinButton228->TabStop = false;
			this->bunifuThinButton228->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton228->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton228_Click);
			// 
			// bunifuThinButton232
			// 
			this->bunifuThinButton232->ActiveBorderThickness = 1;
			this->bunifuThinButton232->ActiveCornerRadius = 50;
			this->bunifuThinButton232->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton232->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton232->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton232->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuThinButton232->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton232.BackgroundImage")));
			this->bunifuThinButton232->ButtonText = L"View Now";
			this->bunifuThinButton232->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton232->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton232->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton232->IdleBorderThickness = 1;
			this->bunifuThinButton232->IdleCornerRadius = 50;
			this->bunifuThinButton232->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton232->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton232->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton232->Location = System::Drawing::Point(91, 498);
			this->bunifuThinButton232->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton232->Name = L"bunifuThinButton232";
			this->bunifuThinButton232->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton232->TabIndex = 10;
			this->bunifuThinButton232->TabStop = false;
			this->bunifuThinButton232->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton232->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton232_Click);
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(116, 100);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(369, 40);
			this->label52->TabIndex = 1;
			this->label52->Text = L"Please Choose Your Choice";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->ForeColor = System::Drawing::Color::Crimson;
			this->label53->Location = System::Drawing::Point(19, 10);
			this->label53->Margin = System::Windows::Forms::Padding(0);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(286, 42);
			this->label53->TabIndex = 0;
			this->label53->Text = L"View Scoreboard";
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel22->Controls->Add(this->comboBox20);
			this->panel22->Controls->Add(this->bunifuThinButton233);
			this->panel22->Controls->Add(this->bunifuThinButton234);
			this->panel22->Controls->Add(this->label56);
			this->panel22->Controls->Add(this->label57);
			this->panel22->Location = System::Drawing::Point(680, 200);
			this->panel22->Margin = System::Windows::Forms::Padding(0);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(600, 600);
			this->panel22->TabIndex = 31;
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
			this->comboBox20->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"CSC1010", L"CSC1011", L"CSC1012", L"CSC1013",
					L"CSC1014", L"CSC1015"
			});
			this->comboBox20->Location = System::Drawing::Point(180, 300);
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
			this->bunifuThinButton233->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton233->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton233->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton233->BackColor = System::Drawing::Color::WhiteSmoke;
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
			this->bunifuThinButton233->Location = System::Drawing::Point(342, 400);
			this->bunifuThinButton233->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton233->Name = L"bunifuThinButton233";
			this->bunifuThinButton233->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton233->TabIndex = 12;
			this->bunifuThinButton233->TabStop = false;
			this->bunifuThinButton233->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton234
			// 
			this->bunifuThinButton234->ActiveBorderThickness = 1;
			this->bunifuThinButton234->ActiveCornerRadius = 50;
			this->bunifuThinButton234->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton234->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton234->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton234->BackColor = System::Drawing::Color::WhiteSmoke;
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
			this->bunifuThinButton234->Location = System::Drawing::Point(91, 400);
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
			this->label56->Location = System::Drawing::Point(116, 200);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(371, 40);
			this->label56->TabIndex = 1;
			this->label56->Text = L"Please Choose Your Course";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->ForeColor = System::Drawing::Color::Crimson;
			this->label57->Location = System::Drawing::Point(19, 10);
			this->label57->Margin = System::Windows::Forms::Padding(0);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(317, 42);
			this->label57->TabIndex = 0;
			this->label57->Text = L"Import Scoreboard";
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel23->Controls->Add(this->comboBox18);
			this->panel23->Controls->Add(this->bunifuThinButton235);
			this->panel23->Controls->Add(this->bunifuThinButton236);
			this->panel23->Controls->Add(this->label54);
			this->panel23->Controls->Add(this->label55);
			this->panel23->Location = System::Drawing::Point(680, 200);
			this->panel23->Margin = System::Windows::Forms::Padding(0);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(600, 600);
			this->panel23->TabIndex = 32;
			// 
			// comboBox18
			// 
			this->comboBox18->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox18->DropDownHeight = 250;
			this->comboBox18->DropDownWidth = 250;
			this->comboBox18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox18->FormattingEnabled = true;
			this->comboBox18->IntegralHeight = false;
			this->comboBox18->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"CSC1010", L"CSC1011", L"CSC1012", L"CSC1013",
					L"CSC1014", L"CSC1015"
			});
			this->comboBox18->Location = System::Drawing::Point(180, 300);
			this->comboBox18->Margin = System::Windows::Forms::Padding(0);
			this->comboBox18->MaxDropDownItems = 20;
			this->comboBox18->Name = L"comboBox18";
			this->comboBox18->Size = System::Drawing::Size(242, 33);
			this->comboBox18->TabIndex = 53;
			this->comboBox18->TabStop = false;
			// 
			// bunifuThinButton235
			// 
			this->bunifuThinButton235->ActiveBorderThickness = 1;
			this->bunifuThinButton235->ActiveCornerRadius = 50;
			this->bunifuThinButton235->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton235->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton235->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton235->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuThinButton235->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton235.BackgroundImage")));
			this->bunifuThinButton235->ButtonText = L"Close";
			this->bunifuThinButton235->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton235->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton235->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton235->IdleBorderThickness = 1;
			this->bunifuThinButton235->IdleCornerRadius = 50;
			this->bunifuThinButton235->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton235->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton235->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton235->Location = System::Drawing::Point(342, 400);
			this->bunifuThinButton235->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton235->Name = L"bunifuThinButton235";
			this->bunifuThinButton235->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton235->TabIndex = 12;
			this->bunifuThinButton235->TabStop = false;
			this->bunifuThinButton235->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton236
			// 
			this->bunifuThinButton236->ActiveBorderThickness = 1;
			this->bunifuThinButton236->ActiveCornerRadius = 50;
			this->bunifuThinButton236->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton236->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton236->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton236->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuThinButton236->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton236.BackgroundImage")));
			this->bunifuThinButton236->ButtonText = L"Export Now";
			this->bunifuThinButton236->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton236->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton236->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton236->IdleBorderThickness = 1;
			this->bunifuThinButton236->IdleCornerRadius = 50;
			this->bunifuThinButton236->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton236->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton236->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton236->Location = System::Drawing::Point(91, 400);
			this->bunifuThinButton236->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton236->Name = L"bunifuThinButton236";
			this->bunifuThinButton236->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton236->TabIndex = 10;
			this->bunifuThinButton236->TabStop = false;
			this->bunifuThinButton236->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(116, 200);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(371, 40);
			this->label54->TabIndex = 1;
			this->label54->Text = L"Please Choose Your Course";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->ForeColor = System::Drawing::Color::Crimson;
			this->label55->Location = System::Drawing::Point(19, 10);
			this->label55->Margin = System::Windows::Forms::Padding(0);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(345, 42);
			this->label55->TabIndex = 0;
			this->label55->Text = L"Export Students List";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &StaffForm::timer1_Tick);
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel29->Controls->Add(this->bunifuCustomTextbox26);
			this->panel29->Controls->Add(this->label83);
			this->panel29->Controls->Add(this->bunifuDatepicker3);
			this->panel29->Controls->Add(this->label82);
			this->panel29->Controls->Add(this->label81);
			this->panel29->Controls->Add(this->bunifuDatepicker1);
			this->panel29->Controls->Add(this->label80);
			this->panel29->Controls->Add(this->comboBox28);
			this->panel29->Controls->Add(this->label79);
			this->panel29->Controls->Add(this->comboBox29);
			this->panel29->Controls->Add(this->comboBox27);
			this->panel29->Controls->Add(this->label78);
			this->panel29->Controls->Add(this->bunifuCustomTextbox25);
			this->panel29->Controls->Add(this->label77);
			this->panel29->Controls->Add(this->bunifuCustomTextbox24);
			this->panel29->Controls->Add(this->label76);
			this->panel29->Controls->Add(this->bunifuCustomTextbox23);
			this->panel29->Controls->Add(this->label75);
			this->panel29->Controls->Add(this->bunifuCustomTextbox22);
			this->panel29->Controls->Add(this->comboBox26);
			this->panel29->Controls->Add(this->bunifuThinButton250);
			this->panel29->Controls->Add(this->bunifuThinButton251);
			this->panel29->Controls->Add(this->label73);
			this->panel29->Controls->Add(this->label74);
			this->panel29->Location = System::Drawing::Point(680, 200);
			this->panel29->Margin = System::Windows::Forms::Padding(0);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(600, 600);
			this->panel29->TabIndex = 38;
			// 
			// bunifuCustomTextbox26
			// 
			this->bunifuCustomTextbox26->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox26->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox26->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox26->Location = System::Drawing::Point(206, 407);
			this->bunifuCustomTextbox26->Name = L"bunifuCustomTextbox26";
			this->bunifuCustomTextbox26->Size = System::Drawing::Size(375, 35);
			this->bunifuCustomTextbox26->TabIndex = 74;
			this->bunifuCustomTextbox26->UseSystemPasswordChar = true;
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label83->Location = System::Drawing::Point(22, 410);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(146, 28);
			this->label83->TabIndex = 73;
			this->label83->Text = L"Lecturer Name";
			// 
			// bunifuDatepicker3
			// 
			this->bunifuDatepicker3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuDatepicker3->BorderRadius = 0;
			this->bunifuDatepicker3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bunifuDatepicker3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F));
			this->bunifuDatepicker3->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuDatepicker3->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->bunifuDatepicker3->FormatCustom = nullptr;
			this->bunifuDatepicker3->Location = System::Drawing::Point(429, 343);
			this->bunifuDatepicker3->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuDatepicker3->Name = L"bunifuDatepicker3";
			this->bunifuDatepicker3->Size = System::Drawing::Size(155, 35);
			this->bunifuDatepicker3->TabIndex = 72;
			this->bunifuDatepicker3->Value = System::DateTime(2023, 4, 11, 16, 41, 46, 736);
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->label82->Location = System::Drawing::Point(381, 359);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(34, 17);
			this->label82->TabIndex = 71;
			this->label82->Text = L"End:";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->label81->Location = System::Drawing::Point(157, 359);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(40, 17);
			this->label81->TabIndex = 70;
			this->label81->Text = L"Start:";
			// 
			// bunifuDatepicker1
			// 
			this->bunifuDatepicker1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuDatepicker1->BorderRadius = 0;
			this->bunifuDatepicker1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bunifuDatepicker1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F));
			this->bunifuDatepicker1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuDatepicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->bunifuDatepicker1->FormatCustom = nullptr;
			this->bunifuDatepicker1->Location = System::Drawing::Point(206, 343);
			this->bunifuDatepicker1->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuDatepicker1->Name = L"bunifuDatepicker1";
			this->bunifuDatepicker1->Size = System::Drawing::Size(155, 35);
			this->bunifuDatepicker1->TabIndex = 68;
			this->bunifuDatepicker1->Value = System::DateTime(2023, 4, 11, 16, 41, 46, 736);
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label80->Location = System::Drawing::Point(21, 350);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(123, 28);
			this->label80->TabIndex = 67;
			this->label80->Text = L"Course Date";
			// 
			// comboBox28
			// 
			this->comboBox28->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox28->DropDownHeight = 250;
			this->comboBox28->DropDownWidth = 250;
			this->comboBox28->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox28->FormattingEnabled = true;
			this->comboBox28->IntegralHeight = false;
			this->comboBox28->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"07:30 - 09:10", L"09:30 - 11:10", L"13:30 - 15:10",
					L"15:30 - 17:10", L"07:30 - 11:30", L"13:30 - 17:10"
			});
			this->comboBox28->Location = System::Drawing::Point(344, 284);
			this->comboBox28->Margin = System::Windows::Forms::Padding(0);
			this->comboBox28->MaxDropDownItems = 20;
			this->comboBox28->Name = L"comboBox28";
			this->comboBox28->Size = System::Drawing::Size(236, 33);
			this->comboBox28->TabIndex = 65;
			this->comboBox28->TabStop = false;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label79->Location = System::Drawing::Point(21, 286);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(92, 28);
			this->label79->TabIndex = 64;
			this->label79->Text = L"Lab Date";
			// 
			// comboBox29
			// 
			this->comboBox29->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox29->DropDownHeight = 250;
			this->comboBox29->DropDownWidth = 250;
			this->comboBox29->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox29->FormattingEnabled = true;
			this->comboBox29->IntegralHeight = false;
			this->comboBox29->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", L"Sat" });
			this->comboBox29->Location = System::Drawing::Point(159, 283);
			this->comboBox29->Margin = System::Windows::Forms::Padding(0);
			this->comboBox29->MaxDropDownItems = 20;
			this->comboBox29->Name = L"comboBox29";
			this->comboBox29->Size = System::Drawing::Size(144, 33);
			this->comboBox29->TabIndex = 63;
			this->comboBox29->TabStop = false;
			// 
			// comboBox27
			// 
			this->comboBox27->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox27->DropDownHeight = 250;
			this->comboBox27->DropDownWidth = 250;
			this->comboBox27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox27->FormattingEnabled = true;
			this->comboBox27->IntegralHeight = false;
			this->comboBox27->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"07:30 - 09:10", L"09:30 - 11:10", L"13:30 - 15:10",
					L"15:30 - 17:10", L"07:30 - 11:30", L"13:30 - 17:10"
			});
			this->comboBox27->Location = System::Drawing::Point(345, 220);
			this->comboBox27->Margin = System::Windows::Forms::Padding(0);
			this->comboBox27->MaxDropDownItems = 20;
			this->comboBox27->Name = L"comboBox27";
			this->comboBox27->Size = System::Drawing::Size(236, 33);
			this->comboBox27->TabIndex = 62;
			this->comboBox27->TabStop = false;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label78->Location = System::Drawing::Point(21, 220);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(124, 28);
			this->label78->TabIndex = 61;
			this->label78->Text = L"Theory Date";
			// 
			// bunifuCustomTextbox25
			// 
			this->bunifuCustomTextbox25->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox25->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox25->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox25->Location = System::Drawing::Point(412, 152);
			this->bunifuCustomTextbox25->Name = L"bunifuCustomTextbox25";
			this->bunifuCustomTextbox25->Size = System::Drawing::Size(169, 35);
			this->bunifuCustomTextbox25->TabIndex = 60;
			this->bunifuCustomTextbox25->UseSystemPasswordChar = true;
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label77->Location = System::Drawing::Point(258, 155);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(136, 28);
			this->label77->TabIndex = 59;
			this->label77->Text = L"Max Students";
			// 
			// bunifuCustomTextbox24
			// 
			this->bunifuCustomTextbox24->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox24->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox24->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox24->Location = System::Drawing::Point(99, 152);
			this->bunifuCustomTextbox24->Name = L"bunifuCustomTextbox24";
			this->bunifuCustomTextbox24->Size = System::Drawing::Size(141, 35);
			this->bunifuCustomTextbox24->TabIndex = 58;
			this->bunifuCustomTextbox24->UseSystemPasswordChar = true;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label76->Location = System::Drawing::Point(21, 159);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(75, 28);
			this->label76->TabIndex = 57;
			this->label76->Text = L"Credits";
			// 
			// bunifuCustomTextbox23
			// 
			this->bunifuCustomTextbox23->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox23->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox23->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox23->Location = System::Drawing::Point(440, 91);
			this->bunifuCustomTextbox23->Name = L"bunifuCustomTextbox23";
			this->bunifuCustomTextbox23->Size = System::Drawing::Size(141, 35);
			this->bunifuCustomTextbox23->TabIndex = 56;
			this->bunifuCustomTextbox23->UseSystemPasswordChar = true;
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label75->Location = System::Drawing::Point(290, 98);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(144, 28);
			this->label75->TabIndex = 55;
			this->label75->Text = L"Courses Name";
			// 
			// bunifuCustomTextbox22
			// 
			this->bunifuCustomTextbox22->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox22->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox22->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox22->Location = System::Drawing::Point(138, 91);
			this->bunifuCustomTextbox22->Name = L"bunifuCustomTextbox22";
			this->bunifuCustomTextbox22->Size = System::Drawing::Size(141, 35);
			this->bunifuCustomTextbox22->TabIndex = 54;
			this->bunifuCustomTextbox22->UseSystemPasswordChar = true;
			// 
			// comboBox26
			// 
			this->comboBox26->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox26->DropDownHeight = 250;
			this->comboBox26->DropDownWidth = 250;
			this->comboBox26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox26->FormattingEnabled = true;
			this->comboBox26->IntegralHeight = false;
			this->comboBox26->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", L"Sat" });
			this->comboBox26->Location = System::Drawing::Point(160, 219);
			this->comboBox26->Margin = System::Windows::Forms::Padding(0);
			this->comboBox26->MaxDropDownItems = 20;
			this->comboBox26->Name = L"comboBox26";
			this->comboBox26->Size = System::Drawing::Size(144, 33);
			this->comboBox26->TabIndex = 53;
			this->comboBox26->TabStop = false;
			// 
			// bunifuThinButton250
			// 
			this->bunifuThinButton250->ActiveBorderThickness = 1;
			this->bunifuThinButton250->ActiveCornerRadius = 50;
			this->bunifuThinButton250->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton250->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton250->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton250->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuThinButton250->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton250.BackgroundImage")));
			this->bunifuThinButton250->ButtonText = L"Close";
			this->bunifuThinButton250->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton250->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton250->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton250->IdleBorderThickness = 1;
			this->bunifuThinButton250->IdleCornerRadius = 50;
			this->bunifuThinButton250->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton250->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton250->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton250->Location = System::Drawing::Point(334, 482);
			this->bunifuThinButton250->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton250->Name = L"bunifuThinButton250";
			this->bunifuThinButton250->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton250->TabIndex = 12;
			this->bunifuThinButton250->TabStop = false;
			this->bunifuThinButton250->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton250->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton250_Click);
			// 
			// bunifuThinButton251
			// 
			this->bunifuThinButton251->ActiveBorderThickness = 1;
			this->bunifuThinButton251->ActiveCornerRadius = 50;
			this->bunifuThinButton251->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton251->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton251->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton251->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuThinButton251->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton251.BackgroundImage")));
			this->bunifuThinButton251->ButtonText = L"Change";
			this->bunifuThinButton251->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton251->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton251->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton251->IdleBorderThickness = 1;
			this->bunifuThinButton251->IdleCornerRadius = 50;
			this->bunifuThinButton251->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton251->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton251->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton251->Location = System::Drawing::Point(91, 482);
			this->bunifuThinButton251->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton251->Name = L"bunifuThinButton251";
			this->bunifuThinButton251->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton251->TabIndex = 10;
			this->bunifuThinButton251->TabStop = false;
			this->bunifuThinButton251->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label73->Location = System::Drawing::Point(20, 98);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(110, 28);
			this->label73->TabIndex = 1;
			this->label73->Text = L"Courses ID";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label74->ForeColor = System::Drawing::Color::Crimson;
			this->label74->Location = System::Drawing::Point(19, 10);
			this->label74->Margin = System::Windows::Forms::Padding(0);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(546, 42);
			this->label74->TabIndex = 0;
			this->label74->Text = L"Update/Edit Courses Information";
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel28->Controls->Add(this->label118);
			this->panel28->Controls->Add(this->comboBox41);
			this->panel28->Controls->Add(this->label122);
			this->panel28->Controls->Add(this->comboBox42);
			this->panel28->Controls->Add(this->bunifuCustomTextbox49);
			this->panel28->Controls->Add(this->label125);
			this->panel28->Controls->Add(this->bunifuThinButton248);
			this->panel28->Controls->Add(this->bunifuThinButton249);
			this->panel28->Controls->Add(this->label128);
			this->panel28->Location = System::Drawing::Point(680, 200);
			this->panel28->Margin = System::Windows::Forms::Padding(0);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(600, 600);
			this->panel28->TabIndex = 43;
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label118->Location = System::Drawing::Point(21, 361);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(117, 28);
			this->label118->TabIndex = 73;
			this->label118->Text = L"School Year";
			// 
			// comboBox41
			// 
			this->comboBox41->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox41->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox41->DropDownHeight = 250;
			this->comboBox41->DropDownWidth = 250;
			this->comboBox41->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox41->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox41->FormattingEnabled = true;
			this->comboBox41->IntegralHeight = false;
			this->comboBox41->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"2022 - 2023", L"2023 - 2024", L"2024 - 2025",
					L"2025 - 2026"
			});
			this->comboBox41->Location = System::Drawing::Point(198, 361);
			this->comboBox41->Margin = System::Windows::Forms::Padding(0);
			this->comboBox41->MaxDropDownItems = 20;
			this->comboBox41->Name = L"comboBox41";
			this->comboBox41->Size = System::Drawing::Size(378, 33);
			this->comboBox41->TabIndex = 65;
			this->comboBox41->TabStop = false;
			// 
			// label122
			// 
			this->label122->AutoSize = true;
			this->label122->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label122->Location = System::Drawing::Point(21, 232);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(97, 28);
			this->label122->TabIndex = 64;
			this->label122->Text = L"Semester";
			// 
			// comboBox42
			// 
			this->comboBox42->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox42->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox42->DropDownHeight = 250;
			this->comboBox42->DropDownWidth = 250;
			this->comboBox42->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox42->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.5F));
			this->comboBox42->FormattingEnabled = true;
			this->comboBox42->IntegralHeight = false;
			this->comboBox42->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->comboBox42->Location = System::Drawing::Point(198, 232);
			this->comboBox42->Margin = System::Windows::Forms::Padding(0);
			this->comboBox42->MaxDropDownItems = 20;
			this->comboBox42->Name = L"comboBox42";
			this->comboBox42->Size = System::Drawing::Size(382, 33);
			this->comboBox42->TabIndex = 63;
			this->comboBox42->TabStop = false;
			// 
			// bunifuCustomTextbox49
			// 
			this->bunifuCustomTextbox49->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox49->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox49->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox49->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox49->Location = System::Drawing::Point(198, 106);
			this->bunifuCustomTextbox49->Name = L"bunifuCustomTextbox49";
			this->bunifuCustomTextbox49->Size = System::Drawing::Size(382, 35);
			this->bunifuCustomTextbox49->TabIndex = 58;
			this->bunifuCustomTextbox49->UseSystemPasswordChar = true;
			// 
			// label125
			// 
			this->label125->AutoSize = true;
			this->label125->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label125->Location = System::Drawing::Point(21, 113);
			this->label125->Name = L"label125";
			this->label125->Size = System::Drawing::Size(83, 28);
			this->label125->TabIndex = 57;
			this->label125->Text = L"Class ID";
			// 
			// bunifuThinButton248
			// 
			this->bunifuThinButton248->ActiveBorderThickness = 1;
			this->bunifuThinButton248->ActiveCornerRadius = 50;
			this->bunifuThinButton248->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton248->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton248->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton248->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuThinButton248->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton248.BackgroundImage")));
			this->bunifuThinButton248->ButtonText = L"Close";
			this->bunifuThinButton248->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton248->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton248->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton248->IdleBorderThickness = 1;
			this->bunifuThinButton248->IdleCornerRadius = 50;
			this->bunifuThinButton248->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton248->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton248->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton248->Location = System::Drawing::Point(334, 482);
			this->bunifuThinButton248->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton248->Name = L"bunifuThinButton248";
			this->bunifuThinButton248->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton248->TabIndex = 12;
			this->bunifuThinButton248->TabStop = false;
			this->bunifuThinButton248->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton248->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton248_Click);
			// 
			// bunifuThinButton249
			// 
			this->bunifuThinButton249->ActiveBorderThickness = 1;
			this->bunifuThinButton249->ActiveCornerRadius = 50;
			this->bunifuThinButton249->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton249->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton249->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton249->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuThinButton249->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton249.BackgroundImage")));
			this->bunifuThinButton249->ButtonText = L"Change";
			this->bunifuThinButton249->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton249->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton249->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton249->IdleBorderThickness = 1;
			this->bunifuThinButton249->IdleCornerRadius = 50;
			this->bunifuThinButton249->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton249->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton249->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton249->Location = System::Drawing::Point(91, 482);
			this->bunifuThinButton249->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton249->Name = L"bunifuThinButton249";
			this->bunifuThinButton249->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton249->TabIndex = 10;
			this->bunifuThinButton249->TabStop = false;
			this->bunifuThinButton249->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label128
			// 
			this->label128->AutoSize = true;
			this->label128->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label128->ForeColor = System::Drawing::Color::Crimson;
			this->label128->Location = System::Drawing::Point(19, 10);
			this->label128->Margin = System::Windows::Forms::Padding(0);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(534, 42);
			this->label128->TabIndex = 0;
			this->label128->Text = L"Update/Edit Classes Information";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label84->ForeColor = System::Drawing::Color::Crimson;
			this->label84->Location = System::Drawing::Point(19, 10);
			this->label84->Margin = System::Windows::Forms::Padding(0);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(523, 42);
			this->label84->TabIndex = 0;
			this->label84->Text = L"Update/Edit Scoreboard Course";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label72->Location = System::Drawing::Point(150, 98);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(109, 28);
			this->label72->TabIndex = 1;
			this->label72->Text = L"Student ID";
			// 
			// bunifuThinButton241
			// 
			this->bunifuThinButton241->ActiveBorderThickness = 1;
			this->bunifuThinButton241->ActiveCornerRadius = 50;
			this->bunifuThinButton241->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton241->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton241->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton241->BackColor = System::Drawing::Color::WhiteSmoke;
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
			// bunifuThinButton240
			// 
			this->bunifuThinButton240->ActiveBorderThickness = 1;
			this->bunifuThinButton240->ActiveCornerRadius = 50;
			this->bunifuThinButton240->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton240->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton240->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton240->BackColor = System::Drawing::Color::WhiteSmoke;
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
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label70->Location = System::Drawing::Point(21, 159);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(110, 28);
			this->label70->TabIndex = 57;
			this->label70->Text = L"First Name";
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
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label69->Location = System::Drawing::Point(304, 155);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(108, 28);
			this->label69->TabIndex = 59;
			this->label69->Text = L"Last Name";
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
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label68->Location = System::Drawing::Point(21, 220);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(142, 28);
			this->label68->TabIndex = 61;
			this->label68->Text = L"Midterm Mark";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label67->Location = System::Drawing::Point(21, 286);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(106, 28);
			this->label67->TabIndex = 64;
			this->label67->Text = L"Final Mark";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label66->Location = System::Drawing::Point(21, 350);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(107, 28);
			this->label66->TabIndex = 67;
			this->label66->Text = L"Total Mark";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label63->Location = System::Drawing::Point(22, 410);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(116, 28);
			this->label63->TabIndex = 73;
			this->label63->Text = L"Other Mark";
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
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::WhiteSmoke;
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
			this->panel24->Location = System::Drawing::Point(680, 200);
			this->panel24->Margin = System::Windows::Forms::Padding(0);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(600, 600);
			this->panel24->TabIndex = 44;
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
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label92->ForeColor = System::Drawing::Color::Crimson;
			this->label92->Location = System::Drawing::Point(19, 10);
			this->label92->Margin = System::Windows::Forms::Padding(0);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(550, 42);
			this->label92->TabIndex = 0;
			this->label92->Text = L"Update/Edit Students List Course";
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label91->Location = System::Drawing::Point(21, 105);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(109, 28);
			this->label91->TabIndex = 1;
			this->label91->Text = L"Student ID";
			// 
			// bunifuThinButton243
			// 
			this->bunifuThinButton243->ActiveBorderThickness = 1;
			this->bunifuThinButton243->ActiveCornerRadius = 50;
			this->bunifuThinButton243->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton243->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton243->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton243->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuThinButton243->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton243.BackgroundImage")));
			this->bunifuThinButton243->ButtonText = L"Change";
			this->bunifuThinButton243->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton243->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton243->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton243->IdleBorderThickness = 1;
			this->bunifuThinButton243->IdleCornerRadius = 50;
			this->bunifuThinButton243->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton243->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton243->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton243->Location = System::Drawing::Point(91, 482);
			this->bunifuThinButton243->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton243->Name = L"bunifuThinButton243";
			this->bunifuThinButton243->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton243->TabIndex = 10;
			this->bunifuThinButton243->TabStop = false;
			this->bunifuThinButton243->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton242
			// 
			this->bunifuThinButton242->ActiveBorderThickness = 1;
			this->bunifuThinButton242->ActiveCornerRadius = 50;
			this->bunifuThinButton242->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton242->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton242->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuThinButton242->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton242.BackgroundImage")));
			this->bunifuThinButton242->ButtonText = L"Close";
			this->bunifuThinButton242->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton242->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton242->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton242->IdleBorderThickness = 1;
			this->bunifuThinButton242->IdleCornerRadius = 50;
			this->bunifuThinButton242->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton242->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton242->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton242->Location = System::Drawing::Point(334, 482);
			this->bunifuThinButton242->Margin = System::Windows::Forms::Padding(80, 40, 40, 40);
			this->bunifuThinButton242->Name = L"bunifuThinButton242";
			this->bunifuThinButton242->Size = System::Drawing::Size(187, 70);
			this->bunifuThinButton242->TabIndex = 12;
			this->bunifuThinButton242->TabStop = false;
			this->bunifuThinButton242->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton242->Click += gcnew System::EventHandler(this, &StaffForm::bunifuThinButton242_Click);
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
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label89->Location = System::Drawing::Point(21, 163);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(110, 28);
			this->label89->TabIndex = 57;
			this->label89->Text = L"First Name";
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
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label88->Location = System::Drawing::Point(24, 231);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(108, 28);
			this->label88->TabIndex = 59;
			this->label88->Text = L"Last Name";
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
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label87->Location = System::Drawing::Point(22, 300);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(79, 28);
			this->label87->TabIndex = 61;
			this->label87->Text = L"Gender";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label86->Location = System::Drawing::Point(21, 368);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(129, 28);
			this->label86->TabIndex = 64;
			this->label86->Text = L"Date of Birth";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label85->Location = System::Drawing::Point(22, 438);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(90, 28);
			this->label85->TabIndex = 67;
			this->label85->Text = L"Social ID";
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
			this->bunifuDatepicker8->Location = System::Drawing::Point(160, 355);
			this->bunifuDatepicker8->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->bunifuDatepicker8->Name = L"bunifuDatepicker8";
			this->bunifuDatepicker8->Size = System::Drawing::Size(421, 35);
			this->bunifuDatepicker8->TabIndex = 72;
			this->bunifuDatepicker8->Value = System::DateTime(2023, 4, 11, 16, 41, 46, 736);
			// 
			// bunifuCustomTextbox34
			// 
			this->bunifuCustomTextbox34->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bunifuCustomTextbox34->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.25F));
			this->bunifuCustomTextbox34->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bunifuCustomTextbox34->Location = System::Drawing::Point(160, 425);
			this->bunifuCustomTextbox34->Name = L"bunifuCustomTextbox34";
			this->bunifuCustomTextbox34->Size = System::Drawing::Size(421, 35);
			this->bunifuCustomTextbox34->TabIndex = 74;
			this->bunifuCustomTextbox34->UseSystemPasswordChar = true;
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::WhiteSmoke;
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
			this->panel25->Controls->Add(this->bunifuThinButton242);
			this->panel25->Controls->Add(this->bunifuThinButton243);
			this->panel25->Controls->Add(this->label91);
			this->panel25->Controls->Add(this->label92);
			this->panel25->Location = System::Drawing::Point(680, 200);
			this->panel25->Margin = System::Windows::Forms::Padding(0);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(600, 600);
			this->panel25->TabIndex = 45;
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::WhiteSmoke;
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
			this->panel26->Location = System::Drawing::Point(680, 200);
			this->panel26->Margin = System::Windows::Forms::Padding(0);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(600, 600);
			this->panel26->TabIndex = 46;
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
			this->label64->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label64->Location = System::Drawing::Point(22, 438);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(90, 28);
			this->label64->TabIndex = 67;
			this->label64->Text = L"Social ID";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label65->Location = System::Drawing::Point(21, 368);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(129, 28);
			this->label65->TabIndex = 64;
			this->label65->Text = L"Date of Birth";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
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
			this->label90->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
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
			this->label93->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
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
			this->bunifuThinButton244->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton244->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton244->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton244->BackColor = System::Drawing::Color::WhiteSmoke;
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
			this->bunifuThinButton244->Location = System::Drawing::Point(334, 482);
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
			this->bunifuThinButton245->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton245->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton245->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton245->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuThinButton245->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton245.BackgroundImage")));
			this->bunifuThinButton245->ButtonText = L"Change";
			this->bunifuThinButton245->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton245->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton245->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton245->IdleBorderThickness = 1;
			this->bunifuThinButton245->IdleCornerRadius = 50;
			this->bunifuThinButton245->IdleFillColor = System::Drawing::Color::Navy;
			this->bunifuThinButton245->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton245->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton245->Location = System::Drawing::Point(91, 482);
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
			this->label94->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->label94->Location = System::Drawing::Point(21, 105);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(109, 28);
			this->label94->TabIndex = 1;
			this->label94->Text = L"Student ID";
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label95->ForeColor = System::Drawing::Color::Crimson;
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
			this->Controls->Add(this->panel25);
			this->Controls->Add(this->panel24);
			this->Controls->Add(this->panel28);
			this->Controls->Add(this->panel29);
			this->Controls->Add(this->panel23);
			this->Controls->Add(this->panel22);
			this->Controls->Add(this->panel21);
			this->Controls->Add(this->panel20);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->studentsListClass);
			this->Controls->Add(this->studentsListCourse);
			this->Controls->Add(this->scoreboardClass);
			this->Controls->Add(this->scoreboardCourse);
			this->Controls->Add(this->coursesInformation);
			this->Controls->Add(this->panel18);
			this->Controls->Add(this->classesInformation);
			this->Controls->Add(this->panel17);
			this->Controls->Add(this->panel14);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menubarButton))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->sidebarTop->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->classesInformation->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView1))->EndInit();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->coursesInformation->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView2))->EndInit();
			this->scoreboardCourse->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView3))->EndInit();
			this->scoreboardClass->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView4))->EndInit();
			this->studentsListCourse->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView5))->EndInit();
			this->studentsListClass->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView6))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel23->ResumeLayout(false);
			this->panel23->PerformLayout();
			this->panel29->ResumeLayout(false);
			this->panel29->PerformLayout();
			this->panel28->ResumeLayout(false);
			this->panel28->PerformLayout();
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			this->panel25->ResumeLayout(false);
			this->panel25->PerformLayout();
			this->panel26->ResumeLayout(false);
			this->panel26->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		// Staff Form Load
	private: System::Void StaffForm_Load(System::Object^ sender, System::EventArgs^ e) {

		this->sidebarTop->Visible = false;
		this->panel3->Visible = false;
		this->panel4->Visible = false;
		this->panel7->Visible = false;
		this->panel8->Visible = false;
		this->panel5->Visible = false;
		this->panel10->Visible = false;
		this->panel12->Visible = false;
		this->panel14->Visible = false;
		this->panel17->Visible = false;
		this->panel18->Visible = false;
		this->panel20->Visible = false;
		this->panel21->Visible = false;
		this->panel22->Visible = false;
		this->panel23->Visible = false;
		this->panel24->Visible = false;
		this->panel25->Visible = false;
		this->panel26->Visible = false;
		this->panel28->Visible = false;
		this->panel29->Visible = false;
		this->classesInformation->Visible = false;
		this->coursesInformation->Visible = false;
		this->studentsListClass->Visible = false;
		this->studentsListCourse->Visible = false;
		this->scoreboardClass->Visible = false;
		this->scoreboardCourse->Visible = false;
		this->comboBox13->Visible = false;
		this->comboBox14->Visible = false;
		this->comboBox15->Visible = false;
		this->comboBox16->Visible = false;
		this->label48->Visible = false;
		this->label49->Visible = false;
		this->label50->Visible = false;
		this->label51->Visible = false;
		this->bunifuThinButton21->Visible = false;
		this->bunifuThinButton23->Visible = false;
		this->bunifuThinButton27->Visible = false;
		this->bunifuThinButton28->Visible = false;
		this->bunifuThinButton215->Visible = false;
		this->bunifuThinButton216->Visible = false;
		this->bunifuThinButton217->Visible = false;
		this->bunifuThinButton218->Visible = false;
		this->bunifuThinButton237->Visible = false;
		this->bunifuThinButton238->Visible = false;
		this->timer1->Start();

	}

		// Select School Year
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		if (this->comboBox1->Text != "" && this->comboBox1->Text != "(School Year)")
		{

			this->sidebarTop->Visible = false;
			this->panel3->Visible = true;
			this->panel4->Visible = true;
			this->panel7->Visible = true;
			this->panel8->Visible = true;
			this->panel5->Visible = false;
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = false;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton27->Visible = false;
			this->bunifuThinButton28->Visible = false;
			this->bunifuThinButton215->Visible = false;
			this->bunifuThinButton216->Visible = false;
			this->bunifuThinButton217->Visible = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			sideBarTopFlag_HomeProfile = false;
			sideBarTopFlag_SemesterModification = false;
			sideBarTopFlag_SemesterViewer = false;
			sideBarTopFlag_ImportExport = false;
			sideBarTopFlag_CreateStaff = false;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}
		else
		{

			this->sidebarTop->Visible = false;
			this->panel3->Visible = false;
			this->panel4->Visible = false;
			this->panel7->Visible = false;
			this->panel8->Visible = false;
			this->panel5->Visible = false;
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = false;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton27->Visible = false;
			this->bunifuThinButton28->Visible = false;
			this->bunifuThinButton215->Visible = false;
			this->bunifuThinButton216->Visible = false;
			this->bunifuThinButton217->Visible = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			sideBarTopFlag_HomeProfile = false;
			sideBarTopFlag_SemesterModification = false;
			sideBarTopFlag_SemesterViewer = false;
			sideBarTopFlag_ImportExport = false;
			sideBarTopFlag_CreateStaff = false;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}

	}

		   // Side bar Timer
	private: System::Void sidebarTimer_Tick(System::Object^ sender, System::EventArgs^ e) {

		if (sideBarFlag)
		{

			this->sidebar->Width -= 232;
			this->classesInformation->Width += 232;
			this->coursesInformation->Width += 232;
			this->studentsListClass->Width += 232;
			this->studentsListCourse->Width += 232;
			this->scoreboardClass->Width += 232;
			this->scoreboardCourse->Width += 232;
			this->kryptonDataGridView1->Width += 232;
			this->panel5->Width += 232;
			this->panel10->Width += 232;
			this->panel12->Width += 232;
			this->panel14->Width += 232;
			this->panel17->Width += 232;
			this->panel18->Width += 232;

			if (this->sidebar->Width == this->sidebar->MinimumSize.Width)
			{

				sideBarFlag = false;
				this->sidebarTimer->Stop();

			}

		}
		else
		{

			this->sidebar->Width += 232;
			this->classesInformation->Width -= 232;
			this->coursesInformation->Width -= 232;
			this->studentsListClass->Width -= 232;
			this->studentsListCourse->Width -= 232;
			this->scoreboardClass->Width -= 232;
			this->scoreboardCourse->Width -= 232;
			this->kryptonDataGridView1->Width -= 232;
			this->panel5->Width -= 232;
			this->panel10->Width -= 232;
			this->panel12->Width -= 232;
			this->panel14->Width -= 232;
			this->panel17->Width -= 232;
			this->panel18->Width -= 232;

			if (this->sidebar->Width == this->sidebar->MaximumSize.Width)
			{

				sideBarFlag = true;
				this->sidebarTimer->Stop();

			}

		}

	}

		   // Menubar Button
	private: System::Void menubarButton_Click(System::Object^ sender, System::EventArgs^ e) {

		this->sidebarTimer->Start();

	}

		   // Home/Profile Button
	private: System::Void bunifuFlatButton1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (sideBarTopFlag_HomeProfile == false)
		{

			this->sidebarTop->Visible = true;
			this->bunifuThinButton21->Visible = true;
			this->bunifuThinButton23->Visible = true;
			this->bunifuThinButton27->Visible = false;
			this->bunifuThinButton28->Visible = false;
			this->bunifuThinButton215->Visible = false;
			this->bunifuThinButton216->Visible = false;
			this->bunifuThinButton217->Visible = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->panel5->Visible = false;
			this->panel10->Visible = true;
			this->panel12->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = false;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;
			sideBarTopFlag_HomeProfile = true;
			sideBarTopFlag_SemesterModification = false;
			sideBarTopFlag_SemesterViewer = false;
			sideBarTopFlag_ImportExport = false;
			sideBarTopFlag_CreateStaff = false;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}
		else
		{

			this->sidebarTop->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton27->Visible = false;
			this->bunifuThinButton28->Visible = false;
			this->bunifuThinButton215->Visible = false;
			this->bunifuThinButton216->Visible = false;
			this->bunifuThinButton217->Visible = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->panel5->Visible = false;
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = false;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;
			sideBarTopFlag_HomeProfile = false;
			sideBarTopFlag_SemesterModification = false;
			sideBarTopFlag_SemesterViewer = false;
			sideBarTopFlag_ImportExport = false;
			sideBarTopFlag_CreateStaff = false;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}

	}

		   // Profile Button
	private: System::Void bunifuThinButton23_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->panel12->Visible)
		{

			this->panel5->Visible = false;
			this->panel10->Visible = true;
			this->panel12->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = false;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;

			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}

	}

		   // ChangePassword Button
	private: System::Void bunifuThinButton21_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->panel10->Visible)
		{

			this->panel5->Visible = false;
			this->panel12->Visible = true;
			this->panel10->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = false;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::Hand;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}

	}

		   // Close Button in Profile (Home/Profile Page)
	private: System::Void bunifuThinButton24_Click(System::Object^ sender, System::EventArgs^ e) {

		this->sidebarTop->Visible = false;
		this->bunifuThinButton21->Visible = false;
		this->bunifuThinButton23->Visible = false;
		this->bunifuThinButton27->Visible = false;
		this->bunifuThinButton28->Visible = false;
		this->bunifuThinButton215->Visible = false;
		this->bunifuThinButton216->Visible = false;
		this->bunifuThinButton217->Visible = false;
		this->bunifuThinButton218->Visible = false;
		this->bunifuThinButton237->Visible = false;
		this->bunifuThinButton238->Visible = false;
		this->bunifuThinButton239->Visible = false;
		this->panel5->Visible = false;
		this->panel10->Visible = false;
		this->panel12->Visible = false;
		this->panel14->Visible = false;
		this->panel17->Visible = false;
		this->panel18->Visible = false;
		this->panel20->Visible = false;
		this->panel21->Visible = false;
		this->panel22->Visible = false;
		this->panel23->Visible = false;
		this->panel24->Visible = false;
		this->panel25->Visible = false;
		this->panel26->Visible = false;
		this->panel28->Visible = false;
		this->panel29->Visible = false;
		this->classesInformation->Visible = false;
		this->coursesInformation->Visible = false;
		this->studentsListClass->Visible = false;
		this->studentsListCourse->Visible = false;
		this->scoreboardClass->Visible = false;
		this->scoreboardCourse->Visible = false;
		this->comboBox13->Visible = false;
		this->comboBox14->Visible = false;
		this->comboBox15->Visible = false;
		this->comboBox16->Visible = false;
		this->label48->Visible = false;
		this->label49->Visible = false;
		this->label50->Visible = false;
		this->label51->Visible = false;
		sideBarTopFlag_HomeProfile = false;
		sideBarTopFlag_SemesterModification = false;
		sideBarTopFlag_SemesterViewer = false;
		sideBarTopFlag_ImportExport = false;
		sideBarTopFlag_CreateStaff = false;

		this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

		this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

	}

		   // Close Button in ChangePassword (Home/Profile Page)
	private: System::Void bunifuThinButton25_Click(System::Object^ sender, System::EventArgs^ e) {

		this->sidebarTop->Visible = false;
		this->bunifuThinButton21->Visible = false;
		this->bunifuThinButton23->Visible = false;
		this->bunifuThinButton27->Visible = false;
		this->bunifuThinButton28->Visible = false;
		this->bunifuThinButton215->Visible = false;
		this->bunifuThinButton216->Visible = false;
		this->bunifuThinButton217->Visible = false;
		this->bunifuThinButton218->Visible = false;
		this->bunifuThinButton237->Visible = false;
		this->bunifuThinButton238->Visible = false;
		this->bunifuThinButton239->Visible = false;
		this->panel5->Visible = false;
		this->panel10->Visible = false;
		this->panel12->Visible = false;
		this->panel14->Visible = false;
		this->panel17->Visible = false;
		this->panel18->Visible = false;
		this->panel20->Visible = false;
		this->panel21->Visible = false;
		this->panel22->Visible = false;
		this->panel23->Visible = false;
		this->panel24->Visible = false;
		this->panel25->Visible = false;
		this->panel26->Visible = false;
		this->panel28->Visible = false;
		this->panel29->Visible = false;
		this->classesInformation->Visible = false;
		this->coursesInformation->Visible = false;
		this->studentsListClass->Visible = false;
		this->studentsListCourse->Visible = false;
		this->scoreboardClass->Visible = false;
		this->scoreboardCourse->Visible = false;
		this->comboBox13->Visible = false;
		this->comboBox14->Visible = false;
		this->comboBox15->Visible = false;
		this->comboBox16->Visible = false;
		this->label48->Visible = false;
		this->label49->Visible = false;
		this->label50->Visible = false;
		this->label51->Visible = false;
		sideBarTopFlag_HomeProfile = false;
		sideBarTopFlag_SemesterModification = false;
		sideBarTopFlag_SemesterViewer = false;
		sideBarTopFlag_ImportExport = false;
		sideBarTopFlag_CreateStaff = false;

		this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

		this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

	}

		   // Semester Modification Button
	private: System::Void bunifuFlatButton2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (sideBarTopFlag_SemesterModification == false)
		{

			this->sidebarTop->Visible = true;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton27->Visible = true;
			this->bunifuThinButton28->Visible = true;
			this->bunifuThinButton215->Visible = false;
			this->bunifuThinButton216->Visible = false;
			this->bunifuThinButton217->Visible = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->panel5->Visible = false;
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = true;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;
			sideBarTopFlag_HomeProfile = false;
			sideBarTopFlag_SemesterModification = true;
			sideBarTopFlag_SemesterViewer = false;
			sideBarTopFlag_ImportExport = false;
			sideBarTopFlag_CreateStaff = false;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}
		else
		{

			this->sidebarTop->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton27->Visible = false;
			this->bunifuThinButton28->Visible = false;
			this->bunifuThinButton215->Visible = false;
			this->bunifuThinButton216->Visible = false;
			this->bunifuThinButton217->Visible = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->panel5->Visible = false;
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = false;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;
			sideBarTopFlag_HomeProfile = false;
			sideBarTopFlag_SemesterModification = false;
			sideBarTopFlag_SemesterViewer = false;
			sideBarTopFlag_ImportExport = false;
			sideBarTopFlag_CreateStaff = false;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}

	}

		   // Close Button (New Session, Modify Courses Page)
	private: System::Void bunifuThinButton213_Click(System::Object^ sender, System::EventArgs^ e) {

		this->sidebarTop->Visible = false;
		this->bunifuThinButton21->Visible = false;
		this->bunifuThinButton23->Visible = false;
		this->bunifuThinButton27->Visible = false;
		this->bunifuThinButton28->Visible = false;
		this->bunifuThinButton215->Visible = false;
		this->bunifuThinButton216->Visible = false;
		this->bunifuThinButton217->Visible = false;
		this->bunifuThinButton218->Visible = false;
		this->bunifuThinButton237->Visible = false;
		this->bunifuThinButton238->Visible = false;
		this->bunifuThinButton239->Visible = false;
		this->panel5->Visible = false;
		this->panel10->Visible = false;
		this->panel12->Visible = false;
		this->panel14->Visible = false;
		this->panel17->Visible = false;
		this->panel18->Visible = false;
		this->panel20->Visible = false;
		this->panel21->Visible = false;
		this->panel22->Visible = false;
		this->panel23->Visible = false;
		this->panel24->Visible = false;
		this->panel25->Visible = false;
		this->panel26->Visible = false;
		this->panel28->Visible = false;
		this->panel29->Visible = false;
		this->classesInformation->Visible = false;
		this->coursesInformation->Visible = false;
		this->studentsListClass->Visible = false;
		this->studentsListCourse->Visible = false;
		this->scoreboardClass->Visible = false;
		this->scoreboardCourse->Visible = false;
		this->comboBox13->Visible = false;
		this->comboBox14->Visible = false;
		this->comboBox15->Visible = false;
		this->comboBox16->Visible = false;
		this->label48->Visible = false;
		this->label49->Visible = false;
		this->label50->Visible = false;
		this->label51->Visible = false;
		sideBarTopFlag_HomeProfile = false;
		sideBarTopFlag_SemesterModification = false;
		sideBarTopFlag_SemesterViewer = false;
		sideBarTopFlag_ImportExport = false;
		sideBarTopFlag_CreateStaff = false;

		this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

		this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

	}

		   // Log Out Button
	private: System::Void bunifuFlatButton8_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		obj->Show();

	}

		   // Modify Courses Button
	private: System::Void bunifuThinButton27_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->panel14->Visible)
		{

			this->panel5->Visible = false;
			this->panel12->Visible = false;
			this->panel10->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = true;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}

	}

		   // Modify Classes Button
	private: System::Void bunifuThinButton28_Click(System::Object^ sender, System::EventArgs^ e) {


		if (this->panel17->Visible)
		{

			this->panel5->Visible = false;
			this->panel12->Visible = false;
			this->panel10->Visible = false;
			this->panel14->Visible = true;
			this->panel17->Visible = false;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::No;

			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}

	}

		   // Close Button (Modify Classes Page)
	private: System::Void bunifuThinButton221_Click(System::Object^ sender, System::EventArgs^ e) {

		this->sidebarTop->Visible = false;
		this->bunifuThinButton21->Visible = false;
		this->bunifuThinButton23->Visible = false;
		this->bunifuThinButton27->Visible = false;
		this->bunifuThinButton28->Visible = false;
		this->bunifuThinButton215->Visible = false;
		this->bunifuThinButton216->Visible = false;
		this->bunifuThinButton217->Visible = false;
		this->bunifuThinButton218->Visible = false;
		this->bunifuThinButton237->Visible = false;
		this->bunifuThinButton238->Visible = false;
		this->bunifuThinButton239->Visible = false;
		this->panel5->Visible = false;
		this->panel10->Visible = false;
		this->panel12->Visible = false;
		this->panel14->Visible = false;
		this->panel17->Visible = false;
		this->panel18->Visible = false;
		this->panel20->Visible = false;
		this->panel21->Visible = false;
		this->panel22->Visible = false;
		this->panel23->Visible = false;
		this->panel24->Visible = false;
		this->panel25->Visible = false;
		this->panel26->Visible = false;
		this->panel28->Visible = false;
		this->panel29->Visible = false;
		this->classesInformation->Visible = false;
		this->coursesInformation->Visible = false;
		this->studentsListClass->Visible = false;
		this->studentsListCourse->Visible = false;
		this->scoreboardClass->Visible = false;
		this->scoreboardCourse->Visible = false;
		this->comboBox13->Visible = false;
		this->comboBox14->Visible = false;
		this->comboBox15->Visible = false;
		this->comboBox16->Visible = false;
		this->label48->Visible = false;
		this->label49->Visible = false;
		this->label50->Visible = false;
		this->label51->Visible = false;
		sideBarTopFlag_HomeProfile = false;
		sideBarTopFlag_SemesterModification = false;
		sideBarTopFlag_SemesterViewer = false;
		sideBarTopFlag_ImportExport = false;
		sideBarTopFlag_CreateStaff = false;

		this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

		this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
		this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

		this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
		this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
		this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
		this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
		this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

	}

		   // Semester Viewer Button
		private: System::Void bunifuFlatButton3_Click(System::Object^ sender, System::EventArgs^ e) {

		if (sideBarTopFlag_SemesterViewer == false)
		{

			this->sidebarTop->Visible = true;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton27->Visible = false;
			this->bunifuThinButton28->Visible = false;
			this->bunifuThinButton215->Visible = true;
			this->bunifuThinButton216->Visible = true;
			this->bunifuThinButton217->Visible = true;
			this->bunifuThinButton218->Visible = true;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->panel5->Visible = false;
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = false;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = true;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;
			sideBarTopFlag_HomeProfile = false;
			sideBarTopFlag_SemesterModification = false;
			sideBarTopFlag_SemesterViewer = true;
			sideBarTopFlag_ImportExport = false;
			sideBarTopFlag_CreateStaff = false;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}
		else
		{

			this->sidebarTop->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton27->Visible = false;
			this->bunifuThinButton28->Visible = false;
			this->bunifuThinButton215->Visible = false;
			this->bunifuThinButton216->Visible = false;
			this->bunifuThinButton217->Visible = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->panel5->Visible = false;
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = false;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			sideBarTopFlag_HomeProfile = false;
			sideBarTopFlag_SemesterModification = false;
			sideBarTopFlag_SemesterViewer = false;
			sideBarTopFlag_ImportExport = false;
			sideBarTopFlag_CreateStaff = false;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}

	}

			// Create School Year Button
		private: System::Void bunifuThinButton223_Click(System::Object^ sender, System::EventArgs^ e) {

			this->sidebarTop->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton27->Visible = false;
			this->bunifuThinButton28->Visible = false;
			this->bunifuThinButton215->Visible = false;
			this->bunifuThinButton216->Visible = false;
			this->bunifuThinButton217->Visible = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->panel5->Visible = false;
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = false;
			this->panel18->Visible = true;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;
			sideBarTopFlag_HomeProfile = false;
			sideBarTopFlag_SemesterModification = false;
			sideBarTopFlag_SemesterViewer = false;
			sideBarTopFlag_ImportExport = false;
			sideBarTopFlag_CreateStaff = false;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}

			// Close Button (Create School Year Page)
		private: System::Void bunifuThinButton226_Click(System::Object^ sender, System::EventArgs^ e) {

			this->sidebarTop->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton27->Visible = false;
			this->bunifuThinButton28->Visible = false;
			this->bunifuThinButton215->Visible = false;
			this->bunifuThinButton216->Visible = false;
			this->bunifuThinButton217->Visible = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->panel5->Visible = false;
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = false;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;
			sideBarTopFlag_HomeProfile = false;
			sideBarTopFlag_SemesterModification = false;
			sideBarTopFlag_SemesterViewer = false;
			sideBarTopFlag_ImportExport = false;
			sideBarTopFlag_CreateStaff = false;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}

			// View Courses
		private: System::Void bunifuThinButton215_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->classesInformation->Visible || this->panel20->Visible || this->studentsListClass->Visible || this->studentsListCourse->Visible || this->panel21->Visible || this->scoreboardClass->Visible || this->scoreboardCourse->Visible)
			{

				this->panel5->Visible = false;
				this->panel12->Visible = false;
				this->panel10->Visible = false;
				this->panel14->Visible = false;
				this->panel17->Visible = false;
				this->panel18->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel22->Visible = false;
				this->panel23->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->classesInformation->Visible = false;
				this->coursesInformation->Visible = true;
				this->studentsListClass->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardClass->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}

		}

			// View Classes
		private: System::Void bunifuThinButton216_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->coursesInformation->Visible || this->panel20->Visible || this->studentsListClass->Visible || this->studentsListCourse->Visible || this->panel21->Visible || this->scoreboardClass->Visible || this->scoreboardCourse->Visible)
			{

				this->panel5->Visible = false;
				this->panel12->Visible = false;
				this->panel10->Visible = false;
				this->panel14->Visible = false;
				this->panel17->Visible = false;
				this->panel18->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel22->Visible = false;
				this->panel23->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->classesInformation->Visible = true;
				this->coursesInformation->Visible = false;
				this->studentsListClass->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardClass->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}

		}

			// View Students List
		private: System::Void bunifuThinButton217_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->classesInformation->Visible || this->coursesInformation->Visible || this->scoreboardClass->Visible || this->scoreboardCourse->Visible || this->panel21->Visible)
			{

				this->panel5->Visible = false;
				this->panel12->Visible = false;
				this->panel10->Visible = false;
				this->panel14->Visible = false;
				this->panel17->Visible = false;
				this->panel18->Visible = false;
				this->panel20->Visible = true;
				this->panel21->Visible = false;
				this->panel22->Visible = false;
				this->panel23->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->classesInformation->Visible = false;
				this->coursesInformation->Visible = false;
				this->studentsListClass->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardClass->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;
				sideBarTopFlag_HomeProfile = false;
				sideBarTopFlag_SemesterModification = false;
				sideBarTopFlag_SemesterViewer = false;
				sideBarTopFlag_ImportExport = false;
				sideBarTopFlag_CreateStaff = false;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}

		}

			// View Scoreboard
		private: System::Void bunifuThinButton218_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->classesInformation->Visible || this->coursesInformation->Visible || this->studentsListClass->Visible || this->studentsListCourse->Visible || this->panel20->Visible)
			{

				this->panel5->Visible = false;
				this->panel12->Visible = false;
				this->panel10->Visible = false;
				this->panel14->Visible = false;
				this->panel17->Visible = false;
				this->panel18->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = true;
				this->panel22->Visible = false;
				this->panel23->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->classesInformation->Visible = false;
				this->coursesInformation->Visible = false;
				this->studentsListClass->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardClass->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;
				sideBarTopFlag_HomeProfile = false;
				sideBarTopFlag_SemesterModification = false;
				sideBarTopFlag_SemesterViewer = false;
				sideBarTopFlag_ImportExport = false;
				sideBarTopFlag_CreateStaff = false;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::No;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}

		}

			// Create New Staff Button
		private: System::Void bunifuFlatButton7_Click(System::Object^ sender, System::EventArgs^ e) {

			if (sideBarTopFlag_CreateStaff == false)
			{

				this->sidebarTop->Visible = true;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton27->Visible = false;
				this->bunifuThinButton28->Visible = false;
				this->bunifuThinButton215->Visible = false;
				this->bunifuThinButton216->Visible = false;
				this->bunifuThinButton217->Visible = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton239->Visible = true;
				this->panel5->Visible = true;
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->panel14->Visible = false;
				this->panel17->Visible = false;
				this->panel18->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel22->Visible = false;
				this->panel23->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->classesInformation->Visible = false;
				this->coursesInformation->Visible = false;
				this->studentsListClass->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardClass->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;
				sideBarTopFlag_HomeProfile = false;
				sideBarTopFlag_SemesterModification = false;
				sideBarTopFlag_SemesterViewer = false;
				sideBarTopFlag_ImportExport = false;
				sideBarTopFlag_CreateStaff = true;

				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}
			else
			{

				this->sidebarTop->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton27->Visible = false;
				this->bunifuThinButton28->Visible = false;
				this->bunifuThinButton215->Visible = false;
				this->bunifuThinButton216->Visible = false;
				this->bunifuThinButton217->Visible = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->panel5->Visible = false;
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->panel14->Visible = false;
				this->panel17->Visible = false;
				this->panel18->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel22->Visible = false;
				this->panel23->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->classesInformation->Visible = false;
				this->coursesInformation->Visible = false;
				this->studentsListClass->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardClass->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;
				sideBarTopFlag_HomeProfile = false;
				sideBarTopFlag_SemesterModification = false;
				sideBarTopFlag_SemesterViewer = false;
				sideBarTopFlag_ImportExport = false;
				sideBarTopFlag_CreateStaff = false;

				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}

		}

			// Create Button (Create New Staff Page)
		private: System::Void bunifuThinButton230_Click(System::Object^ sender, System::EventArgs^ e) {

			

		}

			// Close Button (Create New Staff Page)
		private: System::Void bunifuThinButton229_Click(System::Object^ sender, System::EventArgs^ e) {

			this->sidebarTop->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton27->Visible = false;
			this->bunifuThinButton28->Visible = false;
			this->bunifuThinButton215->Visible = false;
			this->bunifuThinButton216->Visible = false;
			this->bunifuThinButton217->Visible = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->panel5->Visible = false;
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = false;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;
			sideBarTopFlag_HomeProfile = false;
			sideBarTopFlag_SemesterModification = false;
			sideBarTopFlag_SemesterViewer = false;
			sideBarTopFlag_ImportExport = false;
			sideBarTopFlag_CreateStaff = false;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}

			// Select change (View Scoreboard)
		private: System::Void comboBox17_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

			if (this->comboBox17->Text == "Class")
			{

				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = true;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = true;

			}
			else if (this->comboBox17->Text == "Course")
			{

				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = true;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = true;
				this->label51->Visible = false;

			}
			else
			{

				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;

			}

		}

			// Select change (View Students List)
		private: System::Void comboBox12_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

			if (this->comboBox12->Text == "Class")
			{

				this->comboBox13->Visible = true;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = true;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;

			}
			else if (this->comboBox12->Text == "Course")
			{

				this->comboBox13->Visible = false;
				this->comboBox14->Visible = true;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = true;
				this->label50->Visible = false;
				this->label51->Visible = false;

			}
			else
			{

				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;

			}

		}

			// Close Button (View Scoreboard)
		private: System::Void bunifuThinButton228_Click(System::Object^ sender, System::EventArgs^ e) {

			this->sidebarTop->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton27->Visible = false;
			this->bunifuThinButton28->Visible = false;
			this->bunifuThinButton215->Visible = false;
			this->bunifuThinButton216->Visible = false;
			this->bunifuThinButton217->Visible = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->panel5->Visible = false;
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = false;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;
			sideBarTopFlag_HomeProfile = false;
			sideBarTopFlag_SemesterModification = false;
			sideBarTopFlag_SemesterViewer = false;
			sideBarTopFlag_CreateStaff = false;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}

			// Close Button (View Students List)
		private: System::Void bunifuThinButton227_Click(System::Object^ sender, System::EventArgs^ e) {


			this->sidebarTop->Visible = false;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton27->Visible = false;
			this->bunifuThinButton28->Visible = false;
			this->bunifuThinButton215->Visible = false;
			this->bunifuThinButton216->Visible = false;
			this->bunifuThinButton217->Visible = false;
			this->bunifuThinButton218->Visible = false;
			this->bunifuThinButton237->Visible = false;
			this->bunifuThinButton238->Visible = false;
			this->bunifuThinButton239->Visible = false;
			this->panel5->Visible = false;
			this->panel10->Visible = false;
			this->panel12->Visible = false;
			this->panel14->Visible = false;
			this->panel17->Visible = false;
			this->panel18->Visible = false;
			this->panel20->Visible = false;
			this->panel21->Visible = false;
			this->panel22->Visible = false;
			this->panel23->Visible = false;
			this->panel24->Visible = false;
			this->panel25->Visible = false;
			this->panel26->Visible = false;
			this->panel28->Visible = false;
			this->panel29->Visible = false;
			this->classesInformation->Visible = false;
			this->coursesInformation->Visible = false;
			this->studentsListClass->Visible = false;
			this->studentsListCourse->Visible = false;
			this->scoreboardClass->Visible = false;
			this->scoreboardCourse->Visible = false;
			this->comboBox13->Visible = false;
			this->comboBox14->Visible = false;
			this->comboBox15->Visible = false;
			this->comboBox16->Visible = false;
			this->label48->Visible = false;
			this->label49->Visible = false;
			this->label50->Visible = false;
			this->label51->Visible = false;
			sideBarTopFlag_HomeProfile = false;
			sideBarTopFlag_SemesterModification = false;
			sideBarTopFlag_SemesterViewer = false;
			sideBarTopFlag_ImportExport = false;
			sideBarTopFlag_CreateStaff = false;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

			this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
			this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
			this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

		}

			// View Now Button (View Students List)
		private: System::Void bunifuThinButton231_Click(System::Object^ sender, System::EventArgs^ e) {


			if (this->comboBox12->Text == "Class")
			{

				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->studentsListClass->Visible = true;
				this->studentsListCourse->Visible = false;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}
			else if (this->comboBox12->Text == "Course")
			{

				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->studentsListClass->Visible = false;
				this->studentsListCourse->Visible = true;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}

		}

			// View Now Button (View Scoreboard)
		private: System::Void bunifuThinButton232_Click(System::Object^ sender, System::EventArgs^ e) {


			if (this->comboBox17->Text == "Class")
			{

				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->scoreboardClass->Visible = true;
				this->scoreboardCourse->Visible = false;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::No;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}
			else if (this->comboBox17->Text == "Course")
			{

				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->scoreboardClass->Visible = false;
				this->scoreboardCourse->Visible = true;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::No;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}

		}

			// Import / Export Button
		private: System::Void bunifuFlatButton6_Click(System::Object^ sender, System::EventArgs^ e) {

			if (sideBarTopFlag_ImportExport == false)
			{

				this->sidebarTop->Visible = true;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton27->Visible = false;
				this->bunifuThinButton28->Visible = false;
				this->bunifuThinButton215->Visible = false;
				this->bunifuThinButton216->Visible = false;
				this->bunifuThinButton217->Visible = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton237->Visible = true;
				this->bunifuThinButton238->Visible = true;
				this->bunifuThinButton239->Visible = false;
				this->panel5->Visible = false;
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->panel14->Visible = false;
				this->panel17->Visible = false;
				this->panel18->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel22->Visible = true;
				this->panel23->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->classesInformation->Visible = false;
				this->coursesInformation->Visible = false;
				this->studentsListClass->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardClass->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;
				sideBarTopFlag_HomeProfile = false;
				sideBarTopFlag_SemesterModification = false;
				sideBarTopFlag_SemesterViewer = false;
				sideBarTopFlag_ImportExport = true;
				sideBarTopFlag_CreateStaff = false;

				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}
			else
			{

				this->sidebarTop->Visible = false;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton27->Visible = false;
				this->bunifuThinButton28->Visible = false;
				this->bunifuThinButton215->Visible = false;
				this->bunifuThinButton216->Visible = false;
				this->bunifuThinButton217->Visible = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton237->Visible = false;
				this->bunifuThinButton238->Visible = false;
				this->bunifuThinButton239->Visible = false;
				this->panel5->Visible = false;
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->panel14->Visible = false;
				this->panel17->Visible = false;
				this->panel18->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel22->Visible = false;
				this->panel23->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->classesInformation->Visible = false;
				this->coursesInformation->Visible = false;
				this->studentsListClass->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardClass->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;
				sideBarTopFlag_HomeProfile = false;
				sideBarTopFlag_SemesterModification = false;
				sideBarTopFlag_SemesterViewer = false;
				sideBarTopFlag_ImportExport = false;
				sideBarTopFlag_CreateStaff = false;

				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}

		}

			// Import Scoreboard
		private: System::Void bunifuThinButton237_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->panel23->Visible)
			{

				this->sidebarTop->Visible = true;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton27->Visible = false;
				this->bunifuThinButton28->Visible = false;
				this->bunifuThinButton215->Visible = false;
				this->bunifuThinButton216->Visible = false;
				this->bunifuThinButton217->Visible = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton237->Visible = true;
				this->bunifuThinButton238->Visible = true;
				this->bunifuThinButton239->Visible = false;
				this->panel5->Visible = false;
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->panel14->Visible = false;
				this->panel17->Visible = false;
				this->panel18->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel22->Visible = true;
				this->panel23->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->classesInformation->Visible = false;
				this->coursesInformation->Visible = false;
				this->studentsListClass->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardClass->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;
				sideBarTopFlag_HomeProfile = false;
				sideBarTopFlag_SemesterModification = false;
				sideBarTopFlag_SemesterViewer = false;
				sideBarTopFlag_CreateStaff = false;

				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}

		}

			// Export Students List
		private: System::Void bunifuThinButton238_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->panel22->Visible)
			{

				this->sidebarTop->Visible = true;
				this->bunifuThinButton21->Visible = false;
				this->bunifuThinButton23->Visible = false;
				this->bunifuThinButton27->Visible = false;
				this->bunifuThinButton28->Visible = false;
				this->bunifuThinButton215->Visible = false;
				this->bunifuThinButton216->Visible = false;
				this->bunifuThinButton217->Visible = false;
				this->bunifuThinButton218->Visible = false;
				this->bunifuThinButton237->Visible = true;
				this->bunifuThinButton238->Visible = true;
				this->bunifuThinButton239->Visible = false;
				this->panel5->Visible = false;
				this->panel10->Visible = false;
				this->panel12->Visible = false;
				this->panel14->Visible = false;
				this->panel17->Visible = false;
				this->panel18->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel22->Visible = false;
				this->panel23->Visible = true;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->classesInformation->Visible = false;
				this->coursesInformation->Visible = false;
				this->studentsListClass->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardClass->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;
				sideBarTopFlag_HomeProfile = false;
				sideBarTopFlag_SemesterModification = false;
				sideBarTopFlag_SemesterViewer = false;
				sideBarTopFlag_CreateStaff = false;

				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

				this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}

		}

			// Students List Class: Update / Edit
		private: System::Void kryptonDataGridView6_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

			if (e->ColumnIndex == 7)
			{

				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = true;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->studentsListClass->Visible = true;
				this->studentsListCourse->Visible = false;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}

		}

			// Students List Course: Update / Edit
		private: System::Void kryptonDataGridView5_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

			if (e->ColumnIndex == 7)
			{

				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = true;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->studentsListClass->Visible = false;
				this->studentsListCourse->Visible = true;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}

		}

			// Scoreboard List Course: Update / Edit
		private: System::Void kryptonDataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

			if (e->ColumnIndex == 7)
			{

				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel24->Visible = true;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = false;
				this->scoreboardClass->Visible = false;
				this->scoreboardCourse->Visible = true;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::No;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}

		}

			// Courses Information: Update / Edit
		private: System::Void kryptonDataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

			if (e->ColumnIndex == 10)
			{

				this->panel5->Visible = false;
				this->panel12->Visible = false;
				this->panel10->Visible = false;
				this->panel14->Visible = false;
				this->panel17->Visible = false;
				this->panel18->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel22->Visible = false;
				this->panel23->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = false;
				this->panel29->Visible = true;
				this->classesInformation->Visible = false;
				this->coursesInformation->Visible = true;
				this->studentsListClass->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardClass->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}

		}

			// Classes Information: Update / Edit
		private: System::Void kryptonDataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

			if (e->ColumnIndex == 4)
			{

				this->panel5->Visible = false;
				this->panel12->Visible = false;
				this->panel10->Visible = false;
				this->panel14->Visible = false;
				this->panel17->Visible = false;
				this->panel18->Visible = false;
				this->panel20->Visible = false;
				this->panel21->Visible = false;
				this->panel22->Visible = false;
				this->panel23->Visible = false;
				this->panel24->Visible = false;
				this->panel25->Visible = false;
				this->panel26->Visible = false;
				this->panel28->Visible = true;
				this->panel29->Visible = false;
				this->classesInformation->Visible = true;
				this->coursesInformation->Visible = false;
				this->studentsListClass->Visible = false;
				this->studentsListCourse->Visible = false;
				this->scoreboardClass->Visible = false;
				this->scoreboardCourse->Visible = false;
				this->comboBox13->Visible = false;
				this->comboBox14->Visible = false;
				this->comboBox15->Visible = false;
				this->comboBox16->Visible = false;
				this->label48->Visible = false;
				this->label49->Visible = false;
				this->label50->Visible = false;
				this->label51->Visible = false;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;

				this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton218->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton218->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton218->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton218->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton218->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton218->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton237->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton237->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton237->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton237->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton237->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton238->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuThinButton238->ActiveFillColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton238->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton238->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
				this->bunifuThinButton238->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton238->IdleLineColor = System::Drawing::Color::White;

				this->bunifuThinButton239->Cursor = System::Windows::Forms::Cursors::No;
				this->bunifuThinButton239->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->ActiveForecolor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->ActiveLineColor = System::Drawing::Color::Azure;
				this->bunifuThinButton239->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->bunifuThinButton239->IdleForecolor = System::Drawing::Color::White;
				this->bunifuThinButton239->IdleLineColor = System::Drawing::Color::White;

			}

		}

			// Time Display
		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

			this->label62->Text = System::Convert::ToString(DateTime::Now);

		}

			// Close Button
		private: System::Void bunifuThinButton250_Click(System::Object^ sender, System::EventArgs^ e) {

			this->panel29->Visible = false;

		}

			// Close Button
		private: System::Void bunifuThinButton248_Click(System::Object^ sender, System::EventArgs^ e) {

			this->panel28->Visible = false;

		}

			// Close Button
		private: System::Void bunifuThinButton240_Click(System::Object^ sender, System::EventArgs^ e) {

			this->panel24->Visible = false;

		}

			// Close Button
		private: System::Void bunifuThinButton242_Click(System::Object^ sender, System::EventArgs^ e) {

			this->panel25->Visible = false;

		}

			// Close Button
		private: System::Void bunifuThinButton244_Click(System::Object^ sender, System::EventArgs^ e) {

			this->panel26->Visible = false;

		}
	};
}
