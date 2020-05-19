
// EXP3.6View.cpp : CEXP36View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP3.6.h"
#endif

#include "EXP3.6Doc.h"
#include "EXP3.6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP36View

IMPLEMENT_DYNCREATE(CEXP36View, CView)

BEGIN_MESSAGE_MAP(CEXP36View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CEXP36View ����/����

CEXP36View::CEXP36View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	N = 5;
	for (int i = 0; i < N; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
	}

}

CEXP36View::~CEXP36View()
{
}

BOOL CEXP36View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP36View ����

void CEXP36View::OnDraw(CDC* pDC)
{
	CEXP36Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set)
	{
		for(int i=0;i<N;i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);
			set = false;
		}
	}

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i < N; i++) {
		pDC->Ellipse(cr[i]);
	}
}


// CEXP36View ���

#ifdef _DEBUG
void CEXP36View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP36View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP36Doc* CEXP36View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP36Doc)));
	return (CEXP36Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP36View ��Ϣ�������


void CEXP36View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CRect ca;
	this->GetClientRect(&ca);
	dc.Rectangle(ca);
	int i = nIDEvent;
	if (cr[i].bottom < ca.bottom-10)
	{
		cr[i].top += 10;
		cr[i].bottom += 10;
	}
	else {
		cr[i].top -= ca.bottom-20;
		cr[i].bottom -= ca.bottom-20;
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}
