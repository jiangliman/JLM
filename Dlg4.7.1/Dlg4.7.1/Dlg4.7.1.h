
// Dlg4.7.1.h : Dlg4.7.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDlg471App:
// �йش����ʵ�֣������ Dlg4.7.1.cpp
//

class CDlg471App : public CWinApp
{
public:
	CDlg471App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg471App theApp;
