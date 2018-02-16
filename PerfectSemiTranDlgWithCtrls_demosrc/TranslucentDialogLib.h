
#pragma once

#ifndef __AFXWIN_H__
	#error include¡°stdafx.h¡±
#endif

#include "resource.h"


// CTranslucentApp:
//

class CTranslucentApp : public CWinApp
{
public:
	CTranslucentApp();

public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
};

extern CTranslucentApp theApp;
