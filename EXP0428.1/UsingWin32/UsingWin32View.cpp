
// UsingWin32View.cpp : CUsingWin32View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "UsingWin32.h"
#endif

#include "UsingWin32Doc.h"
#include "UsingWin32View.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"Win32.1.h"
// CUsingWin32View

IMPLEMENT_DYNCREATE(CUsingWin32View, CView)

BEGIN_MESSAGE_MAP(CUsingWin32View, CView)
END_MESSAGE_MAP()

// CUsingWin32View ����/����

CUsingWin32View::CUsingWin32View()
{
	// TODO: �ڴ˴���ӹ������

}

CUsingWin32View::~CUsingWin32View()
{
}

BOOL CUsingWin32View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsingWin32View ����

void CUsingWin32View::OnDraw(CDC* pDC)
{
	CUsingWin32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	s.Format(_T("�Ǹ�����5�Ľ׳˽��Ϊ%d"),factorial(5));
	pDC->TextOutW(10, 10, s);
}


// CUsingWin32View ���

#ifdef _DEBUG
void CUsingWin32View::AssertValid() const
{
	CView::AssertValid();
}

void CUsingWin32View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingWin32Doc* CUsingWin32View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingWin32Doc)));
	return (CUsingWin32Doc*)m_pDocument;
}
#endif //_DEBUG


// CUsingWin32View ��Ϣ�������
