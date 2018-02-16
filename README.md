在windows中基于MFC中GDI+实现不规则窗体，对比QT等将EXE文件压缩到最小，结合tinyPNG等在一些特殊场合的应用

注意事项：
要实现按钮的动态变化
void CTranslucentDialog::OnRenderEvent(CTranslucentWnd* translucentWnd)
{
	要在原来的基础上注释这个
	//if (!m_bBuffered)
		UpdateView();
}

内部内置了两个自绘的控件
使用方法：
1.声明
CTranslucentButton m_btnTest;
CTranslucentProgressBar m_ctrlProgress;
2.添加绑定
void CDemoTranslucentDlg::DoDataExchange(CDataExchange* pDX)
{
	注意：IDC_BUTTON1这些都是需要先在透明窗口上拖出来的控件
	CTranslucentDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON1, m_btnTest);
	DDX_Control(pDX, IDC_PROGRESS, m_ctrlProgress);
}
3.初始化
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

使用绝对定位防止控件在不同电脑上跑偏了
m_btnStart.SetPos(910, 520);//use absolute location to prevent control move
VERIFY(SetWindowPos(NULL, m_nX, m_nY, m_pCurrImage->GetWidth(), m_pCurrImage->GetHeight(), /*SWP_NOMOVE | */SWP_NOZORDER | SWP_NOREDRAW | SWP_NOACTIVATE));

updateview中
HBITMAP hBitMap = CreateCompatibleBitmap(hDC, sizeWindow.cx, sizeWindow.cy);有内存泄露，如果需要用到一定要参考之前的工程修改此处，防止内存泄露
