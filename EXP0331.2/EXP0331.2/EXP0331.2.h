
// EXP0331.2.h : EXP0331.2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP03312App:
// �йش����ʵ�֣������ EXP0331.2.cpp
//

class CEXP03312App : public CWinApp
{
public:
	CEXP03312App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP03312App theApp;
