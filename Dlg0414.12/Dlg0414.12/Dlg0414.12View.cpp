
// Dlg0414.12View.cpp : CDlg041412View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg0414.12.h"
#endif

#include "Dlg0414.12Doc.h"
#include "Dlg0414.12View.h"
#include"MyDlg2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg041412View

IMPLEMENT_DYNCREATE(CDlg041412View, CView)

BEGIN_MESSAGE_MAP(CDlg041412View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_PopDialog, &CDlg041412View::OnPopdialog)
END_MESSAGE_MAP()

// CDlg041412View ����/����

CDlg041412View::CDlg041412View()
{
	// TODO: �ڴ˴���ӹ������

}

CDlg041412View::~CDlg041412View()
{
}

BOOL CDlg041412View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg041412View ����

void CDlg041412View::OnDraw(CDC* /*pDC*/)
{
	CDlg041412Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDlg041412View ���

#ifdef _DEBUG
void CDlg041412View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg041412View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg041412Doc* CDlg041412View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg041412Doc)));
	return (CDlg041412Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg041412View ��Ϣ�������


void CDlg041412View::OnLButtonDblClk(UINT nFlags, CPoint point)
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


void CDlg041412View::OnPopdialog()
{
	// TODO: �ڴ���������������
	MyDlg2 dlg2;
	dlg2.s1 = filename;
	int r = dlg2.DoModal();
	if (r == IDOK)
	{
	}
	
}
