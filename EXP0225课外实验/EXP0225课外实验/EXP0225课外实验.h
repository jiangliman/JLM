
// EXP0225����ʵ��.h : EXP0225����ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP0225����ʵ��App:
// �йش����ʵ�֣������ EXP0225����ʵ��.cpp
//

class CEXP0225����ʵ��App : public CWinApp
{
public:
	CEXP0225����ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP0225����ʵ��App theApp;
