
// EXP0225.1View.cpp : CEXP02251View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP0225.1.h"
#endif

#include "EXP0225.1Doc.h"
#include "EXP0225.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP02251View

IMPLEMENT_DYNCREATE(CEXP02251View, CView)

BEGIN_MESSAGE_MAP(CEXP02251View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP02251View ����/����

CEXP02251View::CEXP02251View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP02251View::~CEXP02251View()
{
}

BOOL CEXP02251View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP02251View ����

void CEXP02251View::OnDraw(CDC* /*pDC*/)
{
	CEXP02251Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

}


// CEXP02251View ���

#ifdef _DEBUG
void CEXP02251View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP02251View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP02251Doc* CEXP02251View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP02251Doc)));
	return (CEXP02251Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP02251View ��Ϣ�������


void CEXP02251View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP02251Doc* pDoc = GetDocument();

	GetDC()->TextOutW(10, 10, pDoc->s);
	CView::OnLButtonDown(nFlags, point);
}
