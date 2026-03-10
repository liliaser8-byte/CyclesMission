#pragma once
#include <cstdlib>
#include <ctime>

namespace CyclesMission {

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
			srand(time(0));
			score = 0;
			
			checkAllMissionsDone(); 
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ProgressBar^ progressBar1;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	public:



	public:
	private:
		int score;


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

	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Button^ button5;



	private: System::ComponentModel::IContainer^ components;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(3, 124);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(724, 387);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(716, 358);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(219, 80);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(189, 125);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(522, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(522, 172);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(522, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(273, 291);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(716, 358);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(259, 81);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(144, 116);
			this->listBox1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(283, 263);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->textBox1);
			this->tabPage3->Controls->Add(this->richTextBox2);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(716, 358);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(485, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"label4";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(458, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 4;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(167, 36);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(193, 210);
			this->richTextBox2->TabIndex = 3;
			this->richTextBox2->Text = L"";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(223, 295);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->textBox2);
			this->tabPage4->Controls->Add(this->richTextBox3);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(716, 358);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(537, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 5;
			this->label5->Text = L"label5";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(67, 70);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(105, 22);
			this->textBox2->TabIndex = 4;
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(238, 52);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(177, 162);
			this->richTextBox3->TabIndex = 3;
			this->richTextBox3->Text = L"";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(288, 287);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label7);
			this->tabPage5->Controls->Add(this->label6);
			this->tabPage5->Controls->Add(this->textBox3);
			this->tabPage5->Controls->Add(this->button5);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(716, 358);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(291, 304);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 2;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->tabControl1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 23.54086F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 76.45914F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(730, 514);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->progressBar1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(724, 115);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(529, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(152, 106);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(26, 58);
			this->progressBar1->Maximum = 5;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(453, 34);
			this->progressBar1->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(165, 85);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(432, 121);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 16);
			this->label6->TabIndex = 4;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(431, 188);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 5;
			this->label7->Text = L"label7";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 514);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private: void checkAllMissionsDone() {
			if (score >= 5) {
				MessageBox::Show("Вітаємо! Лабораторія алгоритмів повністю функціональна. Розблоковано досягнення: LOOP MASTER");
			}
		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		// Завдання:
   // Ввести 12 дійсних чисел та визначити
   // кількість додатних і від’ємних.

		int p = ___, n = ___;
		double a;

		for (int i = ___; i <= ___; i++)
		{
			a = Convert::ToDouble(textBox3->___);

			if (a ___ 0)
				p ___;

			if (a ___ 0)
				n ___;
		}

		label6->Text = "Додатних = " + Convert::ToString(p);
		label7->Text = "Від'ємних = " + Convert::ToString(n);



		MessageBox::Show("Місія 5 виконана!");
		progressBar1->Value = ++score;
		pictureBox1->Image = Image::FromFile("5.png");
		checkAllMissionsDone();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	// Завдання:
	// Ввести послідовність натуральних чисел.
	// Знайти кількість трьохзначних.
	// Ввід закінчується числом 0.

	int a;
	int k = ___;

	richTextBox3->Clear();

	while (true)
	{
		a = Convert::ToInt32(textBox2->___);

		if (a == ___)
			break;

		richTextBox3->AppendText(Convert::ToString(a) + "\n");

		if (a ___ 100 && a ___ 999)
		{
			k ___;
		}
	}

	label5->Text = "Кількість трьохзначних = " + Convert::ToString(___);



	MessageBox::Show("Місія 4 виконана!");
	progressBar1->Value = ++score;
	pictureBox1->Image = Image::FromFile("4.png");
	checkAllMissionsDone();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Завдання:
   // Ввести 11 цілих чисел та обчислити суму тільки двоцифрових.

	int a;
	int s = ___;

	richTextBox2->Clear();

	for (int i = ___; i <= ___; i++)
	{
		a = Convert::ToInt32(textBox1->___);

		richTextBox1->AppendText(Convert::ToString(a) + "\n");

		// перевірка на двоцифрове число
		if (a ___ 10 && a ___ 99)
		{
			s ___ a;
		}
	}

	label4->Text = "Сума двоцифрових = " + Convert::ToString(___);




	MessageBox::Show("Місія 3 виконана!");
	progressBar1->Value = ++score;
	pictureBox1->Image = Image::FromFile("3.png");
	checkAllMissionsDone();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Завдання:
	// Табулювати функцію y = x^2
	// на проміжку [-5;5] з кроком 0.5

	double a = ___;
	double b = ___;
	double h = ___;
	double y;

	listBox1->Items->Add("x\t|\ty");

	double x = ___;

	while (x ___ b)
	{
		y = pow(x, ___);

		listBox1->Items->Add(x.ToString("0.0") + "\t|\t" + y.ToString("0.00"));

		x ___ h;
	}




	MessageBox::Show("Місія 2 виконана!");
	progressBar1->Value = ++score;
	pictureBox1->Image = Image::FromFile("2.png");
	checkAllMissionsDone();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	// Завдання:
	// 1) Обчислити суму цілих чисел від 1 до 10
	// 2) Обчислити добуток парних чисел від 2 до 10
	// 3) Знайти кількість від’ємних серед 10 випадкових чисел [-10;10]

	int i;
	int s = ___;   // сума
	int d = ___;   // добуток
	int k = ___;   // кількість від’ємних
	int a;

	srand(time(0));

	for (i = ___; i <= ___; i++)
	{
		// сума чисел
		s ___ i;

		// перевірка на парність
		if (i ___ 2 == 0)
		{
			d ___ i;
		}

		// випадкове число
		a = rand() % ___ - ___;

		richTextBox1->AppendText(Convert::ToString(a) + "\n");

		// перевірка на від’ємне число
		if (a ___ 0)
		{
			k ___;
		}
	}

	label1->Text = "Сума = " + Convert::ToString(s);
	label2->Text = "Добуток парних = " + Convert::ToString(d);
	label3->Text = "Кількість від'ємних = " + Convert::ToString(k);



	MessageBox::Show("Місія 1 виконана!");
	progressBar1->Value = ++score;
	pictureBox1->Image = Image::FromFile("1.png");
	checkAllMissionsDone();
}

private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (tabControl1->SelectedIndex)
	{
	case 0: pictureBox1->Image = Image::FromFile("1.png"); break;
	case 1: pictureBox1->Image = Image::FromFile("2.png"); break;
	case 2: pictureBox1->Image = Image::FromFile("3.png"); break;
	case 3: pictureBox1->Image = Image::FromFile("4.png"); break;
	case 4: pictureBox1->Image = Image::FromFile("5.png"); break;
	default: pictureBox1->Image = nullptr; break;
	}
}
};
}
