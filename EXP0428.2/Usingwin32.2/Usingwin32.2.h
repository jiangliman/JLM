
// Usingwin32.2.h : Usingwin32.2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUsingwin322App:
// �йش����ʵ�֣������ Usingwin32.2.cpp
//

class CUsingwin322App : public CWinApp
{
public:
	CUsingwin322App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUsingwin322App theApp;
