
// EXP3View.cpp : CEXP3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP3.h"
#endif

#include "EXP3Doc.h"
#include "EXP3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP3View

IMPLEMENT_DYNCREATE(CEXP3View, CView)

BEGIN_MESSAGE_MAP(CEXP3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP3View ����/����

CEXP3View::CEXP3View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP3View::~CEXP3View()
{
}

BOOL CEXP3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP3View ����

void CEXP3View::OnDraw(CDC* /*pDC*/)
{
	CEXP3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CEXP3View ���

#ifdef _DEBUG
void CEXP3View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP3Doc* CEXP3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP3Doc)));
	return (CEXP3Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP3View ��Ϣ�������


void CEXP3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP3Doc*pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	s.Format(_T("%d"), pDoc->count++);
	CView::OnLButtonDown(nFlags, point);
}


void CEXP3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ	
	CEXP3Doc*pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	dc.TextOutW(0, 10, s);
	CView::OnRButtonDown(nFlags, point);
}
