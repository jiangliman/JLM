
// Dlg0420.21View.cpp : CDlg042021View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg0420.21.h"
#endif

#include "Dlg0420.21Doc.h"
#include "Dlg0420.21View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg042021View

IMPLEMENT_DYNCREATE(CDlg042021View, CView)

BEGIN_MESSAGE_MAP(CDlg042021View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CDlg042021View ����/����

CDlg042021View::CDlg042021View()
{
	// TODO: �ڴ˴���ӹ������
	

}

CDlg042021View::~CDlg042021View()
{
}

BOOL CDlg042021View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg042021View ����

void CDlg042021View::OnDraw(CDC* /*pDC*/)
{
	CDlg042021Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	GetDC()->Ellipse(cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDlg042021View ���

#ifdef _DEBUG
void CDlg042021View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg042021View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg042021Doc* CDlg042021View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg042021Doc)));
	return (CDlg042021Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg042021View ��Ϣ�������





void CDlg042021View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (nFlags)
	{
		cr.left = point.x-150;
		cr.top = point.y-50;
		cr.right = point.x + 100;
		cr.bottom = point.y + 100;      
	}
	
	Invalidate();
	

	CView::OnMouseMove(nFlags, point);
}
