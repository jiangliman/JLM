
// EXP1View.cpp : CEXP1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP1.h"
#endif

#include "EXP1Doc.h"
#include "EXP1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP1View

IMPLEMENT_DYNCREATE(CEXP1View, CView)

BEGIN_MESSAGE_MAP(CEXP1View, CView)
END_MESSAGE_MAP()

// CEXP1View ����/����

CEXP1View::CEXP1View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP1View::~CEXP1View()
{
}

BOOL CEXP1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP1View ����

void CEXP1View::OnDraw(CDC* pDC)
{
	CEXP1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	int a = 123;
	CString s,s1;
	s.Format(_T("����***"));
	s1.Format(_T("%d"), a);
	pDC->TextOutW(100, 200, s1);
	pDC->TextOutW(100, 100, s);


}


// CEXP1View ���

#ifdef _DEBUG
void CEXP1View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP1Doc* CEXP1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP1Doc)));
	return (CEXP1Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP1View ��Ϣ�������
