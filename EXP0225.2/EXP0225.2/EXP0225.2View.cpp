
// EXP0225.2View.cpp : CEXP02252View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP0225.2.h"
#endif

#include "EXP0225.2Doc.h"
#include "EXP0225.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP02252View

IMPLEMENT_DYNCREATE(CEXP02252View, CView)

BEGIN_MESSAGE_MAP(CEXP02252View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP02252View 构造/析构

CEXP02252View::CEXP02252View()
{
	// TODO: 在此处添加构造代码

}

CEXP02252View::~CEXP02252View()
{
}

BOOL CEXP02252View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP02252View 绘制

void CEXP02252View::OnDraw(CDC* /*pDC*/)
{
	CEXP02252Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CEXP02252View 诊断

#ifdef _DEBUG
void CEXP02252View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP02252View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP02252Doc* CEXP02252View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP02252Doc)));
	return (CEXP02252Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP02252View 消息处理程序


void CEXP02252View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP02252Doc* pDoc = GetDocument();
	s.Format(_T("%d"), pDoc->count++);
	CView::OnLButtonDown(nFlags, point);
}


void CEXP02252View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP02252Doc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(0, 10, s);
	CView::OnRButtonDown(nFlags, point);
}
