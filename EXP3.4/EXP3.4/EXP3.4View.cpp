
// EXP3.4View.cpp : CEXP34View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP3.4.h"
#endif

#include "EXP3.4Doc.h"
#include "EXP3.4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP34View

IMPLEMENT_DYNCREATE(CEXP34View, CView)

BEGIN_MESSAGE_MAP(CEXP34View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_KEYDOWN()
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CEXP34View ����/����

CEXP34View::CEXP34View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP34View::~CEXP34View()
{
}

BOOL CEXP34View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP34View ����

void CEXP34View::OnDraw(CDC* pDC)
{
	CEXP34Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->cr);
}


// CEXP34View ���

#ifdef _DEBUG
void CEXP34View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP34View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP34Doc* CEXP34View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP34Doc)));
	return (CEXP34Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP34View ��Ϣ�������


void CEXP34View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP34Doc*pDoc = GetDocument();
	if(nFlags)
	{
		pDoc->cr.left = 600;    pDoc->cr.top = 250;
		pDoc->cr.right = 800;     pDoc->cr.bottom = 350;
	}
	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}


void CEXP34View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP34Doc*pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{case VK_LEFT:
		if(pDoc->cr.left>0)
		{
			pDoc->cr.left -= 5;
			pDoc->cr.right -= 5;
		}break;
	case VK_RIGHT:
		if (pDoc->cr.right<=(clientRec.right- clientRec.left))
		{
			pDoc->cr.left += 5;
			pDoc->cr.right += 5;
		}break;
	case VK_UP:
		if (pDoc->cr.top>0)
		{
			pDoc->cr.top -= 5;
			pDoc->cr.bottom -= 5;
		}break;
	case VK_DOWN:
		if (pDoc->cr.bottom <= (clientRec.bottom - clientRec.top))
		{
			pDoc->cr.top += 5;
			pDoc->cr.bottom += 5;
		}break;

	}
	Invalidate();

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CEXP34View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP34Doc*pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case 'H':
		if (pDoc->cr.left > 0)
		{
			pDoc->cr.left -= 5;
			pDoc->cr.top -= 5;
			pDoc->cr.bottom -= 0;
			pDoc->cr.right -= 0;
		}break;
	case 'E':
		if (pDoc->cr.right <= (clientRec.right - clientRec.left))
		{pDoc->cr.left -= 0;
			pDoc->cr.top -= 0;
			pDoc->cr.bottom -= 5;
			pDoc->cr.right -= 5;
		}break;
	}
		Invalidate();
	CView::OnChar(nChar, nRepCnt, nFlags);
}
