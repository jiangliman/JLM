// SELECT_DLG.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "EXP�ۺ�ʵ����0525.h"
#include "SELECT_DLG.h"
#include "afxdialogex.h"


// SELECT_DLG �Ի���

IMPLEMENT_DYNAMIC(SELECT_DLG, CDialogEx)

SELECT_DLG::SELECT_DLG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SELECT, pParent)
	, select(_T(""))
{

}

SELECT_DLG::~SELECT_DLG()
{
}

void SELECT_DLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, select);
}


BEGIN_MESSAGE_MAP(SELECT_DLG, CDialogEx)
END_MESSAGE_MAP()


// SELECT_DLG ��Ϣ�������
