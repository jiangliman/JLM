
// Dlg0414.10View.cpp : CDlg041410View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg0414.10.h"
#endif

#include "Dlg0414.10Doc.h"
#include "Dlg0414.10View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg041410View

IMPLEMENT_DYNCREATE(CDlg041410View, CView)

BEGIN_MESSAGE_MAP(CDlg041410View, CView)

	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CDlg041410View ����/����

CDlg041410View::CDlg041410View()
{
	// TODO: �ڴ˴���ӹ������

}

CDlg041410View::~CDlg041410View()
{
}

BOOL CDlg041410View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg041410View ����

void CDlg041410View::OnDraw(CDC* pDC)
{
	CDlg041410Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDlg041410View ���

#ifdef _DEBUG
void CDlg041410View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg041410View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg041410Doc* CDlg041410View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg041410Doc)));
	return (CDlg041410Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg041410View ��Ϣ�������




void CDlg041410View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);
	r = cfd.DoModal();
	if (r == IDOK)
	{
		filename = cfd.GetFileName();
		GetDC()->TextOutW(100, 100, filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}
