// highlightshow.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "EXP�ۺ�ʵ��0526.h"
#include "highlightshow.h"
#include "afxdialogex.h"


// highlightshow �Ի���

IMPLEMENT_DYNAMIC(highlightshow, CDialogEx)

highlightshow::highlightshow(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SHOWPICTURE, pParent)
{

}

highlightshow::~highlightshow()
{
}

void highlightshow::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(highlightshow, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// highlightshow ��Ϣ�������


void highlightshow::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
	draw_pic(FileName);
}

void highlightshow::draw_pic(CString file)
{
	CImage img;
	img.Load(file);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
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
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}