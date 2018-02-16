// DemoTranslucentDlg.cpp : implementation file
//

#include "stdafx.h"
#include "TranslucentDialogLib.h"
#include "DemoTranslucentDlg.h"
#include "DemoStandardDlg.h"


// CDemoTranslucentDlg dialog

//IMPLEMENT_DYNAMIC(CDemoTranslucentDlg, CTranslucentDialog)
CDemoTranslucentDlg::CDemoTranslucentDlg(LPCTSTR lpszFile, CWnd* pParent /*=NULL*/)
	: CTranslucentDialog(CDemoTranslucentDlg::IDD, lpszFile, pParent)
{
}

CDemoTranslucentDlg::CDemoTranslucentDlg(UINT nImgID, LPCTSTR lpszType/* = _T("PNG")*/, HINSTANCE hResourceModule/* = NULL*/, CWnd* pParent /*=NULL*/)
	: CTranslucentDialog(CDemoTranslucentDlg::IDD, nImgID, lpszType, hResourceModule, pParent)
{
}

CDemoTranslucentDlg::~CDemoTranslucentDlg()
{
}

void CDemoTranslucentDlg::DoDataExchange(CDataExchange* pDX)
{
	CTranslucentDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON1, m_btnTest);
	DDX_Control(pDX, IDC_PROGRESS, m_ctrlProgress);
}


BEGIN_MESSAGE_MAP(CDemoTranslucentDlg, CTranslucentDialog)
END_MESSAGE_MAP()


CStandardDialog* CDemoTranslucentDlg::CreateStandardDialog()
{
	return ::new CDemoStandardDlg(this);
}

void CDemoTranslucentDlg::OnInitChildrenWnds()
{
	LPCTSTR szImageList[TWS_BUTTON_NUM] = { _T("res\\1.png"),
		_T("res\\2.png"), _T("res\\3.png"),
		_T("res\\4.png"), 0 };
	m_btnTest.LoadImageList(szImageList);
	RegisterTranslucentWnd(&m_btnTest);

	m_ctrlProgress.MoveWindow(100, 100, 420, 220, TRUE);
	m_ctrlProgress.SetPos(50);
	m_ctrlProgress.SetFgImage(_T("res\\close.png"));
	RegisterTranslucentWnd(&m_ctrlProgress);
}
