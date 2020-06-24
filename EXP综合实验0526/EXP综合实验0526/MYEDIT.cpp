// MYEDIT.cpp : 实现文件
//

#include "stdafx.h"
#include "EXP综合实验0526.h"
#include "MYEDIT.h"
#include "afxdialogex.h"


// MYEDIT 对话框

IMPLEMENT_DYNAMIC(MYEDIT, CDialogEx)

MYEDIT::MYEDIT(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_EDIT, pParent)
	, Name2(_T(""))
	, StuNum2(0)
	, Major2(_T(""))
	, Sex2(_T(""))
	, Birth2(0)
	, Phone2(0)
	, Home2(_T(""))
	, Picture2(_T(""))
{

}

MYEDIT::~MYEDIT()
{
}

void MYEDIT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, Name2);
	DDX_Text(pDX, IDC_EDIT2, StuNum2);
	DDX_Text(pDX, IDC_EDIT3, Major2);
	DDX_Text(pDX, IDC_EDIT4, Sex2);
	DDX_Text(pDX, IDC_EDIT5, Birth2);
	DDX_Text(pDX, IDC_EDIT6, Phone2);
	DDX_Text(pDX, IDC_EDIT7, Home2);
	DDX_Text(pDX, IDC_EDIT8, Picture2);
}


BEGIN_MESSAGE_MAP(MYEDIT, CDialogEx)
END_MESSAGE_MAP()


// MYEDIT 消息处理程序
