
// Dlg0420.22.h : Dlg0420.22 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDlg042022App:
// �йش����ʵ�֣������ Dlg0420.22.cpp
//

class CDlg042022App : public CWinApp
{
public:
	CDlg042022App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg042022App theApp;
