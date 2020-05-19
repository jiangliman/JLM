
// EXP0.0View.cpp : CEXP00View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP0.0.h"
#endif

#include "EXP0.0Doc.h"
#include "EXP0.0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP00View

IMPLEMENT_DYNCREATE(CEXP00View, CView)

BEGIN_MESSAGE_MAP(CEXP00View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP00View 构造/析构

CEXP00View::CEXP00View()
{
	// TODO: 在此处添加构造代码

}

CEXP00View::~CEXP00View()
{
}

BOOL CEXP00View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP00View 绘制

void CEXP00View::OnDraw(CDC* /*pDC*/)
{
	CEXP00Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	

}


// CEXP00View 诊断

#ifdef _DEBUG
void CEXP00View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP00View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP00Doc* CEXP00View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP00Doc)));
	return (CEXP00Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP00View 消息处理程序


void CEXP00View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	int r = rand() % 50 + 5;
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr);
	CClientDC dc(this);
    dc.Ellipse(cr);

	CView::OnLButtonDown(nFlags, point);
}
