
// Dlg0420.11.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CDlg042011App: 
// 有关此类的实现，请参阅 Dlg0420.11.cpp
//

class CDlg042011App : public CWinApp
{
public:
	CDlg042011App();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern CDlg042011App theApp;