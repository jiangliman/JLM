
// EXP0504.h : EXP0504 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP0504App:
// �йش����ʵ�֣������ EXP0504.cpp
//

class CEXP0504App : public CWinApp
{
public:
	CEXP0504App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP0504App theApp;
