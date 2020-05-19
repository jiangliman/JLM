
// Dlg0420.22.h : Dlg0420.22 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CDlg042022App:
// 有关此类的实现，请参阅 Dlg0420.22.cpp
//

class CDlg042022App : public CWinApp
{
public:
	CDlg042022App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg042022App theApp;
