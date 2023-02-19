#pragma once
#include <math.h>
#define PI 3.14159265

namespace Flightmodel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::Button^ btClear;
	private: System::Windows::Forms::Button^ btStart;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ Accurasy;



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->Accurasy = (gcnew System::Windows::Forms::Label());
			this->btClear = (gcnew System::Windows::Forms::Button());
			this->btStart = (gcnew System::Windows::Forms::Button());
			this->numWeight = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSpeed = (gcnew System::Windows::Forms::NumericUpDown());
			this->numAngle = (gcnew System::Windows::Forms::NumericUpDown());
			this->numHeight = (gcnew System::Windows::Forms::NumericUpDown());
			this->Weight = (gcnew System::Windows::Forms::Label());
			this->Size = (gcnew System::Windows::Forms::Label());
			this->Speed = (gcnew System::Windows::Forms::Label());
			this->Angle = (gcnew System::Windows::Forms::Label());
			this->Height = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numWeight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSpeed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAngle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHeight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton5);
			this->panel1->Controls->Add(this->radioButton4);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->Accurasy);
			this->panel1->Controls->Add(this->btClear);
			this->panel1->Controls->Add(this->btStart);
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
			this->panel1->Size = System::Drawing::Size(857, 226);
			this->panel1->TabIndex = 0;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(333, 177);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(73, 20);
			this->radioButton5->TabIndex = 17;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"0.00001";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(261, 177);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(66, 20);
			this->radioButton4->TabIndex = 16;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"0.0001";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(196, 177);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(59, 20);
			this->radioButton3->TabIndex = 15;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"0.001";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(138, 177);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(52, 20);
			this->radioButton2->TabIndex = 14;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"0.01";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(87, 177);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(45, 20);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"0.1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// Accurasy
			// 
			this->Accurasy->AutoSize = true;
			this->Accurasy->Location = System::Drawing::Point(18, 177);
			this->Accurasy->Name = L"Accurasy";
			this->Accurasy->Size = System::Drawing::Size(63, 16);
			this->Accurasy->TabIndex = 12;
			this->Accurasy->Text = L"Accuracy";
			// 
			// btClear
			// 
			this->btClear->Location = System::Drawing::Point(228, 102);
			this->btClear->Name = L"btClear";
			this->btClear->Size = System::Drawing::Size(138, 54);
			this->btClear->TabIndex = 11;
			this->btClear->Text = L"Clear";
			this->btClear->UseVisualStyleBackColor = true;
			this->btClear->Click += gcnew System::EventHandler(this, &MyForm::btClear_Click);
			// 
			// btStart
			// 
			this->btStart->Location = System::Drawing::Point(228, 15);
			this->btStart->Name = L"btStart";
			this->btStart->Size = System::Drawing::Size(138, 54);
			this->btStart->TabIndex = 10;
			this->btStart->Text = L"Start";
			this->btStart->UseVisualStyleBackColor = true;
			this->btStart->Click += gcnew System::EventHandler(this, &MyForm::btStart_Click);
			// 
			// numWeight
			// 
			this->numWeight->Location = System::Drawing::Point(70, 138);
			this->numWeight->Name = L"numWeight";
			this->numWeight->Size = System::Drawing::Size(120, 22);
			this->numWeight->TabIndex = 9;
			this->numWeight->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numSize
			// 
			this->numSize->DecimalPlaces = 1;
			this->numSize->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numSize->Location = System::Drawing::Point(70, 105);
			this->numSize->Name = L"numSize";
			this->numSize->Size = System::Drawing::Size(120, 22);
			this->numSize->TabIndex = 8;
			this->numSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			// 
			// numSpeed
			// 
			this->numSpeed->Location = System::Drawing::Point(70, 73);
			this->numSpeed->Name = L"numSpeed";
			this->numSpeed->Size = System::Drawing::Size(120, 22);
			this->numSpeed->TabIndex = 7;
			this->numSpeed->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numAngle
			// 
			this->numAngle->Location = System::Drawing::Point(70, 45);
			this->numAngle->Name = L"numAngle";
			this->numAngle->Size = System::Drawing::Size(120, 22);
			this->numAngle->TabIndex = 6;
			this->numAngle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 45, 0, 0, 0 });
			// 
			// numHeight
			// 
			this->numHeight->DecimalPlaces = 1;
			this->numHeight->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numHeight->Location = System::Drawing::Point(70, 15);
			this->numHeight->Name = L"numHeight";
			this->numHeight->Size = System::Drawing::Size(120, 22);
			this->numHeight->TabIndex = 5;
			this->numHeight->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			// 
			// Weight
			// 
			this->Weight->AutoSize = true;
			this->Weight->Location = System::Drawing::Point(18, 140);
			this->Weight->Name = L"Weight";
			this->Weight->Size = System::Drawing::Size(49, 16);
			this->Weight->TabIndex = 4;
			this->Weight->Text = L"Weight";
			// 
			// Size
			// 
			this->Size->AutoSize = true;
			this->Size->Location = System::Drawing::Point(18, 111);
			this->Size->Name = L"Size";
			this->Size->Size = System::Drawing::Size(33, 16);
			this->Size->TabIndex = 3;
			this->Size->Text = L"Size";
			// 
			// Speed
			// 
			this->Speed->AutoSize = true;
			this->Speed->Location = System::Drawing::Point(18, 79);
			this->Speed->Name = L"Speed";
			this->Speed->Size = System::Drawing::Size(48, 16);
			this->Speed->TabIndex = 2;
			this->Speed->Text = L"Speed";
			// 
			// Angle
			// 
			this->Angle->AutoSize = true;
			this->Angle->Location = System::Drawing::Point(18, 45);
			this->Angle->Name = L"Angle";
			this->Angle->Size = System::Drawing::Size(42, 16);
			this->Angle->TabIndex = 1;
			this->Angle->Text = L"Angle";
			// 
			// Height
			// 
			this->Height->AutoSize = true;
			this->Height->Location = System::Drawing::Point(18, 15);
			this->Height->Name = L"Height";
			this->Height->Size = System::Drawing::Size(46, 16);
			this->Height->TabIndex = 0;
			this->Height->Text = L"Height";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(12, 244);
			this->chart1->Name = L"chart1";
			series1->BorderColor = System::Drawing::Color::Red;
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series1->Color = System::Drawing::Color::Red;
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(1517, 680);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1520, 915);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numWeight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSpeed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAngle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHeight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: double a, v, S, m, vx, vy, cosa, sina, beta, k, x, y, root;
private: double dt = 0;

private: System::Void btStart_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void btClear_Click(System::Object^ sender, System::EventArgs^ e);
};
}
