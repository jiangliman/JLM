
// Usingwin32.2View.cpp : CUsingwin322View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Usingwin32.2.h"
#endif

#include "Usingwin32.2Doc.h"
#include "Usingwin32.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"Win32.2.h"


// CUsingwin322View

IMPLEMENT_DYNCREATE(CUsingwin322View, CView)

BEGIN_MESSAGE_MAP(CUsingwin322View, CView)
END_MESSAGE_MAP()

// CUsingwin322View ����/����

CUsingwin322View::CUsingwin322View()
{
	// TODO: �ڴ˴���ӹ������

}

CUsingwin322View::~CUsingwin322View()
{
}

BOOL CUsingwin322View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsingwin322View ����

void CUsingwin322View::OnDraw(CDC* pDC)
{
	CUsingwin322Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	FAC fac;
	s.Format(_T("�Ƕ�ֵ30.0ת��Ϊ����ֵΪ%f"), fac.convert(30.0));
	pDC->TextOutW(10, 10, s);
}


// CUsingwin322View ���

#ifdef _DEBUG
void CUsingwin322View::AssertValid() const
{
	CView::AssertValid();
}

void CUsingwin322View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingwin322Doc* CUsingwin322View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingwin322Doc)));
	return (CUsingwin322Doc*)m_pDocument;
}
#endif //_DEBUG


// CUsingwin322View ��Ϣ�������
