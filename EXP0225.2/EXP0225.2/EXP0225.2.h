
// EXP0225.2.h : EXP0225.2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP02252App:
// �йش����ʵ�֣������ EXP0225.2.cpp
//

class CEXP02252App : public CWinApp
{
public:
	CEXP02252App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP02252App theApp;
