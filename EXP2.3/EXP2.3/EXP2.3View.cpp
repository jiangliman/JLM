
// EXP2.3View.cpp : CEXP23View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP2.3.h"
#endif

#include "EXP2.3Doc.h"
#include "EXP2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP23View

IMPLEMENT_DYNCREATE(CEXP23View, CView)

BEGIN_MESSAGE_MAP(CEXP23View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP23View 构造/析构

CEXP23View::CEXP23View()
{
	// TODO: 在此处添加构造代码
	

}

CEXP23View::~CEXP23View()
{
}

BOOL CEXP23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP23View 绘制

void CEXP23View::OnDraw(CDC* pDC)
{
	CEXP23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CClientDC dc(this);
	CRect A(50, 100, 200, 200);
	CRect B(110, 300, 210, 400);
	CRect C(300, 400, 600, 600);
	dc.Rectangle(A);
	dc.Rectangle(B);
	dc.Rectangle(C);

}


// CEXP23View 诊断

#ifdef _DEBUG
void CEXP23View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP23Doc* CEXP23View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP23Doc)));
	return (CEXP23Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP23View 消息处理程序


void CEXP23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP23Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CRect A(50, 100, 200, 200);
	CRect B(110, 300, 210, 400);
	CRect C(300, 400, 600, 600);
	dc.Rectangle(A);
    dc.Rectangle(B);
    dc.Rectangle(C);
	 CString a,b,s;
    int r = rand() % 99 + 5;
	int r1 = rand() % 50 + 6;
	a.Format(_T("%d"), r);
	b.Format(_T("%d"), r1);
	s.Format(_T("%d"), r+r1);
	if (point.x > 50 && point.x < 200 && point.y>100 && point.y < 200)
		dc.TextOutW(point.x, point.y, a);
	else if (point.x > 110 && point.x < 210 && point.y>300 && point.y < 400)
		dc.TextOutW(point.x, point.y, b);
	else if (point.x > 300 && point.x < 600 && point.y>400 && point.y < 600)
		dc.TextOutW(point.x, point.y, s);
	else {
		s = "点击无效";
			dc.TextOutW(point.x, point.y, s);
	}
	
	CView::OnLButtonDown(nFlags, point);
}

