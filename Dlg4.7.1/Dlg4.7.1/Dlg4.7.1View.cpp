
// Dlg4.7.1View.cpp : CDlg471View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg4.7.1.h"
#endif

#include "Dlg4.7.1Doc.h"
#include "Dlg4.7.1View.h"
#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg471View

IMPLEMENT_DYNCREATE(CDlg471View, CView)

BEGIN_MESSAGE_MAP(CDlg471View, CView)
	ON_COMMAND(ID_Popout, &CDlg471View::OnPopout)
END_MESSAGE_MAP()

// CDlg471View ����/����

CDlg471View::CDlg471View()
{
	// TODO: �ڴ˴���ӹ������

}

CDlg471View::~CDlg471View()
{
}

BOOL CDlg471View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg471View ����

void CDlg471View::OnDraw(CDC* /*pDC*/)
{
	CDlg471Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDlg471View ���

#ifdef _DEBUG
void CDlg471View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg471View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg471Doc* CDlg471View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg471Doc)));
	return (CDlg471Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg471View ��Ϣ�������


void CDlg471View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		CString s;
		s.Format(_T("�������˳��Ի���"));
		CClientDC dc(this);
		dc.TextOutW(200, 200, s);

	}
}
