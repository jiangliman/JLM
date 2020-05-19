
// 鼠标让圆移动.h : 鼠标让圆移动 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C鼠标让圆移动App:
// 有关此类的实现，请参阅 鼠标让圆移动.cpp
//

class C鼠标让圆移动App : public CWinApp
{
public:
	C鼠标让圆移动App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C鼠标让圆移动App theApp;
