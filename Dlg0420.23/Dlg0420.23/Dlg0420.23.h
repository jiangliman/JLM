
// Dlg0420.23.h : Dlg0420.23 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDlg042023App:
// �йش����ʵ�֣������ Dlg0420.23.cpp
//

class CDlg042023App : public CWinApp
{
public:
	CDlg042023App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg042023App theApp;
