
// Dlg0420.24�����ɫView.cpp : CDlg042024�����ɫView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg0420.24�����ɫ.h"
#endif

#include "Dlg0420.24�����ɫDoc.h"
#include "Dlg0420.24�����ɫView.h"
#include "MyDlg4.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg042024�����ɫView

IMPLEMENT_DYNCREATE(CDlg042024�����ɫView, CView)

BEGIN_MESSAGE_MAP(CDlg042024�����ɫView, CView)
	ON_COMMAND(ID_Popout, &CDlg042024�����ɫView::OnPopout)
ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CDlg042024�����ɫView ����/����

CDlg042024�����ɫView::CDlg042024�����ɫView()
{
	// TODO: �ڴ˴���ӹ������
	cr.top = 100;
	cr.left = 100;
	cr.bottom = 300;
	cr.right = 400;

}

CDlg042024�����ɫView::~CDlg042024�����ɫView()
{
}

BOOL CDlg042024�����ɫView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg042024�����ɫView ����

void CDlg042024�����ɫView::OnDraw(CDC* /*pDC*/)
{
	CDlg042024�����ɫDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	GetDC()->Ellipse(cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDlg042024�����ɫView ���

#ifdef _DEBUG
void CDlg042024�����ɫView::AssertValid() const
{
	CView::AssertValid();
}

void CDlg042024�����ɫView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg042024�����ɫDoc* CDlg042024�����ɫView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg042024�����ɫDoc)));
	return (CDlg042024�����ɫDoc*)m_pDocument;
}
#endif //_DEBUG


// CDlg042024�����ɫView ��Ϣ�������


void CDlg042024�����ɫView::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg4 dlg4;
	int r = dlg4.DoModal();
	if (r == IDOK) {
		CDC* pDC = GetDC(); // �õ�DC
		CBrush brush(RGB(dlg4.x, dlg4.y, dlg4.z));//�����Լ���Ҫ�����ɫ
		CBrush *oldbrush;
		oldbrush = pDC->SelectObject(&brush);//ѡ�µĻ�ˢ
		pDC->Ellipse(cr.left, cr.top, cr.right, cr.bottom);
		pDC->SelectObject(oldbrush);//��ԭ���Ļ�ˢѡ��ȥ
	}

}





void CDlg042024�����ɫView::OnLButtonDown(UINT nFlags, CPoint point)
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
