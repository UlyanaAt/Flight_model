#pragma once

namespace Flightmodel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ Size;
	protected:

	private: System::Windows::Forms::Label^ Speed;

	private: System::Windows::Forms::Label^ Angle;

	private: System::Windows::Forms::Label^ Height;
	private: System::Windows::Forms::Label^ Weight;
	private: System::Windows::Forms::NumericUpDown^ numWeight;
	private: System::Windows::Forms::NumericUpDown^ numSize;
	private: System::Windows::Forms::NumericUpDown^ numSpeed;
	private: System::Windows::Forms::NumericUpDown^ numAngle;
	private: System::Windows::Forms::NumericUpDown^ numHeight;



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Height = (gcnew System::Windows::Forms::Label());
			this->Angle = (gcnew System::Windows::Forms::Label());
			this->Speed = (gcnew System::Windows::Forms::Label());
			this->Size = (gcnew System::Windows::Forms::Label());
			this->Weight = (gcnew System::Windows::Forms::Label());
			this->numHeight = (gcnew System::Windows::Forms::NumericUpDown());
			this->numAngle = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSpeed = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->numWeight = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHeight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAngle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSpeed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numWeight))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->numWeight);
			this->panel1->Controls->Add(this->numSize);
			this->panel1->Controls->Add(this->numSpeed);
			this->panel1->Controls->Add(this->numAngle);
			this->panel1->Controls->Add(this->numHeight);
			this->panel1->Controls->Add(this->Weight);
			this->panel1->Controls->Add(this->Size);
			this->panel1->Controls->Add(this->Speed);
			this->panel1->Controls->Add(this->Angle);
			this->panel1->Controls->Add(this->Height);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(857, 196);
			this->panel1->TabIndex = 0;
			// 
			// Height
			// 
			this->Height->AutoSize = true;
			this->Height->Location = System::Drawing::Point(18, 23);
			this->Height->Name = L"Height";
			this->Height->Size = System::Drawing::Size(46, 16);
			this->Height->TabIndex = 0;
			this->Height->Text = L"Height";
			this->Height->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Angle
			// 
			this->Angle->AutoSize = true;
			this->Angle->Location = System::Drawing::Point(18, 53);
			this->Angle->Name = L"Angle";
			this->Angle->Size = System::Drawing::Size(42, 16);
			this->Angle->TabIndex = 1;
			this->Angle->Text = L"Angle";
			// 
			// Speed
			// 
			this->Speed->AutoSize = true;
			this->Speed->Location = System::Drawing::Point(18, 87);
			this->Speed->Name = L"Speed";
			this->Speed->Size = System::Drawing::Size(48, 16);
			this->Speed->TabIndex = 2;
			this->Speed->Text = L"Speed";
			// 
			// Size
			// 
			this->Size->AutoSize = true;
			this->Size->Location = System::Drawing::Point(18, 119);
			this->Size->Name = L"Size";
			this->Size->Size = System::Drawing::Size(33, 16);
			this->Size->TabIndex = 3;
			this->Size->Text = L"Size";
			// 
			// Weight
			// 
			this->Weight->AutoSize = true;
			this->Weight->Location = System::Drawing::Point(18, 148);
			this->Weight->Name = L"Weight";
			this->Weight->Size = System::Drawing::Size(49, 16);
			this->Weight->TabIndex = 4;
			this->Weight->Text = L"Weight";
			this->Weight->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// numHeight
			// 
			this->numHeight->Location = System::Drawing::Point(70, 23);
			this->numHeight->Name = L"numHeight";
			this->numHeight->Size = System::Drawing::Size(120, 22);
			this->numHeight->TabIndex = 5;
			// 
			// numAngle
			// 
			this->numAngle->Location = System::Drawing::Point(70, 53);
			this->numAngle->Name = L"numAngle";
			this->numAngle->Size = System::Drawing::Size(120, 22);
			this->numAngle->TabIndex = 6;
			this->numAngle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 45, 0, 0, 0 });
			// 
			// numSpeed
			// 
			this->numSpeed->Location = System::Drawing::Point(70, 81);
			this->numSpeed->Name = L"numSpeed";
			this->numSpeed->Size = System::Drawing::Size(120, 22);
			this->numSpeed->TabIndex = 7;
			this->numSpeed->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// numSize
			// 
			this->numSize->Location = System::Drawing::Point(70, 113);
			this->numSize->Name = L"numSize";
			this->numSize->Size = System::Drawing::Size(120, 22);
			this->numSize->TabIndex = 8;
			this->numSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// numWeight
			// 
			this->numWeight->Location = System::Drawing::Point(70, 146);
			this->numWeight->Name = L"numWeight";
			this->numWeight->Size = System::Drawing::Size(120, 22);
			this->numWeight->TabIndex = 9;
			this->numWeight->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1199, 681);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHeight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAngle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSpeed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numWeight))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
