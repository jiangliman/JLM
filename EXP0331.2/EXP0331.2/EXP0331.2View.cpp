
// EXP0331.2View.cpp : CEXP03312View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP0331.2.h"
#endif

#include "EXP0331.2Doc.h"
#include "EXP0331.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP03312View

IMPLEMENT_DYNCREATE(CEXP03312View, CView)

BEGIN_MESSAGE_MAP(CEXP03312View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CEXP03312View ����/����

CEXP03312View::CEXP03312View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP03312View::~CEXP03312View()
{
}

BOOL CEXP03312View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP03312View ����

void CEXP03312View::OnDraw(CDC* /*pDC*/)
{
	CEXP03312Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CEXP03312View ���

#ifdef _DEBUG
void CEXP03312View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP03312View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP03312Doc* CEXP03312View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP03312Doc)));
	return (CEXP03312Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP03312View ��Ϣ�������


void CEXP03312View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	x = point.x;
	y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CEXP03312View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CRect Rect(100, 100, 500, 500);
	str.Format(_T("%c"), nChar);
	if (x >= 100 && y >= 100) {
		pos = (x - 100) / 10 + (y - 100) / 2*3;
		s.Insert(pos, nChar);
	}
	else {
		s.Append(str);
	}
	dc.DrawText(s, Rect, DT_LEFT | DT_WORDBREAK | DT_EDITCONTROL);
	CView::OnChar(nChar, nRepCnt, nFlags);
}


