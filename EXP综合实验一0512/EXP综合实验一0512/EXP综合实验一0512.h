
// EXP�ۺ�ʵ��һ0512.h : EXP�ۺ�ʵ��һ0512 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP�ۺ�ʵ��һ0512App:
// �йش����ʵ�֣������ EXP�ۺ�ʵ��һ0512.cpp
//

class CEXP�ۺ�ʵ��һ0512App : public CWinApp
{
public:
	CEXP�ۺ�ʵ��һ0512App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP�ۺ�ʵ��һ0512App theApp;
