
// EXP4View.cpp : CEXP4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP4.h"
#endif

#include "EXP4Doc.h"
#include "EXP4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP4View

IMPLEMENT_DYNCREATE(CEXP4View, CView)

BEGIN_MESSAGE_MAP(CEXP4View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP4View ����/����

CEXP4View::CEXP4View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(256);

}

CEXP4View::~CEXP4View()
{
}

BOOL CEXP4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP4View ����

void CEXP4View::OnDraw(CDC* pDC)
{
	CEXP4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i=0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));

}


// CEXP4View ���

#ifdef _DEBUG
void CEXP4View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP4Doc* CEXP4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP4Doc)));
	return (CEXP4Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP4View ��Ϣ�������


void CEXP4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r = rand() % 99 + 5;
	int r1 = rand() % 50+ 3;
	CRect cr(point.x-r,point.y-r1,point.x+r,point.y+r1);
	ca.Add(cr);
	this->Invalidate();

	//CClientDC dc(this);
	//dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
