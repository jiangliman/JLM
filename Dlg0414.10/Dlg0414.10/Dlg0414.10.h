
// Dlg0414.10.h : Dlg0414.10 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDlg041410App:
// �йش����ʵ�֣������ Dlg0414.10.cpp
//

class CDlg041410App : public CWinApp
{
public:
	CDlg041410App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg041410App theApp;
