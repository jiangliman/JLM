
// UsingWin32.2DllView.cpp : CUsingWin322DllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "UsingWin32.2Dll.h"
#endif

#include "UsingWin32.2DllDoc.h"
#include "UsingWin32.2DllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"Win32.3.h"


// CUsingWin322DllView

IMPLEMENT_DYNCREATE(CUsingWin322DllView, CView)

BEGIN_MESSAGE_MAP(CUsingWin322DllView, CView)
END_MESSAGE_MAP()

// CUsingWin322DllView ����/����

CUsingWin322DllView::CUsingWin322DllView()
{
	// TODO: �ڴ˴���ӹ������

}

CUsingWin322DllView::~CUsingWin322DllView()
{
}

BOOL CUsingWin322DllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsingWin322DllView ����

void CUsingWin322DllView::OnDraw(CDC* pDC)
{
	CUsingWin322DllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	s.Format(_T("�Ǹ�����5�Ľ׳˽��Ϊ%d"), factorial(5));
	pDC->TextOutW(10, 10, s);
	CString ss;
	FAC fac;
	ss.Format(_T("�Ƕ�ֵ30.0ת��Ϊ����ֵΪ%f"), fac.convert(30.0));
	pDC->TextOutW(10, 50, ss);

}


// CUsingWin322DllView ���

#ifdef _DEBUG
void CUsingWin322DllView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingWin322DllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingWin322DllDoc* CUsingWin322DllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingWin322DllDoc)));
	return (CUsingWin322DllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingWin322DllView ��Ϣ�������
