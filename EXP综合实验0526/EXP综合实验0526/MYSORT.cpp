// MYSORT.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "EXP�ۺ�ʵ��0526.h"
#include "MYSORT.h"
#include "afxdialogex.h"


// MYSORT �Ի���

IMPLEMENT_DYNAMIC(MYSORT, CDialogEx)

MYSORT::MYSORT(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SORT, pParent)
	, sort(_T(""))
{

}

MYSORT::~MYSORT()
{
}

void MYSORT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, sort);
}


BEGIN_MESSAGE_MAP(MYSORT, CDialogEx)
END_MESSAGE_MAP()


// MYSORT ��Ϣ�������
