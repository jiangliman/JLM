
// EXP0.0.h : EXP0.0 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP00App:
// �йش����ʵ�֣������ EXP0.0.cpp
//

class CEXP00App : public CWinApp
{
public:
	CEXP00App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP00App theApp;
