
// EXP0310����ʵ��View.cpp : CEXP0310����ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP0310����ʵ��.h"
#endif

#include "EXP0310����ʵ��Doc.h"
#include "EXP0310����ʵ��View.h"
#include"math.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP0310����ʵ��View

IMPLEMENT_DYNCREATE(CEXP0310����ʵ��View, CView)

BEGIN_MESSAGE_MAP(CEXP0310����ʵ��View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP0310����ʵ��View ����/����

CEXP0310����ʵ��View::CEXP0310����ʵ��View()
{
	// TODO: �ڴ˴���ӹ������
	count = 0;
	a = rand() % 99 + 5;
	b= rand() % 60 + 4;
}

CEXP0310����ʵ��View::~CEXP0310����ʵ��View()
{
}

BOOL CEXP0310����ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP0310����ʵ��View ����

void CEXP0310����ʵ��View::OnDraw(CDC* pDC)
{
	CEXP0310����ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CClientDC dc(this);
	CRect A(10, 30, 180, 160);
	CRect B(210, 30, 380, 160);
	CRect C(410, 30, 580, 160);
	CRect D(610, 30, 780, 160);
	dc.Rectangle(A);
	dc.Rectangle(B);
	dc.Rectangle(C);
	dc.Rectangle(D);
}


// CEXP0310����ʵ��View ���

#ifdef _DEBUG
void CEXP0310����ʵ��View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP0310����ʵ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP0310����ʵ��Doc* CEXP0310����ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP0310����ʵ��Doc)));
	return (CEXP0310����ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP0310����ʵ��View ��Ϣ�������


void CEXP0310����ʵ��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP0310����ʵ��Doc* pDoc = GetDocument();
	CClientDC dc(this);
	
	CString s1, s2;
	s1.Format(_T("%d"), a);
	s2.Format(_T("%d"), b);
	if (point.x > 10 && point.x < 180 && point.y>30 && point.y < 160)
		dc.TextOutW(point.x, point.y, s1);
	else if (point.x > 210 && point.x < 380 && point.y>30 && point.y < 160)
		dc.TextOutW(point.x, point.y, s2);
	
	else if (point.x > 610 && point.x < 780 && point.y>30 && point.y < 160) {
		count++;
		switch (count % 4) {
		case 0:
			x = "��";
			break;
		case 1:
			x = "+";
			break;
		case 2:
			x = "-";
			break;
		case 3:
			x = "��";
			break;
		default:
			x.Format(_T("���������Ч��"));
		}
		dc.TextOutW(point.x, point.y, x);
	}

	else {
		s = "�����Ч";
		dc.TextOutW(point.x, point.y, s);
	}

	CView::OnLButtonDown(nFlags, point);
}



void CEXP0310����ʵ��View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP0310����ʵ��Doc* pDoc = GetDocument();
	CClientDC dc(this);
	if (point.x > 410 && point.x < 580 && point.y>30 && point.y < 160)
	{
		switch (count % 4) {
		case 0:
			s.Format(_T("%d"), a / b);
			break;
		case 1:
			s.Format(_T("%d"), a + b);
			break;
		case 2:
			s.Format(_T("%d"), a - b);
			break;
		case 3:
			s.Format(_T("%d"), a * b);
			break;
		default:
			s.Format(_T("���������Ч��"));
		}
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnRButtonDown(nFlags, point);
}
