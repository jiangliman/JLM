// SELECT_DLG.cpp : 实现文件
//

#include "stdafx.h"
#include "EXP综合实验四0525.h"
#include "SELECT_DLG.h"
#include "afxdialogex.h"


// SELECT_DLG 对话框

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


// SELECT_DLG 消息处理程序
