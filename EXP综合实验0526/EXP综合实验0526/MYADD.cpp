// MYADD.cpp : 实现文件
//

#include "stdafx.h"
#include "EXP综合实验0526.h"
#include "MYADD.h"
#include "afxdialogex.h"


// MYADD 对话框

IMPLEMENT_DYNAMIC(MYADD, CDialogEx)

MYADD::MYADD(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADD, pParent)
	, Name1(_T(""))
	, StuNum1(0)
	, Major1(_T(""))
	, Sex1(_T(""))
	, Birth1(0)
	, Phone1(0)
	, Home1(_T(""))
	, Picture1(_T(""))
{

}

MYADD::~MYADD()
{
}

void MYADD::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, Name1);
	DDX_Text(pDX, IDC_EDIT2, StuNum1);
	DDX_Text(pDX, IDC_EDIT3, Major1);
	DDX_Text(pDX, IDC_EDIT4, Sex1);
	DDX_Text(pDX, IDC_EDIT5, Birth1);
	DDX_Text(pDX, IDC_EDIT6, Phone1);
	DDX_Text(pDX, IDC_EDIT7, Home1);
	DDX_Text(pDX, IDC_EDIT8, Picture1);
}


BEGIN_MESSAGE_MAP(MYADD, CDialogEx)
END_MESSAGE_MAP()


// MYADD 消息处理程序
