#pragma once

namespace DiskUsage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Threading;
	using namespace System::ComponentModel;

	/// <summary>
	/// Ñâîäêà äëÿ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TreeView^  treeView1;
	protected:



	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;

	private: System::Windows::Forms::StatusStrip^  statusStrip1;

	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îòêğûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  î÷èñòèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïàğàìåòğûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîğòèğîâêàÏîÈìåíèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïğÿìàÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îáğàòíàÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîğòèğîâêàÏîĞàçìåğóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïğÿìàÿToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  îáğàòíàÿToolStripMenuItem1;
	private: System::Windows::Forms::ListView^  listView1;

	private:

	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ImageList^  imageList1;

	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàğàìåòğûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîğòèğîâêàÏîÈìåíèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğÿìàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáğàòíàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîğòèğîâêàÏîĞàçìåğóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğÿìàÿToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáğàòíàÿToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// treeView1
			// 
			this->treeView1->ImageIndex = 0;
			this->treeView1->ImageList = this->imageList1;
			this->treeView1->Location = System::Drawing::Point(12, 41);
			this->treeView1->Name = L"treeView1";
			this->treeView1->SelectedImageIndex = 0;
			this->treeView1->Size = System::Drawing::Size(280, 457);
			this->treeView1->TabIndex = 0;
			this->treeView1->BeforeExpand += gcnew System::Windows::Forms::TreeViewCancelEventHandler(this, &MainForm::treeView1_BeforeExpand);
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MainForm::treeView1_AfterSelect);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"Gnome-Drive-Harddisk-64.png");
			this->imageList1->Images->SetKeyName(1, L"folder_closed.png");
			this->imageList1->Images->SetKeyName(2, L"folder_open.png");
			this->imageList1->Images->SetKeyName(3, L"document_pen.png");
			this->imageList1->Images->SetKeyName(4, L"file_avi.png");
			this->imageList1->Images->SetKeyName(5, L"file_divx.png");
			this->imageList1->Images->SetKeyName(6, L"file_doc.png");
			this->imageList1->Images->SetKeyName(7, L"file_jpg.png");
			this->imageList1->Images->SetKeyName(8, L"file_mp3.png");
			this->imageList1->Images->SetKeyName(9, L"file_txt.png");
			this->imageList1->Images->SetKeyName(10, L"key_cmd_alternative.png");
			this->imageList1->Images->SetKeyName(11, L"key_note_double.png");
			this->imageList1->Images->SetKeyName(12, L"key_play_pause.png");
			this->imageList1->Images->SetKeyName(13, L"Archive.png");
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 514);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1080, 22);
			this->statusStrip1->TabIndex = 5;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ôàéëToolStripMenuItem,
					this->ïàğàìåòğûToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1080, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->îòêğûòüToolStripMenuItem,
					this->î÷èñòèòüToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->îòêğûòüToolStripMenuItem->Text = L"Äîáàâèòü ïàïêó";
			// 
			// î÷èñòèòüToolStripMenuItem
			// 
			this->î÷èñòèòüToolStripMenuItem->Name = L"î÷èñòèòüToolStripMenuItem";
			this->î÷èñòèòüToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->î÷èñòèòüToolStripMenuItem->Text = L"Î÷èñòèòü";
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			// 
			// ïàğàìåòğûToolStripMenuItem
			// 
			this->ïàğàìåòğûToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñîğòèğîâêàÏîÈìåíèToolStripMenuItem,
					this->ñîğòèğîâêàÏîĞàçìåğóToolStripMenuItem
			});
			this->ïàğàìåòğûToolStripMenuItem->Name = L"ïàğàìåòğûToolStripMenuItem";
			this->ïàğàìåòğûToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->ïàğàìåòğûToolStripMenuItem->Text = L"Ïàğàìåòğû";
			// 
			// ñîğòèğîâêàÏîÈìåíèToolStripMenuItem
			// 
			this->ñîğòèğîâêàÏîÈìåíèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïğÿìàÿToolStripMenuItem,
					this->îáğàòíàÿToolStripMenuItem
			});
			this->ñîğòèğîâêàÏîÈìåíèToolStripMenuItem->Name = L"ñîğòèğîâêàÏîÈìåíèToolStripMenuItem";
			this->ñîğòèğîâêàÏîÈìåíèToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->ñîğòèğîâêàÏîÈìåíèToolStripMenuItem->Text = L"Ñîğòèğîâêà ïî èìåíè";
			// 
			// ïğÿìàÿToolStripMenuItem
			// 
			this->ïğÿìàÿToolStripMenuItem->Name = L"ïğÿìàÿToolStripMenuItem";
			this->ïğÿìàÿToolStripMenuItem->Size = System::Drawing::Size(127, 22);
			this->ïğÿìàÿToolStripMenuItem->Text = L"Ïğÿìàÿ";
			// 
			// îáğàòíàÿToolStripMenuItem
			// 
			this->îáğàòíàÿToolStripMenuItem->Name = L"îáğàòíàÿToolStripMenuItem";
			this->îáğàòíàÿToolStripMenuItem->Size = System::Drawing::Size(127, 22);
			this->îáğàòíàÿToolStripMenuItem->Text = L"Îáğàòíàÿ";
			// 
			// ñîğòèğîâêàÏîĞàçìåğóToolStripMenuItem
			// 
			this->ñîğòèğîâêàÏîĞàçìåğóToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïğÿìàÿToolStripMenuItem1,
					this->îáğàòíàÿToolStripMenuItem1
			});
			this->ñîğòèğîâêàÏîĞàçìåğóToolStripMenuItem->Name = L"ñîğòèğîâêàÏîĞàçìåğóToolStripMenuItem";
			this->ñîğòèğîâêàÏîĞàçìåğóToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->ñîğòèğîâêàÏîĞàçìåğóToolStripMenuItem->Text = L"Ñîğòèğîâêà ïî ğàçìåğó";
			// 
			// ïğÿìàÿToolStripMenuItem1
			// 
			this->ïğÿìàÿToolStripMenuItem1->Name = L"ïğÿìàÿToolStripMenuItem1";
			this->ïğÿìàÿToolStripMenuItem1->Size = System::Drawing::Size(127, 22);
			this->ïğÿìàÿToolStripMenuItem1->Text = L"Ïğÿìàÿ";
			// 
			// îáğàòíàÿToolStripMenuItem1
			// 
			this->îáğàòíàÿToolStripMenuItem1->Name = L"îáğàòíàÿToolStripMenuItem1";
			this->îáğàòíàÿToolStripMenuItem1->Size = System::Drawing::Size(127, 22);
			this->îáğàòíàÿToolStripMenuItem1->Text = L"Îáğàòíàÿ";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->Cursor = System::Windows::Forms::Cursors::Default;
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->LargeImageList = this->imageList1;
			this->listView1->Location = System::Drawing::Point(298, 41);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(469, 457);
			this->listView1->SmallImageList = this->imageList1;
			this->listView1->TabIndex = 7;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Èìÿ";
			this->columnHeader1->Width = 240;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Ğàçìåğ";
			this->columnHeader2->Width = 80;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Äàòà èçìåíåíèÿ";
			this->columnHeader3->Width = 120;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(831, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(831, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"label1ertyterterwtrythjtyhtger";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(834, 173);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 20);
			this->textBox1->TabIndex = 10;
			this->textBox1->Text = L"D:\\!!!";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(773, 263);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(295, 235);
			this->textBox2->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(834, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"label2";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1080, 536);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->treeView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Disk Usage";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	#define MAXTHREADS 128

	array <Thread^>^ thread = gcnew array <Thread^>(MAXTHREADS);
	int countThread = 0;

	public: System::Void DriveTreeInit()
	{
		array<String^>^ drivesArray = Directory::GetLogicalDrives();

		treeView1->BeginUpdate();

		treeView1->Nodes->Clear();

		for each(String^ s in drivesArray)
		{
			TreeNode^ drive = gcnew TreeNode(s, 0, 0);
			treeView1->Nodes->Add(drive);

			GetDirs(drive);
		}

		treeView1->EndUpdate();
	}


	public: System::Void GetDirs(TreeNode^ node)
	{
		array<DirectoryInfo^>^ diArray;

		node->Nodes->Clear();

		String^ fullPath = node->FullPath;
		DirectoryInfo^ di = gcnew DirectoryInfo(fullPath);

		try
		{
			diArray = di->GetDirectories();
		}
		catch (...)
		{
			return;
		}

		for each(DirectoryInfo^ dirinfo in diArray)
		{
			TreeNode^ dir = gcnew TreeNode(dirinfo->Name, 1, 2);
			node->Nodes->Add(dir);
		}
	}


	private: System::Void treeView1_BeforeExpand(System::Object^  sender, System::Windows::Forms::TreeViewCancelEventArgs^  e)
	{
		treeView1->BeginUpdate();

		for each(TreeNode^ node in e->Node->Nodes)
		{
			GetDirs(node);
		}

		treeView1->EndUpdate();
	}

	delegate void Del(int Index, double text);
		
	void DelFunc(int Index, double text)
	{
		if (Index < listView1->Items->Count)
		{
			listView1->Items[Index]->SubItems[1]->Text = sizeString(text);
		}
		label1->Text = countThread.ToString();
	}

	void SetTextSafe(int Index, double newText)
	{
		if (listView1->InvokeRequired)
			listView1->Invoke(gcnew Del(this, &MainForm::DelFunc), Index, newText);
		//else
			//listView1->Items[]->SubItems[1]->Text = newText;
	}

	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		DriveTreeInit();
	}

	private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e)
	{
		TreeNode^ selectedNode = e->Node;
		String^ fullPath = selectedNode->FullPath;

		DirectoryInfo^ di = gcnew DirectoryInfo(fullPath);
		array<FileInfo^>^ fiArray = di->GetFiles();
		array<DirectoryInfo^>^ diArray = di->GetDirectories();

		listView1->Items->Clear();

		threadsStop();

		for each(DirectoryInfo^ dirInfo in diArray)
		{
			ListViewItem^ lvi = gcnew ListViewItem(dirInfo->Name);
			//lvi->SubItems->Add(sizeOfFolder(dirInfo->FullName, 0).ToString() + " MB");
			lvi->SubItems->Add("?");
			lvi->SubItems->Add(dirInfo->LastWriteTime.ToString());
			lvi->ImageIndex = 1;

			listView1->Items->Add(lvi);

			threadsStart(listView1->Items->Count - 1, dirInfo->FullName);

			//âñòàâèòü äîáàâëåíèå â ìàññèâ äëÿ ñîçäàíèÿ ïîòîêîâ
		}

		for each(FileInfo^ fileInfo in fiArray)
		{
			ListViewItem^ lvi = gcnew ListViewItem(fileInfo->Name);
			lvi->SubItems->Add(sizeString(fileInfo->Length));
			lvi->SubItems->Add(fileInfo->LastWriteTime.ToString());

			String^ fileExtension = Path::GetExtension(fileInfo->Name)->ToLower();

			lvi->ImageIndex = GetImageIndex(fileExtension);
			listView1->Items->Add(lvi);
		}
	}

	public: System::Void addToListThreads(int indexLastItemFromLV, String^ fullPath)
	{
		
		return;
	}

	public: System::Void runThreadsFromList()
	{

		return;
	}

	public: System::Void threadsStop()
	{
		//if (countThread != 0)
		{
			for (int i = 0; i <= MAXTHREADS - 1; i++)
			{
				if (thread[i])
				{
					thread[i]->Abort();
					countThread--;
				}
			}
		}
		return;
	}

	public: System::Void threadsStart(int indexLastItemFromLV, String^ fullPath)
	{
		int indexThread = 0;
		ParameterizedThreadStart ^ts = gcnew  Threading::ParameterizedThreadStart(this, &MainForm::RunFolderSizeCalculation);

		if (indexLastItemFromLV < MAXTHREADS)
		{
			if (thread[indexLastItemFromLV] = gcnew Thread(ts))
			{
				indexThread = indexLastItemFromLV;
				countThread++;
			}
		}
		else
		{
			//if (thread[MAXTHREADS - 1]->IsAlive == false)
			{
				thread[MAXTHREADS - 1]->SpinWait;
				thread[MAXTHREADS - 1] = gcnew Thread(ts);
				indexThread = MAXTHREADS - 1;
			}
		}
		
		array<Object^> ^params = gcnew array<Object^> {indexLastItemFromLV, fullPath};
		thread[indexThread]->Start(params);
		return;
	}

	public: System::Void RunFolderSizeCalculation(Object ^obj)
	{
		array<Object^> ^params = (array<Object^>^)obj;

		int  Index = (int)params[0];
		String^ path = (String^)params[1];
		double initSize = 0;
		SetTextSafe(Index, sizeOfFolder(path, initSize));
		countThread--;
		return;
	}

	double sizeOfFolder(String^ folder, double %catalogSize)
	{
		try
		{
			DirectoryInfo^ di = gcnew DirectoryInfo(folder);
			array<DirectoryInfo^>^ diArray = di->GetDirectories();
			array<FileInfo^>^ fiArray = di->GetFiles();

			for each(FileInfo^ f in fiArray)
			{
				catalogSize += f->Length;
			}

			for each(DirectoryInfo^ df in diArray)
			{
				sizeOfFolder(df->FullName, catalogSize);
			}

			return catalogSize;
		}
		catch (...)
		{
			return 0;
		}
	}


	public: int GetImageIndex(String^ fileExt)
	{
		int ImageIndex = 0;
		if (fileExt == ".com" || fileExt == ".exe" || fileExt == ".cmd")
		{
			ImageIndex = 10;
		}
		else if (fileExt == ".jpg" || fileExt == ".jpeg" || fileExt == ".png" || fileExt == ".gif" || fileExt == ".bmp")
		{
			ImageIndex = 7;
		}
		else if (fileExt == ".mp3" || fileExt == ".flac" || fileExt == ".ogg" || fileExt == ".wav")
		{
			ImageIndex = 11;
		}
		else if (fileExt == ".avi" || fileExt == ".mp4" || fileExt == ".mpg" || fileExt == ".mpeg" || fileExt == ".mkv")
		{
			ImageIndex = 10;
		}
		else if (fileExt == ".zip" || fileExt == ".7z" || fileExt == ".rar")
		{
			ImageIndex = 13;
		}
		else if (fileExt == ".txt" || fileExt == ".log" || fileExt == ".cpp")
		{
			ImageIndex = 9;
		}
		else if (fileExt == ".doc" || fileExt == ".docx" || fileExt == ".xls" || fileExt == ".xlsx")
		{
			ImageIndex = 6;
		}
		else
		{
			ImageIndex = 3;
		}
		return ImageIndex;
	}

	String^ sizeString(double size)
	{
		double kb = 1024;
		double mb = kb * 1024;
		double gb = mb * 1024;
		double tb = gb * 1024;
		String^ out = "";

		if (size < 1024)
			out = size.ToString() + " Á";
		else if (size >= kb && size < mb)
			out = Math::Round((double)(size / kb), 2).ToString() + " ÊÁ";
		else if (size >= mb && size < gb)
			out = Math::Round((double)(size / mb), 2).ToString() + " ÌÁ";
		else if (size >= gb && size < tb)
			out = Math::Round((double)(size / gb), 2).ToString() + " ÃÁ";
		else if (size >= tb && size < tb * 1024)
			out = Math::Round((double)(size / tb), 2).ToString() + " ÒÁ";

		return out;
	}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{

	}

	/*
		ñî ñ÷åò÷èêîì ğàçîáğàòüñÿ
		ïî÷åìó ìàññèâ ñìåùàåòñÿ è íå îáíóëÿåòñÿ
		ñäåëàòü äèàãğàììó è/èëè ñòàòèñòèêó ïî äèñêó
		ñäåëàòü ôóíêöèş äëÿ çàïóñêà ïîòîêîâ, ïğèäóìàòü êàê ïåğåäàâàòü èíôó î ïîòîêàõ, êàê èõ îñòàíàâëèâàòü ïğè ïåğåõîäå ê äğóãîé ïàïêå
	*/

};
}
