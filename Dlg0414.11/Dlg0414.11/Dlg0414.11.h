
// Dlg0414.11.h : Dlg0414.11 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDlg041411App:
// �йش����ʵ�֣������ Dlg0414.11.cpp
//

class CDlg041411App : public CWinApp
{
public:
	CDlg041411App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg041411App theApp;
