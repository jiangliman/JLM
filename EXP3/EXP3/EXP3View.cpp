
// EXP3View.cpp : CEXP3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP3.h"
#endif

#include "EXP3Doc.h"
#include "EXP3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP3View

IMPLEMENT_DYNCREATE(CEXP3View, CView)

BEGIN_MESSAGE_MAP(CEXP3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP3View 构造/析构

CEXP3View::CEXP3View()
{
	// TODO: 在此处添加构造代码

}

CEXP3View::~CEXP3View()
{
}

BOOL CEXP3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP3View 绘制

void CEXP3View::OnDraw(CDC* /*pDC*/)
{
	CEXP3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CEXP3View 诊断

#ifdef _DEBUG
void CEXP3View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP3Doc* CEXP3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP3Doc)));
	return (CEXP3Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP3View 消息处理程序


void CEXP3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP3Doc*pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	s.Format(_T("%d"), pDoc->count++);
	CView::OnLButtonDown(nFlags, point);
}


void CEXP3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值	
	CEXP3Doc*pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	dc.TextOutW(0, 10, s);
	CView::OnRButtonDown(nFlags, point);
}
