// MyDlg2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Dlg0414.12.h"
#include "MyDlg2.h"
#include "afxdialogex.h"


// MyDlg2 �Ի���

IMPLEMENT_DYNAMIC(MyDlg2, CDialogEx)

MyDlg2::MyDlg2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s1(_T(""))
{

}

MyDlg2::~MyDlg2()
{
}

void MyDlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, Lbox1);
	DDX_Text(pDX, IDC_EDIT1, s1);
}


BEGIN_MESSAGE_MAP(MyDlg2, CDialogEx)
	ON_LBN_SELCHANGE(IDC_LIST1, &MyDlg2::OnLbnSelchangeList1)
END_MESSAGE_MAP()


// MyDlg2 ��Ϣ�������


void MyDlg2::OnLbnSelchangeList1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
}


BOOL MyDlg2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	Lbox1.AddString(s1);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
