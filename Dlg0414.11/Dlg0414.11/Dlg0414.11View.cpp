
// Dlg0414.11View.cpp : CDlg041411View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg0414.11.h"
#endif

#include "Dlg0414.11Doc.h"
#include "Dlg0414.11View.h"
#include "MyDlg1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg041411View

IMPLEMENT_DYNCREATE(CDlg041411View, CView)

BEGIN_MESSAGE_MAP(CDlg041411View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_PopDialog, &CDlg041411View::OnPopdialog)
END_MESSAGE_MAP()

// CDlg041411View ����/����

CDlg041411View::CDlg041411View()
{
	// TODO: �ڴ˴���ӹ������

}

CDlg041411View::~CDlg041411View()
{
}

BOOL CDlg041411View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg041411View ����

void CDlg041411View::OnDraw(CDC* pDC)
{
	CDlg041411Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

	

	

}


// CDlg041411View ���

#ifdef _DEBUG
void CDlg041411View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg041411View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg041411Doc* CDlg041411View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg041411Doc)));
	return (CDlg041411Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg041411View ��Ϣ�������



void CDlg041411View::OnLButtonDblClk(UINT nFlags, CPoint point)
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


void CDlg041411View::OnPopdialog()
{
	// TODO: �ڴ���������������
	MyDlg1 dlg1;
	dlg1.s1 = filename;
	int r = dlg1.DoModal();
	if (r == IDOK)
	{	
	}
}
