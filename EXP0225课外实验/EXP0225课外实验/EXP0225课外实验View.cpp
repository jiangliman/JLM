
// EXP0225课外实验View.cpp : CEXP0225课外实验View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP0225课外实验.h"
#endif

#include "EXP0225课外实验Doc.h"
#include "EXP0225课外实验View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP0225课外实验View

IMPLEMENT_DYNCREATE(CEXP0225课外实验View, CView)

BEGIN_MESSAGE_MAP(CEXP0225课外实验View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP0225课外实验View 构造/析构

CEXP0225课外实验View::CEXP0225课外实验View()
{
	// TODO: 在此处添加构造代码
	s2 = "是计算机信息与工程学院的。";
}

CEXP0225课外实验View::~CEXP0225课外实验View()
{
}

BOOL CEXP0225课外实验View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP0225课外实验View 绘制

void CEXP0225课外实验View::OnDraw(CDC* /*pDC*/)
{
	CEXP0225课外实验Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CEXP0225课外实验View 诊断

#ifdef _DEBUG
void CEXP0225课外实验View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP0225课外实验View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP0225课外实验Doc* CEXP0225课外实验View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP0225课外实验Doc)));
	return (CEXP0225课外实验Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP0225课外实验View 消息处理程序


void CEXP0225课外实验View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP0225课外实验Doc* pDoc = GetDocument();
	CString s;
	s = pDoc->s1 + s2;
	GetDC()->TextOutW(10, 10, s);
	CView::OnLButtonDown(nFlags, point);
}
