
// Dlg0420.11.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDlg042011App: 
// �йش����ʵ�֣������ Dlg0420.11.cpp
//

class CDlg042011App : public CWinApp
{
public:
	CDlg042011App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDlg042011App theApp;