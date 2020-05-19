
// EXP2View.cpp : CEXP2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP2.h"
#endif

#include "EXP2Doc.h"
#include "EXP2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP2View

IMPLEMENT_DYNCREATE(CEXP2View, CView)

BEGIN_MESSAGE_MAP(CEXP2View, CView)
END_MESSAGE_MAP()

// CEXP2View ����/����

CEXP2View::CEXP2View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP2View::~CEXP2View()
{
}

BOOL CEXP2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP2View ����

void CEXP2View::OnDraw(CDC* pDC)
{
	CEXP2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s2 = pDoc->s;
	CString s3=pDoc->s1;
	pDC->TextOutW(100, 100, s3);
	pDC->TextOutW(100, 200, s2);
}


// CEXP2View ���

#ifdef _DEBUG
void CEXP2View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP2Doc* CEXP2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP2Doc)));
	return (CEXP2Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP2View ��Ϣ�������
