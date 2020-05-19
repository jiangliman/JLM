
// EXP3.6View.cpp : CEXP36View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CEXP36View 构造/析构

CEXP36View::CEXP36View()
{
	// TODO: 在此处添加构造代码
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
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP36View 绘制

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

	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i < N; i++) {
		pDC->Ellipse(cr[i]);
	}
}


// CEXP36View 诊断

#ifdef _DEBUG
void CEXP36View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP36View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP36Doc* CEXP36View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP36Doc)));
	return (CEXP36Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP36View 消息处理程序


void CEXP36View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
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
