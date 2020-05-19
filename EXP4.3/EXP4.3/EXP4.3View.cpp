
// EXP4.3View.cpp : CEXP43View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP4.3.h"
#endif

#include "EXP4.3Doc.h"
#include "EXP4.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP43View

IMPLEMENT_DYNCREATE(CEXP43View, CView)

BEGIN_MESSAGE_MAP(CEXP43View, CView)
END_MESSAGE_MAP()

// CEXP43View ����/����

CEXP43View::CEXP43View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;

}

CEXP43View::~CEXP43View()
{
}

BOOL CEXP43View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP43View ����

void CEXP43View::OnDraw(CDC* pDC)
{
	CEXP43Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}


// CEXP43View ���

#ifdef _DEBUG
void CEXP43View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP43View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP43Doc* CEXP43View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP43Doc)));
	return (CEXP43Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP43View ��Ϣ�������
