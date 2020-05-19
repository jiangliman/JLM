
// Dlg0420.23View.cpp : CDlg042023View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg0420.23.h"
#endif

#include "Dlg0420.23Doc.h"
#include "Dlg0420.23View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg042023View

IMPLEMENT_DYNCREATE(CDlg042023View, CView)

BEGIN_MESSAGE_MAP(CDlg042023View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CDlg042023View ����/����

CDlg042023View::CDlg042023View()
{
	// TODO: �ڴ˴���ӹ������
	cr.left = 100;
	cr.top = 100;
	cr.bottom = 300;
	cr.right = 250;

}

CDlg042023View::~CDlg042023View()
{
}

BOOL CDlg042023View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg042023View ����

void CDlg042023View::OnDraw(CDC* /*pDC*/)
{
	CDlg042023Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	GetDC()->Ellipse(cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDlg042023View ���

#ifdef _DEBUG
void CDlg042023View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg042023View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg042023Doc* CDlg042023View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg042023Doc)));
	return (CDlg042023Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg042023View ��Ϣ�������


void CDlg042023View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if ((point.x < cr.right) && (point.x > cr.left) && (point.y > cr.top) && (point.y < cr.bottom)) {
		CRect ca;
		ca.left = cr.left;
		ca.top = cr.top;
		ca.right = cr.right;
		ca.bottom = cr.bottom;
		CDC * dc = GetDC();
		CPen * pOldPen = NULL;
		CPen pen;
		pen.CreatePen(PS_DASH, 1, RGB(0, 0, 0));
		pOldPen = dc->SelectObject(&pen);
		CBrush * pOldBrush = NULL;
		CBrush * pBrush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));//����͸��Ч��
		pOldBrush = dc->SelectObject(pBrush);
		dc->Rectangle(ca);
		
	}
	
	CView::OnLButtonDown(nFlags, point);
}
