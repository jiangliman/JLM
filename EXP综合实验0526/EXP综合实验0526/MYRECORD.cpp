// MYRECORD.cpp : 实现文件
//

#include "stdafx.h"
#include "EXP综合实验0526.h"
#include "MYRECORD.h"
#include "afxdialogex.h"


// MYRECORD 对话框

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


// MYRECORD 消息处理程序
