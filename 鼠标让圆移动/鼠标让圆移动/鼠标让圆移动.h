
// �����Բ�ƶ�.h : �����Բ�ƶ� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�����Բ�ƶ�App:
// �йش����ʵ�֣������ �����Բ�ƶ�.cpp
//

class C�����Բ�ƶ�App : public CWinApp
{
public:
	C�����Բ�ƶ�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�����Բ�ƶ�App theApp;
