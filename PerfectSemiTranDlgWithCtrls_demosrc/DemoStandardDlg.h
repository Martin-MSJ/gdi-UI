#pragma once

#include "StandardDialog.h"
#include "afxwin.h"

// CDemoStandardDlg dialog

class CDemoStandardDlg : public CStandardDialog
{
	DECLARE_DYNAMIC(CDemoStandardDlg)

public:
	CDemoStandardDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDemoStandardDlg();

// Dialog Data
	enum { IDD = IDD_STANDARDDIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnOK();

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	virtual BOOL OnInitDialog();
};
