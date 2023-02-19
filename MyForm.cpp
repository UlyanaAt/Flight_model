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



System::Void Flightmodel::MyForm::radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	dt = 0.1;
	return System::Void();
}

System::Void Flightmodel::MyForm::radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (true) { dt = 0.01; };
	return System::Void();
}

System::Void Flightmodel::MyForm::radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (true) { dt = 0.001; };
	return System::Void();
}

System::Void Flightmodel::MyForm::radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (true) { dt = 0.0001; };
	return System::Void();
}

System::Void Flightmodel::MyForm::radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (true) { dt = 0.00001; };
	return System::Void();
}

System::Void Flightmodel::MyForm::btClear_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart1->Series[0]->Points->Clear();
}

System::Void Flightmodel::MyForm::btStart_Click(System::Object^ sender, System::EventArgs^ e)
{

	//Button Start
	//Entering values
	const double rho = 1.29;
	const double C = 0.15;
	const double g = 9.81;

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

	if (dt == 0)
	{
		MessageBox::Show(this, "You did not set accuracy!", "Message", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		exit;
	}
	else
	{
		chart1->Series[0]->Points->AddXY(x, y);
		do
		{
			root = sqrt(vx * vx + vy * vy);
			vx = vx - k * vx * root * dt;
			vy = vy - (g + k * vy * root) * dt;

			x = x + vx * dt;
			y = y + vy * dt;

			chart1->Series[0]->Points->AddXY(x, y);
		} while (y > 0);
	}

	
	
}


