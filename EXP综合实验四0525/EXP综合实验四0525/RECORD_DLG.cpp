// RECORD_DLG.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "EXP�ۺ�ʵ����0525.h"
#include "RECORD_DLG.h"
#include "afxdialogex.h"


// RECORD_DLG �Ի���

IMPLEMENT_DYNAMIC(RECORD_DLG, CDialogEx)

RECORD_DLG::RECORD_DLG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_RECORD, pParent)
	, record(_T(""))
{

}

RECORD_DLG::~RECORD_DLG()
{
}

void RECORD_DLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, record);
}


BEGIN_MESSAGE_MAP(RECORD_DLG, CDialogEx)
END_MESSAGE_MAP()


// RECORD_DLG ��Ϣ�������
