#pragma once

namespace WebDL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  go;
	protected:

	private: System::Windows::Forms::TextBox^  urlbox;
	protected:

	private: System::Windows::Forms::TextBox^  initialNo;

	private: System::Windows::Forms::TextBox^  finalNo;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::CheckBox^  cmd;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  help;
	private: System::Windows::Forms::Button^  downloads;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->go = (gcnew System::Windows::Forms::Button());
			this->urlbox = (gcnew System::Windows::Forms::TextBox());
			this->initialNo = (gcnew System::Windows::Forms::TextBox());
			this->finalNo = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->cmd = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->help = (gcnew System::Windows::Forms::Button());
			this->downloads = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// go
			// 
			this->go->Enabled = false;
			this->go->Location = System::Drawing::Point(234, 165);
			this->go->Name = L"go";
			this->go->Size = System::Drawing::Size(75, 23);
			this->go->TabIndex = 5;
			this->go->Text = L"Go";
			this->go->UseVisualStyleBackColor = true;
			this->go->Click += gcnew System::EventHandler(this, &MyForm::go_Click);
			// 
			// urlbox
			// 
			this->urlbox->Location = System::Drawing::Point(84, 56);
			this->urlbox->MaxLength = 200;
			this->urlbox->Name = L"urlbox";
			this->urlbox->Size = System::Drawing::Size(155, 20);
			this->urlbox->TabIndex = 1;
			this->urlbox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// initialNo
			// 
			this->initialNo->Enabled = false;
			this->initialNo->Location = System::Drawing::Point(84, 87);
			this->initialNo->MaxLength = 999;
			this->initialNo->Name = L"initialNo";
			this->initialNo->Size = System::Drawing::Size(44, 20);
			this->initialNo->TabIndex = 2;
			this->initialNo->TextChanged += gcnew System::EventHandler(this, &MyForm::initialNo_TextChanged);
			// 
			// finalNo
			// 
			this->finalNo->Enabled = false;
			this->finalNo->Location = System::Drawing::Point(84, 116);
			this->finalNo->MaxLength = 999;
			this->finalNo->Name = L"finalNo";
			this->finalNo->Size = System::Drawing::Size(44, 20);
			this->finalNo->TabIndex = 3;
			this->finalNo->TextChanged += gcnew System::EventHandler(this, &MyForm::finalNo_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Website";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Initial No.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Final No.";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(147, 200);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(33, 35);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// cmd
			// 
			this->cmd->AutoSize = true;
			this->cmd->Enabled = false;
			this->cmd->Location = System::Drawing::Point(259, 194);
			this->cmd->Name = L"cmd";
			this->cmd->Size = System::Drawing::Size(50, 17);
			this->cmd->TabIndex = 4;
			this->cmd->Text = L"CMD";
			this->cmd->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(45, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(235, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Mass download webpages from sequential URL.";
			// 
			// help
			// 
			this->help->Location = System::Drawing::Point(19, 165);
			this->help->Name = L"help";
			this->help->Size = System::Drawing::Size(75, 23);
			this->help->TabIndex = 6;
			this->help->Text = L"Help";
			this->help->UseVisualStyleBackColor = true;
			this->help->Click += gcnew System::EventHandler(this, &MyForm::help_Click);
			// 
			// downloads
			// 
			this->downloads->Location = System::Drawing::Point(126, 165);
			this->downloads->Name = L"downloads";
			this->downloads->Size = System::Drawing::Size(75, 23);
			this->downloads->TabIndex = 13;
			this->downloads->Text = L"Downloads";
			this->downloads->UseVisualStyleBackColor = true;
			this->downloads->Click += gcnew System::EventHandler(this, &MyForm::downloads_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(322, 243);
			this->Controls->Add(this->downloads);
			this->Controls->Add(this->help);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cmd);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->finalNo);
			this->Controls->Add(this->initialNo);
			this->Controls->Add(this->urlbox);
			this->Controls->Add(this->go);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WebDL";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
	this->initialNo->Enabled = true;
}

private: System::Void initialNo_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	this->finalNo->Enabled = true;
}

private: System::Void finalNo_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	this->go->Enabled = true;
	this->cmd->Enabled= true;

}

private: System::Void go_Click(System::Object^  sender, System::EventArgs^  e) {

	// Input set

	int ini, fin;
	ini = System::Convert::ToInt16(initialNo->Text);
	fin = System::Convert::ToInt16(finalNo->Text);
	String^ url;
	url = (urlbox->Text);
	
	//System::IO::File::Create("job.bat");	// Batch File Creation
	System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("job.bat"); //open the file for writing.
	

	for (int i = ini; i <= fin; i++)
	{
		writer->WriteLine("\nwget --continue --directory-prefix=\"C:\\WebDL\\Webpages\" --html-extension --no-cookies --output-document=\"C:\\WebDL\\Webpages\\""" + i + ".html\" --convert-links --user-agent=\"Mozilla/5.0 (Windows; U; Windows NT 5.1; en-US) AppleWebKit/533.4 (KHTML, like Gecko) Chrome/5.0.375.99 Safari/533.4\" \"" + url + i + "\"\r\n");
		//Sorry for such a long string.
	}
	writer->Close();

	MessageBox::Show("Script Creation is done.\nExecution will begin now.");
	MessageBoxButtons::OK;
	if (cmd)
	{
		System::Diagnostics::Process::Start("cmd", "/c job.bat &PAUSE"); // Can't use +xyz one.
	}
	else
	{
		System::Diagnostics::Process::Start("cmd", "/c job.bat");
	}
}	
	
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

	System::Diagnostics::Process::Start("https://github.com/pratyush997");
}
private: System::Void help_Click(System::Object^  sender, System::EventArgs^  e) {

	MessageBox::Show("Sample : -\t\t\tVersion : 1.0\n\nWebsite :  www.google.com/X \n\tWhere 'X' - Sequential Page\n\nInitial No : 2\n\nFinal No : 50\n");
	//MessageBox::Show("Downloads Directory : - C:\WebDL\Webpages"); // Gotta fix it asap.
}
	 

private: System::Void downloads_Click_1(System::Object^  sender, System::EventArgs^  e) {
	
	System::Diagnostics::Process::Start("explorer","C:\\WebDL\\Webpages");

}
};
}
