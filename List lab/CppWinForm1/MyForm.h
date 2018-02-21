#pragma once

namespace CppWinForm1 {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(75, 22);
			this->textBox1->TabIndex = 0;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(144, 42);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(75, 22);
			this->numericUpDown1->TabIndex = 1;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(266, 42);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(75, 22);
			this->numericUpDown2->TabIndex = 2;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(386, 42);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(75, 22);
			this->numericUpDown3->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(114, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"X^";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(356, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Z^";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(236, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Y^";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(23, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(438, 22);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(23, 215);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(438, 22);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(23, 329);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(438, 22);
			this->textBox4->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(59, 146);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 51);
			this->button1->TabIndex = 10;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(205, 146);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 51);
			this->button2->TabIndex = 11;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(349, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 51);
			this->button3->TabIndex = 12;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(205, 260);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 51);
			this->button4->TabIndex = 13;
			this->button4->Text = L"=";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(525, 90);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 48);
			this->button5->TabIndex = 14;
			this->button5->Text = L"ADD 1";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(525, 202);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 48);
			this->button6->TabIndex = 15;
			this->button6->Text = L"ADD 2";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(652, 90);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 48);
			this->button7->TabIndex = 16;
			this->button7->Text = L"CLEAR 1";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(652, 202);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 48);
			this->button8->TabIndex = 17;
			this->button8->Text = L"CLEAR 2";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(762, 384);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
