
// EXP2.2View.cpp : CEXP22View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP2.2.h"
#endif

#include "EXP2.2Doc.h"
#include "EXP2.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP22View

IMPLEMENT_DYNCREATE(CEXP22View, CView)

BEGIN_MESSAGE_MAP(CEXP22View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP22View 构造/析构

CEXP22View::CEXP22View()
{
	// TODO: 在此处添加构造代码

}

CEXP22View::~CEXP22View()
{
}

BOOL CEXP22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP22View 绘制

void CEXP22View::OnDraw(CDC* /*pDC*/)
{
	CEXP22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CEXP22View 诊断

#ifdef _DEBUG
void CEXP22View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP22Doc* CEXP22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP22Doc)));
	return (CEXP22Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP22View 消息处理程序


void CEXP22View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP22Doc* pDoc = GetDocument();
	CClientDC s1(this);
	CString s;
	s.Format(_T("A+B=%d"),pDoc->A+pDoc->B);
	s1.TextOutW(0, 10, s);

	CView::OnLButtonDown(nFlags, point);
}
