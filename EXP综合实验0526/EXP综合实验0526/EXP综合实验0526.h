
// EXP�ۺ�ʵ��0526.h : EXP�ۺ�ʵ��0526 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP�ۺ�ʵ��0526App:
// �йش����ʵ�֣������ EXP�ۺ�ʵ��0526.cpp
//

class CEXP�ۺ�ʵ��0526App : public CWinApp
{
public:
	CEXP�ۺ�ʵ��0526App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP�ۺ�ʵ��0526App theApp;
