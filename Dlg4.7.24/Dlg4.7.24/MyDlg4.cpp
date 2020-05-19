// MyDlg4.cpp : 实现文件
//

#include "stdafx.h"
#include "Dlg4.7.24.h"
#include "MyDlg4.h"
#include "afxdialogex.h"


// MyDlg4 对话框

IMPLEMENT_DYNAMIC(MyDlg4, CDialogEx)

MyDlg4::MyDlg4(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(_T(""))
	, y(0)
	, z(_T(""))
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
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg4::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg4 消息处理程序


void MyDlg4::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	z.Format(_T("%s%d"),x,y);
	UpdateData(false);
}
