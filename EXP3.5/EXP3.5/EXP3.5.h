
// EXP3.5.h : EXP3.5 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP35App:
// �йش����ʵ�֣������ EXP3.5.cpp
//

class CEXP35App : public CWinApp
{
public:
	CEXP35App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP35App theApp;
