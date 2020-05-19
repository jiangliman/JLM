
// EXP4View.cpp : CEXP4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP4.h"
#endif

#include "EXP4Doc.h"
#include "EXP4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP4View

IMPLEMENT_DYNCREATE(CEXP4View, CView)

BEGIN_MESSAGE_MAP(CEXP4View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP4View 构造/析构

CEXP4View::CEXP4View()
{
	// TODO: 在此处添加构造代码
	ca.SetSize(256);

}

CEXP4View::~CEXP4View()
{
}

BOOL CEXP4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP4View 绘制

void CEXP4View::OnDraw(CDC* pDC)
{
	CEXP4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	for (int i=0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));

}


// CEXP4View 诊断

#ifdef _DEBUG
void CEXP4View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP4Doc* CEXP4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP4Doc)));
	return (CEXP4Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP4View 消息处理程序


void CEXP4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r = rand() % 99 + 5;
	int r1 = rand() % 50+ 3;
	CRect cr(point.x-r,point.y-r1,point.x+r,point.y+r1);
	ca.Add(cr);
	this->Invalidate();

	//CClientDC dc(this);
	//dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
