
// EXP2.2View.cpp : CEXP22View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP2.2.h"
#endif

#include "EXP2.2Doc.h"
#include "EXP2.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP22View

IMPLEMENT_DYNCREATE(CEXP22View, CView)

BEGIN_MESSAGE_MAP(CEXP22View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP22View ����/����

CEXP22View::CEXP22View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP22View::~CEXP22View()
{
}

BOOL CEXP22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP22View ����

void CEXP22View::OnDraw(CDC* /*pDC*/)
{
	CEXP22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CEXP22View ���

#ifdef _DEBUG
void CEXP22View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP22Doc* CEXP22View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP22Doc)));
	return (CEXP22Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP22View ��Ϣ�������


void CEXP22View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP22Doc* pDoc = GetDocument();
	CClientDC s1(this);
	CString s;
	s.Format(_T("A+B=%d"),pDoc->A+pDoc->B);
	s1.TextOutW(0, 10, s);

	CView::OnLButtonDown(nFlags, point);
}
