
// EXP0427.2.h : EXP0427.2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP04272App:
// �йش����ʵ�֣������ EXP0427.2.cpp
//

class CEXP04272App : public CWinApp
{
public:
	CEXP04272App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP04272App theApp;
