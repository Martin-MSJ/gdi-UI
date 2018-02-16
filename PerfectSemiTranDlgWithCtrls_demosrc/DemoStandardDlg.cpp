// MyContentDlg.cpp : implementation file
//

#include "stdafx.h"
#include "TranslucentDialogLib.h"
#include "DemoStandardDlg.h"
#include ".\demostandarddlg.h"
#include "TranslucentButton.h"


// CDemoStandardDlg dialog

IMPLEMENT_DYNAMIC(CDemoStandardDlg, CStandardDialog)
CDemoStandardDlg::CDemoStandardDlg(CWnd* pParent/* = NULL*/)
	: CStandardDialog(CDemoStandardDlg::IDD, RGB(0, 255, 0), pParent)
{
}

CDemoStandardDlg::~CDemoStandardDlg()
{
}

void CDemoStandardDlg::DoDataExchange(CDataExchange* pDX)
{
	CStandardDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDemoStandardDlg, CStandardDialog)
	ON_BN_CLICKED(IDC_BUTTON1, OnBnClickedButton1)
END_MESSAGE_MAP()


// CDemoStandardDlg message handlers

void CDemoStandardDlg::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	//::MessageBox(NULL, _T("Hello"), _T("Hello World"), MB_OK);
	
}

void CDemoStandardDlg::OnOK()
{
	CStandardDialog::OnOK();
}

BOOL CDemoStandardDlg::OnInitDialog()
{
	CStandardDialog::OnInitDialog();

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}
