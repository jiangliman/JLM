
// EXP0302.4.h : EXP0302.4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP03024App:
// �йش����ʵ�֣������ EXP0302.4.cpp
//

class CEXP03024App : public CWinApp
{
public:
	CEXP03024App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP03024App theApp;
