#pragma once
#using <System.dll>
#using <System.Windows.Forms.dll>
#using <System.Drawing.dll>

namespace ltfe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

		
	private:
	   FolderBrowserDialog^ folderBrowserDialog1;
	   OpenFileDialog^ openFileDialog1;
	   RichTextBox^ richTextBox1;
	   MainMenu^ mainMenu1;
	   MenuItem^ fileMenuItem;
	   MenuItem^ openMenuItem;
	   MenuItem^ folderMenuItem;
	   MenuItem^ closeMenuItem;
	   String^ openFileName;
	   String^ folderName;
	   String^ Chosen_File;
	   bool fileOpened;
	   
	private: System::Windows::Forms::TabControl^  MajorTabs;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabControl^  Las2whatevers;

	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;

	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::TabControl^  LASoperations;


	private: System::Windows::Forms::TabPage^  tabPage10;
	private: System::Windows::Forms::TabPage^  tabPage11;
	private: System::Windows::Forms::TabPage^  tabPage12;
	private: System::Windows::Forms::TabPage^  tabPage13;
	private: System::Windows::Forms::TabPage^  tabPage14;
	private: System::Windows::Forms::TabPage^  tabPage15;
	private: System::Windows::Forms::TabPage^  tabPage16;
	private: System::Windows::Forms::TabControl^  filetoLAS;

	private: System::Windows::Forms::TabPage^  tabPage17;
	private: System::Windows::Forms::TabPage^  tabPage18;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  InfoStatus;

	private: System::Windows::Forms::ToolStripProgressBar^  ProgressBar;







	private: System::Windows::Forms::Button^  PathButton;

	private: System::Windows::Forms::Button^  RunButton;
	private: System::Windows::Forms::Button^  HelpButton;



	private: System::Windows::Forms::TabPage^  tabPage19;
	private: System::Windows::Forms::TabControl^  aboutnhelp;

	private: System::Windows::Forms::TabPage^  tabPage20;
	private: System::Windows::Forms::TabPage^  tabPage21;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::RichTextBox^  ltfe_help;
	private: System::Windows::Forms::Label^  label1;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Button^  DEMOutputButton;

	private: System::Windows::Forms::TextBox^  DEMOutputBox;


	private: System::Windows::Forms::Label^  DEMOutputLabel;

	private: System::Windows::Forms::Button^  DEMInputButton;

	private: System::Windows::Forms::TextBox^  DEMInputBox;

	private: System::Windows::Forms::Label^  DEMInputLabel;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::RadioButton^  DEM_TIFformat;

private: System::Windows::Forms::RadioButton^  DEM_PNGformat;


private: System::Windows::Forms::RadioButton^  DEM_JPGformat;


private: System::Windows::Forms::RadioButton^  DEM_BILformat;
private: System::Windows::Forms::RadioButton^  DEM_allreturns;
private: System::Windows::Forms::RadioButton^  DEM_lastreturns;






private: System::Windows::Forms::RadioButton^  DEM_firstreturns;





private: System::Windows::Forms::PictureBox^  DEMChildArrow;
private: System::Windows::Forms::GroupBox^  DEM_Returnsbox;





private: System::Windows::Forms::GroupBox^  DEMFormat;
private: System::Windows::Forms::GroupBox^  DEMKMLGenerationbox;



private: System::Windows::Forms::ComboBox^  latitudebox;
private: System::Windows::Forms::RadioButton^  kmloff;


private: System::Windows::Forms::RadioButton^  kmlon;

private: System::Windows::Forms::NumericUpDown^  longitudebox;

private: System::Windows::Forms::ComboBox^  datumbox;

private: System::Windows::Forms::LinkLabel^  utmgridlink;
private: System::Windows::Forms::PictureBox^  UTMGlobe;
private: System::Windows::Forms::Button^  openlocation;
private: System::Windows::Forms::Button^  openfile;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::RadioButton^  radioButton1;
private: System::Windows::Forms::RadioButton^  radioButton3;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::RadioButton^  radioButton2;
private: System::Windows::Forms::RadioButton^  radioButton4;
private: System::Windows::Forms::RadioButton^  radioButton5;
private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
private: System::Windows::Forms::CheckBox^  checkBox4;
private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
private: System::Windows::Forms::CheckBox^  checkBox5;
private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
private: System::Windows::Forms::CheckBox^  checkBox6;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::RadioButton^  radioButton6;
private: System::Windows::Forms::RadioButton^  radioButton7;
private: System::Windows::Forms::RadioButton^  radioButton8;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::RadioButton^  radioButton11;
private: System::Windows::Forms::RadioButton^  radioButton9;
private: System::Windows::Forms::RadioButton^  radioButton10;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::RadioButton^  radioButton12;
private: System::Windows::Forms::RadioButton^  radioButton15;
private: System::Windows::Forms::RadioButton^  radioButton14;
private: System::Windows::Forms::RadioButton^  radioButton13;
private: System::Windows::Forms::RadioButton^  radioButton18;
private: System::Windows::Forms::RadioButton^  radioButton17;
private: System::Windows::Forms::RadioButton^  radioButton16;
private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::CheckBox^  checkBox7;
private: System::Windows::Forms::RadioButton^  radioButton25;
private: System::Windows::Forms::RadioButton^  radioButton24;
private: System::Windows::Forms::RadioButton^  radioButton23;
private: System::Windows::Forms::RadioButton^  radioButton22;
private: System::Windows::Forms::RadioButton^  radioButton21;
private: System::Windows::Forms::RadioButton^  radioButton20;
private: System::Windows::Forms::RadioButton^  radioButton19;
private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::ComboBox^  comboBox12;
private: System::Windows::Forms::ComboBox^  comboBox11;
private: System::Windows::Forms::ComboBox^  comboBox10;
private: System::Windows::Forms::ComboBox^  comboBox9;
private: System::Windows::Forms::ComboBox^  comboBox8;
private: System::Windows::Forms::ComboBox^  comboBox7;
private: System::Windows::Forms::ComboBox^  comboBox6;
private: System::Windows::Forms::ComboBox^  comboBox5;
private: System::Windows::Forms::ComboBox^  comboBox4;
private: System::Windows::Forms::ComboBox^  comboBox3;
private: System::Windows::Forms::ComboBox^  comboBox2;
private: System::Windows::Forms::ComboBox^  comboBox14;
private: System::Windows::Forms::ComboBox^  comboBox13;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::CheckBox^  checkBox8;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
private: System::Windows::Forms::GroupBox^  groupBox9;
private: System::Windows::Forms::RadioButton^  radioButton26;
private: System::Windows::Forms::RadioButton^  radioButton27;
private: System::Windows::Forms::RadioButton^  radioButton28;
private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::RadioButton^  radioButton29;
private: System::Windows::Forms::RadioButton^  radioButton30;
private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::PictureBox^  pictureBox6;
private: System::Windows::Forms::CheckBox^  checkBox9;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::PictureBox^  pictureBox7;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::CheckBox^  checkBox10;
private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::RadioButton^  radioButton32;
private: System::Windows::Forms::PictureBox^  pictureBox8;
private: System::Windows::Forms::RichTextBox^  richTextBox2;




	private: System::ComponentModel::IContainer^  components;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->MajorTabs = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->Las2whatevers = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->DEMKMLGenerationbox = (gcnew System::Windows::Forms::GroupBox());
			this->UTMGlobe = (gcnew System::Windows::Forms::PictureBox());
			this->utmgridlink = (gcnew System::Windows::Forms::LinkLabel());
			this->latitudebox = (gcnew System::Windows::Forms::ComboBox());
			this->kmloff = (gcnew System::Windows::Forms::RadioButton());
			this->kmlon = (gcnew System::Windows::Forms::RadioButton());
			this->longitudebox = (gcnew System::Windows::Forms::NumericUpDown());
			this->datumbox = (gcnew System::Windows::Forms::ComboBox());
			this->DEM_Returnsbox = (gcnew System::Windows::Forms::GroupBox());
			this->DEM_firstreturns = (gcnew System::Windows::Forms::RadioButton());
			this->DEM_lastreturns = (gcnew System::Windows::Forms::RadioButton());
			this->DEM_allreturns = (gcnew System::Windows::Forms::RadioButton());
			this->DEMFormat = (gcnew System::Windows::Forms::GroupBox());
			this->DEM_BILformat = (gcnew System::Windows::Forms::RadioButton());
			this->DEM_JPGformat = (gcnew System::Windows::Forms::RadioButton());
			this->DEM_PNGformat = (gcnew System::Windows::Forms::RadioButton());
			this->DEM_TIFformat = (gcnew System::Windows::Forms::RadioButton());
			this->DEMChildArrow = (gcnew System::Windows::Forms::PictureBox());
			this->DEMOutputButton = (gcnew System::Windows::Forms::Button());
			this->DEMOutputBox = (gcnew System::Windows::Forms::TextBox());
			this->DEMOutputLabel = (gcnew System::Windows::Forms::Label());
			this->DEMInputButton = (gcnew System::Windows::Forms::Button());
			this->DEMInputBox = (gcnew System::Windows::Forms::TextBox());
			this->DEMInputLabel = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton25 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton24 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton23 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton22 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton21 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->LASoperations = (gcnew System::Windows::Forms::TabControl());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton26 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton27 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton28 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton29 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton30 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton32 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->filetoLAS = (gcnew System::Windows::Forms::TabControl());
			this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabPage18 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage19 = (gcnew System::Windows::Forms::TabPage());
			this->aboutnhelp = (gcnew System::Windows::Forms::TabControl());
			this->tabPage20 = (gcnew System::Windows::Forms::TabPage());
			this->ltfe_help = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage21 = (gcnew System::Windows::Forms::TabPage());
			this->openlocation = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->InfoStatus = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->ProgressBar = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->PathButton = (gcnew System::Windows::Forms::Button());
			this->RunButton = (gcnew System::Windows::Forms::Button());
			this->HelpButton = (gcnew System::Windows::Forms::Button());
			this->openfile = (gcnew System::Windows::Forms::Button());
			this->MajorTabs->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->Las2whatevers->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->DEMKMLGenerationbox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->UTMGlobe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->longitudebox))->BeginInit();
			this->DEM_Returnsbox->SuspendLayout();
			this->DEMFormat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->DEMChildArrow))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->tabPage8->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->tabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->LASoperations->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->BeginInit();
			this->groupBox9->SuspendLayout();
			this->groupBox10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->tabPage11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->filetoLAS->SuspendLayout();
			this->tabPage17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->tabPage19->SuspendLayout();
			this->aboutnhelp->SuspendLayout();
			this->tabPage20->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// MajorTabs
			// 
			this->MajorTabs->Controls->Add(this->tabPage1);
			this->MajorTabs->Controls->Add(this->tabPage2);
			this->MajorTabs->Controls->Add(this->tabPage3);
			this->MajorTabs->Controls->Add(this->tabPage19);
			this->MajorTabs->HotTrack = true;
			this->MajorTabs->Location = System::Drawing::Point(0, 0);
			this->MajorTabs->Name = L"MajorTabs";
			this->MajorTabs->SelectedIndex = 0;
			this->MajorTabs->ShowToolTips = true;
			this->MajorTabs->Size = System::Drawing::Size(790, 546);
			this->MajorTabs->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->Las2whatevers);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(782, 520);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"LAS To (File)...";
			this->tabPage1->ToolTipText = L"Contains modules which convert LAS data to other File Formats";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// Las2whatevers
			// 
			this->Las2whatevers->Controls->Add(this->tabPage4);
			this->Las2whatevers->Controls->Add(this->tabPage5);
			this->Las2whatevers->Controls->Add(this->tabPage7);
			this->Las2whatevers->Controls->Add(this->tabPage8);
			this->Las2whatevers->Controls->Add(this->tabPage9);
			this->Las2whatevers->HotTrack = true;
			this->Las2whatevers->Location = System::Drawing::Point(0, 0);
			this->Las2whatevers->Name = L"Las2whatevers";
			this->Las2whatevers->SelectedIndex = 0;
			this->Las2whatevers->ShowToolTips = true;
			this->Las2whatevers->Size = System::Drawing::Size(786, 278);
			this->Las2whatevers->TabIndex = 0;
			this->Las2whatevers->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::Las2whatevers_SelectedIndexChanged);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->DEMKMLGenerationbox);
			this->tabPage4->Controls->Add(this->DEM_Returnsbox);
			this->tabPage4->Controls->Add(this->DEMFormat);
			this->tabPage4->Controls->Add(this->DEMChildArrow);
			this->tabPage4->Controls->Add(this->DEMOutputButton);
			this->tabPage4->Controls->Add(this->DEMOutputBox);
			this->tabPage4->Controls->Add(this->DEMOutputLabel);
			this->tabPage4->Controls->Add(this->DEMInputButton);
			this->tabPage4->Controls->Add(this->DEMInputBox);
			this->tabPage4->Controls->Add(this->DEMInputLabel);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(778, 252);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"*.DEM (Digital Elevation Model)";
			this->tabPage4->ToolTipText = L"Rasterize LAS data into a DEM";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// DEMKMLGenerationbox
			// 
			this->DEMKMLGenerationbox->Controls->Add(this->UTMGlobe);
			this->DEMKMLGenerationbox->Controls->Add(this->utmgridlink);
			this->DEMKMLGenerationbox->Controls->Add(this->latitudebox);
			this->DEMKMLGenerationbox->Controls->Add(this->kmloff);
			this->DEMKMLGenerationbox->Controls->Add(this->kmlon);
			this->DEMKMLGenerationbox->Controls->Add(this->longitudebox);
			this->DEMKMLGenerationbox->Controls->Add(this->datumbox);
			this->DEMKMLGenerationbox->Location = System::Drawing::Point(9, 156);
			this->DEMKMLGenerationbox->Name = L"DEMKMLGenerationbox";
			this->DEMKMLGenerationbox->Size = System::Drawing::Size(322, 96);
			this->DEMKMLGenerationbox->TabIndex = 8;
			this->DEMKMLGenerationbox->TabStop = false;
			this->DEMKMLGenerationbox->Text = L"KML Generation";
			// 
			// UTMGlobe
			// 
			this->UTMGlobe->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"UTMGlobe.Image")));
			this->UTMGlobe->Location = System::Drawing::Point(6, 39);
			this->UTMGlobe->Name = L"UTMGlobe";
			this->UTMGlobe->Size = System::Drawing::Size(14, 14);
			this->UTMGlobe->TabIndex = 6;
			this->UTMGlobe->TabStop = false;
			// 
			// utmgridlink
			// 
			this->utmgridlink->AutoSize = true;
			this->utmgridlink->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->utmgridlink->Location = System::Drawing::Point(26, 39);
			this->utmgridlink->Name = L"utmgridlink";
			this->utmgridlink->Size = System::Drawing::Size(200, 13);
			this->utmgridlink->TabIndex = 2;
			this->utmgridlink->TabStop = true;
			this->utmgridlink->Text = L"UTM Grid (Longitdude | Latitude | Datum)";
			this->utmgridlink->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// latitudebox
			// 
			this->latitudebox->FormattingEnabled = true;
			this->latitudebox->Items->AddRange(gcnew cli::array< System::Object^  >(20) {L"X", L"W", L"V", L"U", L"T", L"S", L"R", L"Q", 
				L"P", L"N", L"M", L"L", L"K", L"J", L"H", L"G", L"F", L"E", L"D", L"C"});
			this->latitudebox->Location = System::Drawing::Point(87, 55);
			this->latitudebox->Name = L"latitudebox";
			this->latitudebox->Size = System::Drawing::Size(90, 21);
			this->latitudebox->TabIndex = 4;
			this->latitudebox->Text = L"Latitude Zone";
			this->latitudebox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
			// 
			// kmloff
			// 
			this->kmloff->AutoSize = true;
			this->kmloff->Checked = true;
			this->kmloff->Location = System::Drawing::Point(51, 19);
			this->kmloff->Name = L"kmloff";
			this->kmloff->Size = System::Drawing::Size(39, 17);
			this->kmloff->TabIndex = 1;
			this->kmloff->TabStop = true;
			this->kmloff->Text = L"Off";
			this->kmloff->UseVisualStyleBackColor = true;
			// 
			// kmlon
			// 
			this->kmlon->AutoSize = true;
			this->kmlon->Location = System::Drawing::Point(6, 19);
			this->kmlon->Name = L"kmlon";
			this->kmlon->Size = System::Drawing::Size(39, 17);
			this->kmlon->TabIndex = 0;
			this->kmlon->TabStop = true;
			this->kmlon->Text = L"On";
			this->kmlon->UseVisualStyleBackColor = true;
			// 
			// longitudebox
			// 
			this->longitudebox->Location = System::Drawing::Point(6, 55);
			this->longitudebox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {60, 0, 0, 0});
			this->longitudebox->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->longitudebox->Name = L"longitudebox";
			this->longitudebox->Size = System::Drawing::Size(75, 20);
			this->longitudebox->TabIndex = 3;
			this->longitudebox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->longitudebox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {30, 0, 0, 0});
			// 
			// datumbox
			// 
			this->datumbox->FormattingEnabled = true;
			this->datumbox->Items->AddRange(gcnew cli::array< System::Object^  >(23) {L"[1] Airy", L"[2] Australian National", L"[3] Bessel 1841", 
				L"[4] Bessel 1841 (Nambia)", L"[5] Clarke 1866 (NAD-27)", L"[6] Clarke 1880", L"[7] Everest 1830", L"[8] Fischer 1960 (Mercury)", 
				L"[9] Fischer 1968", L"[10] GRS 1967", L"[11] GRS 1980 (NAD-83)", L"[12] Helmert 1906", L"[13] Hough", L"[14] International", 
				L"[15] Krassovsky", L"[16] Modified Airy", L"[17] Modified Everest", L"[18] Modified Fischer 1960", L"[19] South American 1969", 
				L"[20] WGS 60", L"[21] WGS 66", L"[22] WGS 72", L"[23] WGS 84"});
			this->datumbox->Location = System::Drawing::Point(183, 55);
			this->datumbox->Name = L"datumbox";
			this->datumbox->Size = System::Drawing::Size(131, 21);
			this->datumbox->TabIndex = 5;
			this->datumbox->Text = L"Ellipsoid (Datum)";
			// 
			// DEM_Returnsbox
			// 
			this->DEM_Returnsbox->Controls->Add(this->DEM_firstreturns);
			this->DEM_Returnsbox->Controls->Add(this->DEM_lastreturns);
			this->DEM_Returnsbox->Controls->Add(this->DEM_allreturns);
			this->DEM_Returnsbox->Location = System::Drawing::Point(9, 107);
			this->DEM_Returnsbox->Name = L"DEM_Returnsbox";
			this->DEM_Returnsbox->Size = System::Drawing::Size(207, 43);
			this->DEM_Returnsbox->TabIndex = 7;
			this->DEM_Returnsbox->TabStop = false;
			this->DEM_Returnsbox->Text = L"Returns";
			// 
			// DEM_firstreturns
			// 
			this->DEM_firstreturns->AutoSize = true;
			this->DEM_firstreturns->Location = System::Drawing::Point(48, 20);
			this->DEM_firstreturns->Name = L"DEM_firstreturns";
			this->DEM_firstreturns->Size = System::Drawing::Size(68, 17);
			this->DEM_firstreturns->TabIndex = 1;
			this->DEM_firstreturns->Text = L"First Only";
			this->DEM_firstreturns->UseVisualStyleBackColor = true;
			// 
			// DEM_lastreturns
			// 
			this->DEM_lastreturns->AutoSize = true;
			this->DEM_lastreturns->Location = System::Drawing::Point(122, 19);
			this->DEM_lastreturns->Name = L"DEM_lastreturns";
			this->DEM_lastreturns->Size = System::Drawing::Size(69, 17);
			this->DEM_lastreturns->TabIndex = 2;
			this->DEM_lastreturns->Text = L"Last Only";
			this->DEM_lastreturns->UseVisualStyleBackColor = true;
			// 
			// DEM_allreturns
			// 
			this->DEM_allreturns->AutoSize = true;
			this->DEM_allreturns->Checked = true;
			this->DEM_allreturns->Location = System::Drawing::Point(6, 19);
			this->DEM_allreturns->Name = L"DEM_allreturns";
			this->DEM_allreturns->Size = System::Drawing::Size(36, 17);
			this->DEM_allreturns->TabIndex = 0;
			this->DEM_allreturns->TabStop = true;
			this->DEM_allreturns->Text = L"All";
			this->DEM_allreturns->UseVisualStyleBackColor = true;
			// 
			// DEMFormat
			// 
			this->DEMFormat->Controls->Add(this->DEM_BILformat);
			this->DEMFormat->Controls->Add(this->DEM_JPGformat);
			this->DEMFormat->Controls->Add(this->DEM_PNGformat);
			this->DEMFormat->Controls->Add(this->DEM_TIFformat);
			this->DEMFormat->Location = System::Drawing::Point(43, 63);
			this->DEMFormat->Name = L"DEMFormat";
			this->DEMFormat->Size = System::Drawing::Size(233, 38);
			this->DEMFormat->TabIndex = 6;
			this->DEMFormat->TabStop = false;
			this->DEMFormat->Text = L"Format";
			// 
			// DEM_BILformat
			// 
			this->DEM_BILformat->AutoSize = true;
			this->DEM_BILformat->Location = System::Drawing::Point(6, 15);
			this->DEM_BILformat->Name = L"DEM_BILformat";
			this->DEM_BILformat->Size = System::Drawing::Size(48, 17);
			this->DEM_BILformat->TabIndex = 0;
			this->DEM_BILformat->TabStop = true;
			this->DEM_BILformat->Text = L"*.BIL";
			this->DEM_BILformat->UseVisualStyleBackColor = true;
			// 
			// DEM_JPGformat
			// 
			this->DEM_JPGformat->AutoSize = true;
			this->DEM_JPGformat->Location = System::Drawing::Point(60, 15);
			this->DEM_JPGformat->Name = L"DEM_JPGformat";
			this->DEM_JPGformat->Size = System::Drawing::Size(52, 17);
			this->DEM_JPGformat->TabIndex = 1;
			this->DEM_JPGformat->TabStop = true;
			this->DEM_JPGformat->Text = L"*.JPG";
			this->DEM_JPGformat->UseVisualStyleBackColor = true;
			// 
			// DEM_PNGformat
			// 
			this->DEM_PNGformat->AutoSize = true;
			this->DEM_PNGformat->Location = System::Drawing::Point(118, 15);
			this->DEM_PNGformat->Name = L"DEM_PNGformat";
			this->DEM_PNGformat->Size = System::Drawing::Size(55, 17);
			this->DEM_PNGformat->TabIndex = 2;
			this->DEM_PNGformat->TabStop = true;
			this->DEM_PNGformat->Text = L"*.PNG";
			this->DEM_PNGformat->UseVisualStyleBackColor = true;
			// 
			// DEM_TIFformat
			// 
			this->DEM_TIFformat->AutoSize = true;
			this->DEM_TIFformat->Location = System::Drawing::Point(179, 15);
			this->DEM_TIFformat->Name = L"DEM_TIFformat";
			this->DEM_TIFformat->Size = System::Drawing::Size(48, 17);
			this->DEM_TIFformat->TabIndex = 3;
			this->DEM_TIFformat->TabStop = true;
			this->DEM_TIFformat->Text = L"*.TIF";
			this->DEM_TIFformat->UseVisualStyleBackColor = true;
			// 
			// DEMChildArrow
			// 
			this->DEMChildArrow->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"DEMChildArrow.Image")));
			this->DEMChildArrow->Location = System::Drawing::Point(9, 56);
			this->DEMChildArrow->Name = L"DEMChildArrow";
			this->DEMChildArrow->Size = System::Drawing::Size(28, 28);
			this->DEMChildArrow->TabIndex = 21;
			this->DEMChildArrow->TabStop = false;
			// 
			// DEMOutputButton
			// 
			this->DEMOutputButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"DEMOutputButton.Image")));
			this->DEMOutputButton->Location = System::Drawing::Point(305, 36);
			this->DEMOutputButton->Name = L"DEMOutputButton";
			this->DEMOutputButton->Size = System::Drawing::Size(26, 24);
			this->DEMOutputButton->TabIndex = 5;
			this->DEMOutputButton->UseVisualStyleBackColor = true;
			this->DEMOutputButton->Click += gcnew System::EventHandler(this, &Form1::DEMOutputButton_Click);
			// 
			// DEMOutputBox
			// 
			this->DEMOutputBox->Location = System::Drawing::Point(43, 37);
			this->DEMOutputBox->Name = L"DEMOutputBox";
			this->DEMOutputBox->Size = System::Drawing::Size(256, 20);
			this->DEMOutputBox->TabIndex = 4;
			// 
			// DEMOutputLabel
			// 
			this->DEMOutputLabel->AutoSize = true;
			this->DEMOutputLabel->Location = System::Drawing::Point(6, 40);
			this->DEMOutputLabel->Name = L"DEMOutputLabel";
			this->DEMOutputLabel->Size = System::Drawing::Size(39, 13);
			this->DEMOutputLabel->TabIndex = 3;
			this->DEMOutputLabel->Text = L"Output";
			// 
			// DEMInputButton
			// 
			this->DEMInputButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"DEMInputButton.Image")));
			this->DEMInputButton->Location = System::Drawing::Point(305, 6);
			this->DEMInputButton->Name = L"DEMInputButton";
			this->DEMInputButton->Size = System::Drawing::Size(26, 24);
			this->DEMInputButton->TabIndex = 2;
			this->DEMInputButton->UseVisualStyleBackColor = true;
			this->DEMInputButton->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// DEMInputBox
			// 
			this->DEMInputBox->AllowDrop = true;
			this->DEMInputBox->Location = System::Drawing::Point(43, 9);
			this->DEMInputBox->Name = L"DEMInputBox";
			this->DEMInputBox->Size = System::Drawing::Size(256, 20);
			this->DEMInputBox->TabIndex = 1;
			// 
			// DEMInputLabel
			// 
			this->DEMInputLabel->AutoSize = true;
			this->DEMInputLabel->Location = System::Drawing::Point(6, 12);
			this->DEMInputLabel->Name = L"DEMInputLabel";
			this->DEMInputLabel->Size = System::Drawing::Size(31, 13);
			this->DEMInputLabel->TabIndex = 0;
			this->DEMInputLabel->Text = L"Input";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->groupBox3);
			this->tabPage5->Controls->Add(this->groupBox2);
			this->tabPage5->Controls->Add(this->groupBox1);
			this->tabPage5->Controls->Add(this->pictureBox1);
			this->tabPage5->Controls->Add(this->button5);
			this->tabPage5->Controls->Add(this->textBox5);
			this->tabPage5->Controls->Add(this->label5);
			this->tabPage5->Controls->Add(this->button6);
			this->tabPage5->Controls->Add(this->textBox6);
			this->tabPage5->Controls->Add(this->label6);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(778, 252);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"*.ISO (Isocontours)";
			this->tabPage5->ToolTipText = L"Vectorize LAS data into Isocontours";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->Location = System::Drawing::Point(9, 107);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(207, 43);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Returns";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(48, 20);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(68, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"First Only";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(122, 19);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(69, 17);
			this->radioButton4->TabIndex = 2;
			this->radioButton4->Text = L"Last Only";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Checked = true;
			this->radioButton5->Location = System::Drawing::Point(6, 19);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(36, 17);
			this->radioButton5->TabIndex = 0;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"All";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Controls->Add(this->numericUpDown7);
			this->groupBox2->Controls->Add(this->numericUpDown6);
			this->groupBox2->Controls->Add(this->checkBox6);
			this->groupBox2->Controls->Add(this->numericUpDown5);
			this->groupBox2->Controls->Add(this->checkBox5);
			this->groupBox2->Controls->Add(this->numericUpDown4);
			this->groupBox2->Controls->Add(this->checkBox4);
			this->groupBox2->Controls->Add(this->numericUpDown3);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Location = System::Drawing::Point(9, 156);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(355, 96);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Contour Modifications";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(314, 48);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(38, 40);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(250, 69);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100000, 0, 0, 0});
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(60, 20);
			this->numericUpDown7->TabIndex = 10;
			this->numericUpDown7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(250, 43);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100000, 0, 0, 0});
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(60, 20);
			this->numericUpDown6->TabIndex = 9;
			this->numericUpDown6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(168, 42);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(58, 17);
			this->checkBox6->TabIndex = 8;
			this->checkBox6->Text = L"Range";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(102, 16);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100000, 0, 0, 0});
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(60, 20);
			this->numericUpDown5->TabIndex = 1;
			this->numericUpDown5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(6, 19);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(90, 17);
			this->checkBox5->TabIndex = 0;
			this->checkBox5->Text = L"# of Contours";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(250, 16);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100000, 0, 0, 0});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(60, 20);
			this->numericUpDown4->TabIndex = 7;
			this->numericUpDown4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(168, 19);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(76, 17);
			this->checkBox4->TabIndex = 6;
			this->checkBox4->Text = L"Clean Size";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(102, 68);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100000, 0, 0, 0});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(60, 20);
			this->numericUpDown3->TabIndex = 5;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(6, 65);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(84, 17);
			this->checkBox3->TabIndex = 4;
			this->checkBox3->Text = L"Simplify Size";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(102, 42);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100000, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(60, 20);
			this->numericUpDown2->TabIndex = 3;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown2_ValueChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(6, 42);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(65, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Spacing";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Location = System::Drawing::Point(43, 63);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(114, 38);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Format";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 15);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(54, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"*.SHP";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(60, 15);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(53, 17);
			this->radioButton3->TabIndex = 1;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"*.TXT";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(9, 56);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(28, 28);
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(305, 36);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(26, 24);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(43, 37);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(256, 20);
			this->textBox5->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Output";
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(305, 6);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(26, 24);
			this->button6->TabIndex = 2;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(43, 9);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(256, 20);
			this->textBox6->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Input";
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->richTextBox2);
			this->tabPage7->Controls->Add(this->numericUpDown1);
			this->tabPage7->Controls->Add(this->checkBox1);
			this->tabPage7->Controls->Add(this->button2);
			this->tabPage7->Controls->Add(this->textBox2);
			this->tabPage7->Controls->Add(this->label2);
			this->tabPage7->Controls->Add(this->button1);
			this->tabPage7->Controls->Add(this->label1);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(778, 252);
			this->tabPage7->TabIndex = 3;
			this->tabPage7->Text = L"*.SHP (ShapeFile)";
			this->tabPage7->ToolTipText = L"Vectorize LAS data into a Shapefile";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// richTextBox2
			// 
			this->richTextBox2->EnableAutoDragDrop = true;
			this->richTextBox2->Location = System::Drawing::Point(43, 9);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(256, 20);
			this->richTextBox2->TabIndex = 8;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox2_TextChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1024, 0, 0, 0});
			this->numericUpDown1->Location = System::Drawing::Point(127, 67);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {20480, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(99, 20);
			this->numericUpDown1->TabIndex = 7;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {2048, 0, 0, 0});
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(9, 68);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(112, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Points Per Record";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(305, 36);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(26, 24);
			this->button2->TabIndex = 5;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->AllowDrop = true;
			this->textBox2->Location = System::Drawing::Point(43, 37);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(256, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Output";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// button1
			// 
			this->button1->AllowDrop = true;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(305, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(26, 24);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Input";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->groupBox4);
			this->tabPage8->Controls->Add(this->groupBox5);
			this->tabPage8->Controls->Add(this->pictureBox3);
			this->tabPage8->Controls->Add(this->button7);
			this->tabPage8->Controls->Add(this->textBox7);
			this->tabPage8->Controls->Add(this->label7);
			this->tabPage8->Controls->Add(this->button8);
			this->tabPage8->Controls->Add(this->textBox8);
			this->tabPage8->Controls->Add(this->label8);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(778, 252);
			this->tabPage8->TabIndex = 4;
			this->tabPage8->Text = L"*.TIN (Triangulation)";
			this->tabPage8->ToolTipText = L"Calculate Triangulation data and export to SHP or OBJ";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton6);
			this->groupBox4->Controls->Add(this->radioButton7);
			this->groupBox4->Controls->Add(this->radioButton8);
			this->groupBox4->Location = System::Drawing::Point(9, 107);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(207, 43);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Returns";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(48, 20);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(68, 17);
			this->radioButton6->TabIndex = 1;
			this->radioButton6->Text = L"First Only";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(122, 19);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(69, 17);
			this->radioButton7->TabIndex = 2;
			this->radioButton7->Text = L"Last Only";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Checked = true;
			this->radioButton8->Location = System::Drawing::Point(6, 19);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(36, 17);
			this->radioButton8->TabIndex = 0;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"All";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton11);
			this->groupBox5->Controls->Add(this->radioButton9);
			this->groupBox5->Controls->Add(this->radioButton10);
			this->groupBox5->Location = System::Drawing::Point(43, 63);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(183, 38);
			this->groupBox5->TabIndex = 6;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Format";
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(6, 15);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(52, 17);
			this->radioButton11->TabIndex = 0;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"*.OBJ";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(64, 15);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(54, 17);
			this->radioButton9->TabIndex = 1;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"*.SHP";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(124, 15);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(53, 17);
			this->radioButton10->TabIndex = 2;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"*.TXT";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(9, 56);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(28, 28);
			this->pictureBox3->TabIndex = 26;
			this->pictureBox3->TabStop = false;
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(305, 36);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(26, 24);
			this->button7->TabIndex = 5;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(43, 37);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(256, 20);
			this->textBox7->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 40);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Output";
			// 
			// button8
			// 
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(305, 6);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(26, 24);
			this->button8->TabIndex = 2;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(43, 9);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(256, 20);
			this->textBox8->TabIndex = 1;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Input";
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->pictureBox4);
			this->tabPage9->Controls->Add(this->checkBox8);
			this->tabPage9->Controls->Add(this->groupBox8);
			this->tabPage9->Controls->Add(this->groupBox7);
			this->tabPage9->Controls->Add(this->groupBox6);
			this->tabPage9->Controls->Add(this->button9);
			this->tabPage9->Controls->Add(this->textBox9);
			this->tabPage9->Controls->Add(this->label9);
			this->tabPage9->Controls->Add(this->button10);
			this->tabPage9->Controls->Add(this->textBox10);
			this->tabPage9->Controls->Add(this->label10);
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(778, 252);
			this->tabPage9->TabIndex = 5;
			this->tabPage9->Text = L"*.TXT (TextFile)";
			this->tabPage9->ToolTipText = L"Convert Binary LAS data into Plain-Text";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(9, 56);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(28, 28);
			this->pictureBox4->TabIndex = 22;
			this->pictureBox4->TabStop = false;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(43, 67);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(100, 17);
			this->checkBox8->TabIndex = 6;
			this->checkBox8->Text = L"Verbose Output";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->textBox3);
			this->groupBox8->Controls->Add(this->comboBox14);
			this->groupBox8->Controls->Add(this->comboBox13);
			this->groupBox8->Controls->Add(this->comboBox12);
			this->groupBox8->Controls->Add(this->comboBox11);
			this->groupBox8->Controls->Add(this->comboBox10);
			this->groupBox8->Controls->Add(this->comboBox9);
			this->groupBox8->Controls->Add(this->comboBox8);
			this->groupBox8->Controls->Add(this->comboBox7);
			this->groupBox8->Controls->Add(this->comboBox6);
			this->groupBox8->Controls->Add(this->comboBox5);
			this->groupBox8->Controls->Add(this->comboBox4);
			this->groupBox8->Controls->Add(this->comboBox3);
			this->groupBox8->Controls->Add(this->comboBox2);
			this->groupBox8->Controls->Add(this->comboBox1);
			this->groupBox8->Location = System::Drawing::Point(379, 6);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(362, 180);
			this->groupBox8->TabIndex = 9;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Text Column Order";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Direct Input";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(75, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(268, 20);
			this->textBox3->TabIndex = 15;
			this->textBox3->Text = L"Example: -xyzric";
			// 
			// comboBox14
			// 
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"[x] X Coordinate", L"[y] Y Coordinate", L"[z] Z Coordinate", 
				L"[R] Red Channel", L"[G] Green Channel", L"[B] Blue Channel", L"[i] Intensity", L"[a] Scan Angle", L"[n] # of Returns", L"[r] Return #", 
				L"[c] Classification", L"[u] User Data", L"[p] Point Source", L"[d] Direction of Scan"});
			this->comboBox14->Location = System::Drawing::Point(121, 127);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(108, 21);
			this->comboBox14->TabIndex = 13;
			this->comboBox14->Text = L"14";
			// 
			// comboBox13
			// 
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"[x] X Coordinate", L"[y] Y Coordinate", L"[z] Z Coordinate", 
				L"[R] Red Channel", L"[G] Green Channel", L"[B] Blue Channel", L"[i] Intensity", L"[a] Scan Angle", L"[n] # of Returns", L"[r] Return #", 
				L"[c] Classification", L"[u] User Data", L"[p] Point Source", L"[d] Direction of Scan"});
			this->comboBox13->Location = System::Drawing::Point(7, 127);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(108, 21);
			this->comboBox13->TabIndex = 12;
			this->comboBox13->Text = L"13";
			// 
			// comboBox12
			// 
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"[x] X Coordinate", L"[y] Y Coordinate", L"[z] Z Coordinate", 
				L"[R] Red Channel", L"[G] Green Channel", L"[B] Blue Channel", L"[i] Intensity", L"[a] Scan Angle", L"[n] # of Returns", L"[r] Return #", 
				L"[c] Classification", L"[u] User Data", L"[p] Point Source", L"[d] Direction of Scan"});
			this->comboBox12->Location = System::Drawing::Point(235, 100);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(108, 21);
			this->comboBox12->TabIndex = 11;
			this->comboBox12->Text = L"12";
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"[x] X Coordinate", L"[y] Y Coordinate", L"[z] Z Coordinate", 
				L"[R] Red Channel", L"[G] Green Channel", L"[B] Blue Channel", L"[i] Intensity", L"[a] Scan Angle", L"[n] # of Returns", L"[r] Return #", 
				L"[c] Classification", L"[u] User Data", L"[p] Point Source", L"[d] Direction of Scan"});
			this->comboBox11->Location = System::Drawing::Point(121, 100);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(108, 21);
			this->comboBox11->TabIndex = 10;
			this->comboBox11->Text = L"11";
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"[x] X Coordinate", L"[y] Y Coordinate", L"[z] Z Coordinate", 
				L"[R] Red Channel", L"[G] Green Channel", L"[B] Blue Channel", L"[i] Intensity", L"[a] Scan Angle", L"[n] # of Returns", L"[r] Return #", 
				L"[c] Classification", L"[u] User Data", L"[p] Point Source", L"[d] Direction of Scan"});
			this->comboBox10->Location = System::Drawing::Point(7, 100);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(108, 21);
			this->comboBox10->TabIndex = 9;
			this->comboBox10->Text = L"10";
			this->comboBox10->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox10_SelectedIndexChanged);
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"[x] X Coordinate", L"[y] Y Coordinate", L"[z] Z Coordinate", 
				L"[R] Red Channel", L"[G] Green Channel", L"[B] Blue Channel", L"[i] Intensity", L"[a] Scan Angle", L"[n] # of Returns", L"[r] Return #", 
				L"[c] Classification", L"[u] User Data", L"[p] Point Source", L"[d] Direction of Scan"});
			this->comboBox9->Location = System::Drawing::Point(235, 73);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(108, 21);
			this->comboBox9->TabIndex = 8;
			this->comboBox9->Text = L"9";
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"[x] X Coordinate", L"[y] Y Coordinate", L"[z] Z Coordinate", 
				L"[R] Red Channel", L"[G] Green Channel", L"[B] Blue Channel", L"[i] Intensity", L"[a] Scan Angle", L"[n] # of Returns", L"[r] Return #", 
				L"[c] Classification", L"[u] User Data", L"[p] Point Source", L"[d] Direction of Scan"});
			this->comboBox8->Location = System::Drawing::Point(121, 73);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(108, 21);
			this->comboBox8->TabIndex = 7;
			this->comboBox8->Text = L"8";
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"[x] X Coordinate", L"[y] Y Coordinate", L"[z] Z Coordinate", 
				L"[R] Red Channel", L"[G] Green Channel", L"[B] Blue Channel", L"[i] Intensity", L"[a] Scan Angle", L"[n] # of Returns", L"[r] Return #", 
				L"[c] Classification", L"[u] User Data", L"[p] Point Source", L"[d] Direction of Scan"});
			this->comboBox7->Location = System::Drawing::Point(7, 73);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(108, 21);
			this->comboBox7->TabIndex = 6;
			this->comboBox7->Text = L"7";
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"[x] X Coordinate", L"[y] Y Coordinate", L"[z] Z Coordinate", 
				L"[R] Red Channel", L"[G] Green Channel", L"[B] Blue Channel", L"[i] Intensity", L"[a] Scan Angle", L"[n] # of Returns", L"[r] Return #", 
				L"[c] Classification", L"[u] User Data", L"[p] Point Source", L"[d] Direction of Scan"});
			this->comboBox6->Location = System::Drawing::Point(235, 46);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(108, 21);
			this->comboBox6->TabIndex = 5;
			this->comboBox6->Text = L"6";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"[x] X Coordinate", L"[y] Y Coordinate", L"[z] Z Coordinate", 
				L"[R] Red Channel", L"[G] Green Channel", L"[B] Blue Channel", L"[i] Intensity", L"[a] Scan Angle", L"[n] # of Returns", L"[r] Return #", 
				L"[c] Classification", L"[u] User Data", L"[p] Point Source", L"[d] Direction of Scan"});
			this->comboBox5->Location = System::Drawing::Point(121, 46);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(108, 21);
			this->comboBox5->TabIndex = 4;
			this->comboBox5->Text = L"5";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"[x] X Coordinate", L"[y] Y Coordinate", L"[z] Z Coordinate", 
				L"[R] Red Channel", L"[G] Green Channel", L"[B] Blue Channel", L"[i] Intensity", L"[a] Scan Angle", L"[n] # of Returns", L"[r] Return #", 
				L"[c] Classification", L"[u] User Data", L"[p] Point Source", L"[d] Direction of Scan"});
			this->comboBox4->Location = System::Drawing::Point(7, 46);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(108, 21);
			this->comboBox4->TabIndex = 3;
			this->comboBox4->Text = L"4";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"[x] X Coordinate", L"[y] Y Coordinate", L"[z] Z Coordinate", 
				L"[R] Red Channel", L"[G] Green Channel", L"[B] Blue Channel", L"[i] Intensity", L"[a] Scan Angle", L"[n] # of Returns", L"[r] Return #", 
				L"[c] Classification", L"[u] User Data", L"[p] Point Source", L"[d] Direction of Scan"});
			this->comboBox3->Location = System::Drawing::Point(235, 19);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(108, 21);
			this->comboBox3->TabIndex = 2;
			this->comboBox3->Text = L"3";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"[x] X Coordinate", L"[y] Y Coordinate", L"[z] Z Coordinate", 
				L"[R] Red Channel", L"[G] Green Channel", L"[B] Blue Channel", L"[i] Intensity", L"[a] Scan Angle", L"[n] # of Returns", L"[r] Return #", 
				L"[c] Classification", L"[u] User Data", L"[p] Point Source", L"[d] Direction of Scan"});
			this->comboBox2->Location = System::Drawing::Point(121, 19);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(108, 21);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->Text = L"2";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"[x] X Coordinate", L"[y] Y Coordinate", L"[z] Z Coordinate", 
				L"[R] Red Channel", L"[G] Green Channel", L"[B] Blue Channel", L"[i] Intensity", L"[a] Scan Angle", L"[n] # of Returns", L"[r] Return #", 
				L"[c] Classification", L"[u] User Data", L"[p] Point Source", L"[d] Direction of Scan"});
			this->comboBox1->Location = System::Drawing::Point(7, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(108, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"1";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->radioButton25);
			this->groupBox7->Controls->Add(this->radioButton24);
			this->groupBox7->Controls->Add(this->radioButton23);
			this->groupBox7->Controls->Add(this->radioButton22);
			this->groupBox7->Controls->Add(this->radioButton21);
			this->groupBox7->Controls->Add(this->radioButton20);
			this->groupBox7->Controls->Add(this->radioButton19);
			this->groupBox7->Controls->Add(this->checkBox7);
			this->groupBox7->Location = System::Drawing::Point(9, 86);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(187, 88);
			this->groupBox7->TabIndex = 7;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"File Header / Comment Character";
			// 
			// radioButton25
			// 
			this->radioButton25->AutoSize = true;
			this->radioButton25->Location = System::Drawing::Point(115, 43);
			this->radioButton25->Name = L"radioButton25";
			this->radioButton25->Size = System::Drawing::Size(29, 17);
			this->radioButton25->TabIndex = 4;
			this->radioButton25->TabStop = true;
			this->radioButton25->Text = L"*";
			this->radioButton25->UseVisualStyleBackColor = true;
			// 
			// radioButton24
			// 
			this->radioButton24->AutoSize = true;
			this->radioButton24->Location = System::Drawing::Point(81, 65);
			this->radioButton24->Name = L"radioButton24";
			this->radioButton24->Size = System::Drawing::Size(28, 17);
			this->radioButton24->TabIndex = 7;
			this->radioButton24->TabStop = true;
			this->radioButton24->Text = L",";
			this->radioButton24->UseVisualStyleBackColor = true;
			// 
			// radioButton23
			// 
			this->radioButton23->AutoSize = true;
			this->radioButton23->Location = System::Drawing::Point(81, 43);
			this->radioButton23->Name = L"radioButton23";
			this->radioButton23->Size = System::Drawing::Size(28, 17);
			this->radioButton23->TabIndex = 3;
			this->radioButton23->TabStop = true;
			this->radioButton23->Text = L";";
			this->radioButton23->UseVisualStyleBackColor = true;
			// 
			// radioButton22
			// 
			this->radioButton22->AutoSize = true;
			this->radioButton22->Location = System::Drawing::Point(44, 66);
			this->radioButton22->Name = L"radioButton22";
			this->radioButton22->Size = System::Drawing::Size(28, 17);
			this->radioButton22->TabIndex = 6;
			this->radioButton22->TabStop = true;
			this->radioButton22->Text = L":";
			this->radioButton22->UseVisualStyleBackColor = true;
			// 
			// radioButton21
			// 
			this->radioButton21->AutoSize = true;
			this->radioButton21->Location = System::Drawing::Point(44, 43);
			this->radioButton21->Name = L"radioButton21";
			this->radioButton21->Size = System::Drawing::Size(31, 17);
			this->radioButton21->TabIndex = 2;
			this->radioButton21->TabStop = true;
			this->radioButton21->Text = L"$";
			this->radioButton21->UseVisualStyleBackColor = true;
			// 
			// radioButton20
			// 
			this->radioButton20->AutoSize = true;
			this->radioButton20->Location = System::Drawing::Point(6, 65);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(33, 17);
			this->radioButton20->TabIndex = 5;
			this->radioButton20->TabStop = true;
			this->radioButton20->Text = L"%";
			this->radioButton20->UseVisualStyleBackColor = true;
			// 
			// radioButton19
			// 
			this->radioButton19->AutoSize = true;
			this->radioButton19->Location = System::Drawing::Point(6, 43);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(32, 17);
			this->radioButton19->TabIndex = 1;
			this->radioButton19->TabStop = true;
			this->radioButton19->Text = L"#";
			this->radioButton19->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(6, 19);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(89, 17);
			this->checkBox7->TabIndex = 0;
			this->checkBox7->Text = L"Write Header";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->radioButton18);
			this->groupBox6->Controls->Add(this->radioButton17);
			this->groupBox6->Controls->Add(this->radioButton16);
			this->groupBox6->Controls->Add(this->radioButton15);
			this->groupBox6->Controls->Add(this->radioButton14);
			this->groupBox6->Controls->Add(this->radioButton13);
			this->groupBox6->Controls->Add(this->radioButton12);
			this->groupBox6->Location = System::Drawing::Point(9, 184);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(187, 67);
			this->groupBox6->TabIndex = 8;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Seperator / Delimiter";
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->Location = System::Drawing::Point(128, 19);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(28, 17);
			this->radioButton18->TabIndex = 2;
			this->radioButton18->TabStop = true;
			this->radioButton18->Text = L".";
			this->radioButton18->UseVisualStyleBackColor = true;
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->Location = System::Drawing::Point(78, 42);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(28, 17);
			this->radioButton17->TabIndex = 6;
			this->radioButton17->TabStop = true;
			this->radioButton17->Text = L"-";
			this->radioButton17->UseVisualStyleBackColor = true;
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Location = System::Drawing::Point(44, 42);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(28, 17);
			this->radioButton16->TabIndex = 5;
			this->radioButton16->TabStop = true;
			this->radioButton16->Text = L";";
			this->radioButton16->UseVisualStyleBackColor = true;
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(6, 42);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(28, 17);
			this->radioButton15->TabIndex = 4;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L":";
			this->radioButton15->UseVisualStyleBackColor = true;
			this->radioButton15->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton15_CheckedChanged);
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(159, 19);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(28, 17);
			this->radioButton14->TabIndex = 3;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L",";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(78, 19);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(44, 17);
			this->radioButton13->TabIndex = 1;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"Tab";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Checked = true;
			this->radioButton12->Location = System::Drawing::Point(6, 19);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(56, 17);
			this->radioButton12->TabIndex = 0;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"Space";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(305, 36);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(26, 24);
			this->button9->TabIndex = 5;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(43, 37);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(256, 20);
			this->textBox9->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 40);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Output";
			// 
			// button10
			// 
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(305, 6);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(26, 24);
			this->button10->TabIndex = 2;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(43, 9);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(256, 20);
			this->textBox10->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 12);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Input";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->LASoperations);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(782, 520);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"LAS Operations";
			this->tabPage2->ToolTipText = L"Contains modules which perform operations on LAS data";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// LASoperations
			// 
			this->LASoperations->Controls->Add(this->tabPage10);
			this->LASoperations->Controls->Add(this->tabPage6);
			this->LASoperations->Controls->Add(this->tabPage11);
			this->LASoperations->Controls->Add(this->tabPage12);
			this->LASoperations->Controls->Add(this->tabPage13);
			this->LASoperations->Controls->Add(this->tabPage14);
			this->LASoperations->Controls->Add(this->tabPage15);
			this->LASoperations->Controls->Add(this->tabPage16);
			this->LASoperations->Location = System::Drawing::Point(0, 0);
			this->LASoperations->Name = L"LASoperations";
			this->LASoperations->SelectedIndex = 0;
			this->LASoperations->ShowToolTips = true;
			this->LASoperations->Size = System::Drawing::Size(788, 278);
			this->LASoperations->TabIndex = 0;
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->groupBox11);
			this->tabPage10->Controls->Add(this->groupBox9);
			this->tabPage10->Controls->Add(this->groupBox10);
			this->tabPage10->Controls->Add(this->pictureBox5);
			this->tabPage10->Controls->Add(this->button3);
			this->tabPage10->Controls->Add(this->textBox4);
			this->tabPage10->Controls->Add(this->label4);
			this->tabPage10->Controls->Add(this->button4);
			this->tabPage10->Controls->Add(this->textBox11);
			this->tabPage10->Controls->Add(this->label11);
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(780, 252);
			this->tabPage10->TabIndex = 0;
			this->tabPage10->Text = L"Boundary Creation";
			this->tabPage10->ToolTipText = L"Create a boundary polygon from LAS data";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->label12);
			this->groupBox11->Controls->Add(this->numericUpDown8);
			this->groupBox11->Location = System::Drawing::Point(9, 157);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(207, 72);
			this->groupBox11->TabIndex = 8;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Concavity Detail";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 47);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(156, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Smaller number = Greater Detail";
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(6, 20);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100000, 0, 0, 0});
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(120, 20);
			this->numericUpDown8->TabIndex = 0;
			this->numericUpDown8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {50, 0, 0, 0});
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->radioButton26);
			this->groupBox9->Controls->Add(this->radioButton27);
			this->groupBox9->Controls->Add(this->radioButton28);
			this->groupBox9->Location = System::Drawing::Point(9, 107);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(207, 43);
			this->groupBox9->TabIndex = 7;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Returns";
			// 
			// radioButton26
			// 
			this->radioButton26->AutoSize = true;
			this->radioButton26->Location = System::Drawing::Point(48, 20);
			this->radioButton26->Name = L"radioButton26";
			this->radioButton26->Size = System::Drawing::Size(68, 17);
			this->radioButton26->TabIndex = 1;
			this->radioButton26->Text = L"First Only";
			this->radioButton26->UseVisualStyleBackColor = true;
			// 
			// radioButton27
			// 
			this->radioButton27->AutoSize = true;
			this->radioButton27->Location = System::Drawing::Point(122, 19);
			this->radioButton27->Name = L"radioButton27";
			this->radioButton27->Size = System::Drawing::Size(69, 17);
			this->radioButton27->TabIndex = 2;
			this->radioButton27->Text = L"Last Only";
			this->radioButton27->UseVisualStyleBackColor = true;
			// 
			// radioButton28
			// 
			this->radioButton28->AutoSize = true;
			this->radioButton28->Checked = true;
			this->radioButton28->Location = System::Drawing::Point(6, 19);
			this->radioButton28->Name = L"radioButton28";
			this->radioButton28->Size = System::Drawing::Size(36, 17);
			this->radioButton28->TabIndex = 0;
			this->radioButton28->TabStop = true;
			this->radioButton28->Text = L"All";
			this->radioButton28->UseVisualStyleBackColor = true;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->radioButton29);
			this->groupBox10->Controls->Add(this->radioButton30);
			this->groupBox10->Location = System::Drawing::Point(43, 63);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(114, 38);
			this->groupBox10->TabIndex = 6;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Format";
			// 
			// radioButton29
			// 
			this->radioButton29->AutoSize = true;
			this->radioButton29->Location = System::Drawing::Point(6, 15);
			this->radioButton29->Name = L"radioButton29";
			this->radioButton29->Size = System::Drawing::Size(54, 17);
			this->radioButton29->TabIndex = 0;
			this->radioButton29->TabStop = true;
			this->radioButton29->Text = L"*.SHP";
			this->radioButton29->UseVisualStyleBackColor = true;
			// 
			// radioButton30
			// 
			this->radioButton30->AutoSize = true;
			this->radioButton30->Location = System::Drawing::Point(60, 15);
			this->radioButton30->Name = L"radioButton30";
			this->radioButton30->Size = System::Drawing::Size(53, 17);
			this->radioButton30->TabIndex = 1;
			this->radioButton30->TabStop = true;
			this->radioButton30->Text = L"*.TXT";
			this->radioButton30->UseVisualStyleBackColor = true;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(9, 56);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(28, 28);
			this->pictureBox5->TabIndex = 32;
			this->pictureBox5->TabStop = false;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(305, 36);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(26, 24);
			this->button3->TabIndex = 5;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(43, 37);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(256, 20);
			this->textBox4->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Output";
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(305, 6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(26, 24);
			this->button4->TabIndex = 2;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click_1);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(43, 9);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(256, 20);
			this->textBox11->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 12);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Input";
			// 
			// tabPage6
			// 
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(780, 252);
			this->tabPage6->TabIndex = 7;
			this->tabPage6->Text = L"Clip & Extract";
			this->tabPage6->ToolTipText = L"Clip LAS data or extract LAS data by feature";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->checkBox10);
			this->tabPage11->Controls->Add(this->groupBox12);
			this->tabPage11->Controls->Add(this->pictureBox8);
			this->tabPage11->Controls->Add(this->button15);
			this->tabPage11->Controls->Add(this->textBox16);
			this->tabPage11->Controls->Add(this->label17);
			this->tabPage11->Controls->Add(this->pictureBox7);
			this->tabPage11->Controls->Add(this->button13);
			this->tabPage11->Controls->Add(this->label15);
			this->tabPage11->Controls->Add(this->textBox14);
			this->tabPage11->Controls->Add(this->button14);
			this->tabPage11->Controls->Add(this->textBox15);
			this->tabPage11->Controls->Add(this->label16);
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(780, 252);
			this->tabPage11->TabIndex = 1;
			this->tabPage11->Text = L"Difference (Diff)";
			this->tabPage11->ToolTipText = L"Compare two LAS files and report result";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(9, 64);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(120, 17);
			this->checkBox10->TabIndex = 6;
			this->checkBox10->Text = L"Write Results to File";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->radioButton32);
			this->groupBox12->Location = System::Drawing::Point(43, 107);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(67, 38);
			this->groupBox12->TabIndex = 10;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Format";
			// 
			// radioButton32
			// 
			this->radioButton32->AutoSize = true;
			this->radioButton32->Checked = true;
			this->radioButton32->Location = System::Drawing::Point(6, 15);
			this->radioButton32->Name = L"radioButton32";
			this->radioButton32->Size = System::Drawing::Size(53, 17);
			this->radioButton32->TabIndex = 0;
			this->radioButton32->TabStop = true;
			this->radioButton32->Text = L"*.TXT";
			this->radioButton32->UseVisualStyleBackColor = true;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(9, 100);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(28, 28);
			this->pictureBox8->TabIndex = 34;
			this->pictureBox8->TabStop = false;
			// 
			// button15
			// 
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(305, 80);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(26, 24);
			this->button15->TabIndex = 9;
			this->button15->UseVisualStyleBackColor = true;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(43, 81);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(256, 20);
			this->textBox16->TabIndex = 8;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 84);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(39, 13);
			this->label17->TabIndex = 7;
			this->label17->Text = L"Output";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(337, 13);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(38, 40);
			this->pictureBox7->TabIndex = 14;
			this->pictureBox7->TabStop = false;
			// 
			// button13
			// 
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(305, 36);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(26, 24);
			this->button13->TabIndex = 5;
			this->button13->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 40);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(31, 13);
			this->label15->TabIndex = 3;
			this->label15->Text = L"Input";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(43, 37);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(256, 20);
			this->textBox14->TabIndex = 4;
			// 
			// button14
			// 
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(305, 6);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(26, 24);
			this->button14->TabIndex = 2;
			this->button14->UseVisualStyleBackColor = true;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(43, 9);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(256, 20);
			this->textBox15->TabIndex = 1;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 12);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(31, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Input";
			// 
			// tabPage12
			// 
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Size = System::Drawing::Size(780, 252);
			this->tabPage12->TabIndex = 2;
			this->tabPage12->Text = L"Info / Edit";
			this->tabPage12->ToolTipText = L"View and edit LAS header info";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// tabPage13
			// 
			this->tabPage13->Location = System::Drawing::Point(4, 22);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Size = System::Drawing::Size(780, 252);
			this->tabPage13->TabIndex = 3;
			this->tabPage13->Text = L"Merge LAS Files";
			this->tabPage13->ToolTipText = L"Combine multiple LAS files into one LAS file";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// tabPage14
			// 
			this->tabPage14->Location = System::Drawing::Point(4, 22);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Size = System::Drawing::Size(780, 252);
			this->tabPage14->TabIndex = 4;
			this->tabPage14->Text = L"Thin Dataset";
			this->tabPage14->ToolTipText = L"Thins data by lowest Z-Value or User specified threshold";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// tabPage15
			// 
			this->tabPage15->Location = System::Drawing::Point(4, 22);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Size = System::Drawing::Size(780, 252);
			this->tabPage15->TabIndex = 5;
			this->tabPage15->Text = L"View (OpenGL)";
			this->tabPage15->ToolTipText = L"Visualize and compute LAS/TIN data";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// tabPage16
			// 
			this->tabPage16->Location = System::Drawing::Point(4, 22);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Size = System::Drawing::Size(780, 252);
			this->tabPage16->TabIndex = 6;
			this->tabPage16->Text = L"Zip (Lossless Compression)";
			this->tabPage16->ToolTipText = L"Compress binary LAS data to reduce file size";
			this->tabPage16->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->filetoLAS);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(782, 520);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"(File)... To LAS";
			this->tabPage3->ToolTipText = L"Contains modules which convert from other File Formats to LAS";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// filetoLAS
			// 
			this->filetoLAS->Controls->Add(this->tabPage17);
			this->filetoLAS->Controls->Add(this->tabPage18);
			this->filetoLAS->Location = System::Drawing::Point(0, 0);
			this->filetoLAS->Name = L"filetoLAS";
			this->filetoLAS->SelectedIndex = 0;
			this->filetoLAS->ShowToolTips = true;
			this->filetoLAS->Size = System::Drawing::Size(788, 278);
			this->filetoLAS->TabIndex = 0;
			// 
			// tabPage17
			// 
			this->tabPage17->Controls->Add(this->pictureBox6);
			this->tabPage17->Controls->Add(this->checkBox9);
			this->tabPage17->Controls->Add(this->button11);
			this->tabPage17->Controls->Add(this->textBox12);
			this->tabPage17->Controls->Add(this->label13);
			this->tabPage17->Controls->Add(this->button12);
			this->tabPage17->Controls->Add(this->textBox13);
			this->tabPage17->Controls->Add(this->label14);
			this->tabPage17->Location = System::Drawing::Point(4, 22);
			this->tabPage17->Name = L"tabPage17";
			this->tabPage17->Padding = System::Windows::Forms::Padding(3);
			this->tabPage17->Size = System::Drawing::Size(780, 252);
			this->tabPage17->TabIndex = 0;
			this->tabPage17->Text = L"*.SHP (ShapeFile)";
			this->tabPage17->ToolTipText = L"Convert from Shapefile to binary LAS";
			this->tabPage17->UseVisualStyleBackColor = true;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(9, 56);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(28, 28);
			this->pictureBox6->TabIndex = 30;
			this->pictureBox6->TabStop = false;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(43, 67);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(100, 17);
			this->checkBox9->TabIndex = 29;
			this->checkBox9->Text = L"Verbose Output";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(305, 36);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(26, 24);
			this->button11->TabIndex = 28;
			this->button11->UseVisualStyleBackColor = true;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(43, 37);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(256, 20);
			this->textBox12->TabIndex = 27;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 40);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(39, 13);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Output";
			// 
			// button12
			// 
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(305, 6);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(26, 24);
			this->button12->TabIndex = 25;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(43, 9);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(256, 20);
			this->textBox13->TabIndex = 24;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 12);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 13);
			this->label14->TabIndex = 23;
			this->label14->Text = L"Input";
			// 
			// tabPage18
			// 
			this->tabPage18->Location = System::Drawing::Point(4, 22);
			this->tabPage18->Name = L"tabPage18";
			this->tabPage18->Padding = System::Windows::Forms::Padding(3);
			this->tabPage18->Size = System::Drawing::Size(780, 252);
			this->tabPage18->TabIndex = 1;
			this->tabPage18->Text = L"*.TXT (TextFile)";
			this->tabPage18->ToolTipText = L"Convert from Plain-Text to binary LAS";
			this->tabPage18->UseVisualStyleBackColor = true;
			// 
			// tabPage19
			// 
			this->tabPage19->Controls->Add(this->aboutnhelp);
			this->tabPage19->Location = System::Drawing::Point(4, 22);
			this->tabPage19->Name = L"tabPage19";
			this->tabPage19->Padding = System::Windows::Forms::Padding(3);
			this->tabPage19->Size = System::Drawing::Size(782, 520);
			this->tabPage19->TabIndex = 3;
			this->tabPage19->Text = L"About & Help";
			this->tabPage19->ToolTipText = L"LTF-E Help / Info / Contacts";
			this->tabPage19->UseVisualStyleBackColor = true;
			// 
			// aboutnhelp
			// 
			this->aboutnhelp->Controls->Add(this->tabPage20);
			this->aboutnhelp->Controls->Add(this->tabPage21);
			this->aboutnhelp->Location = System::Drawing::Point(0, 0);
			this->aboutnhelp->Name = L"aboutnhelp";
			this->aboutnhelp->SelectedIndex = 0;
			this->aboutnhelp->ShowToolTips = true;
			this->aboutnhelp->Size = System::Drawing::Size(788, 524);
			this->aboutnhelp->TabIndex = 0;
			// 
			// tabPage20
			// 
			this->tabPage20->Controls->Add(this->ltfe_help);
			this->tabPage20->Location = System::Drawing::Point(4, 22);
			this->tabPage20->Name = L"tabPage20";
			this->tabPage20->Padding = System::Windows::Forms::Padding(3);
			this->tabPage20->Size = System::Drawing::Size(780, 498);
			this->tabPage20->TabIndex = 0;
			this->tabPage20->Text = L"LTF-E Help";
			this->tabPage20->ToolTipText = L"Contains the LTF-E documentation";
			this->tabPage20->UseVisualStyleBackColor = true;
			// 
			// ltfe_help
			// 
			this->ltfe_help->HideSelection = false;
			this->ltfe_help->Location = System::Drawing::Point(0, 0);
			this->ltfe_help->Name = L"ltfe_help";
			this->ltfe_help->ReadOnly = true;
			this->ltfe_help->Size = System::Drawing::Size(780, 498);
			this->ltfe_help->TabIndex = 0;
			this->ltfe_help->Text = resources->GetString(L"ltfe_help.Text");
			this->ltfe_help->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// tabPage21
			// 
			this->tabPage21->Location = System::Drawing::Point(4, 22);
			this->tabPage21->Name = L"tabPage21";
			this->tabPage21->Padding = System::Windows::Forms::Padding(3);
			this->tabPage21->Size = System::Drawing::Size(780, 498);
			this->tabPage21->TabIndex = 1;
			this->tabPage21->Text = L"About LTF-E";
			this->tabPage21->ToolTipText = L"LTF-E Info, Contributors, Contacts, Credits, etc";
			this->tabPage21->UseVisualStyleBackColor = true;
			// 
			// openlocation
			// 
			this->openlocation->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"openlocation.Image")));
			this->openlocation->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->openlocation->Location = System::Drawing::Point(549, 548);
			this->openlocation->Name = L"openlocation";
			this->openlocation->Size = System::Drawing::Size(79, 22);
			this->openlocation->TabIndex = 4;
			this->openlocation->Text = L"Open Path";
			this->openlocation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->openlocation->UseVisualStyleBackColor = true;
			this->openlocation->Click += gcnew System::EventHandler(this, &Form1::openlocation_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->InfoStatus, this->ProgressBar});
			this->statusStrip1->Location = System::Drawing::Point(0, 547);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->ShowItemToolTips = true;
			this->statusStrip1->Size = System::Drawing::Size(790, 23);
			this->statusStrip1->SizingGrip = false;
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			this->statusStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::statusStrip1_ItemClicked);
			// 
			// InfoStatus
			// 
			this->InfoStatus->AutoSize = false;
			this->InfoStatus->BorderSides = System::Windows::Forms::ToolStripStatusLabelBorderSides::Right;
			this->InfoStatus->Name = L"InfoStatus";
			this->InfoStatus->Size = System::Drawing::Size(325, 18);
			this->InfoStatus->Text = L"Info:";
			this->InfoStatus->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->InfoStatus->ToolTipText = L"Control Information";
			this->InfoStatus->Click += gcnew System::EventHandler(this, &Form1::InfoStatus_Click);
			// 
			// ProgressBar
			// 
			this->ProgressBar->Name = L"ProgressBar";
			this->ProgressBar->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->ProgressBar->Size = System::Drawing::Size(58, 17);
			this->ProgressBar->Step = 20;
			this->ProgressBar->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			this->ProgressBar->ToolTipText = L"CMD Activity Indicator";
			this->ProgressBar->Click += gcnew System::EventHandler(this, &Form1::ProgressBar_Click);
			// 
			// PathButton
			// 
			this->PathButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PathButton.Image")));
			this->PathButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->PathButton->Location = System::Drawing::Point(634, 548);
			this->PathButton->Name = L"PathButton";
			this->PathButton->Size = System::Drawing::Size(75, 22);
			this->PathButton->TabIndex = 5;
			this->PathButton->Text = L"Set Paths";
			this->PathButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->PathButton->UseVisualStyleBackColor = true;
			this->PathButton->Click += gcnew System::EventHandler(this, &Form1::PathButton_Click);
			// 
			// RunButton
			// 
			this->RunButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"RunButton.BackgroundImage")));
			this->RunButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"RunButton.Image")));
			this->RunButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->RunButton->Location = System::Drawing::Point(387, 548);
			this->RunButton->Name = L"RunButton";
			this->RunButton->Size = System::Drawing::Size(75, 22);
			this->RunButton->TabIndex = 2;
			this->RunButton->Text = L"Run CMD";
			this->RunButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->RunButton->UseVisualStyleBackColor = true;
			this->RunButton->Click += gcnew System::EventHandler(this, &Form1::RunButton_Click);
			// 
			// HelpButton
			// 
			this->HelpButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"HelpButton.Image")));
			this->HelpButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->HelpButton->Location = System::Drawing::Point(715, 548);
			this->HelpButton->Name = L"HelpButton";
			this->HelpButton->Size = System::Drawing::Size(75, 22);
			this->HelpButton->TabIndex = 6;
			this->HelpButton->Text = L"CMD Help";
			this->HelpButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->HelpButton->UseVisualStyleBackColor = true;
			this->HelpButton->Click += gcnew System::EventHandler(this, &Form1::HelpButton_Click);
			// 
			// openfile
			// 
			this->openfile->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"openfile.Image")));
			this->openfile->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->openfile->Location = System::Drawing::Point(468, 548);
			this->openfile->Name = L"openfile";
			this->openfile->Size = System::Drawing::Size(75, 22);
			this->openfile->TabIndex = 3;
			this->openfile->Text = L"Open File";
			this->openfile->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->openfile->UseVisualStyleBackColor = true;
			this->openfile->Click += gcnew System::EventHandler(this, &Form1::openfile_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(790, 570);
			this->Controls->Add(this->openlocation);
			this->Controls->Add(this->openfile);
			this->Controls->Add(this->HelpButton);
			this->Controls->Add(this->RunButton);
			this->Controls->Add(this->PathButton);
			this->Controls->Add(this->MajorTabs);
			this->Controls->Add(this->statusStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"LAS Tools Front-End (LTF-E) v0.1a";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->MajorTabs->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->Las2whatevers->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->DEMKMLGenerationbox->ResumeLayout(false);
			this->DEMKMLGenerationbox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->UTMGlobe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->longitudebox))->EndInit();
			this->DEM_Returnsbox->ResumeLayout(false);
			this->DEM_Returnsbox->PerformLayout();
			this->DEMFormat->ResumeLayout(false);
			this->DEMFormat->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->DEMChildArrow))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->LASoperations->ResumeLayout(false);
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->EndInit();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->tabPage11->ResumeLayout(false);
			this->tabPage11->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->filetoLAS->ResumeLayout(false);
			this->tabPage17->ResumeLayout(false);
			this->tabPage17->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->tabPage19->ResumeLayout(false);
			this->aboutnhelp->ResumeLayout(false);
			this->tabPage20->ResumeLayout(false);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void locationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void OpenSplitButton_ButtonClick(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void statusStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		 }
private: System::Void Las2whatevers_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
		Chosen_File = openFileDialog1->FileName;


	}//input text box for LAS to SHP tab
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		
		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		  
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Title = "Choose a LAS file";
		openFileDialog1->Filter = "All files|*.*|las files|*.las";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;
		openFileDialog1->ShowDialog();

		/*Chosen_File = openFileDialog1->FileName;
		
		if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
		{
			if ( (myStream = openFileDialog1->OpenFile()) != nullptr )
			{
				richTextBox2::Text=OpenFileDialog::FileName
			// Insert code to read the stream here.
			//Chosen_File = openFileDialog1->FileName;
			myStream->Close();
			}
		}	*/

	} //input button on LAS To File .SHP tab

private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		Stream^ myStream;
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
    
		saveFileDialog1->Filter = "All files|*.*|shp files|*.shp";
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->RestoreDirectory = true;
    
		if ( saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
		{
			if ( (myStream = saveFileDialog1->OpenFile()) != nullptr )
			{

			// Code to write the stream goes here.
			myStream->Close();
			}
		}
	
	}//output button on LAS To .DEM tab

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Title = "Choose a LAS file";  
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "All files (*.*)|*.*|las files|*.las";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
		{
			if ( (myStream = openFileDialog1->OpenFile()) != nullptr )
			{
			// Insert code to read the stream here.
			myStream->Close();
			}
		}

	}//input button LAS to DEM
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void openfile_Click(System::Object^  sender, System::EventArgs^  e) {

		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		  
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "All files|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
		{
			if ( (myStream = openFileDialog1->OpenFile()) != nullptr )
			{
			// Insert code to read the stream here.
			myStream->Close();
			}
		}

	 }//Open file button on status bar

private: System::Void ProgressBar_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton15_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox10_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void PathButton_Click(System::Object^  sender, System::EventArgs^  e) {

	// Declare a new folder browser dialog object
	FolderBrowserDialog^ folderBrowserDialog1 = gcnew FolderBrowserDialog;

	// Bring up a dialog to chose a folder path in which to open/save a file.
	//System::Windows::Forms::DialogResult result = folderBrowserDialog1->ShowDialog();
	folderBrowserDialog1->ShowDialog();

	// Code to choose the folder
      /*if ( result == ::DialogResult::OK )
      {
         folderName = folderBrowserDialog1->SelectedPath;
         if (  !fileOpened )
         {
            // No file is opened, bring up openFileDialog in selected path.
            openFileDialog1->InitialDirectory = folderName;
            openFileDialog1->FileName = nullptr;
            openMenuItem->PerformClick();
         }
      }*/
   
		 
	} //Set Paths button on status bar
		 
private: System::Void RunButton_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void openlocation_Click(System::Object^  sender, System::EventArgs^  e) {

	// Declare a new folder browser dialog object
	FolderBrowserDialog^ folderBrowserDialog1 = gcnew FolderBrowserDialog;

	// Bring up a dialog to chose a folder path in which to open/save a file.
	//System::Windows::Forms::DialogResult result = folderBrowserDialog1->ShowDialog();
	folderBrowserDialog1->ShowDialog();

	} //Open Path button on status bar
private: System::Void HelpButton_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void InfoStatus_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void DEMOutputButton_Click(System::Object^  sender, System::EventArgs^  e) {

		Stream^ myStream;
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
    
		saveFileDialog1->Filter = "All files|*.*|dem files|*.dem";
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->RestoreDirectory = true;
    
		if ( saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
		{
			if ( (myStream = saveFileDialog1->OpenFile()) != nullptr )
			{

			// Code to write the stream goes here.
			myStream->Close();
			}
		}

	}//output button on LAS To File .DEM tab

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		
		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		  
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Title = "Choose a LAS file";
		openFileDialog1->Filter = "All files|*.*|las files|*.las";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
		{
			if ( (myStream = openFileDialog1->OpenFile()) != nullptr )
			{
			// Insert code to read the stream here.
			myStream->Close();
			}
		}

	}//input button on LAS to ISO tab
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

		Stream^ myStream;
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
    
		saveFileDialog1->Filter = "All files|*.*|iso files|*.iso";
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->RestoreDirectory = true;
    
		if ( saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
		{
			if ( (myStream = saveFileDialog1->OpenFile()) != nullptr )
			{

			// Code to write the stream goes here.
			myStream->Close();
			}
		}

	}//output button on LAS to ISO tab
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {

		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Title = "Choose a LAS file";  
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "All files|*.*|las files|*.las";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
		{
			if ( (myStream = openFileDialog1->OpenFile()) != nullptr )
			{
			// Insert code to read the stream here.
			myStream->Close();
			}
		}

	}//input button on LAS to TIN tab
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

		Stream^ myStream;
		SaveFileDialog^ saveLAStoTIN = gcnew SaveFileDialog;
		saveLAStoTIN->Title = "Save As";
		saveLAStoTIN->Filter = "All files|*.*|tin files|*.tin";
		saveLAStoTIN->FilterIndex = 2;
		saveLAStoTIN->RestoreDirectory = true;
    
		if ( saveLAStoTIN->ShowDialog() == System::Windows::Forms::DialogResult::OK )
		{
			if ( (myStream = saveLAStoTIN->OpenFile()) != nullptr )
			{

			// Code to write the stream goes here.
			myStream->Close();
			}
		}

	}//output button on LAS to TIN tab
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Title = "Choose a LAS file";  
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "All files|*.*|las files|*.las";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
		{
			if ( (myStream = openFileDialog1->OpenFile()) != nullptr )
			{
			// Insert code to read the stream here.
			myStream->Close();
			}
		}

	}//input button on LAS to TXT tab
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	
		Stream^ myStream;
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
    
		saveFileDialog1->Filter = "All files|*.*|txt files|*.txt";
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->RestoreDirectory = true;
    
		if ( saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
		{
			if ( (myStream = saveFileDialog1->OpenFile()) != nullptr )
			{

			// Code to write the stream goes here.
			myStream->Close();
			}
		}

	}//output button on LAS to TXT tab
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {


	}//input text box on LAS to TIN tab
private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {


	}//Input richtext box LAS to SHP tab
};
}//form


