// ADD_DLG.cpp : 实现文件
//

#include "stdafx.h"
#include "EXP综合实验三0519.h"
#include "ADD_DLG.h"
#include "afxdialogex.h"


// ADD_DLG 对话框

IMPLEMENT_DYNAMIC(ADD_DLG, CDialogEx)

ADD_DLG::ADD_DLG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADD, pParent)
	, ii(0)
{

}

ADD_DLG::~ADD_DLG()
{
}

void ADD_DLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, ii);
}


BEGIN_MESSAGE_MAP(ADD_DLG, CDialogEx)
END_MESSAGE_MAP()


// ADD_DLG 消息处理程序
