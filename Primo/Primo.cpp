#include "stdafx.h"  //________________________________________ Primo.cpp
#include "Primo.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Primo app;
	return app.BeginDialog(IDI_Primo, hInstance);
}

void Primo::Window_Open(Win::Event& e)
{
}

void Primo::btClick_Click(Win::Event& e)
{
	if (tbx1.Text.length() > 0)
	{
		const int numero = this->tbx1.IntValue;
		if ((numero % 2) != 0)
		{
			tbx1.ShowBalloonTip(L"Validator", L"El numero es invalido", TTI_ERROR);
		}
		else
		{
			tbx1.ShowBalloonTip(L"Validator", L"El numero es valido", TTI_INFO_LARGE);
		}
	}
}

