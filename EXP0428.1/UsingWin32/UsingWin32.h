
// UsingWin32.h : UsingWin32 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUsingWin32App:
// �йش����ʵ�֣������ UsingWin32.cpp
//

class CUsingWin32App : public CWinApp
{
public:
	CUsingWin32App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUsingWin32App theApp;
