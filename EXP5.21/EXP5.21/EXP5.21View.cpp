
// EXP5.21View.cpp : CEXP521View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP5.21.h"
#endif

#include "EXP5.21Doc.h"
#include "EXP5.21View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP521View

IMPLEMENT_DYNCREATE(CEXP521View, CView)

BEGIN_MESSAGE_MAP(CEXP521View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CEXP521View ����/����

CEXP521View::CEXP521View()
{
	// TODO: �ڴ˴���ӹ������
	

}

CEXP521View::~CEXP521View()
{
}

BOOL CEXP521View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP521View ����

void CEXP521View::OnDraw(CDC* pDC)
{
	CEXP521Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	{
		pDC->TextOutW(0, 200, pDoc->str);
	}
}


// CEXP521View ���

#ifdef _DEBUG
void CEXP521View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP521View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP521Doc* CEXP521View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP521Doc)));
	return (CEXP521Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP521View ��Ϣ�������


void CEXP521View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CEXP521Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CString s;
	s.Format(_T("%c"), nChar);
	pDoc->str += s;
	Invalidate();
	CView::OnChar(nChar, nRepCnt, nFlags);


}
