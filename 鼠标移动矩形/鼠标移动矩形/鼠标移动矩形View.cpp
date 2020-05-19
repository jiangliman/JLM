
// 鼠标移动矩形View.cpp : C鼠标移动矩形View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "鼠标移动矩形.h"
#endif

#include "鼠标移动矩形Doc.h"
#include "鼠标移动矩形View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C鼠标移动矩形View

IMPLEMENT_DYNCREATE(C鼠标移动矩形View, CView)

BEGIN_MESSAGE_MAP(C鼠标移动矩形View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C鼠标移动矩形View 构造/析构

C鼠标移动矩形View::C鼠标移动矩形View()
{
	// TODO: 在此处添加构造代码
	rect.top = 50;
	rect.bottom = 250;
	rect.left = 50;
	rect.right = 150;


}

C鼠标移动矩形View::~C鼠标移动矩形View()
{
}

BOOL C鼠标移动矩形View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C鼠标移动矩形View 绘制

void C鼠标移动矩形View::OnDraw(CDC* /*pDC*/)
{
	C鼠标移动矩形Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CClientDC dc(this);
	dc.Rectangle(rect);
}


// C鼠标移动矩形View 诊断

#ifdef _DEBUG
void C鼠标移动矩形View::AssertValid() const
{
	CView::AssertValid();
}

void C鼠标移动矩形View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C鼠标移动矩形Doc* C鼠标移动矩形View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C鼠标移动矩形Doc)));
	return (C鼠标移动矩形Doc*)m_pDocument;
}
#endif //_DEBUG


// C鼠标移动矩形View 消息处理程序


void C鼠标移动矩形View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (nFlags) {
		rect.top = point.y-100;
		rect.bottom = point.y +100;
		rect.left = point.x -50;
		rect.right = point.x +50;
	}
	Invalidate();
	CView::OnMouseMove(nFlags, point);
}
