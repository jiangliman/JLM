// MYRECORD.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "EXP�ۺ�ʵ��0526.h"
#include "MYRECORD.h"
#include "afxdialogex.h"


// MYRECORD �Ի���

IMPLEMENT_DYNAMIC(MYRECORD, CDialogEx)

MYRECORD::MYRECORD(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_RECORD, pParent)
	, record(_T(""))
{

}

MYRECORD::~MYRECORD()
{
}

void MYRECORD::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, record);
}


BEGIN_MESSAGE_MAP(MYRECORD, CDialogEx)
END_MESSAGE_MAP()


// MYRECORD ��Ϣ�������
