
// UsingWin32.2Dll.h : UsingWin32.2Dll 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CUsingWin322DllApp:
// 有关此类的实现，请参阅 UsingWin32.2Dll.cpp
//

class CUsingWin322DllApp : public CWinApp
{
public:
	CUsingWin322DllApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUsingWin322DllApp theApp;
