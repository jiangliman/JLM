
// EXP4.2View.cpp : CEXP42View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP4.2.h"
#endif

#include "EXP4.2Doc.h"
#include "EXP4.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP42View

IMPLEMENT_DYNCREATE(CEXP42View, CView)

BEGIN_MESSAGE_MAP(CEXP42View, CView)
	ON_COMMAND(SHOWNAME, &CEXP42View::OnShowname)
END_MESSAGE_MAP()

// CEXP42View ����/����

CEXP42View::CEXP42View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP42View::~CEXP42View()
{
}

BOOL CEXP42View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP42View ����

void CEXP42View::OnDraw(CDC* /*pDC*/)
{
	CEXP42Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CEXP42View ���

#ifdef _DEBUG
void CEXP42View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP42View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP42Doc* CEXP42View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP42Doc)));
	return (CEXP42Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP42View ��Ϣ�������


void CEXP42View::OnShowname()
{
	// TODO: �ڴ���������������
	CString s=_T("������");
	CClientDC dc(this);
	dc.TextOutW(100, 100, s);


}
