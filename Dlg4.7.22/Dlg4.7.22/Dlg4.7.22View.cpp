
// Dlg4.7.22View.cpp : CDlg4722View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg4.7.22.h"
#endif

#include "Dlg4.7.22Doc.h"
#include "Dlg4.7.22View.h"
#include "MyDlg2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg4722View

IMPLEMENT_DYNCREATE(CDlg4722View, CView)

BEGIN_MESSAGE_MAP(CDlg4722View, CView)
	ON_COMMAND(ID_Popout, &CDlg4722View::OnPopout)
END_MESSAGE_MAP()

// CDlg4722View ����/����

CDlg4722View::CDlg4722View()
{
	// TODO: �ڴ˴���ӹ������

}

CDlg4722View::~CDlg4722View()
{
}

BOOL CDlg4722View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg4722View ����

void CDlg4722View::OnDraw(CDC* /*pDC*/)
{
	CDlg4722Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDlg4722View ���

#ifdef _DEBUG
void CDlg4722View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg4722View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg4722Doc* CDlg4722View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg4722Doc)));
	return (CDlg4722Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg4722View ��Ϣ�������


void CDlg4722View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg2 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}

}
