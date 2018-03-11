#pragma once
#include "../List lab/TList.h"
#include "../List lab/Polinom.h"

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

		TPolinom *p;
		TPolinom *q;
		TPolinom *res;
		int pC, qC;

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			p = new TPolinom[20];
			q = new TPolinom[20];
			res = new TPolinom();
			pC = 0;
			qC = 0;
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

			delete[] p;
			delete[] q;
			delete[] res;
		}
	private: System::Windows::Forms::TextBox^  textBoxCoeff;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownX;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownY;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownZ;
	protected:

	protected:



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxP;
	private: System::Windows::Forms::TextBox^  textBoxQ;
	private: System::Windows::Forms::TextBox^  textBoxRes;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;

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
			this->textBoxCoeff = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDownX = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownY = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownZ = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxP = (gcnew System::Windows::Forms::TextBox());
			this->textBoxQ = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRes = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownX))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownZ))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxCoeff
			// 
			this->textBoxCoeff->Location = System::Drawing::Point(23, 42);
			this->textBoxCoeff->Name = L"textBoxCoeff";
			this->textBoxCoeff->Size = System::Drawing::Size(75, 22);
			this->textBoxCoeff->TabIndex = 0;
			this->textBoxCoeff->Text = L"0";
			// 
			// numericUpDownX
			// 
			this->numericUpDownX->Location = System::Drawing::Point(144, 42);
			this->numericUpDownX->Name = L"numericUpDownX";
			this->numericUpDownX->Size = System::Drawing::Size(75, 22);
			this->numericUpDownX->TabIndex = 1;
			// 
			// numericUpDownY
			// 
			this->numericUpDownY->Location = System::Drawing::Point(266, 42);
			this->numericUpDownY->Name = L"numericUpDownY";
			this->numericUpDownY->Size = System::Drawing::Size(75, 22);
			this->numericUpDownY->TabIndex = 2;
			// 
			// numericUpDownZ
			// 
			this->numericUpDownZ->Location = System::Drawing::Point(386, 42);
			this->numericUpDownZ->Name = L"numericUpDownZ";
			this->numericUpDownZ->Size = System::Drawing::Size(75, 22);
			this->numericUpDownZ->TabIndex = 3;
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
			// textBoxP
			// 
			this->textBoxP->Location = System::Drawing::Point(23, 103);
			this->textBoxP->Name = L"textBoxP";
			this->textBoxP->Size = System::Drawing::Size(438, 22);
			this->textBoxP->TabIndex = 7;
			// 
			// textBoxQ
			// 
			this->textBoxQ->Location = System::Drawing::Point(23, 215);
			this->textBoxQ->Name = L"textBoxQ";
			this->textBoxQ->Size = System::Drawing::Size(438, 22);
			this->textBoxQ->TabIndex = 8;
			// 
			// textBoxRes
			// 
			this->textBoxRes->Location = System::Drawing::Point(23, 329);
			this->textBoxRes->Name = L"textBoxRes";
			this->textBoxRes->Size = System::Drawing::Size(438, 22);
			this->textBoxRes->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(64, 263);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 51);
			this->button1->TabIndex = 10;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(214, 263);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 51);
			this->button2->TabIndex = 11;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(350, 263);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 51);
			this->button3->TabIndex = 12;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(672, 313);
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
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(525, 202);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 48);
			this->button6->TabIndex = 15;
			this->button6->Text = L"ADD 2";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(652, 90);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 48);
			this->button7->TabIndex = 16;
			this->button7->Text = L"CLEAR 1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(652, 202);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 48);
			this->button8->TabIndex = 17;
			this->button8->Text = L"CLEAR 2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(525, 316);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 48);
			this->button9->TabIndex = 18;
			this->button9->Text = L"RANDOM";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(762, 384);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxRes);
			this->Controls->Add(this->textBoxQ);
			this->Controls->Add(this->textBoxP);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDownZ);
			this->Controls->Add(this->numericUpDownY);
			this->Controls->Add(this->numericUpDownX);
			this->Controls->Add(this->textBoxCoeff);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownX))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownZ))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		TMonom tmp;
		tmp.coeff = Convert::ToDouble(textBoxCoeff->Text);
		tmp.degX = Convert::ToInt32(numericUpDownX->Text);
		tmp.degY = Convert::ToInt32(numericUpDownY->Text);
		tmp.degZ = Convert::ToInt32(numericUpDownZ->Text);

		p[pC].insByOrder(tmp);

		textBoxP->Text = GetStrPolinom(p[pC]);
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		TMonom tmp;

		tmp.coeff = Convert::ToDouble(textBoxCoeff->Text);
		tmp.degX = Convert::ToInt32(numericUpDownX->Text);
		tmp.degY = Convert::ToInt32(numericUpDownY->Text);
		tmp.degZ = Convert::ToInt32(numericUpDownZ->Text);

		q[pC].insByOrder(tmp);

		textBoxQ->Text = GetStrPolinom(q[pC]);
}

	private: String^ GetStrPolinom(TPolinom &p) {
		if (/*p.isEmpty()*/ !p.getSize()) 
			return "0";

		String^ tmp = "";

		for (p.Reset(); !p.IsEnd(); p.GoNext()) {
			if (!p.isStart() && p.getCoeff() > 0)
				tmp += " + ";

			if ((p.getCoeff() != 1) || (!p.getX() && !p.getY() && !p.getZ()))
				tmp += p.getCoeff();

			if (p.getX()) 
				if (p.getX() > 1) 
					tmp += "x^" + p.getX();
			else 
				tmp += "x";

			if (p.getY()) 
				if (p.getY() > 1)
					tmp += "y^" + p.getY();
			else 
				tmp += "y";

			if (p.getZ())
				if (p.getZ() > 1)
					tmp += "z^" + p.getZ();
			else 
				tmp += "z";
		}

		return tmp;
	}

	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		Random rand;

		textBoxCoeff->Text = Convert::ToString(rand.Next(100) - 50);
		numericUpDownX->Text = Convert::ToString(rand.Next(9));
		numericUpDownY->Text = Convert::ToString(rand.Next(9));
		numericUpDownZ->Text = Convert::ToString(rand.Next(9));
	}


	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		pC++;
		textBoxP->Text = GetStrPolinom(p[pC]);
	}


	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		qC++;
		textBoxQ->Text = GetStrPolinom(q[qC]);
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		*res += p[pC];
		*res += q[qC];
		textBoxRes->Text = GetStrPolinom(*res);

		while (!res->isEmpty())
			res->DelFirst();
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		*res += p[pC];
		*res -= q[qC];

		textBoxRes->Text = GetStrPolinom(*res);

		while (!res->isEmpty())
			res->DelFirst();
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		*res = p[pC] * q[qC];

		textBoxRes->Text = GetStrPolinom(*res);

		while (!res->isEmpty())
			res->DelFirst();
	}
};
}