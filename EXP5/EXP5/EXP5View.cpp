
// EXP5View.cpp : CEXP5View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP5.h"
#endif

#include "EXP5Doc.h"
#include "EXP5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP5View

IMPLEMENT_DYNCREATE(CEXP5View, CView)

BEGIN_MESSAGE_MAP(CEXP5View, CView)
//	ON_WM_LBUTTONDOWN()
ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP5View 构造/析构

CEXP5View::CEXP5View()
{
	// TODO: 在此处添加构造代码

}

CEXP5View::~CEXP5View()
{
}

BOOL CEXP5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP5View 绘制

void CEXP5View::OnDraw(CDC* /*pDC*/)
{
	CEXP5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);
	dc.Ellipse(cr);


	
}




// CEXP5View 诊断

#ifdef _DEBUG
void CEXP5View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP5Doc* CEXP5View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP5Doc)));
	return (CEXP5Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP5View 消息处理程序


//void CEXP5View::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//	CRect cr;
//	this->GetClientRect(&cr);
//	
//	CClientDC dc(this);
//	dc.Ellipse(cr);
//    this->Invalidate();
//	CView::OnLButtonDown(nFlags, point);
//}


void CEXP5View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);
	dc.Ellipse(cr);
	
	CView::OnLButtonDown(nFlags, point);
}
