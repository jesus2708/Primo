#pragma once  //______________________________________ Primo.h  
#include "Resource.h"
class Primo: public Win::Dialog
{
public:
	Primo()
	{
	}
	~Primo()
	{
	}
	

protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbx1;
	Win::Button btClick;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(9.10167);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(1.24354);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Primo";
		lb1.CreateX(NULL, L"Numero", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.47625, 0.34396, 2.19604, 0.60854, hWnd, 1000);
		tbx1.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 3.33375, 0.42333, 2.61938, 0.60854, hWnd, 1001);
		btClick.CreateX(NULL, L"Click", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 6.56167, 0.37042, 2.35479, 0.68792, hWnd, 1002);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		tbx1.Font = fontArial009A;
		btClick.Font = fontArial009A;
	}
	//_________________________________________________
	void btClick_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	int esPrimo(int numero);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btClick.IsEvent(e, BN_CLICKED)) {btClick_Click(e); return true;}
		return false;
	}
};
