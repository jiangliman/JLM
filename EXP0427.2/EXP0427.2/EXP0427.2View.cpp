
// EXP0427.2View.cpp : CEXP04272View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP0427.2.h"
#endif

#include "EXP0427.2Doc.h"
#include "EXP0427.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP04272View

IMPLEMENT_DYNCREATE(CEXP04272View, CView)

BEGIN_MESSAGE_MAP(CEXP04272View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CEXP04272View ����/����

CEXP04272View::CEXP04272View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP04272View::~CEXP04272View()
{
}

BOOL CEXP04272View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP04272View ����

void CEXP04272View::OnDraw(CDC* pDC)
{
	CEXP04272Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i < pDoc->ca.GetSize(); i++) {
		pDC->Ellipse(pDoc->ca[i]);
	}
}


// CEXP04272View ���

#ifdef _DEBUG
void CEXP04272View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP04272View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP04272Doc* CEXP04272View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP04272Doc)));
	return (CEXP04272Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP04272View ��Ϣ�������




void CEXP04272View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP04272Doc* pDoc = GetDocument();
	if (nFlags) {
		cr.left = point.x - 20;
		cr.right = point.x + 20;
		cr.top = point.y - 10;
		cr.bottom = point.y + 10;
		pDoc->ca.Add(cr);	
	}
    this->Invalidate();
	CView::OnMouseMove(nFlags, point);
}
