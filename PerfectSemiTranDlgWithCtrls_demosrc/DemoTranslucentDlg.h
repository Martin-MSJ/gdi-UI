#pragma once

#include "TranslucentDialog.h"
#include "TranslucentButton.h"
#include "TranslucentProgressBar.h"

// CDemoTranslucentDlg dialog

class CDemoTranslucentDlg : public CTranslucentDialog
{
	//DECLARE_DYNAMIC(CDemoTranslucentDlg)

public:
	CDemoTranslucentDlg(LPCTSTR lpszFile, CWnd* pParent = NULL);   // standard constructor
	CDemoTranslucentDlg(UINT nImgID, LPCTSTR lpszType = _T("PNG"), HINSTANCE hResourceModule = NULL, CWnd* pParent = NULL);   // standard constructor
	virtual ~CDemoTranslucentDlg();

// Dialog Data
	enum { IDD = IDD_TRANSLUCENTDIALOG };

	virtual CStandardDialog* CreateStandardDialog();
	virtual void OnInitChildrenWnds();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CTranslucentButton m_btnTest;
	CTranslucentProgressBar m_ctrlProgress;
};
