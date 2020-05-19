// MyDlg4.cpp : 实现文件
//

#include "stdafx.h"
#include "Dlg0420.24填充颜色.h"
#include "MyDlg4.h"
#include "afxdialogex.h"


// MyDlg4 对话框

IMPLEMENT_DYNAMIC(MyDlg4, CDialogEx)

MyDlg4::MyDlg4(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, z(0)
{

}

MyDlg4::~MyDlg4()
{
}

void MyDlg4::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, z);
}


BEGIN_MESSAGE_MAP(MyDlg4, CDialogEx)
END_MESSAGE_MAP()


// MyDlg4 消息处理程序
