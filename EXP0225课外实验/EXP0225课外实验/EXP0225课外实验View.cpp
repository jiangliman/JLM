
// EXP0225����ʵ��View.cpp : CEXP0225����ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP0225����ʵ��.h"
#endif

#include "EXP0225����ʵ��Doc.h"
#include "EXP0225����ʵ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP0225����ʵ��View

IMPLEMENT_DYNCREATE(CEXP0225����ʵ��View, CView)

BEGIN_MESSAGE_MAP(CEXP0225����ʵ��View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP0225����ʵ��View ����/����

CEXP0225����ʵ��View::CEXP0225����ʵ��View()
{
	// TODO: �ڴ˴���ӹ������
	s2 = "�Ǽ������Ϣ�빤��ѧԺ�ġ�";
}

CEXP0225����ʵ��View::~CEXP0225����ʵ��View()
{
}

BOOL CEXP0225����ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP0225����ʵ��View ����

void CEXP0225����ʵ��View::OnDraw(CDC* /*pDC*/)
{
	CEXP0225����ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CEXP0225����ʵ��View ���

#ifdef _DEBUG
void CEXP0225����ʵ��View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP0225����ʵ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP0225����ʵ��Doc* CEXP0225����ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP0225����ʵ��Doc)));
	return (CEXP0225����ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP0225����ʵ��View ��Ϣ�������


void CEXP0225����ʵ��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP0225����ʵ��Doc* pDoc = GetDocument();
	CString s;
	s = pDoc->s1 + s2;
	GetDC()->TextOutW(10, 10, s);
	CView::OnLButtonDown(nFlags, point);
}
