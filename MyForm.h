#pragma once

namespace Lab9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			textBox1->Visible = false;
			textBox2->Visible = false;
			textBox3->Visible = false;
			textBox4->Visible = false;
			textBox5->Visible = false;
			textBox6->Visible = false;
			textBox7->Visible = false;
			textBox8->Visible = false;
			textBox9->Visible = false;
			textBox10->Visible = false;
			textBox11->Visible = false;
			textBox12->Visible = false;

			richTextBox1->Visible = false;

			label1->Visible = false;
			label2->Visible = false;
			label3->Visible = false;
			label4->Visible = false;
			label5->Visible = false;
			label6->Visible = false;
			label7->Visible = false;
			label8->Visible = false;
			label9->Visible = false;
			label10->Visible = false;
			label11->Visible = false;
			label12->Visible = false;
			label13->Visible = false;

			button1->Visible = false;
			button2->Visible = false;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ записатиДаніToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проАвтораToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->записатиДаніToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->записатиДаніToolStripMenuItem,
					this->проПрограмуToolStripMenuItem, this->проАвтораToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1033, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// записатиДаніToolStripMenuItem
			// 
			this->записатиДаніToolStripMenuItem->Name = L"записатиДаніToolStripMenuItem";
			this->записатиДаніToolStripMenuItem->Size = System::Drawing::Size(95, 20);
			this->записатиДаніToolStripMenuItem->Text = L"Записати дані";
			this->записатиДаніToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::записатиДаніToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проПрограмуToolStripMenuItem_Click);
			// 
			// проАвтораToolStripMenuItem
			// 
			this->проАвтораToolStripMenuItem->Name = L"проАвтораToolStripMenuItem";
			this->проАвтораToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->проАвтораToolStripMenuItem->Text = L"Про автора";
			this->проАвтораToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проАвтораToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(31, 147);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(31, 228);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(168, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(31, 305);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(168, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(31, 376);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(168, 20);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(261, 147);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(168, 20);
			this->textBox5->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(261, 228);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(168, 20);
			this->textBox6->TabIndex = 6;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(261, 305);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(168, 20);
			this->textBox7->TabIndex = 7;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(261, 376);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(168, 20);
			this->textBox8->TabIndex = 8;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(495, 147);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(168, 20);
			this->textBox9->TabIndex = 9;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(495, 228);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(168, 20);
			this->textBox10->TabIndex = 10;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(495, 305);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(168, 20);
			this->textBox11->TabIndex = 11;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(495, 376);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(168, 20);
			this->textBox12->TabIndex = 12;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(729, 147);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(280, 249);
			this->richTextBox1->TabIndex = 13;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(261, 419);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 46);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Результат";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(783, 419);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 46);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"ПІБ студента";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 212);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Курс";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 289);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Група";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 360);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Стипендія";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(258, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"ПІБ студента";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(258, 212);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Курс";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(258, 289);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Група";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(258, 360);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Стипендія";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(492, 131);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 13);
			this->label9->TabIndex = 24;
			this->label9->Text = L"ПІБ студента";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(492, 212);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 13);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Курс";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(492, 289);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(36, 13);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Група";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(492, 360);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(57, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Стипендія";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(726, 131);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(243, 13);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Студенти, які отримують підвищену стипендію:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1033, 486);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void записатиДаніToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Visible = true;
		textBox2->Visible = true;
		textBox3->Visible = true;
		textBox4->Visible = true;
		textBox5->Visible = true;
		textBox6->Visible = true;
		textBox7->Visible = true;
		textBox8->Visible = true;
		textBox9->Visible = true;
		textBox10->Visible = true;
		textBox11->Visible = true;
		textBox12->Visible = true;

		richTextBox1->Visible = true;

		button1->Visible = true;
		button2->Visible = true;

		label1->Visible = true;
		label2->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		label5->Visible = true;
		label6->Visible = true;
		label7->Visible = true;
		label8->Visible = true;
		label9->Visible = true;
		label10->Visible = true;
		label11->Visible = true;
		label12->Visible = true;
		label13->Visible = true;
	}
	private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void проАвтораToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Автор: Іськов Ігор");
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Отримання значень стипендій з текстових полів і конвертація їх у числові значення
		int num1 = System::Convert::ToInt32(textBox4->Text);
		int num2 = System::Convert::ToInt32(textBox8->Text);
		int num3 = System::Convert::ToInt32(textBox12->Text);

		// Знаходження максимальної стипендії
		int maxScholarship = Math::Max(num1, Math::Max(num2, num3));

		// Виведення даних студента з найвищою стипендією
		if (maxScholarship == num1) {
			richTextBox1->Text = String::Format("ПІБ: {0}\nКурс: {1}\nГрупа: {2}\nСтипендія: {3}", textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text);
		}
		else if (maxScholarship == num2) {
			richTextBox1->Text = String::Format("ПІБ: {0}\nКурс: {1}\nГрупа: {2}\nСтипендія: {3}", textBox5->Text, textBox6->Text, textBox7->Text, textBox8->Text);
		}
		else if (maxScholarship == num3) {
			richTextBox1->Text = String::Format("ПІБ: {0}\nКурс: {1}\nГрупа: {2}\nСтипендія: {3}", textBox9->Text, textBox10->Text, textBox11->Text, textBox12->Text);
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
		textBox9->Text = "";
		textBox10->Text = "";
		textBox11->Text = "";
		textBox12->Text = "";

		richTextBox1->Text = "";
	}
	};
}
