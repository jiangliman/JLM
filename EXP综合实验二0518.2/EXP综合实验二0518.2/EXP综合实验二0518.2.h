
// EXP�ۺ�ʵ���0518.2.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CEXP�ۺ�ʵ���05182App: 
// �йش����ʵ�֣������ EXP�ۺ�ʵ���0518.2.cpp
//

class CEXP�ۺ�ʵ���05182App : public CWinApp
{
public:
	CEXP�ۺ�ʵ���05182App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CEXP�ۺ�ʵ���05182App theApp;