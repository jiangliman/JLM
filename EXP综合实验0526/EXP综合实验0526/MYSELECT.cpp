// MYSELECT.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "EXP�ۺ�ʵ��0526.h"
#include "MYSELECT.h"
#include "afxdialogex.h"


// MYSELECT �Ի���

IMPLEMENT_DYNAMIC(MYSELECT, CDialogEx)

MYSELECT::MYSELECT(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SELECT, pParent)
	, select(_T(""))
{

}

MYSELECT::~MYSELECT()
{
}

void MYSELECT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, select);
}


BEGIN_MESSAGE_MAP(MYSELECT, CDialogEx)
END_MESSAGE_MAP()


// MYSELECT ��Ϣ�������
