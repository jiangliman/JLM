
// Dlg4.7.22.h : Dlg4.7.22 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDlg4722App:
// �йش����ʵ�֣������ Dlg4.7.22.cpp
//

class CDlg4722App : public CWinApp
{
public:
	CDlg4722App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg4722App theApp;
