
// EXP0302.3.h : EXP0302.3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP03023App:
// �йش����ʵ�֣������ EXP0302.3.cpp
//

class CEXP03023App : public CWinApp
{
public:
	CEXP03023App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP03023App theApp;
