
// Dlg0427.1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDlg04271App: 
// �йش����ʵ�֣������ Dlg0427.1.cpp
//

class CDlg04271App : public CWinApp
{
public:
	CDlg04271App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDlg04271App theApp;