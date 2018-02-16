// TranslucentDialogLib.cpp
//

#include "stdafx.h"
#include "TranslucentDialogLib.h"
#include "DemoTranslucentDlg.h"
#include "DemoStandardDlg.h"

// CTranslucentApp

BEGIN_MESSAGE_MAP(CTranslucentApp, CWinApp)
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()


// CTranslucentApp ππ‘Ï

CTranslucentApp::CTranslucentApp()
{
}



CTranslucentApp theApp;
ULONG_PTR gdiplusToken;

BOOL CTranslucentApp::InitInstance()
{
	CWinApp::InitInstance();

	AfxEnableControlContainer();

	Gdiplus::GdiplusStartupInput gdiplusStartupInput;
	Gdiplus::GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);
	
	CDemoTranslucentDlg dlg(IDB_PNG1);//_T("res\\test.png")
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
	}
	else if (nResponse == IDCANCEL)
	{
	}
	
	return FALSE;
}

int CTranslucentApp::ExitInstance()
{
	Gdiplus::GdiplusShutdown(gdiplusToken);

	return CWinApp::ExitInstance();
}

