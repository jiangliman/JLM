
// EXP3.3View.cpp : CEXP33View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP3.3.h"
#endif

#include "EXP3.3Doc.h"
#include "EXP3.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP33View

IMPLEMENT_DYNCREATE(CEXP33View, CView)

BEGIN_MESSAGE_MAP(CEXP33View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CEXP33View ����/����

CEXP33View::CEXP33View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP33View::~CEXP33View()
{
}

BOOL CEXP33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP33View ����

void CEXP33View::OnDraw(CDC* pDC)
{
	CEXP33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
	

}


// CEXP33View ���

#ifdef _DEBUG
void CEXP33View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP33Doc* CEXP33View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP33Doc)));
	return (CEXP33Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP33View ��Ϣ�������


void CEXP33View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP33Doc*pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("(%d,%d)"), point.x, point.y);
	dc.TextOutW(100, 100, s);
	CView::OnMouseMove(nFlags, point);
}


void CEXP33View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP33Doc*pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->m_Point = point;
	pDoc->ca.left=point.x;
	pDoc->ca.top=point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CEXP33View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP33Doc*pDoc = GetDocument();
	pDoc->n_Point = point;
	pDoc->ca.right = point.x;
	pDoc->ca.bottom= point.y;
	CClientDC dc(this);
	dc.Rectangle(pDoc->ca);
	CView::OnLButtonUp(nFlags, point);
}
