
// EXP2.1View.cpp : CEXP21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP2.1.h"
#endif

#include "EXP2.1Doc.h"
#include "EXP2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP21View

IMPLEMENT_DYNCREATE(CEXP21View, CView)

BEGIN_MESSAGE_MAP(CEXP21View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CEXP21View ����/����

CEXP21View::CEXP21View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP21View::~CEXP21View()
{
}

BOOL CEXP21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP21View ����

void CEXP21View::OnDraw(CDC* /*pDC*/)
{
	CEXP21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CEXP21View ���

#ifdef _DEBUG
void CEXP21View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP21Doc* CEXP21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP21Doc)));
	return (CEXP21Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP21View ��Ϣ�������


void CEXP21View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CClientDC s1(this);
	CString s;
	s.Format(_T("�����������"));
	s1.TextOutW(0, 10, s);



	CView::OnLButtonDown(nFlags, point);
}


void CEXP21View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ	
	CClientDC s1(this);
	CString s;
	s.Format(_T("�������̧��"));
	s1.TextOutW(0, 10, s);

	CView::OnLButtonUp(nFlags, point);
}
