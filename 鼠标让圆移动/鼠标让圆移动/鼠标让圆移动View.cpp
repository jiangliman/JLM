
// �����Բ�ƶ�View.cpp : C�����Բ�ƶ�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�����Բ�ƶ�.h"
#endif

#include "�����Բ�ƶ�Doc.h"
#include "�����Բ�ƶ�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�����Բ�ƶ�View

IMPLEMENT_DYNCREATE(C�����Բ�ƶ�View, CView)

BEGIN_MESSAGE_MAP(C�����Բ�ƶ�View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
ON_COMMAND(ID_CIRCLE, &C�����Բ�ƶ�View::OnCircle)
END_MESSAGE_MAP()

// C�����Բ�ƶ�View ����/����

C�����Բ�ƶ�View::C�����Բ�ƶ�View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	flag = 0;
}

C�����Բ�ƶ�View::~C�����Բ�ƶ�View()
{
}

BOOL C�����Բ�ƶ�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�����Բ�ƶ�View ����

void C�����Բ�ƶ�View::OnDraw(CDC* pDC)
{
	C�����Բ�ƶ�Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (set)
	{
		SetTimer(1, rand() % 400 + 100, NULL);
		set = false;
	}
	pDC->Ellipse(m_rect);
}


// C�����Բ�ƶ�View ���

#ifdef _DEBUG
void C�����Բ�ƶ�View::AssertValid() const
{
	CView::AssertValid();
}

void C�����Բ�ƶ�View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�����Բ�ƶ�Doc* C�����Բ�ƶ�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�����Բ�ƶ�Doc)));
	return (C�����Բ�ƶ�Doc*)m_pDocument;
}
#endif //_DEBUG


// C�����Բ�ƶ�View ��Ϣ�������





void C�����Բ�ƶ�View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	if (n == 1)
	{
		if (m_rect.right > rect.right)
		{
			flag = 1;
		}
		if (m_rect.left < rect.left)
		{
			flag = 0;
		}
		if (flag == 1)
		{
			m_rect.right -= 10;
			m_rect.left -= 10;
		}
		if (flag == 0)
		{
			m_rect.left += 10;
			m_rect.right += 10;
		}
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void C�����Բ�ƶ�View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CView::OnLButtonDblClk(nFlags, point);
	n = 0;
}


void C�����Բ�ƶ�View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	n = 1;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}





void C�����Բ�ƶ�View::OnCircle()
{
	// TODO: �ڴ���������������
	this->GetClientRect(&rect);
	m_rect.top = (rect.bottom + rect.top) / 2 - 50;
	m_rect.bottom = (rect.bottom + rect.top) / 2 + 50;
	m_rect.left = (rect.left + rect.right) / 4 - 50;
	m_rect.right = (rect.left + rect.right) / 4 + 50;
	Invalidate();
}
