
// Dlg0420.24�����ɫ.h : Dlg0420.24�����ɫ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDlg042024�����ɫApp:
// �йش����ʵ�֣������ Dlg0420.24�����ɫ.cpp
//

class CDlg042024�����ɫApp : public CWinApp
{
public:
	CDlg042024�����ɫApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg042024�����ɫApp theApp;
