
// EXP0225.2View.cpp : CEXP02252View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP0225.2.h"
#endif

#include "EXP0225.2Doc.h"
#include "EXP0225.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP02252View

IMPLEMENT_DYNCREATE(CEXP02252View, CView)

BEGIN_MESSAGE_MAP(CEXP02252View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP02252View ����/����

CEXP02252View::CEXP02252View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP02252View::~CEXP02252View()
{
}

BOOL CEXP02252View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP02252View ����

void CEXP02252View::OnDraw(CDC* /*pDC*/)
{
	CEXP02252Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CEXP02252View ���

#ifdef _DEBUG
void CEXP02252View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP02252View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP02252Doc* CEXP02252View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP02252Doc)));
	return (CEXP02252Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP02252View ��Ϣ�������


void CEXP02252View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP02252Doc* pDoc = GetDocument();
	s.Format(_T("%d"), pDoc->count++);
	CView::OnLButtonDown(nFlags, point);
}


void CEXP02252View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP02252Doc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(0, 10, s);
	CView::OnRButtonDown(nFlags, point);
}
