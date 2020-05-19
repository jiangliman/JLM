
// EXP3.5View.cpp : CEXP35View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP3.5.h"
#endif

#include "EXP3.5Doc.h"
#include "EXP3.5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP35View

IMPLEMENT_DYNCREATE(CEXP35View, CView)

BEGIN_MESSAGE_MAP(CEXP35View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CEXP35View ����/����

CEXP35View::CEXP35View()
{
	// TODO: �ڴ˴���ӹ������
	count = 0;
	
}

CEXP35View::~CEXP35View()
{
}

BOOL CEXP35View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP35View ����

void CEXP35View::OnDraw(CDC* /*pDC*/)
{
	CEXP35Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
}


// CEXP35View ���

#ifdef _DEBUG
void CEXP35View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP35View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP35Doc* CEXP35View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP35Doc)));
	return (CEXP35Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP35View ��Ϣ�������


void CEXP35View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
   CClientDC dc(this);
   ca.left = point.x;
   ca.top = point.y;

	CView::OnLButtonDown(nFlags, point);
}


void CEXP35View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);

	ca.right = point.x;
	ca.bottom = point.y;
	count = 0;

	CView::OnLButtonUp(nFlags, point);
}


void CEXP35View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CView::OnMouseMove(nFlags, point);
	CEXP35Doc*pDoc = GetDocument();
	CString s1;
    CClientDC dc(this);
     if(nFlags)
     {s.Format(_T("MouseMove������%d��"), count++);
     dc.TextOutW(10, 10, s);
     }
	 if (ca.right > ca.left) {
		 i = ca.right - ca.left;
	 }
	 if (ca.left > ca.right) {
		 i = ca.left - ca.right;
	 }
	s1.Format(_T("�����ƶ�%d�����ط���һ��"), i);
	
	dc.TextOutW(10, 50, s1);

	
	CView::OnMouseMove(nFlags, point);
}
