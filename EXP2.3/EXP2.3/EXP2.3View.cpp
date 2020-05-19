
// EXP2.3View.cpp : CEXP23View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP2.3.h"
#endif

#include "EXP2.3Doc.h"
#include "EXP2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP23View

IMPLEMENT_DYNCREATE(CEXP23View, CView)

BEGIN_MESSAGE_MAP(CEXP23View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP23View ����/����

CEXP23View::CEXP23View()
{
	// TODO: �ڴ˴���ӹ������
	

}

CEXP23View::~CEXP23View()
{
}

BOOL CEXP23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP23View ����

void CEXP23View::OnDraw(CDC* pDC)
{
	CEXP23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CClientDC dc(this);
	CRect A(50, 100, 200, 200);
	CRect B(110, 300, 210, 400);
	CRect C(300, 400, 600, 600);
	dc.Rectangle(A);
	dc.Rectangle(B);
	dc.Rectangle(C);

}


// CEXP23View ���

#ifdef _DEBUG
void CEXP23View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP23Doc* CEXP23View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP23Doc)));
	return (CEXP23Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP23View ��Ϣ�������


void CEXP23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP23Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CRect A(50, 100, 200, 200);
	CRect B(110, 300, 210, 400);
	CRect C(300, 400, 600, 600);
	dc.Rectangle(A);
    dc.Rectangle(B);
    dc.Rectangle(C);
	 CString a,b,s;
    int r = rand() % 99 + 5;
	int r1 = rand() % 50 + 6;
	a.Format(_T("%d"), r);
	b.Format(_T("%d"), r1);
	s.Format(_T("%d"), r+r1);
	if (point.x > 50 && point.x < 200 && point.y>100 && point.y < 200)
		dc.TextOutW(point.x, point.y, a);
	else if (point.x > 110 && point.x < 210 && point.y>300 && point.y < 400)
		dc.TextOutW(point.x, point.y, b);
	else if (point.x > 300 && point.x < 600 && point.y>400 && point.y < 600)
		dc.TextOutW(point.x, point.y, s);
	else {
		s = "�����Ч";
			dc.TextOutW(point.x, point.y, s);
	}
	
	CView::OnLButtonDown(nFlags, point);
}

