
// EXP0505.3.h : EXP0505.3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP05053App:
// �йش����ʵ�֣������ EXP0505.3.cpp
//

class CEXP05053App : public CWinApp
{
public:
	CEXP05053App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP05053App theApp;
