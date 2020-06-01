// EDIT_DLG.cpp : 实现文件
//

#include "stdafx.h"
#include "EXP综合实验三0519.h"
#include "EDIT_DLG.h"
#include "afxdialogex.h"


// EDIT_DLG 对话框

IMPLEMENT_DYNAMIC(EDIT_DLG, CDialogEx)

EDIT_DLG::EDIT_DLG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_EDIT, pParent)
	, iii(0)
{

}

EDIT_DLG::~EDIT_DLG()
{
}

void EDIT_DLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, iii);
}


BEGIN_MESSAGE_MAP(EDIT_DLG, CDialogEx)
END_MESSAGE_MAP()


// EDIT_DLG 消息处理程序
