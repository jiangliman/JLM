
// Dlg4.7.24View.cpp : CDlg4724View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg4.7.24.h"
#endif

#include "Dlg4.7.24Doc.h"
#include "Dlg4.7.24View.h"
#include"MyDlg4.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg4724View

IMPLEMENT_DYNCREATE(CDlg4724View, CView)

BEGIN_MESSAGE_MAP(CDlg4724View, CView)
	ON_COMMAND(ID_Popout, &CDlg4724View::OnPopout)
END_MESSAGE_MAP()

// CDlg4724View ����/����

CDlg4724View::CDlg4724View()
{
	// TODO: �ڴ˴���ӹ������

}

CDlg4724View::~CDlg4724View()
{
}

BOOL CDlg4724View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg4724View ����

void CDlg4724View::OnDraw(CDC* /*pDC*/)
{
	CDlg4724Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDlg4724View ���

#ifdef _DEBUG
void CDlg4724View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg4724View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg4724Doc* CDlg4724View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg4724Doc)));
	return (CDlg4724Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg4724View ��Ϣ�������


void CDlg4724View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg4 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}
}
