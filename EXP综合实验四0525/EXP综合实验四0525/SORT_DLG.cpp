// SORT_DLG.cpp : 实现文件
//

#include "stdafx.h"
#include "EXP综合实验四0525.h"
#include "SORT_DLG.h"
#include "afxdialogex.h"


// SORT_DLG 对话框

IMPLEMENT_DYNAMIC(SORT_DLG, CDialogEx)

SORT_DLG::SORT_DLG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SORT, pParent)
	, sort(_T(""))
{

}

SORT_DLG::~SORT_DLG()
{
}

void SORT_DLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, sort);
}


BEGIN_MESSAGE_MAP(SORT_DLG, CDialogEx)
END_MESSAGE_MAP()


// SORT_DLG 消息处理程序
