
// EXP3.3View.cpp : CEXP33View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP3.3.h"
#endif

#include "EXP3.3Doc.h"
#include "EXP3.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP33View

IMPLEMENT_DYNCREATE(CEXP33View, CView)

BEGIN_MESSAGE_MAP(CEXP33View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CEXP33View 构造/析构

CEXP33View::CEXP33View()
{
	// TODO: 在此处添加构造代码

}

CEXP33View::~CEXP33View()
{
}

BOOL CEXP33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP33View 绘制

void CEXP33View::OnDraw(CDC* pDC)
{
	CEXP33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
	

}


// CEXP33View 诊断

#ifdef _DEBUG
void CEXP33View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP33Doc* CEXP33View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP33Doc)));
	return (CEXP33Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP33View 消息处理程序


void CEXP33View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP33Doc*pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("(%d,%d)"), point.x, point.y);
	dc.TextOutW(100, 100, s);
	CView::OnMouseMove(nFlags, point);
}


void CEXP33View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP33Doc*pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->m_Point = point;
	pDoc->ca.left=point.x;
	pDoc->ca.top=point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CEXP33View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP33Doc*pDoc = GetDocument();
	pDoc->n_Point = point;
	pDoc->ca.right = point.x;
	pDoc->ca.bottom= point.y;
	CClientDC dc(this);
	dc.Rectangle(pDoc->ca);
	CView::OnLButtonUp(nFlags, point);
}
