
// EXP3.5View.cpp : CEXP35View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP3.5.h"
#endif

#include "EXP3.5Doc.h"
#include "EXP3.5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP35View

IMPLEMENT_DYNCREATE(CEXP35View, CView)

BEGIN_MESSAGE_MAP(CEXP35View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CEXP35View 构造/析构

CEXP35View::CEXP35View()
{
	// TODO: 在此处添加构造代码
	count = 0;
	
}

CEXP35View::~CEXP35View()
{
}

BOOL CEXP35View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP35View 绘制

void CEXP35View::OnDraw(CDC* /*pDC*/)
{
	CEXP35Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
}


// CEXP35View 诊断

#ifdef _DEBUG
void CEXP35View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP35View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP35Doc* CEXP35View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP35Doc)));
	return (CEXP35Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP35View 消息处理程序


void CEXP35View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
   CClientDC dc(this);
   ca.left = point.x;
   ca.top = point.y;

	CView::OnLButtonDown(nFlags, point);
}


void CEXP35View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);

	ca.right = point.x;
	ca.bottom = point.y;
	count = 0;

	CView::OnLButtonUp(nFlags, point);
}


void CEXP35View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CView::OnMouseMove(nFlags, point);
	CEXP35Doc*pDoc = GetDocument();
	CString s1;
    CClientDC dc(this);
     if(nFlags)
     {s.Format(_T("MouseMove发生了%d次"), count++);
     dc.TextOutW(10, 10, s);
     }
	 if (ca.right > ca.left) {
		 i = ca.right - ca.left;
	 }
	 if (ca.left > ca.right) {
		 i = ca.left - ca.right;
	 }
	s1.Format(_T("横向移动%d个像素发生一次"), i);
	
	dc.TextOutW(10, 50, s1);

	
	CView::OnMouseMove(nFlags, point);
}
