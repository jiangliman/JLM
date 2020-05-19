
// EXP4.6View.cpp : CEXP46View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP4.6.h"
#endif

#include "EXP4.6Doc.h"
#include "EXP4.6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP46View

IMPLEMENT_DYNCREATE(CEXP46View, CView)

BEGIN_MESSAGE_MAP(CEXP46View, CView)
	ON_COMMAND(LINEDRAWING, &CEXP46View::OnLinedrawing)
	ON_COMMAND(RECTDRAWING, &CEXP46View::OnRectdrawing)
	ON_COMMAND(ELLIPSEDRAWING, &CEXP46View::OnEllipsedrawing)
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP46View ����/����

CEXP46View::CEXP46View()
{
	// TODO: �ڴ˴���ӹ������
	a = 2;

}

CEXP46View::~CEXP46View()
{
}

BOOL CEXP46View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP46View ����

void CEXP46View::OnDraw(CDC* /*pDC*/)
{
	CEXP46Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CEXP46View ���

#ifdef _DEBUG
void CEXP46View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP46View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP46Doc* CEXP46View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP46Doc)));
	return (CEXP46Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP46View ��Ϣ�������


void CEXP46View::OnLinedrawing()
{
	// TODO: �ڴ���������������
	a = 0;
	
}


void CEXP46View::OnRectdrawing()
{
	// TODO: �ڴ���������������
	a = 1;

	
}


void CEXP46View::OnEllipsedrawing()
{
	// TODO: �ڴ���������������
	a = 2;

}


void CEXP46View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CRect ca;
	cr.right = point.x;
	cr.bottom = point.y;
	switch (a)
	{
	case 0:
		dc.MoveTo(cr.top, cr.left);
		dc.LineTo(cr.bottom, cr.right);
		break;
	case 1:
		ca.left = cr.left;
		ca.top = cr.top;
		ca.right = cr.right;
		ca.bottom = cr.bottom;
		dc.Rectangle(ca);
		break;
	case 2:
		ca.left = cr.left;
		ca.top = cr.top;
		ca.right = cr.right;
		ca.bottom = cr.bottom;
		dc.Ellipse(ca);
		break;

	}

	CView::OnLButtonUp(nFlags, point);
}


void CEXP46View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	cr.left = point.x;
	cr.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}
