
// Dlg4.7.24.h : Dlg4.7.24 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDlg4724App:
// �йش����ʵ�֣������ Dlg4.7.24.cpp
//

class CDlg4724App : public CWinApp
{
public:
	CDlg4724App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg4724App theApp;
