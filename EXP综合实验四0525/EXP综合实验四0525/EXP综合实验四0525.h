
// EXP�ۺ�ʵ����0525.h : EXP�ۺ�ʵ����0525 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEXP�ۺ�ʵ����0525App:
// �йش����ʵ�֣������ EXP�ۺ�ʵ����0525.cpp
//

class CEXP�ۺ�ʵ����0525App : public CWinApp
{
public:
	CEXP�ۺ�ʵ����0525App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEXP�ۺ�ʵ����0525App theApp;
