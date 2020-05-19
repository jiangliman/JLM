// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "EXP0427.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include <string>
#include<iostream>;
#include<fstream>
using namespace std;

// MyDlg �Ի���

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg ��Ϣ�������
void MyDlg::foo(CImage &img, int &sx, int &sy, int &w, int &h)
{
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	float rect_radio = 1.0 * rect.Width() / rect.Height();
	float image_radio = 1.0 * img.GetWidth() / img.GetHeight();

	if (rect_radio > image_radio)
	{
		h = rect.Height();
		w = image_radio * h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / image_radio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
}

void MyDlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
    CFileDialog cfd(true);
	CImage img;
	CString s1;
	int t = cfd.DoModal();
	if (t == IDOK)
	{
		CString filename = cfd.GetPathName();
		ifstream ifs(filename);
		string s;
		ifs >> s;
		int sx, sy, w, h;
		s1 = CString(s.c_str());
		img.Load(s1);
		foo(img, sx, sy, w, h);
		CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
		img.Draw(pDC->m_hDC, sx, sy, w, h);
		ReleaseDC(pDC);
	}
}
