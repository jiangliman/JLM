
// Dlg0414.12.h : Dlg0414.12 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDlg041412App:
// �йش����ʵ�֣������ Dlg0414.12.cpp
//

class CDlg041412App : public CWinApp
{
public:
	CDlg041412App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg041412App theApp;
