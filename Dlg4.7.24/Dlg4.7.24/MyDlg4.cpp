// MyDlg4.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Dlg4.7.24.h"
#include "MyDlg4.h"
#include "afxdialogex.h"


// MyDlg4 �Ի���

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


// MyDlg4 ��Ϣ�������


void MyDlg4::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	z.Format(_T("%s%d"),x,y);
	UpdateData(false);
}
