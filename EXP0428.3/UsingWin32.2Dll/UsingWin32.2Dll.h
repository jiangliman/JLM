
// UsingWin32.2Dll.h : UsingWin32.2Dll Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUsingWin322DllApp:
// �йش����ʵ�֣������ UsingWin32.2Dll.cpp
//

class CUsingWin322DllApp : public CWinApp
{
public:
	CUsingWin322DllApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUsingWin322DllApp theApp;
