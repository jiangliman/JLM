// MYSELECT.cpp : 实现文件
//

#include "stdafx.h"
#include "EXP综合实验0526.h"
#include "MYSELECT.h"
#include "afxdialogex.h"


// MYSELECT 对话框

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


// MYSELECT 消息处理程序
