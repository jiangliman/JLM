
// Dlg4.7.0View.cpp : CDlg470View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg4.7.0.h"
#endif

#include "Dlg4.7.0Doc.h"
#include "Dlg4.7.0View.h"
#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg470View

IMPLEMENT_DYNCREATE(CDlg470View, CView)

BEGIN_MESSAGE_MAP(CDlg470View, CView)
	ON_COMMAND(ID_Popout, &CDlg470View::OnPopout)
END_MESSAGE_MAP()

// CDlg470View ����/����

CDlg470View::CDlg470View()
{
	// TODO: �ڴ˴���ӹ������

}

CDlg470View::~CDlg470View()
{
}

BOOL CDlg470View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg470View ����

void CDlg470View::OnDraw(CDC* /*pDC*/)
{
	CDlg470Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDlg470View ���

#ifdef _DEBUG
void CDlg470View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg470View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg470Doc* CDlg470View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg470Doc)));
	return (CDlg470Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg470View ��Ϣ�������


void CDlg470View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CClientDC dc(this);
		CString s;
		s.Format(_T( "�������˳��Ի���"));
		dc.TextOutW(200, 200, s);


	}

}
