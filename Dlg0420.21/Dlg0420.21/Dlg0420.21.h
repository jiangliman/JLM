
// Dlg0420.21.h : Dlg0420.21 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDlg042021App:
// �йش����ʵ�֣������ Dlg0420.21.cpp
//

class CDlg042021App : public CWinApp
{
public:
	CDlg042021App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg042021App theApp;
