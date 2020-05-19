
// EXP3.4View.cpp : CEXP34View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP3.4.h"
#endif

#include "EXP3.4Doc.h"
#include "EXP3.4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP34View

IMPLEMENT_DYNCREATE(CEXP34View, CView)

BEGIN_MESSAGE_MAP(CEXP34View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_KEYDOWN()
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CEXP34View 构造/析构

CEXP34View::CEXP34View()
{
	// TODO: 在此处添加构造代码

}

CEXP34View::~CEXP34View()
{
}

BOOL CEXP34View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP34View 绘制

void CEXP34View::OnDraw(CDC* pDC)
{
	CEXP34Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->cr);
}


// CEXP34View 诊断

#ifdef _DEBUG
void CEXP34View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP34View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP34Doc* CEXP34View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP34Doc)));
	return (CEXP34Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP34View 消息处理程序


void CEXP34View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP34Doc*pDoc = GetDocument();
	if(nFlags)
	{
		pDoc->cr.left = 600;    pDoc->cr.top = 250;
		pDoc->cr.right = 800;     pDoc->cr.bottom = 350;
	}
	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}


void CEXP34View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP34Doc*pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{case VK_LEFT:
		if(pDoc->cr.left>0)
		{
			pDoc->cr.left -= 5;
			pDoc->cr.right -= 5;
		}break;
	case VK_RIGHT:
		if (pDoc->cr.right<=(clientRec.right- clientRec.left))
		{
			pDoc->cr.left += 5;
			pDoc->cr.right += 5;
		}break;
	case VK_UP:
		if (pDoc->cr.top>0)
		{
			pDoc->cr.top -= 5;
			pDoc->cr.bottom -= 5;
		}break;
	case VK_DOWN:
		if (pDoc->cr.bottom <= (clientRec.bottom - clientRec.top))
		{
			pDoc->cr.top += 5;
			pDoc->cr.bottom += 5;
		}break;

	}
	Invalidate();

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CEXP34View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP34Doc*pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case 'H':
		if (pDoc->cr.left > 0)
		{
			pDoc->cr.left -= 5;
			pDoc->cr.top -= 5;
			pDoc->cr.bottom -= 0;
			pDoc->cr.right -= 0;
		}break;
	case 'E':
		if (pDoc->cr.right <= (clientRec.right - clientRec.left))
		{pDoc->cr.left -= 0;
			pDoc->cr.top -= 0;
			pDoc->cr.bottom -= 5;
			pDoc->cr.right -= 5;
		}break;
	}
		Invalidate();
	CView::OnChar(nChar, nRepCnt, nFlags);
}
