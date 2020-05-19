
// Dlg0420.23.h : Dlg0420.23 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CDlg042023App:
// 有关此类的实现，请参阅 Dlg0420.23.cpp
//

class CDlg042023App : public CWinApp
{
public:
	CDlg042023App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg042023App theApp;
