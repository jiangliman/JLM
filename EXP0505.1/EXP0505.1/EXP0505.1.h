
// EXP0505.1.h : EXP0505.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP05051App:
// �йش����ʵ�֣������ EXP0505.1.cpp
//

class CEXP05051App : public CWinApp
{
public:
	CEXP05051App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP05051App theApp;
