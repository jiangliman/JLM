
// Dlg4.7.0.h : Dlg4.7.0 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDlg470App:
// �йش����ʵ�֣������ Dlg4.7.0.cpp
//

class CDlg470App : public CWinApp
{
public:
	CDlg470App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg470App theApp;
