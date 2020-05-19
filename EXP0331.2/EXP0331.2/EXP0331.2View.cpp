
// EXP0331.2View.cpp : CEXP03312View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP0331.2.h"
#endif

#include "EXP0331.2Doc.h"
#include "EXP0331.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP03312View

IMPLEMENT_DYNCREATE(CEXP03312View, CView)

BEGIN_MESSAGE_MAP(CEXP03312View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CEXP03312View 构造/析构

CEXP03312View::CEXP03312View()
{
	// TODO: 在此处添加构造代码

}

CEXP03312View::~CEXP03312View()
{
}

BOOL CEXP03312View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP03312View 绘制

void CEXP03312View::OnDraw(CDC* /*pDC*/)
{
	CEXP03312Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CEXP03312View 诊断

#ifdef _DEBUG
void CEXP03312View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP03312View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP03312Doc* CEXP03312View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP03312Doc)));
	return (CEXP03312Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP03312View 消息处理程序


void CEXP03312View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	x = point.x;
	y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CEXP03312View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CRect Rect(100, 100, 500, 500);
	str.Format(_T("%c"), nChar);
	if (x >= 100 && y >= 100) {
		pos = (x - 100) / 10 + (y - 100) / 2*3;
		s.Insert(pos, nChar);
	}
	else {
		s.Append(str);
	}
	dc.DrawText(s, Rect, DT_LEFT | DT_WORDBREAK | DT_EDITCONTROL);
	CView::OnChar(nChar, nRepCnt, nFlags);
}


