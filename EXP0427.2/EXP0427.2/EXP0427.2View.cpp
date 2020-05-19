
// EXP0427.2View.cpp : CEXP04272View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP0427.2.h"
#endif

#include "EXP0427.2Doc.h"
#include "EXP0427.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP04272View

IMPLEMENT_DYNCREATE(CEXP04272View, CView)

BEGIN_MESSAGE_MAP(CEXP04272View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CEXP04272View 构造/析构

CEXP04272View::CEXP04272View()
{
	// TODO: 在此处添加构造代码

}

CEXP04272View::~CEXP04272View()
{
}

BOOL CEXP04272View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP04272View 绘制

void CEXP04272View::OnDraw(CDC* pDC)
{
	CEXP04272Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i < pDoc->ca.GetSize(); i++) {
		pDC->Ellipse(pDoc->ca[i]);
	}
}


// CEXP04272View 诊断

#ifdef _DEBUG
void CEXP04272View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP04272View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP04272Doc* CEXP04272View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP04272Doc)));
	return (CEXP04272Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP04272View 消息处理程序




void CEXP04272View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP04272Doc* pDoc = GetDocument();
	if (nFlags) {
		cr.left = point.x - 20;
		cr.right = point.x + 20;
		cr.top = point.y - 10;
		cr.bottom = point.y + 10;
		pDoc->ca.Add(cr);	
	}
    this->Invalidate();
	CView::OnMouseMove(nFlags, point);
}
