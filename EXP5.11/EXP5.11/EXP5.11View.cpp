
// EXP5.11View.cpp : CEXP511View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP5.11.h"
#endif

#include "EXP5.11Doc.h"
#include "EXP5.11View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP511View

IMPLEMENT_DYNCREATE(CEXP511View, CView)

BEGIN_MESSAGE_MAP(CEXP511View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CEXP511View::OnFileOpen)
END_MESSAGE_MAP()

// CEXP511View ����/����

CEXP511View::CEXP511View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP511View::~CEXP511View()
{
}

BOOL CEXP511View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP511View ����

void CEXP511View::OnDraw(CDC* pDC)
{
	CEXP511Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CClientDC dc(this);
	CRect rect;
	GetClientRect(&rect);
	if (r == IDOK)
	{
		CImage mge;
		mge.Load(filename);
		sx = (rect.Width() - mge.GetWidth()) / 2;
		sy = (rect.Height() - mge.GetHeight()) / 2;
		mge.Draw(pDC->m_hDC, sx, sy, mge.GetWidth(), mge.GetHeight());
		dc.TextOutW(0, 100, filename);
	}

}


// CEXP511View ���

#ifdef _DEBUG
void CEXP511View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP511View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP511Doc* CEXP511View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP511Doc)));
	return (CEXP511Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP511View ��Ϣ�������


void CEXP511View::OnFileOpen()
{
	// TODO: �ڴ���������������
    CClientDC dc(this);
	CFileDialog cfd(true);
	r = cfd.DoModal();
	filename = cfd.GetPathName();
	dc.TextOutW(0, 100, filename);
	Invalidate();
}
