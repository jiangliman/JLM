
// Dlg0420.22View.cpp : CDlg042022View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg0420.22.h"
#endif

#include "Dlg0420.22Doc.h"
#include "Dlg0420.22View.h"
#include "MyDlg2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg042022View

IMPLEMENT_DYNCREATE(CDlg042022View, CView)

BEGIN_MESSAGE_MAP(CDlg042022View, CView)
	ON_COMMAND(Popout, &CDlg042022View::OnPopout)
END_MESSAGE_MAP()

// CDlg042022View ����/����

CDlg042022View::CDlg042022View()
{
	// TODO: �ڴ˴���ӹ������

}

CDlg042022View::~CDlg042022View()
{
}

BOOL CDlg042022View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg042022View ����

void CDlg042022View::OnDraw(CDC* /*pDC*/)
{
	CDlg042022Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDlg042022View ���

#ifdef _DEBUG
void CDlg042022View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg042022View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg042022Doc* CDlg042022View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg042022Doc)));
	return (CDlg042022Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg042022View ��Ϣ�������


void CDlg042022View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg2 dlg2;
	int r = dlg2.DoModal();
	if (r == IDOK) {
		cr.top = dlg2.top;
		cr.left = dlg2.left;
		cr.bottom = dlg2.bottom;
		cr.right = dlg2.right;
		GetDC()->Ellipse(cr);
	}
}
