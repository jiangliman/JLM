
// EXP0427.0.h : EXP0427.0 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP04270App:
// �йش����ʵ�֣������ EXP0427.0.cpp
//

class CEXP04270App : public CWinApp
{
public:
	CEXP04270App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP04270App theApp;
