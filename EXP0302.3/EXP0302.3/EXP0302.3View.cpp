
// EXP0302.3View.cpp : CEXP03023View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP0302.3.h"
#endif

#include "EXP0302.3Doc.h"
#include "EXP0302.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP03023View

IMPLEMENT_DYNCREATE(CEXP03023View, CView)

BEGIN_MESSAGE_MAP(CEXP03023View, CView)
END_MESSAGE_MAP()

// CEXP03023View ����/����

CEXP03023View::CEXP03023View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP03023View::~CEXP03023View()
{
}

BOOL CEXP03023View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP03023View ����

void CEXP03023View::OnDraw(CDC* /*pDC*/)
{
	CEXP03023Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect cr;
	GetClientRect(&cr);
	CClientDC dc(this);
	dc.Ellipse(cr);


}


// CEXP03023View ���

#ifdef _DEBUG
void CEXP03023View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP03023View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP03023Doc* CEXP03023View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP03023Doc)));
	return (CEXP03023Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP03023View ��Ϣ�������
