#include "MyForm.h"
#include <Windows.h>
#include <string>
using namespace Flightmodel; // Название проекта
using namespace System::Windows::Forms;

// Application entry point
[STAThreadAttribute]
void main(array<String^>^ args) {
    // Initial Application Parameters:
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Flightmodel::MyForm form;
    Application::Run(% form);
}


//Get dx

System::Void Flightmodel::MyForm::radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	dt = 0.5;
	return System::Void();
}

System::Void Flightmodel::MyForm::radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (true) { dt = 0.2; };
	return System::Void();
}

System::Void Flightmodel::MyForm::radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (true) { dt = 0.1; };
	return System::Void();
}

System::Void Flightmodel::MyForm::radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (true) { dt = 0.01; };
	return System::Void();
}

System::Void Flightmodel::MyForm::radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (true) { dt = 0.001; };
	return System::Void();
}

//Clear from past iterations
System::Void Flightmodel::MyForm::btClear_Click(System::Object^ sender, System::EventArgs^ e)
{
	timer1->Stop();
	for (int j = 0; j < i; j++)
	{
		this->chart1->Series[j]->Points->Clear();
	}
	TS_value->Text = "0";
	D_value->Text = "0";
	ES_value->Text = "0";
	MH_value->Text = "0";
	i = 0;
}

System::Void Flightmodel::MyForm::SC_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	timer1->Stop();
	for (int j = 0; j <= i; j++)
	{
		this->chart1->Series[j]->Points->Clear();
	}
	TS_value->Text = "0";
	D_value->Text = "0";
	ES_value->Text = "0";
	MH_value->Text = "0";
	i = 0;
}

System::Void Flightmodel::MyForm::btStart_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Button Start
	//Enter values

	a = (double)numAngle->Value;
	v = (double)numSpeed->Value;
	S = (double)numSize->Value;
	m = (double)numWeight->Value;
	y = (double)numHeight->Value;
	x = 0;

	beta = 0.5 * C * S * rho;
	k = beta / m;
	cosa = cos(a * PI / 180);
	sina = sin(a * PI / 180);
	vx = v * cosa;
	vy = v * sina;

	//Check if dx is not marked

	if (dt == 0)
	{
		MessageBox::Show(this, "You did not set accuracy!", "Message", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		exit;
	}
	else
	{
		chart1->Series[i]->Points->AddXY(x, y);
		timer1->Start();
	}
}

System::Void Flightmodel::MyForm::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	    //Calculations

		root = sqrt(vx * vx + vy * vy);
		vx = vx - k * vx * root * dt;
		vy = vy - (g + k * vy * root) * dt;

		x = x + vx * dt;
		y = y + vy * dt;

		//Find max height

		if (y_max < y)
		{
			y_max = y;
		}

		//Draw a graph

		chart1->Series[i]->Points->AddXY(x, y);

		//Stop drawing a graph and measurement output

		if (y < 0)
		{
			distance = x;
			end_speed = root;
			timer1->Stop();
			i++;

			TS_value->Text = dt.ToString();
			D_value->Text = distance.ToString();
			ES_value->Text = end_speed.ToString();
			MH_value->Text = y_max.ToString();
			exit;
		}
}






