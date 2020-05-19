
// EXP5View.cpp : CEXP5View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP5.h"
#endif

#include "EXP5Doc.h"
#include "EXP5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP5View

IMPLEMENT_DYNCREATE(CEXP5View, CView)

BEGIN_MESSAGE_MAP(CEXP5View, CView)
//	ON_WM_LBUTTONDOWN()
ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP5View ����/����

CEXP5View::CEXP5View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP5View::~CEXP5View()
{
}

BOOL CEXP5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP5View ����

void CEXP5View::OnDraw(CDC* /*pDC*/)
{
	CEXP5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);
	dc.Ellipse(cr);


	
}




// CEXP5View ���

#ifdef _DEBUG
void CEXP5View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP5Doc* CEXP5View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP5Doc)));
	return (CEXP5Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP5View ��Ϣ�������


//void CEXP5View::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	CRect cr;
//	this->GetClientRect(&cr);
//	
//	CClientDC dc(this);
//	dc.Ellipse(cr);
//    this->Invalidate();
//	CView::OnLButtonDown(nFlags, point);
//}


void CEXP5View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);
	dc.Ellipse(cr);
	
	CView::OnLButtonDown(nFlags, point);
}
