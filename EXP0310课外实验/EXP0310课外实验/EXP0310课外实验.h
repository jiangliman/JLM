
// EXP0310����ʵ��.h : EXP0310����ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP0310����ʵ��App:
// �йش����ʵ�֣������ EXP0310����ʵ��.cpp
//

class CEXP0310����ʵ��App : public CWinApp
{
public:
	CEXP0310����ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP0310����ʵ��App theApp;
