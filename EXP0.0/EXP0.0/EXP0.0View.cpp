
// EXP0.0View.cpp : CEXP00View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP0.0.h"
#endif

#include "EXP0.0Doc.h"
#include "EXP0.0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP00View

IMPLEMENT_DYNCREATE(CEXP00View, CView)

BEGIN_MESSAGE_MAP(CEXP00View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP00View ����/����

CEXP00View::CEXP00View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP00View::~CEXP00View()
{
}

BOOL CEXP00View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP00View ����

void CEXP00View::OnDraw(CDC* /*pDC*/)
{
	CEXP00Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	

}


// CEXP00View ���

#ifdef _DEBUG
void CEXP00View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP00View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP00Doc* CEXP00View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP00Doc)));
	return (CEXP00Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP00View ��Ϣ�������


void CEXP00View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	int r = rand() % 50 + 5;
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr);
	CClientDC dc(this);
    dc.Ellipse(cr);

	CView::OnLButtonDown(nFlags, point);
}
