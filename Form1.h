#pragma once
#include "Solver.h"

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(679, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(265, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"График функции";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 14);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(661, 534);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(679, 356);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(265, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L"График производной";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(678, 430);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(265, 48);
			this->button3->TabIndex = 3;
			this->button3->Text = L"График первообразной";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(679, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(265, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"20";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(679, 106);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(265, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"0,1";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(679, 166);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(264, 22);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"11,0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(679, 223);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(265, 22);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"0,01";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(690, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Масштаб:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(690, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Начало отрезка:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(690, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Конец отрезка:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(690, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Шаг табулирования:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(734, 508);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 17);
			this->label5->TabIndex = 12;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(952, 560);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Plot";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:	Solver ^S = gcnew Solver; // объявляем класс, рушающий задачу

	// кнопка для построения графика исходной функции
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		S->setWidth(this->pictureBox1->Width); // задаём ширину
		S->setHeight(this->pictureBox1->Height); // задаём высоту
		S->setInterval(Convert::ToDouble(this->textBox2->Text), Convert::ToDouble(this->textBox3->Text)); // задаём интервал
		S->setStep(Convert::ToDouble(this->textBox4->Text)); // задаём шаг табулирования
		S->setScale(Convert::ToInt32(this->textBox1->Text)); // задаём масштаб
		S->setType(0); // задаём тип

		if (S->checkInterval()) { // проверяем введённый интервал
			this->label5->Text = "";
			this->pictureBox1->Image = S->getPlotImage(); // строим график и передаём изображение с ним в pictureBox
		}else {
			this->label5->Text = "Ошибочный интервал"; // показываем сообщение о ошибке
		}
	}

	// кнопка для построения графика производной функции
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		S->setWidth(this->pictureBox1->Width); // задаём ширину
		S->setHeight(this->pictureBox1->Height); // задаём высоту
		S->setInterval(Convert::ToDouble(this->textBox2->Text), Convert::ToDouble(this->textBox3->Text)); // задаём интервал
		S->setStep(Convert::ToDouble(this->textBox4->Text)); // задаём шаг табулирования
		S->setScale(Convert::ToInt32(this->textBox1->Text)); // задаём масштаб
		S->setType(1); // задаём тип

		if (S->checkInterval()) { // проверяем введённый интервал
			this->label5->Text = "";
			this->pictureBox1->Image = S->getPlotImage(); // строим график и передаём изображение с ним в pictureBox
		}else {
			this->label5->Text = "Ошибочный интервал"; // показываем сообщение о ошибке
		}
	}

	// кнопка для построения графика первообразной функции
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		S->setWidth(this->pictureBox1->Width); // задаём ширину
		S->setHeight(this->pictureBox1->Height); // задаём высоту
		S->setInterval(Convert::ToDouble(this->textBox2->Text), Convert::ToDouble(this->textBox3->Text)); // задаём интервал
		S->setStep(Convert::ToDouble(this->textBox4->Text)); // задаём шаг табулирования
		S->setScale(Convert::ToInt32(this->textBox1->Text)); // задаём масштаб
		S->setType(2); // задаём тип

		if (S->checkInterval()) { // проверяем введённый интервал
			this->label5->Text = "";
			this->pictureBox1->Image = S->getPlotImage(); // строим график и передаём изображение с ним в pictureBox
		}else {
			this->label5->Text = "Ошибочный интервал"; // показываем сообщение о ошибке
		}
	}
};
}