
// EXP4.6View.cpp : CEXP46View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP4.6.h"
#endif

#include "EXP4.6Doc.h"
#include "EXP4.6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP46View

IMPLEMENT_DYNCREATE(CEXP46View, CView)

BEGIN_MESSAGE_MAP(CEXP46View, CView)
	ON_COMMAND(LINEDRAWING, &CEXP46View::OnLinedrawing)
	ON_COMMAND(RECTDRAWING, &CEXP46View::OnRectdrawing)
	ON_COMMAND(ELLIPSEDRAWING, &CEXP46View::OnEllipsedrawing)
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP46View 构造/析构

CEXP46View::CEXP46View()
{
	// TODO: 在此处添加构造代码
	a = 2;

}

CEXP46View::~CEXP46View()
{
}

BOOL CEXP46View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP46View 绘制

void CEXP46View::OnDraw(CDC* /*pDC*/)
{
	CEXP46Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CEXP46View 诊断

#ifdef _DEBUG
void CEXP46View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP46View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP46Doc* CEXP46View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP46Doc)));
	return (CEXP46Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP46View 消息处理程序


void CEXP46View::OnLinedrawing()
{
	// TODO: 在此添加命令处理程序代码
	a = 0;
	
}


void CEXP46View::OnRectdrawing()
{
	// TODO: 在此添加命令处理程序代码
	a = 1;

	
}


void CEXP46View::OnEllipsedrawing()
{
	// TODO: 在此添加命令处理程序代码
	a = 2;

}


void CEXP46View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CRect ca;
	cr.right = point.x;
	cr.bottom = point.y;
	switch (a)
	{
	case 0:
		dc.MoveTo(cr.top, cr.left);
		dc.LineTo(cr.bottom, cr.right);
		break;
	case 1:
		ca.left = cr.left;
		ca.top = cr.top;
		ca.right = cr.right;
		ca.bottom = cr.bottom;
		dc.Rectangle(ca);
		break;
	case 2:
		ca.left = cr.left;
		ca.top = cr.top;
		ca.right = cr.right;
		ca.bottom = cr.bottom;
		dc.Ellipse(ca);
		break;

	}

	CView::OnLButtonUp(nFlags, point);
}


void CEXP46View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	cr.left = point.x;
	cr.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}
