
// ����ƶ�����View.cpp : C����ƶ�����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "����ƶ�����.h"
#endif

#include "����ƶ�����Doc.h"
#include "����ƶ�����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C����ƶ�����View

IMPLEMENT_DYNCREATE(C����ƶ�����View, CView)

BEGIN_MESSAGE_MAP(C����ƶ�����View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C����ƶ�����View ����/����

C����ƶ�����View::C����ƶ�����View()
{
	// TODO: �ڴ˴���ӹ������
	rect.top = 50;
	rect.bottom = 250;
	rect.left = 50;
	rect.right = 150;


}

C����ƶ�����View::~C����ƶ�����View()
{
}

BOOL C����ƶ�����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C����ƶ�����View ����

void C����ƶ�����View::OnDraw(CDC* /*pDC*/)
{
	C����ƶ�����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CClientDC dc(this);
	dc.Rectangle(rect);
}


// C����ƶ�����View ���

#ifdef _DEBUG
void C����ƶ�����View::AssertValid() const
{
	CView::AssertValid();
}

void C����ƶ�����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C����ƶ�����Doc* C����ƶ�����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C����ƶ�����Doc)));
	return (C����ƶ�����Doc*)m_pDocument;
}
#endif //_DEBUG


// C����ƶ�����View ��Ϣ�������


void C����ƶ�����View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (nFlags) {
		rect.top = point.y-100;
		rect.bottom = point.y +100;
		rect.left = point.x -50;
		rect.right = point.x +50;
	}
	Invalidate();
	CView::OnMouseMove(nFlags, point);
}
