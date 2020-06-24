// MYSORT.cpp : 实现文件
//

#include "stdafx.h"
#include "EXP综合实验0526.h"
#include "MYSORT.h"
#include "afxdialogex.h"


// MYSORT 对话框

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


// MYSORT 消息处理程序
