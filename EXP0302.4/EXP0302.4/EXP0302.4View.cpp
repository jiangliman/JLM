
// EXP0302.4View.cpp : CEXP03024View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP0302.4.h"
#endif

#include "EXP0302.4Doc.h"
#include "EXP0302.4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP03024View

IMPLEMENT_DYNCREATE(CEXP03024View, CView)

BEGIN_MESSAGE_MAP(CEXP03024View, CView)
END_MESSAGE_MAP()

// CEXP03024View ����/����

CEXP03024View::CEXP03024View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP03024View::~CEXP03024View()
{
}

BOOL CEXP03024View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP03024View ����

void CEXP03024View::OnDraw(CDC* /*pDC*/)
{
	CEXP03024Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
    CRect cr;
	GetClientRect(&cr);	
	CDC*pDC = GetDC();
	CBrush brush(RGB(230, 159, 219));
	CBrush*oldbrush;
	oldbrush = pDC->SelectObject(&brush);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldbrush);
	ReleaseDC(pDC);
	
	
}


// CEXP03024View ���

#ifdef _DEBUG
void CEXP03024View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP03024View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP03024Doc* CEXP03024View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP03024Doc)));
	return (CEXP03024Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP03024View ��Ϣ�������
