#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ AllClear;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ btnDigit7;
	private: System::Windows::Forms::Button^ btnDigit8;
	private: System::Windows::Forms::Button^ btnDigit9;
	private: System::Windows::Forms::Button^ btnDigit4;
	private: System::Windows::Forms::Button^ btnDigit5;
	private: System::Windows::Forms::Button^ btnDigit6;
	private: System::Windows::Forms::Button^ btnDigit1;
	private: System::Windows::Forms::Button^ btnDigit2;
	private: System::Windows::Forms::Button^ btnDigit3;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ about;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->AllClear = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btnDigit7 = (gcnew System::Windows::Forms::Button());
			this->btnDigit8 = (gcnew System::Windows::Forms::Button());
			this->btnDigit9 = (gcnew System::Windows::Forms::Button());
			this->btnDigit4 = (gcnew System::Windows::Forms::Button());
			this->btnDigit5 = (gcnew System::Windows::Forms::Button());
			this->btnDigit6 = (gcnew System::Windows::Forms::Button());
			this->btnDigit1 = (gcnew System::Windows::Forms::Button());
			this->btnDigit2 = (gcnew System::Windows::Forms::Button());
			this->btnDigit3 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->about = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->txtDisplay->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtDisplay->CausesValidation = false;
			this->txtDisplay->Cursor = System::Windows::Forms::Cursors::No;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Verdana", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtDisplay->ForeColor = System::Drawing::SystemColors::Menu;
			this->txtDisplay->HideSelection = false;
			this->txtDisplay->Location = System::Drawing::Point(-3, 26);
			this->txtDisplay->Margin = System::Windows::Forms::Padding(3, 3, 3, 0);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(276, 71);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::txtDisplay_TextChanged);
			// 
			// AllClear
			// 
			this->AllClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AllClear->Location = System::Drawing::Point(2, 82);
			this->AllClear->Name = L"AllClear";
			this->AllClear->Size = System::Drawing::Size(61, 41);
			this->AllClear->TabIndex = 1;
			this->AllClear->Text = L"AC";
			this->AllClear->UseVisualStyleBackColor = true;
			this->AllClear->Click += gcnew System::EventHandler(this, &MyForm::btnAllClear_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(69, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 41);
			this->button2->TabIndex = 2;
			this->button2->Text = L"+/-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::btnPlusMinus_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(136, 82);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 41);
			this->button3->TabIndex = 3;
			this->button3->Text = L"%";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::btnProcent_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkOrange;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(203, 129);
			this->button5->Margin = System::Windows::Forms::Padding(3, 3, 3, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(61, 41);
			this->button5->TabIndex = 5;
			this->button5->Text = L"x";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkOrange;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(203, 176);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(61, 41);
			this->button6->TabIndex = 6;
			this->button6->Text = L"-";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::DarkOrange;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(203, 223);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(61, 41);
			this->button7->TabIndex = 7;
			this->button7->Text = L"+";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::DarkOrange;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(203, 270);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(61, 41);
			this->button8->TabIndex = 8;
			this->button8->Text = L"=";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::btnEquals_Click);
			// 
			// btnDigit7
			// 
			this->btnDigit7->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnDigit7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDigit7->FlatAppearance->BorderColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit7->FlatAppearance->BorderSize = 0;
			this->btnDigit7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit7->Location = System::Drawing::Point(2, 129);
			this->btnDigit7->Name = L"btnDigit7";
			this->btnDigit7->Size = System::Drawing::Size(61, 41);
			this->btnDigit7->TabIndex = 9;
			this->btnDigit7->Text = L"7";
			this->btnDigit7->UseVisualStyleBackColor = false;
			this->btnDigit7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit8
			// 
			this->btnDigit8->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDigit8->FlatAppearance->BorderColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit8->Location = System::Drawing::Point(69, 129);
			this->btnDigit8->Name = L"btnDigit8";
			this->btnDigit8->Size = System::Drawing::Size(61, 41);
			this->btnDigit8->TabIndex = 10;
			this->btnDigit8->Text = L"8";
			this->btnDigit8->UseVisualStyleBackColor = false;
			this->btnDigit8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit9
			// 
			this->btnDigit9->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDigit9->FlatAppearance->BorderColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit9->Location = System::Drawing::Point(136, 129);
			this->btnDigit9->Name = L"btnDigit9";
			this->btnDigit9->Size = System::Drawing::Size(61, 41);
			this->btnDigit9->TabIndex = 11;
			this->btnDigit9->Text = L"9";
			this->btnDigit9->UseVisualStyleBackColor = false;
			this->btnDigit9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit4
			// 
			this->btnDigit4->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDigit4->FlatAppearance->BorderColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit4->Location = System::Drawing::Point(2, 176);
			this->btnDigit4->Name = L"btnDigit4";
			this->btnDigit4->Size = System::Drawing::Size(61, 41);
			this->btnDigit4->TabIndex = 12;
			this->btnDigit4->Text = L"4";
			this->btnDigit4->UseVisualStyleBackColor = false;
			this->btnDigit4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit5
			// 
			this->btnDigit5->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDigit5->FlatAppearance->BorderColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit5->Location = System::Drawing::Point(69, 176);
			this->btnDigit5->Name = L"btnDigit5";
			this->btnDigit5->Size = System::Drawing::Size(61, 41);
			this->btnDigit5->TabIndex = 13;
			this->btnDigit5->Text = L"5";
			this->btnDigit5->UseVisualStyleBackColor = false;
			this->btnDigit5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit6
			// 
			this->btnDigit6->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDigit6->FlatAppearance->BorderColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit6->Location = System::Drawing::Point(136, 176);
			this->btnDigit6->Name = L"btnDigit6";
			this->btnDigit6->Size = System::Drawing::Size(61, 41);
			this->btnDigit6->TabIndex = 14;
			this->btnDigit6->Text = L"6";
			this->btnDigit6->UseVisualStyleBackColor = false;
			this->btnDigit6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit1
			// 
			this->btnDigit1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDigit1->FlatAppearance->BorderColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit1->Location = System::Drawing::Point(2, 223);
			this->btnDigit1->Name = L"btnDigit1";
			this->btnDigit1->Size = System::Drawing::Size(61, 41);
			this->btnDigit1->TabIndex = 15;
			this->btnDigit1->Text = L"1";
			this->btnDigit1->UseVisualStyleBackColor = false;
			this->btnDigit1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit2
			// 
			this->btnDigit2->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDigit2->FlatAppearance->BorderColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit2->Location = System::Drawing::Point(69, 223);
			this->btnDigit2->Name = L"btnDigit2";
			this->btnDigit2->Size = System::Drawing::Size(61, 41);
			this->btnDigit2->TabIndex = 16;
			this->btnDigit2->Text = L"2";
			this->btnDigit2->UseVisualStyleBackColor = false;
			this->btnDigit2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit3
			// 
			this->btnDigit3->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDigit3->FlatAppearance->BorderColor = System::Drawing::SystemColors::WindowFrame;
			this->btnDigit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit3->Location = System::Drawing::Point(136, 223);
			this->btnDigit3->Name = L"btnDigit3";
			this->btnDigit3->Size = System::Drawing::Size(61, 41);
			this->btnDigit3->TabIndex = 17;
			this->btnDigit3->Text = L"3";
			this->btnDigit3->UseVisualStyleBackColor = false;
			this->btnDigit3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatAppearance->BorderColor = System::Drawing::SystemColors::WindowFrame;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(2, 270);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(128, 41);
			this->button18->TabIndex = 18;
			this->button18->Text = L"0";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatAppearance->BorderColor = System::Drawing::SystemColors::WindowFrame;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(136, 270);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(61, 41);
			this->button19->TabIndex = 19;
			this->button19->Text = L",";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::btnDecimal_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOrange;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(203, 82);
			this->button1->Margin = System::Windows::Forms::Padding(3, 3, 3, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 41);
			this->button1->TabIndex = 20;
			this->button1->Text = L"/";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// about
			// 
			this->about->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->about->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->about->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->about->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->about->Location = System::Drawing::Point(-3, -7);
			this->about->Name = L"about";
			this->about->Size = System::Drawing::Size(87, 27);
			this->about->TabIndex = 21;
			this->about->Text = L"О программе";
			this->about->UseVisualStyleBackColor = false;
			this->about->Click += gcnew System::EventHandler(this, &MyForm::About_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(267, 318);
			this->Controls->Add(this->about);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->btnDigit3);
			this->Controls->Add(this->btnDigit2);
			this->Controls->Add(this->btnDigit1);
			this->Controls->Add(this->btnDigit6);
			this->Controls->Add(this->btnDigit5);
			this->Controls->Add(this->btnDigit4);
			this->Controls->Add(this->btnDigit9);
			this->Controls->Add(this->btnDigit8);
			this->Controls->Add(this->btnDigit7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->AllClear);
			this->Controls->Add(this->txtDisplay);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(287, 361);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(287, 361);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"iCalculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);

		if (txtDisplay->Text=="0") {
			txtDisplay->Text = Numbers->Text;
		}
		else {
			txtDisplay->Text = txtDisplay->Text + Numbers->Text;
		}
	}
	private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
		Button^ NumbersOp = safe_cast<Button^>(sender);
		firstDigit = Double::Parse(txtDisplay->Text);
		txtDisplay->Text = "";
		operators = NumbersOp->Text;
	}
	private: System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!txtDisplay->Text->Contains("."))
		{
			txtDisplay->Text = txtDisplay->Text + ".";
		}
	}
	private: System::Void btnAllClear_Click(System::Object^ sender, System::EventArgs^ e) {
		txtDisplay->Text = "0";
	}
	private: System::Void btnPlusMinus_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!txtDisplay->Text->Contains("-"))
			{
				txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
			}
			else
			{
				txtDisplay->Text = "-" + txtDisplay->Text;
			}
	}
	private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {
		secondDigit = Double::Parse(txtDisplay->Text);	
		if (operators == "+") {
			result = firstDigit + secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
		}
		else if (operators == "-") {
			result = firstDigit - secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
		}
		else if (operators == "x") {
			result = firstDigit * secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
		}
		else if (operators == "/") {
			result = firstDigit / secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
		}
	}
	private: System::Void About_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Версия программы: 0.1", "Создатель Жандарбеков Жандос");
	}
	private: System::Void btnProcent_Click(System::Object^ sender, System::EventArgs^ e) {
		secondDigit = Double::Parse(txtDisplay->Text);
		result = secondDigit / 100;
		txtDisplay->Text = System::Convert::ToString(result);
	}
private: System::Void txtDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
