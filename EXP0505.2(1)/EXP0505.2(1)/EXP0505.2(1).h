
// EXP0505.2(1).h : EXP0505.2(1) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP050521App:
// �йش����ʵ�֣������ EXP0505.2(1).cpp
//

class CEXP050521App : public CWinApp
{
public:
	CEXP050521App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP050521App theApp;
