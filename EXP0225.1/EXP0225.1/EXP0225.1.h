
// EXP0225.1.h : EXP0225.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP02251App:
// �йش����ʵ�֣������ EXP0225.1.cpp
//

class CEXP02251App : public CWinApp
{
public:
	CEXP02251App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP02251App theApp;
